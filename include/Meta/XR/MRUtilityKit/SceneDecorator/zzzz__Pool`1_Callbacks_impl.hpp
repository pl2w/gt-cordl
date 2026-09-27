#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Pool`1_Callbacks.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "Create", ty: "::System::Func_2<T,T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnGet", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OnRelease", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Callbacks<T>::Pool_1_Callbacks(::System::Func_2<T,T>*  Create, ::System::Action_1<T>*  OnGet, ::System::Action_1<T>*  OnRelease) noexcept  {
this->Create = Create;
this->OnGet = OnGet;
this->OnRelease = OnRelease;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Pool_1_Callbacks<T>::Pool_1_Callbacks()   {
}
