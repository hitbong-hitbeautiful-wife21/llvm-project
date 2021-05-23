//===----- GBZ80ELFStreamer.h - GBZ80 Target Streamer --------------*- C++ -*--===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_GBZ80_ELF_STREAMER_H
#define LLVM_GBZ80_ELF_STREAMER_H

#include "GBZ80TargetStreamer.h"

namespace llvm {

/// A target streamer for an GBZ80 ELF object file.
class GBZ80ELFStreamer : public GBZ80TargetStreamer {
public:
  GBZ80ELFStreamer(MCStreamer &S, const MCSubtargetInfo &STI);

  MCELFStreamer &getStreamer() {
    return static_cast<MCELFStreamer &>(Streamer);
  }
};

} // end namespace llvm

#endif
