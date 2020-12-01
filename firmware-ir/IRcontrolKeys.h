#ifndef __IR_CODES__
#define __IR_CODES__

/* IR codes -----------------------------------------------------------------*/
#define KEY_0         0
#define KEY_1         1
#define KEY_2         2 
#define KEY_3         3
#define KEY_4         4
#define KEY_5         5
#define KEY_6         6
#define KEY_7         7
#define KEY_8         8
#define KEY_9         9
#define KEY_FORWARD   10
#define KEY_BACKWARD  11
#define KEY_RIGHT     12
#define KEY_LEFT      13
#define KEY_STAND     14
#define KEY_AUTO      15
#define KEY_CONTROL   16

constexpr unsigned long ir_control_keys[]={
  0xFF9867, // key 0
  0xFFA25D, // key 1
  0xFF629D, // key 2
  0xFFE21D, // key 3
  0xFF22DD, // key 4
  0xFF02FD, // key 5
  0xFFC23D, // key 6
  0xFFE01F, // key 7
  0xFFA857, // key 8
  0xFF906F, // key 9
  0xFF18E7, // forward, arrow up key
  0xFF4AB5, // backward, arrow down key
  0xFF5AA5, // right, arrow right key
  0xFF10EF, // left, arrow left key 
  0xFF38C7, // stand, middle key
  0xFF6897, // auto, menu key, 1st column most rightnest key
  0xFFB04F  // control, power key, 1st column most left key
};

#endif
