#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ZlibBaseStream_StreamMode.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibBaseStream_StreamMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode::ZlibBaseStream_StreamMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode::ZlibBaseStream_StreamMode()   {
}
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode  GlobalNamespace::ZlibBaseStream_StreamMode::Writer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode  GlobalNamespace::ZlibBaseStream_StreamMode::Reader{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ZlibBaseStream_StreamMode  GlobalNamespace::ZlibBaseStream_StreamMode::Undefined{static_cast<int32_t>(0x2)};
