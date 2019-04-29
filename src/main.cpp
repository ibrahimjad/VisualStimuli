#include "visualstimuli.h"

int main() {
  VisualStimuli::Flicker flicker[] = {
    VisualStimuli::Flicker(2.0f, -0.75f, 0.75f),
    VisualStimuli::Flicker(6.0f, 0.75f, 0.75f),
    VisualStimuli::Flicker(12.0f, -0.75f, -0.75f),
    VisualStimuli::Flicker(24.0f, 0.75f, -0.75f)
  };

  VisualStimuli::Interface ui(flicker, 4);
  ui.initWindow();


  while (!ui.isQuit())
    ui.render();


  ui.quit();
}
