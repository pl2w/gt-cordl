#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels_GetComponentStateUnion.hpp"
#include "OVR/OpenVR/zzzz__CVRRenderModels_GetComponentStateUnion_def.hpp"
#include "OVR/OpenVR/zzzz__CVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState*& GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentState()  {
return this->___pGetComponentState;
}
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState* const& GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentState() const {
return this->___pGetComponentState;
}
constexpr void GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_set_pGetComponentState(::OVR::OpenVR::IVRRenderModels__GetComponentState*  value)  {
this->___pGetComponentState = value;
}
constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*& GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentStatePacked()  {
return this->___pGetComponentStatePacked;
}
constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* const& GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentStatePacked() const {
return this->___pGetComponentStatePacked;
}
constexpr void GlobalNamespace::CVRRenderModels_GetComponentStateUnion::__cordl_internal_set_pGetComponentStatePacked(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  value)  {
this->___pGetComponentStatePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pGetComponentStatePacked", ty: "::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CVRRenderModels_GetComponentStateUnion::CVRRenderModels_GetComponentStateUnion(::OVR::OpenVR::IVRRenderModels__GetComponentState*  pGetComponentState, ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*  pGetComponentStatePacked) noexcept  {
this->pGetComponentState = pGetComponentState;
this->pGetComponentStatePacked = pGetComponentStatePacked;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CVRRenderModels_GetComponentStateUnion::CVRRenderModels_GetComponentStateUnion()   {
}
