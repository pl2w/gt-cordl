#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_BakingStateCache.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_PolygonSolution_impl.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_BakingStateCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipperOffset_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_PolygonSolution_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
// Ctor Parameters [CppParam { name: "offsetter", ty: "::Unity::Cinemachine::ClipperOffset*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "solutions", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightCandidate", ty: "::GlobalNamespace::ConfinerOven_PolygonSolution", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftCandidate", ty: "::GlobalNamespace::ConfinerOven_PolygonSolution", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userSetMaxCandidate", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "theoreticalMaxCandidate", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stepSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxFrustumHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userSetMaxFrustumHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "theoreticalMaxFrustumHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentFrustumHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bakeTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache::ConfinerOven_BakingStateCache(::Unity::Cinemachine::ClipperOffset*  offsetter, ::System::Collections::Generic::List_1<::GlobalNamespace::ConfinerOven_PolygonSolution>*  solutions, ::GlobalNamespace::ConfinerOven_PolygonSolution  rightCandidate, ::GlobalNamespace::ConfinerOven_PolygonSolution  leftCandidate, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  userSetMaxCandidate, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  theoreticalMaxCandidate, float_t  stepSize, float_t  maxFrustumHeight, float_t  userSetMaxFrustumHeight, float_t  theoreticalMaxFrustumHeight, float_t  currentFrustumHeight, float_t  bakeTime) noexcept  {
this->offsetter = offsetter;
this->solutions = solutions;
this->rightCandidate = rightCandidate;
this->leftCandidate = leftCandidate;
this->userSetMaxCandidate = userSetMaxCandidate;
this->theoreticalMaxCandidate = theoreticalMaxCandidate;
this->stepSize = stepSize;
this->maxFrustumHeight = maxFrustumHeight;
this->userSetMaxFrustumHeight = userSetMaxFrustumHeight;
this->theoreticalMaxFrustumHeight = theoreticalMaxFrustumHeight;
this->currentFrustumHeight = currentFrustumHeight;
this->bakeTime = bakeTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConfinerOven_BakingStateCache::ConfinerOven_BakingStateCache()   {
}
