#pragma once
// IWYU pragma private; include "Ionic/Zlib/CompressionLevel.hpp"
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Ionic::Zlib::CompressionLevel::CompressionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::CompressionLevel::CompressionLevel()   {
}
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::None{static_cast<int32_t>(0x0)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level0{static_cast<int32_t>(0x0)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::BestSpeed{static_cast<int32_t>(0x1)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level1{static_cast<int32_t>(0x1)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level2{static_cast<int32_t>(0x2)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level3{static_cast<int32_t>(0x3)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level4{static_cast<int32_t>(0x4)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level5{static_cast<int32_t>(0x5)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Default{static_cast<int32_t>(0x6)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level6{static_cast<int32_t>(0x6)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level7{static_cast<int32_t>(0x7)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level8{static_cast<int32_t>(0x8)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::BestCompression{static_cast<int32_t>(0x9)};
constexpr ::Ionic::Zlib::CompressionLevel  Ionic::Zlib::CompressionLevel::Level9{static_cast<int32_t>(0x9)};
