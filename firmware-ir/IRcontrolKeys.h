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
  0xFF0DF2, // key 0
  0xFF10EF, // key 1
  0xFF11EE, // key 2
  0xFF12ED, // key 3
  0xFF14EB, // key 4
  0xFF15EA, // key 5
  0xFF16E9, // key 6
  0xFF18E7, // key 7
  0xFF19E6, // key 8
  0xFF1AE5, // key 9
  0xFF01FE, // forward, arrow up key
  0xFF09F6, // backward, arrow down key
  0xFF06F9, // right, arrow right key
  0xFF04FB, // left, arrow left key 
  0xFF05FA, // stand, middle key
  0xFF02FD, // auto, menu key, 1st column most rightnest key
  0xFF00FF  // control, power key, 1st column most left key
};

#endif
