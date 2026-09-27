#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings_ImageFileFormat.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_ImageFileFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat::LckSettings_ImageFileFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat::LckSettings_ImageFileFormat()   {
}
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat  GlobalNamespace::LckSettings_ImageFileFormat::EXR{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat  GlobalNamespace::LckSettings_ImageFileFormat::JPG{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat  GlobalNamespace::LckSettings_ImageFileFormat::TGA{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckSettings_ImageFileFormat  GlobalNamespace::LckSettings_ImageFileFormat::PNG{static_cast<int32_t>(0x3)};
