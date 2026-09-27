#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState_ArtilleryMsg.hpp"
#include "GlobalNamespace/zzzz__ArtilleryCannonState_ArtilleryMsg_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::ArtilleryCannonState_ArtilleryMsg(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::ArtilleryCannonState_ArtilleryMsg()   {
}
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg  GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::CrankGrabLeft{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg  GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::CrankGrabRight{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg  GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::CrankRelease{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg  GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::CrankInput{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::ArtilleryCannonState_ArtilleryMsg  GlobalNamespace::ArtilleryCannonState_ArtilleryMsg::Fire{static_cast<uint8_t>(0x4u)};
