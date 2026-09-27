#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_GetControllerStateUnion.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_GetControllerStateUnion_def.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState*& GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerState()  {
return this->___pGetControllerState;
}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerState* const& GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerState() const {
return this->___pGetControllerState;
}
constexpr void GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_set_pGetControllerState(::OVR::OpenVR::IVRSystem__GetControllerState*  value)  {
this->___pGetControllerState = value;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*& GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked()  {
return this->___pGetControllerStatePacked;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* const& GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_get_pGetControllerStatePacked() const {
return this->___pGetControllerStatePacked;
}
constexpr void GlobalNamespace::CVRSystem_GetControllerStateUnion::__cordl_internal_set_pGetControllerStatePacked(::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  value)  {
this->___pGetControllerStatePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "::OVR::OpenVR::IVRSystem__GetControllerState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pGetControllerStatePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStatePacked*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CVRSystem_GetControllerStateUnion::CVRSystem_GetControllerStateUnion(::OVR::OpenVR::IVRSystem__GetControllerState*  pGetControllerState, ::OVR::OpenVR::CVRSystem__GetControllerStatePacked*  pGetControllerStatePacked) noexcept  {
this->pGetControllerState = pGetControllerState;
this->pGetControllerStatePacked = pGetControllerStatePacked;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CVRSystem_GetControllerStateUnion::CVRSystem_GetControllerStateUnion()   {
}
