char val;

int leftFwd = 10;
int leftBwd = 11;
int rightFwd = 12;
int rightBwd = 13;
int front = 8;
int back = 9;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    //fixtures for motor driver
    pinMode(leftFwd, OUTPUT);
    pinMode(leftBwd, OUTPUT);
    pinMode(rightFwd, OUTPUT);
    pinMode(rightBwd, OUTPUT);
    pinMode(front, OUTPUT);
    pinMode(back, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    while (Serial.available() > 0)
    {
      val =Serial.read();
      Serial.println(val);
    }

    if (val == 'F') //Forward
    {
      //Serial.println(" Fwd");
      digitalWrite(front, HIGH);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'B') //Backward
    {
      //Serial.println(" bwd");
      digitalWrite(front, LOW);
      digitalWrite(back, HIGH);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }

     else if (val == 'I') //Forward Right
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, HIGH);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'J') //Backward Right
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, HIGH);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'G') //Forward Left
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, HIGH);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'H') //Backward Left
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, HIGH);
    }

    else if (val == 'L') //Left
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, HIGH);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'R') // Right
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, HIGH);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }

    else if (val == 'S') //Stop
    {
      digitalWrite(front, LOW);
      digitalWrite(back, LOW);
      digitalWrite(leftFwd, LOW);
      digitalWrite(leftBwd, LOW);
      digitalWrite(rightFwd, LOW);
      digitalWrite(rightBwd, LOW);
    }
}
