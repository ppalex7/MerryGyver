void modes2() {
  switch(mode) {
      case 0:
      case 4:
        scrollBitmap(bitmap_59x5, 8, 5, 2);
        break;
      case 1:
      case 3:
      case 6:
        scrollBitmap(bitmap_42x8, 6, 8, 0);
        break;
      case 2:
      case 5:
      case 7:
        snow();
        break;
    }
}