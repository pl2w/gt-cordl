#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_LuauPlayer.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Bindings_LuauPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "PlayerID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerName", ty: "::Unity::Collections::FixedString32Bytes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerMaterial", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsMasterClient", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsPCVR", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LeftHandPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RightHandPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsEntityAuthority", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HeadRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LeftHandRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RightHandRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsInVStump", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bindings_LuauPlayer::Bindings_LuauPlayer(int32_t  PlayerID, ::Unity::Collections::FixedString32Bytes  PlayerName, int32_t  PlayerMaterial, bool  IsMasterClient, ::UnityEngine::Vector3  BodyPosition, float_t  ScaleMultiplier, ::UnityEngine::Vector3  Velocity, bool  IsPCVR, ::UnityEngine::Vector3  LeftHandPosition, ::UnityEngine::Vector3  RightHandPosition, bool  IsEntityAuthority, ::UnityEngine::Quaternion  HeadRotation, ::UnityEngine::Quaternion  LeftHandRotation, ::UnityEngine::Quaternion  RightHandRotation, bool  IsInVStump) noexcept  {
this->PlayerID = PlayerID;
this->PlayerName = PlayerName;
this->PlayerMaterial = PlayerMaterial;
this->IsMasterClient = IsMasterClient;
this->BodyPosition = BodyPosition;
this->ScaleMultiplier = ScaleMultiplier;
this->Velocity = Velocity;
this->IsPCVR = IsPCVR;
this->LeftHandPosition = LeftHandPosition;
this->RightHandPosition = RightHandPosition;
this->IsEntityAuthority = IsEntityAuthority;
this->HeadRotation = HeadRotation;
this->LeftHandRotation = LeftHandRotation;
this->RightHandRotation = RightHandRotation;
this->IsInVStump = IsInVStump;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bindings_LuauPlayer::Bindings_LuauPlayer()   {
}
