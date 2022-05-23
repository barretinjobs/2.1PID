//===========================================================================TODOS OS VALORES SÃO DEMONSTRATIVOS===============================================================================          


int in1 = 5;       //definição das portas dos motores (baseando em microdriver de motor padrão)
int in2 = 6; 
int in3 = 7;
int in4 = 8;

int pwma = 9;     //força motor direita
int pwmb = 10;    //força motor esquerda

int movimento[] = {1, 2, 3, 4, 5};                      //reto = 1 esq = 2 dir = 3 tras = 4 parar = 5


int sensor[] = {0, 1};      //leitura sensores
int psensor[] = {A0, A1};   //portas sensores


int erro;
int integral;
int derivado;
int lasterro;
int turn;

void setup() {
  
Serial.begin(9600);

pinMode(psensor[0], INPUT);
pinMode(psensor[1], INPUT);

}

void loop() {
  
pid(1, 0, 0);              //faz as contas do pid


}
