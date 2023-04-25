#include "car.h"

void pinsSetup(void) { 

        pinMode(UP_RIGHT_WHEEL ,OUTPUT);
        pinMode(DOWN_RIGHT_WHEEL,OUTPUT);
        pinMode(UP_LEFT_WHEEL,OUTPUT);
        pinMode(DOWN_LEFT_WHEEL,OUTPUT);

  }

void goForward(void) { 

      digitalWrite(UP_LEFT_WHEEL, HIGH);
      digitalWrite(DOWN_LEFT_WHEEL, LOW );
      digitalWrite(UP_RIGHT_WHEEL, HIGH);
      digitalWrite(DOWN_LEFT_WHEEL, LOW );
  }

void goBackward(void) { 
        
      digitalWrite(UP_LEFT_WHEEL,   LOW  );
      digitalWrite(DOWN_LEFT_WHEEL, HIGH );
      digitalWrite(UP_RIGHT_WHEEL,  LOW  );
      digitalWrite(DOWN_LEFT_WHEEL, HIGH );

  }

void turnLeft(void) { 

      digitalWrite(UP_LEFT_WHEEL,   LOW  );
      digitalWrite(DOWN_LEFT_WHEEL, HIGH );
      digitalWrite(UP_RIGHT_WHEEL,  HIGH );
      digitalWrite(DOWN_LEFT_WHEEL, LOW  );

  }  

void turnRight(void) { 
  
      digitalWrite(UP_LEFT_WHEEL,   HIGH  );
      digitalWrite(DOWN_LEFT_WHEEL, LOW   );
      digitalWrite(UP_RIGHT_WHEEL,  LOW   );
      digitalWrite(DOWN_LEFT_WHEEL, HIGH  );
}  

void stop(void) { 
  
      digitalWrite(UP_LEFT_WHEEL,   LOW   );
      digitalWrite(DOWN_LEFT_WHEEL, LOW   );
      digitalWrite(UP_RIGHT_WHEEL,  LOW   );
      digitalWrite(DOWN_LEFT_WHEEL, LOW   );
}
  