#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_ReactorFlags.hpp"
#include "BoingKit/zzzz__BoingWork_ReactorFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingWork_ReactorFlags::BoingWork_ReactorFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingWork_ReactorFlags::BoingWork_ReactorFlags()   {
}
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::TwoDDistanceCheck{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::TwoDPositionInfluence{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::TwoDRotationInfluence{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::EnablePositionEffect{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::EnableRotationEffect{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::EnableScaleEffect{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::GlobalReactionUpVector{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::EnablePropagation{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::AnchorPropagationAtBorder{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::FixedUpdate{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::EarlyUpdate{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::BoingWork_ReactorFlags  GlobalNamespace::BoingWork_ReactorFlags::LateUpdate{static_cast<int32_t>(0xb)};
