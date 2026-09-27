#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigProperties.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigProperties_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
inline void UnityEngine::Animations::Rigging::RigProperties::setStaticF_s_Weight(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "s_Weight", ::UnityEngine::Animations::Rigging::RigProperties>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Animations::Rigging::RigProperties::getStaticF_s_Weight()  {
return ::cordl_internals::getStaticField<::StringW, "s_Weight", ::UnityEngine::Animations::Rigging::RigProperties>();
}
// Ctor Parameters [CppParam { name: "component", ty: "::UnityW<::UnityEngine::Component>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Animations::Rigging::RigProperties::RigProperties(::UnityW<::UnityEngine::Component>  component) noexcept  {
this->component = component;
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigProperties::RigProperties()   {
}
