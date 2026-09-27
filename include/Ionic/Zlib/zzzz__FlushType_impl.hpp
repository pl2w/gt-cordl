#pragma once
// IWYU pragma private; include "Ionic/Zlib/FlushType.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Ionic::Zlib::FlushType::FlushType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::FlushType::FlushType()   {
}
constexpr ::Ionic::Zlib::FlushType  Ionic::Zlib::FlushType::None{static_cast<int32_t>(0x0)};
constexpr ::Ionic::Zlib::FlushType  Ionic::Zlib::FlushType::Partial{static_cast<int32_t>(0x1)};
constexpr ::Ionic::Zlib::FlushType  Ionic::Zlib::FlushType::Sync{static_cast<int32_t>(0x2)};
constexpr ::Ionic::Zlib::FlushType  Ionic::Zlib::FlushType::Full{static_cast<int32_t>(0x3)};
constexpr ::Ionic::Zlib::FlushType  Ionic::Zlib::FlushType::Finish{static_cast<int32_t>(0x4)};
