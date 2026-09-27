#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineCamera_ActivationEventParams.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
// Ctor Parameters [CppParam { name: "Origin", ty: "::Unity::Cinemachine::ICinemachineMixer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OutgoingCamera", ty: "::Unity::Cinemachine::ICinemachineCamera*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IncomingCamera", ty: "::Unity::Cinemachine::ICinemachineCamera*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsCut", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WorldUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ICinemachineCamera_ActivationEventParams::ICinemachineCamera_ActivationEventParams(::Unity::Cinemachine::ICinemachineMixer*  Origin, ::Unity::Cinemachine::ICinemachineCamera*  OutgoingCamera, ::Unity::Cinemachine::ICinemachineCamera*  IncomingCamera, bool  IsCut, ::UnityEngine::Vector3  WorldUp, float_t  DeltaTime) noexcept  {
this->Origin = Origin;
this->OutgoingCamera = OutgoingCamera;
this->IncomingCamera = IncomingCamera;
this->IsCut = IsCut;
this->WorldUp = WorldUp;
this->DeltaTime = DeltaTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ICinemachineCamera_ActivationEventParams::ICinemachineCamera_ActivationEventParams()   {
}
