#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem_PollNextEventUnion.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_PollNextEventUnion_def.hpp"
#include "OVR/OpenVR/zzzz__CVRSystem_def.hpp"
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent*& GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEvent()  {
return this->___pPollNextEvent;
}
constexpr ::OVR::OpenVR::IVRSystem__PollNextEvent* const& GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEvent() const {
return this->___pPollNextEvent;
}
constexpr void GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_set_pPollNextEvent(::OVR::OpenVR::IVRSystem__PollNextEvent*  value)  {
this->___pPollNextEvent = value;
}
constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked*& GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked()  {
return this->___pPollNextEventPacked;
}
constexpr ::OVR::OpenVR::CVRSystem__PollNextEventPacked* const& GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_get_pPollNextEventPacked() const {
return this->___pPollNextEventPacked;
}
constexpr void GlobalNamespace::CVRSystem_PollNextEventUnion::__cordl_internal_set_pPollNextEventPacked(::OVR::OpenVR::CVRSystem__PollNextEventPacked*  value)  {
this->___pPollNextEventPacked = value;
}
// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "::OVR::OpenVR::IVRSystem__PollNextEvent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pPollNextEventPacked", ty: "::OVR::OpenVR::CVRSystem__PollNextEventPacked*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CVRSystem_PollNextEventUnion::CVRSystem_PollNextEventUnion(::OVR::OpenVR::IVRSystem__PollNextEvent*  pPollNextEvent, ::OVR::OpenVR::CVRSystem__PollNextEventPacked*  pPollNextEventPacked) noexcept  {
this->pPollNextEvent = pPollNextEvent;
this->pPollNextEventPacked = pPollNextEventPacked;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CVRSystem_PollNextEventUnion::CVRSystem_PollNextEventUnion()   {
}
