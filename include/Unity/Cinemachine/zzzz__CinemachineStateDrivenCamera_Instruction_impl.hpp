#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineStateDrivenCamera_Instruction.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineStateDrivenCamera_Instruction_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
// Ctor Parameters [CppParam { name: "FullHash", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Camera", ty: "::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ActivateAfter", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MinDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineStateDrivenCamera_Instruction::CinemachineStateDrivenCamera_Instruction(int32_t  FullHash, ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>  Camera, float_t  ActivateAfter, float_t  MinDuration) noexcept  {
this->FullHash = FullHash;
this->Camera = Camera;
this->ActivateAfter = ActivateAfter;
this->MinDuration = MinDuration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineStateDrivenCamera_Instruction::CinemachineStateDrivenCamera_Instruction()   {
}
