//
// Created by Violator Emilie on 3/27/23.
//

#ifndef INC_3DVIEWER_V2_0_SRC_MODEL_KERNEL_PARSER_H_
#define INC_3DVIEWER_V2_0_SRC_MODEL_KERNEL_PARSER_H_

#include <fstream>
#include <iostream>
#include <string>

#include "../dao/data_model.h"

namespace s21 {

class Parser {
 public:
  void OpenFile(std::string &input_file);
  void WriteData();

 private:
};

}  // namespace s21

#endif  // INC_3DVIEWER_V2_0_SRC_MODEL_KERNEL_PARSER_H_
