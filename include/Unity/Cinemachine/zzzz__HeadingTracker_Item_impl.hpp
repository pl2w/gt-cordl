#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HeadingTracker_Item.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__HeadingTracker_Item_def.hpp"
// Ctor Parameters [CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HeadingTracker_Item::HeadingTracker_Item(::UnityEngine::Vector3  velocity, float_t  weight, float_t  time) noexcept  {
this->velocity = velocity;
this->weight = weight;
this->time = time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadingTracker_Item::HeadingTracker_Item()   {
}
