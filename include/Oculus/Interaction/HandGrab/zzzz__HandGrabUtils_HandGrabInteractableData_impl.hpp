#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils_HandGrabInteractableData.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_impl.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_impl.hpp"
#include "Oculus/Interaction/GrabAPI/zzzz__GrabbingRule_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandAlignType_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabInteractableData_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabPoseData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "poses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "grabType", ty: "::Oculus::Interaction::Grab::GrabTypeFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handAlignment", ty: "::Oculus::Interaction::HandGrab::HandAlignType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scoringModifier", ty: "::Oculus::Interaction::Grab::PoseMeasureParameters", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pinchGrabRules", ty: "::Oculus::Interaction::GrabAPI::GrabbingRule", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "palmGrabRules", ty: "::Oculus::Interaction::GrabAPI::GrabbingRule", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData::HandGrabUtils_HandGrabInteractableData(::System::Collections::Generic::List_1<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>*  poses, ::Oculus::Interaction::Grab::GrabTypeFlags  grabType, ::Oculus::Interaction::HandGrab::HandAlignType  handAlignment, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::Oculus::Interaction::GrabAPI::GrabbingRule  pinchGrabRules, ::Oculus::Interaction::GrabAPI::GrabbingRule  palmGrabRules) noexcept  {
this->poses = poses;
this->grabType = grabType;
this->handAlignment = handAlignment;
this->scoringModifier = scoringModifier;
this->pinchGrabRules = pinchGrabRules;
this->palmGrabRules = palmGrabRules;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData::HandGrabUtils_HandGrabInteractableData()   {
}
