#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ParallelDeflateOutputStream_TraceBits.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits::ParallelDeflateOutputStream_TraceBits(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits::ParallelDeflateOutputStream_TraceBits()   {
}
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::NotUsed1{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitLock{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitEnter{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitBegin{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitDone{static_cast<uint32_t>(0x10u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitSkip{static_cast<uint32_t>(0x20u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::EmitAll{static_cast<uint32_t>(0x3au)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Flush{static_cast<uint32_t>(0x40u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Lifecycle{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Session{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Synch{static_cast<uint32_t>(0x200u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Instance{static_cast<uint32_t>(0x400u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Compress{static_cast<uint32_t>(0x800u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::Write{static_cast<uint32_t>(0x1000u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::WriteEnter{static_cast<uint32_t>(0x2000u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::WriteTake{static_cast<uint32_t>(0x4000u)};
constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  GlobalNamespace::ParallelDeflateOutputStream_TraceBits::All{static_cast<uint32_t>(0xffffffffu)};
