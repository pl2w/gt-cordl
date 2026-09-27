#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/ConstraintProperties.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Property_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__ConstraintProperties_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Property_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
inline void UnityEngine::Animations::Rigging::ConstraintProperties::setStaticF_s_Weight(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_Weight", ::UnityEngine::Animations::Rigging::ConstraintProperties>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Animations::Rigging::ConstraintProperties::getStaticF_s_Weight()  {
return ::cordl_internals::getStaticField<::StringW, "s_Weight", ::UnityEngine::Animations::Rigging::ConstraintProperties>();
}
// Ctor Parameters [CppParam { name: "component", ty: "::UnityW<::UnityEngine::Component>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "properties", ty: "::ArrayW<::UnityEngine::Animations::Rigging::Property>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::ConstraintProperties::ConstraintProperties(::UnityW<::UnityEngine::Component>  component, ::ArrayW<::UnityEngine::Animations::Rigging::Property>  properties) noexcept  {
this->component = component;
this->properties = properties;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::ConstraintProperties::ConstraintProperties()   {
}
