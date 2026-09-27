#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportCandidateComputer___c__DisplayClass10_0.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportCandidateComputer___c__DisplayClass10_0_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportCandidateComputer_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IPolyline_def.hpp"
// Ctor Parameters [CppParam { name: "arcOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bestScore", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TeleportArc", ty: "::Oculus::Interaction::IPolyline*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Oculus::Interaction::Locomotion::TeleportCandidateComputer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bestCandidate", ty: "::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bestHit", ty: "::Oculus::Interaction::Locomotion::TeleportHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tiebreaker", ty: "::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0::TeleportCandidateComputer___c__DisplayClass10_0(::UnityEngine::Vector3  arcOrigin, float_t  bestScore, ::Oculus::Interaction::IPolyline*  TeleportArc, ::UnityW<::Oculus::Interaction::Locomotion::TeleportCandidateComputer>  __4__this, ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>  bestCandidate, ::Oculus::Interaction::Locomotion::TeleportHit  bestHit, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker) noexcept  {
this->arcOrigin = arcOrigin;
this->bestScore = bestScore;
this->TeleportArc = TeleportArc;
this->__4__this = __4__this;
this->bestCandidate = bestCandidate;
this->bestHit = bestHit;
this->tiebreaker = tiebreaker;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0::TeleportCandidateComputer___c__DisplayClass10_0()   {
}
