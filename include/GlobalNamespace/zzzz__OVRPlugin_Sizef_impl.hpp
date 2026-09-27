#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Sizef.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizef_def.hpp"
inline void GlobalNamespace::OVRPlugin_Sizef::setStaticF_zero(::GlobalNamespace::OVRPlugin_Sizef  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Sizef, "zero", ::GlobalNamespace::OVRPlugin_Sizef>(std::forward<::GlobalNamespace::OVRPlugin_Sizef>(value));
}
inline ::GlobalNamespace::OVRPlugin_Sizef GlobalNamespace::OVRPlugin_Sizef::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Sizef, "zero", ::GlobalNamespace::OVRPlugin_Sizef>();
}
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Sizef::OVRPlugin_Sizef(float_t  w, float_t  h) noexcept  {
this->w = w;
this->h = h;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Sizef::OVRPlugin_Sizef()   {
}
