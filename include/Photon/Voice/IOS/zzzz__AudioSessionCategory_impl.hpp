#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionCategory.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::IOS::AudioSessionCategory::AudioSessionCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::IOS::AudioSessionCategory::AudioSessionCategory()   {
}
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::Ambient{static_cast<int32_t>(0x0)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::SoloAmbient{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::Playback{static_cast<int32_t>(0x2)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::Record{static_cast<int32_t>(0x3)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::PlayAndRecord{static_cast<int32_t>(0x4)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::AudioProcessing{static_cast<int32_t>(0x5)};
constexpr ::Photon::Voice::IOS::AudioSessionCategory  Photon::Voice::IOS::AudioSessionCategory::MultiRoute{static_cast<int32_t>(0x6)};
