#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/QueryParams.hpp"
#include "Fusion/zzzz__HitOptions_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__PreProcessingDelegate_def.hpp"
// Ctor Parameters [CppParam { name: "Options", ty: "::Fusion::HitOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TriggerInteraction", ty: "::UnityEngine::QueryTriggerInteraction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LayerMask", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Player", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TickTo", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alpha", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PreProcessingDelegate", ty: "::Fusion::LagCompensation::PreProcessingDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserArgs", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::QueryParams::QueryParams(::Fusion::HitOptions  Options, ::UnityEngine::QueryTriggerInteraction  TriggerInteraction, ::UnityEngine::LayerMask  LayerMask, ::Fusion::PlayerRef  Player, int32_t  Tick, ::System::Nullable_1<int32_t>  TickTo, ::System::Nullable_1<float_t>  Alpha, ::Fusion::LagCompensation::PreProcessingDelegate*  PreProcessingDelegate, void*  UserArgs) noexcept  {
this->Options = Options;
this->TriggerInteraction = TriggerInteraction;
this->LayerMask = LayerMask;
this->Player = Player;
this->Tick = Tick;
this->TickTo = TickTo;
this->Alpha = Alpha;
this->PreProcessingDelegate = PreProcessingDelegate;
this->UserArgs = UserArgs;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::QueryParams::QueryParams()   {
}
