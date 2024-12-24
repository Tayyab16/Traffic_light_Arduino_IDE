// Define GPIO pins for LEDs
const int redLED = 22;
const int greenLED = 21;
const int yellowLED = 23;

void setup() {
  // Set LED pins as outputs
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);

  // Initialize all LEDs to OFF
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);

  // Delay for 5 seconds after bootup
  delay(5000);
}

void loop() {
  // Turn on the red LED at 6th second
  digitalWrite(redLED, HIGH);
  delay(1000); // Delay for 1 second to reach the 6th second

  // Turn on the yellow LED at the 16th second
  delay(9000); // Delay for 9 seconds to reach the 16th second
  digitalWrite(yellowLED, HIGH);

  // Turn off red and yellow LEDs at the 25th second
  delay(9000); // Delay for 9 seconds to reach the 25th second
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);

  // Turn on the green LED at the 26th second
  delay(1000); // Delay for 1 second to reach the 26th second
  digitalWrite(greenLED, HIGH);

  // Green LED stays on for the next 10 seconds
  delay(10000);

  // Turn off the green LED
  digitalWrite(greenLED, LOW);

  // Repeat the cycle
}
