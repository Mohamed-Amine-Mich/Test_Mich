#pragma once

#include <gtest/gtest.h>
#include <iostream>
#include <string>

//!
class MichelinTestUnitClass : public testing::Test {
public:
  MichelinTestUnitClass();

protected:
  virtual void SetUp() override;
  virtual void TearDown() override;
};
