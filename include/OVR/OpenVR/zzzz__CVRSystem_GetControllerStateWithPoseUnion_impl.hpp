#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_GetControllerStateWithPoseUnion.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_GetControllerStateWithPoseUnion_def.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*& GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose()  {
return this->___pGetControllerStateWithPose;
}
constexpr ::OVR::OpenVR::IVRSystem__GetControllerStateWithPose* const& GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPose() const {
return this->___pGetControllerStateWithPose;
}
constexpr void GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPose(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  value)  {
this->___pGetControllerStateWithPose = value;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*& GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked()  {
return this->___pGetControllerStateWithPosePacked;
}
constexpr ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* const& GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_get_pGetControllerStateWithPosePacked() const {
return this->___pGetControllerStateWithPosePacked;
}
constexpr void GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::__cordl_internal_set_pGetControllerStateWithPosePacked(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  value)  {
this->___pGetControllerStateWithPosePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pGetControllerStateWithPosePacked", ty: "::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::CVRSystem_GetControllerStateWithPoseUnion(::OVR::OpenVR::IVRSystem__GetControllerStateWithPose*  pGetControllerStateWithPose, ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*  pGetControllerStateWithPosePacked) noexcept  {
this->pGetControllerStateWithPose = pGetControllerStateWithPose;
this->pGetControllerStateWithPosePacked = pGetControllerStateWithPosePacked;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion::CVRSystem_GetControllerStateWithPoseUnion()   {
}
