#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyVector.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Oculus/Interaction/zzzz__MaterialPropertyVector_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::MaterialPropertyVector::MaterialPropertyVector(::StringW  name, ::UnityEngine::Vector4  value) noexcept  {
this->name = name;
this->value = value;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MaterialPropertyVector::MaterialPropertyVector()   {
}
