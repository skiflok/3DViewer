#ifndef INC_3DVIEWER_V2_0_SRC_VIEW_TEST_VIEW_H_
#define INC_3DVIEWER_V2_0_SRC_VIEW_TEST_VIEW_H_

#include "../controller/controller.h"
#include "../model/observer/observer.h"

namespace s21 {
class TestView : public Observer {
 public:
  TestView() { SubscribeToChangeDataModel(); }
  void update() override;

  void SubscribeToChangeDataModel() { controller_.addObserver(this); }
  void OpenFile();
  void SaveSettings();

  void TransformObject();
  void SetProjection();
  void Customize();
  void SavePng();
  void SaveGif();

 private:
  Controller controller_{};
};
}  // namespace s21

#endif  // INC_3DVIEWER_V2_0_SRC_VIEW_TEST_VIEW_H_
