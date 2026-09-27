#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig_PartyMemberStatus.hpp"
#include "GlobalNamespace/zzzz__VRRig_PartyMemberStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VRRig_PartyMemberStatus::VRRig_PartyMemberStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRig_PartyMemberStatus::VRRig_PartyMemberStatus()   {
}
constexpr ::GlobalNamespace::VRRig_PartyMemberStatus  GlobalNamespace::VRRig_PartyMemberStatus::NeedsUpdate{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VRRig_PartyMemberStatus  GlobalNamespace::VRRig_PartyMemberStatus::InLocalParty{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VRRig_PartyMemberStatus  GlobalNamespace::VRRig_PartyMemberStatus::NotInLocalParty{static_cast<int32_t>(0x2)};
