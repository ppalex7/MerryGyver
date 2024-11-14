void modes7() {
  switch (mode) {
    case 0:
    case 5:
    case 10: scrollBitmap(bitmap_59x5, 8, 5, 2); break;

    case 2:
    case 12: scrollBitmap(bitmap_42x8, 6, 8, 0); break;

    case 4: switchBitmap(heart1, heart2); break;
    
    case 6:
    case 13: blinkBitmap(heart2); break;

    case 8: blinkBitmap(star); break;

    case 9: switchBitmap(pacm1, pacm2); break;

    default: return snow();
  }
}

boolean isSeven() {
  return SN == 7
    || SN == 13
    || SN == 14
  ;
}