int led1 = D7;
void setup() {
    pinMode(led1, OUTPUT);    
}
void loop() {
    
    //Store Name to print in dots and dashes
    const char string[] = " - .-. .. ... - . -. "; 
    const char dash = '-';
    const char dot = '.';
    const char space = ' ';
    const int tickDelay = 500;
    const int dotDelay = 400;
    const int dashDelay = 1200;
    const int spaceDelay = 2000;
   
    while(true)
    {
        for(int i = 0; i < strlen(string); i++ ) 
        {
            char character = string[i];
            if(character==dash)
            {
                digitalWrite(led1, HIGH);
                delay(dashDelay);
                digitalWrite(led1, LOW);
            } 
            if(character==dot)
            {
                digitalWrite(led1, HIGH);
                delay(dotDelay);
                digitalWrite(led1, LOW);
            }
            if(character==space)
            {
                digitalWrite(led3, HIGH);
                delay(spaceDelay);
                digitalWrite(led3, LOW);
            }
            delay(tickDelay);
        }
    }
}
