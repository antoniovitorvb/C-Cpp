#include <allegro.h>
#include <cstdlib>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define bloco_Linha 8
#define bloco_Coluna 5

#define Bloco_Largura 100
#define Bloco_Altura 40
#define Bloco_Dist 2

#define Raq_Largura 100
#define Raq_Altura 15
#define Pos_Raq_Y (SCREEN_H-50)


BITMAP *sky = load_bitmap("Montanha.bmp", NULL);
BITMAP *Buffer;

  config(){
     allegro_init(); //Inicia a biblioteca allegro (necessario para utilizar as funcoes)
     set_color_depth(32); //Definicao de pixels necessaria para funcao a seguir
     set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0); //Converte o jogo para modo grafico, definindo o tamanho da tela e o tipo


     Buffer = create_bitmap(SCREEN_W, SCREEN_H);

     install_keyboard();
     install_mouse();

}

  atualiza_tela() {

     blit(Buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H); // Atualiza a tela ao fim do programa, para dar o efeito de movimento

     }



extern BITMAP *Buffer;
int vidas=3;


struct comp_bola { //Endereco de memoria para multiplas variaveis
  int xv, yv;
  int x, y;


};

int Pos_Raq_X;
comp_bola bola;

int blocos[bloco_Coluna][bloco_Linha];


//PLANO DE FUNDO
 planodefundo() {


     //draw_sprite(Buffer, sky, 0, 0);
     clear_to_color(Buffer, makecol(0,0,0));

}

  resetblocos() {
  for(int i=0;i<bloco_Coluna;i++) {
    for(int j=0;j<bloco_Linha;j++) {
      blocos[i][j] = 1;
    }
  }
}

int blocos_restantes() {
  int blocos_restantes;

  blocos_restantes = 0;

  for(int i=0;i<bloco_Coluna;i++) {
    for(int j=0;j<bloco_Linha;j++) {
      if(blocos[i][j] != 0) {
        blocos_restantes++;
      }
    }
  }
  return blocos_restantes;
}

//Montando as partes em tela (fundo, blocos, bola e raquete)

montando_componentes() {



    // Monta o plano de fundo
    planodefundo();

    // Monta os blocos
    for(int i=0;i<bloco_Coluna;i++) {
      for(int j=0;j<bloco_Linha;j++) {
        if(blocos[i][j] != 0) {
           // Monta os retangulos dos blocos
           rectfill(Buffer,j*Bloco_Largura, i*Bloco_Altura,(j+1)*Bloco_Largura-Bloco_Dist, (i+1)*Bloco_Altura-Bloco_Dist, makecol(174, 29, 29));
        }
      }
    }

    // Monta a bola
    circlefill(Buffer, bola.x, bola.y, 8, makecol(255, 255, 0));

    // Monta a raquete
    rectfill(Buffer,
          Pos_Raq_X, Pos_Raq_Y,
          Pos_Raq_X+Raq_Largura,
          Pos_Raq_Y+Raq_Altura, makecol(255, 255, 255));


    textprintf_ex(Buffer, font, 10, 10, makecol(255, 255, 0),-1, "Posicao da raquete: %i)", Pos_Raq_X);

    textprintf_ex(Buffer, font, 10, 20, makecol(255, 255, 255),-1, "Posicao da bola: (x,y) (%i, %i)", bola.x, bola.y);

    textprintf_ex(Buffer, font, 10, 30, makecol(255, 255, 0),-1, "Blocos Restantes: %d", blocos_restantes());

    textprintf_ex(Buffer, font, 635, 10, makecol(255, 255, 0),-1, "Vidas Restantes: %d", vidas);

}

  resetbola() {
  bola.x = SCREEN_W/2;
  bola.y = SCREEN_H/2;
  bola.xv = 4;
  bola.yv = 2;
}

int Sobrescrever(int objectX,int objectY,
                int areaLeft,int areaTop,
                int areaRight,int areaBottom) {
  if(bola.x > areaLeft &&
     bola.x < areaRight &&
     bola.y > areaTop &&
     bola.y < areaBottom) {
    return 1; // 1 here means yes
  }
  return 0; // 0 here means no
}

  atualiza_Pos_Raq() {
  // posicao da raquete eh a posicao do mouse
  Pos_Raq_X = mouse_x;
}


