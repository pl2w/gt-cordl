#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ZipEntry_Known.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_Known_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ZipEntry_Known::ZipEntry_Known(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZipEntry_Known::ZipEntry_Known()   {
}
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::Size{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::CompressedSize{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::Crc{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::Time{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::ZipEntry_Known  GlobalNamespace::ZipEntry_Known::ExternalAttributes{static_cast<uint8_t>(0x10u)};
