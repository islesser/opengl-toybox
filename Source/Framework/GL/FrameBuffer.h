// MIT License
//
// Copyright (c) 2020 Ian Vincent Slesser
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#pragma once

#include "Common.h"

class FrameBuffer {

 private:
  uint32_t mID{0};
  uint32_t aColor;
  uint32_t aDepth;

 public:
  FrameBuffer() {}
  virtual ~FrameBuffer() {};

  bool Create(uint32_t pWidth, uint32_t pHeight);
  void Destroy();

  void Bind(const glm::vec2 &pWidthHeight);
  void Bind(uint32_t pWidth, uint32_t pHeight);
  void Bind(uint32_t pID, const glm::vec2 &pWidthHeight);
  void Bind(uint32_t pID, uint32_t pWidth, uint32_t pHeight);

  inline uint32_t GetID() { return mID; }
  inline void SetID(uint32_t to) { mID = to; }
  inline uint32_t GetColorAttachmentID() { return aColor; }
  inline void SetColorAttachmentID(uint32_t to) { aColor = to; }

  void BindColorAttachment();
};
