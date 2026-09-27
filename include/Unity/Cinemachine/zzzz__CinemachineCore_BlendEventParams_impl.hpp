#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore_BlendEventParams.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_BlendEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
// Ctor Parameters [CppParam { name: "Origin", ty: "::Unity::Cinemachine::ICinemachineMixer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Blend", ty: "::Unity::Cinemachine::CinemachineBlend*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineCore_BlendEventParams::CinemachineCore_BlendEventParams(::Unity::Cinemachine::ICinemachineMixer*  Origin, ::Unity::Cinemachine::CinemachineBlend*  Blend) noexcept  {
this->Origin = Origin;
this->Blend = Blend;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineCore_BlendEventParams::CinemachineCore_BlendEventParams()   {
}
