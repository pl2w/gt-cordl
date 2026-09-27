#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerationDeferrer_CallbackInfo.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationDeferrer_CallbackInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerationCallback_def.hpp"
// Ctor Parameters [CppParam { name: "callback", ty: "::UnityEngine::UIElements::UIR::MeshGenerationCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userData", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo::MeshGenerationDeferrer_CallbackInfo(::UnityEngine::UIElements::UIR::MeshGenerationCallback*  callback, ::System::Object*  userData) noexcept  {
this->callback = callback;
this->userData = userData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerationDeferrer_CallbackInfo::MeshGenerationDeferrer_CallbackInfo()   {
}
