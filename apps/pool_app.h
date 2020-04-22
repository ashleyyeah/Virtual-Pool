// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_POOL_APP_H_
#define FINALPROJECT_APPS_POOL_APP_H_

#include <Box2D/Box2D.h>
#include <cinder/app/App.h>
#include <pool/pool_balls.h>
#include <pool/table.h>

namespace poolapp {

using cinder::Color;
using cinder::Rectf;
using cinder::app::MouseEvent;
using std::vector;

class PoolApp : public cinder::app::App {
 public:
  PoolApp();
  void setup() override;
  void update() override;
  void draw() override;
  void mouseDown(cinder::app::MouseEvent) override;

 private:
  void CreateFriction();
  void DrawPoolTable() const;
  void DrawPoolBalls() const;

 private:
  b2World* pool_world_;
  pool::PoolBalls pool_balls_;
  pool::Table table_;

};

}  // namespace pool

#endif  // FINALPROJECT_APPS_POOL_APP_H_