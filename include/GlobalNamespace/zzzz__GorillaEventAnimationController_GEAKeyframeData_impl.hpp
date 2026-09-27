#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaEventAnimationController_GEAKeyframeData.hpp"
#include "GlobalNamespace/zzzz__GorillaEventAnimationController_GEAKeyframeData_def.hpp"
#include "GlobalNamespace/zzzz__GorillaEventAnimationController_ControlledAnimationKeyframeData_def.hpp"
#include "GlobalNamespace/zzzz__GorillaEventAnimation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "gEA", ty: "::UnityW<::GlobalNamespace::GorillaEventAnimation>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "keyframeData", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData::GorillaEventAnimationController_GEAKeyframeData(::UnityW<::GlobalNamespace::GorillaEventAnimation>  gEA, ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaEventAnimationController_ControlledAnimationKeyframeData>*  keyframeData) noexcept  {
this->gEA = gEA;
this->keyframeData = keyframeData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaEventAnimationController_GEAKeyframeData::GorillaEventAnimationController_GEAKeyframeData()   {
}
