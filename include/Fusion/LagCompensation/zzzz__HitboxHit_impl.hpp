#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxHit.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
// Ctor Parameters [CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DebugPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DebugRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DebugTick", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Alpha", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::HitboxHit::HitboxHit(::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  Normal, float_t  Distance, ::UnityW<::Fusion::Hitbox>  Hitbox, ::UnityEngine::Vector3  DebugPosition, ::UnityEngine::Quaternion  DebugRotation, int32_t  DebugTick, float_t  Alpha) noexcept  {
this->Point = Point;
this->Normal = Normal;
this->Distance = Distance;
this->Hitbox = Hitbox;
this->DebugPosition = DebugPosition;
this->DebugRotation = DebugRotation;
this->DebugTick = DebugTick;
this->Alpha = Alpha;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::HitboxHit::HitboxHit()   {
}
