#include "visualstimuli.h"

int main() {
  VisualStimuli::Flicker flicker[] = {
    VisualStimuli::Flicker(60.0f, 0.0f, 0.0f),
    VisualStimuli::Flicker(30.0f, -0.75f, 0.75f),
    VisualStimuli::Flicker(4.0f, 0.75f, 0.75f),
    VisualStimuli::Flicker(2.0f, -0.75f, -0.75f),
    VisualStimuli::Flicker(1.0f, 0.75f, -0.75f)
  };

  VisualStimuli::Interface ui(flicker, 5);
  ui.initWindow();

  float posX = -1.0f;

  while (!ui.isQuit()) {
    posX += 0.01;
    posX = (posX <= 1.0f) ? posX : -1.0f;
    flicker[0].setPosX(posX);
    // flicker[0].setPosY(0.0f);
    flicker[0].setColor(64, 64, 128);
    flicker[0].setSize(20);
    ui.render();
  }

  ui.quit();
}
