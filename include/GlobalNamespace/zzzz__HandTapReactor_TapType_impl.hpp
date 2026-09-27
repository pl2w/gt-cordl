#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapReactor_TapType.hpp"
#include "GlobalNamespace/zzzz__HandTapReactor_TapType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandTapReactor_TapType::HandTapReactor_TapType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapReactor_TapType::HandTapReactor_TapType()   {
}
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftDown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftUp{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftHighFive{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftFistBump{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftTagFirstPerson{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::LeftTagThirdPerson{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::AllLeft{static_cast<int32_t>(0x3f)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightDown{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightUp{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightHighFive{static_cast<int32_t>(0x100)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightFistBump{static_cast<int32_t>(0x200)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightTagFirstPerson{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::RightTagThirdPerson{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::AllRight{static_cast<int32_t>(0xfc0)};
constexpr ::GlobalNamespace::HandTapReactor_TapType  GlobalNamespace::HandTapReactor_TapType::All{static_cast<int32_t>(0xffffffff)};
