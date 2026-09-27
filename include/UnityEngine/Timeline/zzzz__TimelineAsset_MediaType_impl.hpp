#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_MediaType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimelineAsset_MediaType::TimelineAsset_MediaType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineAsset_MediaType::TimelineAsset_MediaType()   {
}
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Animation{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Audio{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Texture{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Video{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Script{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Hybrid{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TimelineAsset_MediaType  GlobalNamespace::TimelineAsset_MediaType::Group{static_cast<int32_t>(0x5)};
