#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceVisemesState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceVisemesState_def.hpp"
// Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visemes", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState::OVRPlugin_FaceVisemesState(bool  IsValid, ::ArrayW<float_t>  Visemes, double_t  Time) noexcept  {
this->IsValid = IsValid;
this->Visemes = Visemes;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FaceVisemesState::OVRPlugin_FaceVisemesState()   {
}
