#include <Keyboard.h>
void setup() {
  Keyboard.begin();

  pinMode(A3, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
  digitalWrite(A3, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A0, HIGH);
  digitalWrite(15, HIGH);
}

void loop() {

  digitalWrite(15, LOW);
  if (digitalRead(1)==LOW)
  {
    digitalWrite(15, HIGH);

    digitalWrite(A3, LOW);
    if (digitalRead(16)==LOW) Keyboard.press(KEY_F1);
    else Keyboard.release(KEY_F1);
    if (digitalRead(10)==LOW) Keyboard.press(KEY_F2);
    else Keyboard.release(KEY_F2);
    if (digitalRead(9)==LOW) Keyboard.press(KEY_F3);
    else Keyboard.release(KEY_F3);
    if (digitalRead(8)==LOW) Keyboard.press(KEY_F4);
    else Keyboard.release(KEY_F4);
    if (digitalRead(7)==LOW) Keyboard.press(KEY_F5);
    else Keyboard.release(KEY_F5);
    if (digitalRead(6)==LOW) Keyboard.press(KEY_F6);
    else Keyboard.release(KEY_F6);
    if (digitalRead(5)==LOW) Keyboard.press(KEY_F7);
    else Keyboard.release(KEY_F7);
    if (digitalRead(4)==LOW) Keyboard.press(KEY_F8);
    else Keyboard.release(KEY_F8);
    if (digitalRead(3)==LOW) Keyboard.press(KEY_F9);
    else Keyboard.release(KEY_F9);
    if (digitalRead(2)==LOW) Keyboard.press(KEY_F10);
    else Keyboard.release(KEY_F10);
    if (digitalRead(1)==LOW) Keyboard.press(KEY_F11);
    else Keyboard.release(KEY_F11);
    if (digitalRead(0)==LOW) Keyboard.press(KEY_F12);
    else Keyboard.release(KEY_F12);
    digitalWrite(A3, HIGH);

    digitalWrite(A2, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_CAPS_LOCK);  
    else Keyboard.release(KEY_CAPS_LOCK);
    if (digitalRead(4)==LOW) Keyboard.press(206);
    else Keyboard.release(206);
    if (digitalRead(3)==LOW) Keyboard.press(207);
    else Keyboard.release(207);
    if (digitalRead(2)==LOW) Keyboard.press(208);
    else Keyboard.release(208);
    if (digitalRead(1)==LOW) Keyboard.press(KEY_UP_ARROW);
    else Keyboard.release(KEY_UP_ARROW);
    if (digitalRead(0)==LOW) Keyboard.press(KEY_INSERT);
    else Keyboard.release(KEY_INSERT);
    digitalWrite(A2, HIGH);
    
    digitalWrite(A1, LOW);
    if (digitalRead(4)==LOW) Keyboard.press(KEY_HOME);
    else Keyboard.release(KEY_HOME);
    if (digitalRead(3)==LOW) Keyboard.press(KEY_PAGE_UP);
    else Keyboard.release(KEY_PAGE_UP);
    if (digitalRead(2)==LOW) Keyboard.press(KEY_LEFT_ARROW);
    else Keyboard.release(KEY_LEFT_ARROW);
    if (digitalRead(1)==LOW) Keyboard.press(KEY_RIGHT_ARROW);
    else Keyboard.release(KEY_RIGHT_ARROW);
    digitalWrite(A1, HIGH);

    digitalWrite(A0, LOW);
    if (digitalRead(4)==LOW) Keyboard.press(KEY_END);
    else Keyboard.release(KEY_END);
    if (digitalRead(3)==LOW) Keyboard.press(KEY_PAGE_DOWN);
    else Keyboard.release(KEY_PAGE_DOWN);
    if (digitalRead(2)==LOW) Keyboard.press(KEY_DOWN_ARROW);
    else Keyboard.release(KEY_DOWN_ARROW);
    if (digitalRead(1)==LOW) Keyboard.press(224);
    else Keyboard.release(224);
    digitalWrite(A0, HIGH);

    digitalWrite(15, LOW);
    if (digitalRead(0)==LOW) Keyboard.press(KEY_DELETE);
    else Keyboard.release(KEY_DELETE);
    digitalWrite(15, HIGH);
  }
  else
  {
    digitalWrite(15, HIGH);

    digitalWrite(A3, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_ESC);  
    else Keyboard.release(KEY_ESC);
    if (digitalRead(16)==LOW) Keyboard.press('1');
    else Keyboard.release('1');
    if (digitalRead(10)==LOW) Keyboard.press('2');
    else Keyboard.release('2');
    if (digitalRead(9)==LOW) Keyboard.press('3');
    else Keyboard.release('3');
    if (digitalRead(8)==LOW) Keyboard.press('4');
    else Keyboard.release('4');
    if (digitalRead(7)==LOW) Keyboard.press('5');
    else Keyboard.release('5');
    if (digitalRead(6)==LOW) Keyboard.press('6');
    else Keyboard.release('6');
    if (digitalRead(5)==LOW) Keyboard.press('7');
    else Keyboard.release('7');
    if (digitalRead(4)==LOW) Keyboard.press('8');
    else Keyboard.release('8');
    if (digitalRead(3)==LOW) Keyboard.press('9');
    else Keyboard.release('9');
    if (digitalRead(2)==LOW) Keyboard.press('0');
    else Keyboard.release('0');
    if (digitalRead(1)==LOW) Keyboard.press(45);
    else Keyboard.release(45);
    if (digitalRead(0)==LOW) Keyboard.press(61);
    else Keyboard.release(61);
    digitalWrite(A3, HIGH);

    digitalWrite(A2, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_TAB);  
    else Keyboard.release(KEY_TAB);
    if (digitalRead(16)==LOW) Keyboard.press('q');
    else Keyboard.release('q');
    if (digitalRead(10)==LOW) Keyboard.press('w');
    else Keyboard.release('w');
    if (digitalRead(9)==LOW) Keyboard.press('e');
    else Keyboard.release('e');
    if (digitalRead(8)==LOW) Keyboard.press('r');
    else Keyboard.release('r');
    if (digitalRead(7)==LOW) Keyboard.press('t');
    else Keyboard.release('t');
    if (digitalRead(6)==LOW) Keyboard.press('y');
    else Keyboard.release('y');
    if (digitalRead(5)==LOW) Keyboard.press('u');
    else Keyboard.release('u');
    if (digitalRead(4)==LOW) Keyboard.press('i');
    else Keyboard.release('i');
    if (digitalRead(3)==LOW) Keyboard.press('o');
    else Keyboard.release('o');
    if (digitalRead(2)==LOW) Keyboard.press('p');
    else Keyboard.release('p');
    if (digitalRead(1)==LOW) Keyboard.press(91);
    else Keyboard.release(91);
    if (digitalRead(0)==LOW) Keyboard.press(92);
    else Keyboard.release(92);
    digitalWrite(A2, HIGH);

    digitalWrite(A1, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_LEFT_CTRL);  
    else Keyboard.release(KEY_LEFT_CTRL);
    if (digitalRead(16)==LOW) Keyboard.press('a');  
    else Keyboard.release('a');
    if (digitalRead(10)==LOW) Keyboard.press('s');  
    else Keyboard.release('s');
    if (digitalRead(9)==LOW) Keyboard.press('d');  
    else Keyboard.release('d');
    if (digitalRead(8)==LOW) Keyboard.press('f');  
    else Keyboard.release('f');
    if (digitalRead(7)==LOW) Keyboard.press('g');
    else Keyboard.release('g');
    if (digitalRead(6)==LOW) Keyboard.press('h');
    else Keyboard.release('h');
    if (digitalRead(5)==LOW) Keyboard.press('j');
    else Keyboard.release('j');
    if (digitalRead(4)==LOW) Keyboard.press('k');
    else Keyboard.release('k');
    if (digitalRead(3)==LOW) Keyboard.press('l');
    else Keyboard.release('l');
    if (digitalRead(2)==LOW) Keyboard.press(59);
    else Keyboard.release(59);
    if (digitalRead(1)==LOW) Keyboard.press(39);
    else Keyboard.release(39);
    if (digitalRead(0)==LOW) Keyboard.press(93);
    else Keyboard.release(93);
    digitalWrite(A1, HIGH);

    digitalWrite(A0, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_LEFT_SHIFT);  
    else Keyboard.release(KEY_LEFT_SHIFT);
    if (digitalRead(16)==LOW) Keyboard.press('z');
    else Keyboard.release('z');
    if (digitalRead(10)==LOW) Keyboard.press('x');
    else Keyboard.release('x');
    if (digitalRead(9)==LOW) Keyboard.press('c');
    else Keyboard.release('c');
    if (digitalRead(8)==LOW) Keyboard.press('v');
    else Keyboard.release('v');
    if (digitalRead(7)==LOW) Keyboard.press('b');
    else Keyboard.release('b');
    if (digitalRead(6)==LOW) Keyboard.press('n');
    else Keyboard.release('n');
    if (digitalRead(5)==LOW) Keyboard.press('m');
    else Keyboard.release('m');
    if (digitalRead(4)==LOW) Keyboard.press(44);
    else Keyboard.release(44);
    if (digitalRead(3)==LOW) Keyboard.press(46);
    else Keyboard.release(46);
    if (digitalRead(2)==LOW) Keyboard.press(47);
    else Keyboard.release(47);
    if (digitalRead(1)==LOW) Keyboard.press(KEY_RETURN);
    else Keyboard.release(KEY_RETURN);
    if (digitalRead(0)==LOW) Keyboard.press(KEY_BACKSPACE);
    else Keyboard.release(KEY_BACKSPACE);
    digitalWrite(A0, HIGH);

    digitalWrite(15, LOW);
    if (digitalRead(14)==LOW) Keyboard.press(KEY_LEFT_ALT);
    else Keyboard.release(KEY_LEFT_ALT);
    if (digitalRead(16)==LOW) Keyboard.press(KEY_LEFT_GUI);
    else Keyboard.release(KEY_LEFT_GUI);
    if (digitalRead(7)==LOW) Keyboard.press(32);
    else Keyboard.release(32);
    if (digitalRead(4)==LOW) Keyboard.press(KEY_RIGHT_GUI);
    else Keyboard.release(KEY_RIGHT_GUI);
    if (digitalRead(3)==LOW) Keyboard.press(KEY_RIGHT_ALT);
    else Keyboard.release(KEY_RIGHT_ALT);
    if (digitalRead(2)==LOW) Keyboard.press(KEY_RIGHT_SHIFT);
    else Keyboard.release(KEY_RIGHT_SHIFT);
    if (digitalRead(0)==LOW) Keyboard.press(96);
    else Keyboard.release(96);
    digitalWrite(15, HIGH);
  }

 
}
