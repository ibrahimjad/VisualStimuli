#include <stdlib.h>
#include <memory>
#include <GLFW/glfw3.h>

#ifndef VISUAL_STIMULI_H
#define VISUAL_STIMULI_H

namespace VisualStimuli {

struct Flicker {
public:
  Flicker(float frequency, float x, float y);
  virtual ~Flicker();
  Flicker(const Flicker& flicker);
  Flicker& operator=(Flicker rhs);
  void setSize(float value);
  void setColor(unsigned char r, unsigned char g, unsigned char b);
  void setPosX(float x);
  void setPosY(float y);

private:
  struct Impl;
  std::unique_ptr<Impl> pimpl;
};


class Interface {
public:
  Interface(Flicker* flickerArray, int length);
  virtual ~Interface();
  Interface(const Interface& ui);
  Interface& operator=(Interface rhs);

  void initWindow();
  void render();
  bool isQuit();
  void quit();

private:
  struct Impl;
  std::unique_ptr<Impl> pimpl;
};

}


#endif
