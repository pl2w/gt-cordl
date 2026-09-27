#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyColor.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyColor_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::MaterialPropertyColor::MaterialPropertyColor(::StringW  name, ::UnityEngine::Color  value) noexcept  {
this->name = name;
this->value = value;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MaterialPropertyColor::MaterialPropertyColor()   {
}
