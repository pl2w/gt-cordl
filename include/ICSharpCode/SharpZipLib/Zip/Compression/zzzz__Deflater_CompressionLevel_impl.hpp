#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater_CompressionLevel.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_CompressionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Deflater_CompressionLevel::Deflater_CompressionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Deflater_CompressionLevel::Deflater_CompressionLevel()   {
}
constexpr ::GlobalNamespace::Deflater_CompressionLevel  GlobalNamespace::Deflater_CompressionLevel::BEST_COMPRESSION{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::Deflater_CompressionLevel  GlobalNamespace::Deflater_CompressionLevel::BEST_SPEED{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Deflater_CompressionLevel  GlobalNamespace::Deflater_CompressionLevel::DEFAULT_COMPRESSION{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::Deflater_CompressionLevel  GlobalNamespace::Deflater_CompressionLevel::NO_COMPRESSION{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Deflater_CompressionLevel  GlobalNamespace::Deflater_CompressionLevel::DEFLATED{static_cast<int32_t>(0x8)};
