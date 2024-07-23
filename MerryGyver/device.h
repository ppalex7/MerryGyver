// #define debug
static const uint8_t SN = 1;

#if F_CPU != 4800000
  #error "sketch designed for 4.8MHz clock"
#endif