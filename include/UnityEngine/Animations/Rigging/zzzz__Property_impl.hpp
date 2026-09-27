#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/Property.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__PropertyDescriptor_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Property_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "descriptor", ty: "::UnityEngine::Animations::Rigging::PropertyDescriptor", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::Property::Property(::StringW  name, ::UnityEngine::Animations::Rigging::PropertyDescriptor  descriptor) noexcept  {
this->name = name;
this->descriptor = descriptor;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::Property::Property()   {
}
