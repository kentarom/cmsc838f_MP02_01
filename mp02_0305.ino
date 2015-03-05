#define FETGATEa 10 
#define FETGATEb 2 
#define FETGATEc 3 
#define FETGATEd 4 
#define FETGATEe 5 
#define FETGATEf 6 
#define FETGATEg 7 
#define FETGATEh 8 
#define FETGATEi 9

void setup() {
  // put your setup code here, to run once:
 
 Serial.begin( 9600 ); 
 
 pinMode(FETGATEa, OUTPUT);
 pinMode(FETGATEb, OUTPUT);
 pinMode(FETGATEc, OUTPUT);
 pinMode(FETGATEd, OUTPUT);
 pinMode(FETGATEe, OUTPUT);
 pinMode(FETGATEf, OUTPUT);
 pinMode(FETGATEg, OUTPUT);
 pinMode(FETGATEh, OUTPUT);
 pinMode(FETGATEi, OUTPUT);
 
 //center cursol
 //digitalWrite( FETGATEe, HIGH );

 
 }

void loop() {
  // put your main code here, to run repeatedly:
 
 ////////////
 
 if ( Serial.available() > 0 ) {
int data = Serial.read();//データを１バイト読み込む
if ( data == 'a' ) {
 digitalWrite( FETGATEa, HIGH );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
}
else if ( data == 'b' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, HIGH );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'c' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, HIGH );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'd' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, HIGH );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'e' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, HIGH );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'f' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, HIGH );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'g' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, HIGH );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'h' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW);
 digitalWrite( FETGATEh, HIGH );
 digitalWrite( FETGATEi, LOW );
} else if ( data == 'i' ) {
 digitalWrite( FETGATEa, LOW );
 digitalWrite( FETGATEb, LOW );
 digitalWrite( FETGATEc, LOW );
 digitalWrite( FETGATEd, LOW );
 digitalWrite( FETGATEe, LOW );
 digitalWrite( FETGATEf, LOW );
 digitalWrite( FETGATEg, LOW );
 digitalWrite( FETGATEh, LOW );
 digitalWrite( FETGATEi, HIGH );
}

}

}
