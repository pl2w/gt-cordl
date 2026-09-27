#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipSegmentedStream_RwMode.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipSegmentedStream_RwMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode::ZipSegmentedStream_RwMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode::ZipSegmentedStream_RwMode()   {
}
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode  GlobalNamespace::ZipSegmentedStream_RwMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode  GlobalNamespace::ZipSegmentedStream_RwMode::ReadOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode  GlobalNamespace::ZipSegmentedStream_RwMode::Write{static_cast<int32_t>(0x2)};
