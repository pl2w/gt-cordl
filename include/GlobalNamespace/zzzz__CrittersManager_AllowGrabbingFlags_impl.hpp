#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersManager_AllowGrabbingFlags.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_AllowGrabbingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags::CrittersManager_AllowGrabbingFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags::CrittersManager_AllowGrabbingFlags()   {
}
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  GlobalNamespace::CrittersManager_AllowGrabbingFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  GlobalNamespace::CrittersManager_AllowGrabbingFlags::OutOfHands{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  GlobalNamespace::CrittersManager_AllowGrabbingFlags::FromBags{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  GlobalNamespace::CrittersManager_AllowGrabbingFlags::EntireBag{static_cast<int32_t>(0x4)};
