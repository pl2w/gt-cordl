#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool`1_Entry.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "t", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Entry<T>::Pool_1_Entry(bool  active, T  t) noexcept  {
this->active = active;
this->t = t;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Entry<T>::Pool_1_Entry()   {
}
