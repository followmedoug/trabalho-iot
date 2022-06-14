const int sensor = 'A3';

float leitura_sensor = 0;
float tensao = 0;
float temperatura = 0;

int ledPinAzul = 13;
int ledPinVerde = 12;
int ledPinAmarelo = 8;
int ledPinLaranja = 7;
int alarme = 4;

void setup()
{
    pinMode(ledPinAzul, OUTPUT);
    pinMode(ledPinVerde, OUTPUT);
    pinMode(ledPinAmarelo, OUTPUT);
    pinMode(ledPinLaranja, OUTPUT);
    pinMode(alarme, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    leitura_sensor = analogRead(sensor);
    tensao = 5 * leitura_sensor / 1023;
    temperatura = (tensao - 0.5) * 100;

    digitalWrite(alarme, HIGH);

    if (temperatura <= 57)
    {
        digitalWrite(ledPinAzul, HIGH);
        digitalWrite(ledPinVerde, LOW);
        digitalWrite(ledPinAmarelo, LOW);
        digitalWrite(ledPinLaranja, LOW);
    }
    else if (temperatura > 57 && temperatura <= 62)
    {
        digitalWrite(ledPinAzul, LOW);
        digitalWrite(ledPinVerde, HIGH);
        digitalWrite(ledPinAmarelo, LOW);
        digitalWrite(ledPinLaranja, LOW);
    }
    else if (temperatura > 62 && temperatura <= 67)
    {
        digitalWrite(ledPinAzul, LOW);
        digitalWrite(ledPinVerde, LOW);
        digitalWrite(ledPinAmarelo, HIGH);
        digitalWrite(ledPinLaranja, LOW);
    }
    else
    {
        digitalWrite(ledPinAzul, LOW);
        digitalWrite(ledPinVerde, LOW);
        digitalWrite(ledPinAmarelo, LOW);
        digitalWrite(ledPinLaranja, HIGH);
        digitalWrite(alarme, LOW);
    }
}