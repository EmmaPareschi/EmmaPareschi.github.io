/*
  Melody
Emma Pareschi
Play the melody when the press-button is pressed
using the function play
*/

#include "pitches.h"

const int buzzer = 8;
const int sw_pin = 9;

int sw_value = 0;

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {

  pinMode(sw_pin, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
  
}

void loop() {
  sw_value = digitalRead(sw_pin);

  if (sw_value == 0){
    play(); //call the function play
  }
}

//definition of the function play
void play(){
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzer, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(buzzer);
  }
}



