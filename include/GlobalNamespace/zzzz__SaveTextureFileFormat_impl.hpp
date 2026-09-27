#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveTextureFileFormat.hpp"
#include "GlobalNamespace/zzzz__SaveTextureFileFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SaveTextureFileFormat::SaveTextureFileFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveTextureFileFormat::SaveTextureFileFormat()   {
}
constexpr ::GlobalNamespace::SaveTextureFileFormat  GlobalNamespace::SaveTextureFileFormat::EXR{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SaveTextureFileFormat  GlobalNamespace::SaveTextureFileFormat::JPG{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SaveTextureFileFormat  GlobalNamespace::SaveTextureFileFormat::PNG{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SaveTextureFileFormat  GlobalNamespace::SaveTextureFileFormat::TGA{static_cast<int32_t>(0x3)};
