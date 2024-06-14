

void disparo(int trigo) // essa faz o disparo do trigger, garante nivel baixo, alto, e volta para baixo, e nada mais
{
    pinMode(trigo, OUTPUT);
    digitalWrite(trigo, LOW);
    delay(2);
    digitalWrite(trigo, HIGH);
    delay(10);
    digitalWrite(trigo, LOW);
}

float leitura (int ecoo) // depende que o disparo tenha ocorrido, e guarda/devolve o tempo que demorou p receber
{
    float tempo;
    pinMode(ecoo, INPUT);
    tempo = pulseIn(ecoo, HIGH);
    return tempo;
}

float corrige ( float tDecorrido)
{
    float distancia;
    distancia = 0.01723 * tDecorrido;
    return distancia;
}



float respDisparo ( int trigger, int echo) //auxiliar, ela chama todas, mas "não faz nada"
{
    float var;
    disparo(trigger);
    var = leitura(echo);
    return corrige(var);
}
