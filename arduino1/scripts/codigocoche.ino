// Motor A
int ENA = 2 ;
int IN1 = 3;
int IN2 = 4;

// Motor B
int ENB = 7;
int IN3 = 5;
int IN4 = 6;

//motor C
int ENC = 8 ;
int IN5 = 9;
int IN6 = 10;

//motor D
int END = 13;
int IN7 = 11;
int IN8 = 12;


void setup ()
{
 // Declaramos todos los pines como salidas
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT);
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}
void Adelante ()
{
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 0); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 255); //Velocidad motor B
}
void Atras ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 128); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 0); //Velocidad motor B
}
void Derecha ()
{
 //Direccion motor A
 digitalWrite (IN1, HIGH);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 200); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, HIGH);
 analogWrite (ENB, 100); //Velocidad motor A
}

void Izquierda ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, HIGH);
 analogWrite (ENA, 50); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, HIGH);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 150); //Velocidad motor A
}
void Parar ()
{
 //Direccion motor A
 digitalWrite (IN1, LOW);
 digitalWrite (IN2, LOW);
 analogWrite (ENA, 0); //Velocidad motor A
 //Direccion motor B
 digitalWrite (IN3, LOW);
 digitalWrite (IN4, LOW);
 analogWrite (ENB, 0); //Velocidad motor A
}
void loop ()
{
 Adelante ();
 delay (3000);
 Atras ();
 delay (3000);
 Derecha ();
 delay (2000);
 Izquierda ();
 delay (2000);
 Parar ();
 delay (4000);
}
