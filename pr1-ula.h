#define ROBOT "LRS1V" // LRS1 o LRS1V o IP 

typedef int Entero;
typedef char Caracter;

typedef struct{
  Caracter caracteres[1024];
  Entero tam;
}Cadena;

typedef struct{
  int s;
  int t;
}info;

typedef struct{
  char d[1024];
}data;

typedef enum{
  expresarNormal=4,
  cerrarOjos=59,
  abrirOjos=64,
  cerrarIzquierdo=5,
  abrirIzquierdo=6,
  cerrarDerecho=7,
  abrirDerecho=8,
  comenzarHabla=9,
  terminarHabla=44,
  moverIzquierda=45,
  moverCentro=46,
  moverDerecha=47,
  moverArriba=48,
  mover_cuelloCe=49,
  moverAbajo=54,
  expresarFeliz=55,
  expresarTriste=56,
  habilitarEntradas=57,
  deshabilitarEntradas=58,
}comandos;

typedef enum{
  vozSusurro=1,
  vozTriste=2,
  vozDespacio=3,
  vozFuerte=4,
  vozIngles=5,
  vozFrances=6,
}voces;

typedef struct{
  int *id;
  comandos *comando;
}inf;

void imprimir(char *);
void imprimirColor(char *, char *, char *);
void imprimirColor2(int, int, char *);
void imprimirEntero(Entero);
void imprimirCaracter(Caracter);
void imprimirCadena(Cadena);
void reproducirAudio(char *);
void detenerAudio(char *);
void reproducirAudioInterno(char *);
void ejecutar(char *);
void esperar(Entero);
void esperarMilisegundos(Entero);
void saltar(Entero);
void espaciar(Entero);
void limpiar();
int leerEntero();

Entero generarAleatorio(Entero, Entero);
Caracter cargarCaracteres();
Caracter obtenerCaracter();
Caracter siguienteCaracter();

info iniciarRobot();
void finalizarRobot(info);
int conectarRobot(char *); //LRS1, LRS1V, IP
void desconectarRobot(int);
void enviarRobot(int, int);
void enviar(int,int);
int recibir(int);
int iniciarJuego(void *(*)());
int iniciarRostro(void *(*)());
void hablar(char *);
void hablarRobot(int, char *);
void hablarRostro(int, char *);
void narrar(char *, char *);
void narrarRobot(int, int, char *);
void asignarCadena(char *, char *);
int iguales(char *, char *);
int iguales2(char *, char *);
int recibirRobot(int);
int enviarMensaje(int);
int enviarMensajeAdjunto(int,char*);
int recibirMensaje(int, int);
char leerCaracter();
Cadena leerCadena();
char leerTecla();

int comunicarRobot(int*,comandos*);
info conectarRostro();
void enviarRostro(int, char *);
int recibirMensajeRostro(int, int);

void int2string(int, char *);
