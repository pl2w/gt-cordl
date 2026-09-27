#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionCategoryOption.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategoryOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption::AudioSessionCategoryOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption::AudioSessionCategoryOption()   {
}
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption  Photon::Voice::IOS::AudioSessionCategoryOption::MixWithOthers{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption  Photon::Voice::IOS::AudioSessionCategoryOption::DuckOthers{static_cast<int32_t>(0x2)};
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption  Photon::Voice::IOS::AudioSessionCategoryOption::AllowBluetooth{static_cast<int32_t>(0x4)};
constexpr ::Photon::Voice::IOS::AudioSessionCategoryOption  Photon::Voice::IOS::AudioSessionCategoryOption::DefaultToSpeaker{static_cast<int32_t>(0x8)};
