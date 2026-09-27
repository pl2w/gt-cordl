#pragma once
// IWYU pragma private; include "Fusion/HitOptions.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::HitOptions::HitOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::HitOptions::HitOptions()   {
}
constexpr ::Fusion::HitOptions  Fusion::HitOptions::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::HitOptions  Fusion::HitOptions::IncludePhysX{static_cast<int32_t>(0x1)};
constexpr ::Fusion::HitOptions  Fusion::HitOptions::IncludeBox2D{static_cast<int32_t>(0x2)};
constexpr ::Fusion::HitOptions  Fusion::HitOptions::SubtickAccuracy{static_cast<int32_t>(0x4)};
constexpr ::Fusion::HitOptions  Fusion::HitOptions::IgnoreInputAuthority{static_cast<int32_t>(0x8)};
