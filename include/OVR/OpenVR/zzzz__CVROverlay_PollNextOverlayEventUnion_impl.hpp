#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVROverlay_PollNextOverlayEventUnion.hpp"
#include "OVR/OpenVR/zzzz__CVROverlay_PollNextOverlayEventUnion_def.hpp"
#include "OVR/OpenVR/zzzz__CVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*& GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEvent()  {
return this->___pPollNextOverlayEvent;
}
constexpr ::OVR::OpenVR::IVROverlay__PollNextOverlayEvent* const& GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEvent() const {
return this->___pPollNextOverlayEvent;
}
constexpr void GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_set_pPollNextOverlayEvent(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  value)  {
this->___pPollNextOverlayEvent = value;
}
constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*& GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEventPacked()  {
return this->___pPollNextOverlayEventPacked;
}
constexpr ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* const& GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_get_pPollNextOverlayEventPacked() const {
return this->___pPollNextOverlayEventPacked;
}
constexpr void GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::__cordl_internal_set_pPollNextOverlayEventPacked(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  value)  {
this->___pPollNextOverlayEventPacked = value;
}
// Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pPollNextOverlayEventPacked", ty: "::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::CVROverlay_PollNextOverlayEventUnion(::OVR::OpenVR::IVROverlay__PollNextOverlayEvent*  pPollNextOverlayEvent, ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*  pPollNextOverlayEventPacked) noexcept  {
this->pPollNextOverlayEvent = pPollNextOverlayEvent;
this->pPollNextOverlayEventPacked = pPollNextOverlayEventPacked;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion::CVROverlay_PollNextOverlayEventUnion()   {
}