movimento_bola() {

  // Atualiza a tela de acordo com a posicao da bola

  bola.x += bola.xv;
  bola.y += bola.yv;

  // if the bola is overlapping the rectangle
  if(bola.yv > 0) { // only if the bola is moving down
    if(Sobrescrever(bola.x,bola.y,
                 Pos_Raq_X + (Raq_Largura*0.0),
                 Pos_Raq_Y,
                 Pos_Raq_X + (Raq_Largura*0.25),
                 Pos_Raq_Y + Raq_Altura)==1) {
      bola.xv = -5;
      bola.yv = -3;
    }
    if(Sobrescrever(bola.x,bola.y,
                 Pos_Raq_X + (Raq_Largura*0.25),
                 Pos_Raq_Y,
                 Pos_Raq_X + (Raq_Largura*0.5),
                 Pos_Raq_Y + Raq_Altura)==1) {
      bola.xv = -3;
      bola.yv = -5;
    }
    if(Sobrescrever(bola.x,bola.y,
                 Pos_Raq_X + (Raq_Largura*0.5),
                 Pos_Raq_Y,
                 Pos_Raq_X + (Raq_Largura*0.75),
                 Pos_Raq_Y + Raq_Altura)==1) {
      bola.xv = 3;
      bola.yv = -5;
    }
    if(Sobrescrever(bola.x,bola.y,
                 Pos_Raq_X + (Raq_Largura*0.75),
                 Pos_Raq_Y,
                 Pos_Raq_X + (Raq_Largura*1.0),
                 Pos_Raq_Y + Raq_Altura)==1) {
      bola.xv = 5;
      bola.yv = -3;
    }
  }

      // Monta os blocos
  for(int i=0;i<bloco_Coluna;i++) {
    for(int j=0;j<bloco_Linha;j++) {
       if(blocos[i][j] != 0) { // Checa a presenca do bloco
          if(Sobrescrever(bola.x,bola.y,
             j*Bloco_Largura, i*Bloco_Altura,
             (j+1)*Bloco_Largura-Bloco_Dist,
             (i+1)*Bloco_Altura-Bloco_Dist)==1) {
            // reverse bola's vertical direction
            bola.yv = -bola.yv;
            blocos[i][j] = 0; // Apaga o bloco atingido
          }
       }
    }
  }

  // quicar nas paredes
  if(bola.x > SCREEN_W) {
    bola.xv = -bola.xv;
  }
  if(bola.x < 0) {
    bola.xv = -bola.xv;
  }

  if(bola.y < 0) {
    bola.yv = -bola.yv;
  }

  // PERDEU UMA VIDA----------------------------------------------------------------------------------
    if(bola.y > SCREEN_H) {

    if(mouse_b) {

      vidas = vidas-1;
      resetbola();
    }
  }
return vidas;

}

 inicio() {

    resetblocos();

    resetbola();

  // Bola comeca abaixo da raquete
  bola.y = SCREEN_H + 50;
}

// program code aways begins at the top of main()
int main(){

          int opcao;
          int vel=0;
          char saida;
          int cont=0;
          int vidas=3;

          while(saida != 'S'){

            printf("Bem vindo, escolha uma das opcoes a seguir\n1: Iniciar o Jogo \n2: Instrucoes\n3: Sair\n");
            scanf("%d", &opcao);

             switch (opcao){

                case 1:{
                system("cls");
                printf("Velocidade: \n");
                scanf("%d", &vel);

                 config();

                 inicio();

                 while ((blocos_restantes() > 0) && (key[KEY_ESC] == false) && (vidas > 0)){ // Mantem o jogo rodando enquanto ESC nao for pressionado


                 atualiza_Pos_Raq();

                 movimento_bola();


                 montando_componentes();


                 atualiza_tela();


                rest(vel); //Define a velocidade do jogo (dificuldade)

                  }
                 }

                allegro_exit(); //fecha a tela do jogo, voltando ao menu
                system("cls");
                break;


                case 2:{

                    printf("\nMova o mouse ao longo da tela para mover a raquete\n\n");
                    system("PAUSE");
                    system("cls");
                    break;
                }

                case 3:{

                saida = 'S';
                break;
                }

             }

         }
                   return 0;
                   } END_OF_MAIN()
