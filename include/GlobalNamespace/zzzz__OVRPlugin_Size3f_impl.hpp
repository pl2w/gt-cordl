#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Size3f.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Size3f_def.hpp"
inline void GlobalNamespace::OVRPlugin_Size3f::setStaticF_zero(::GlobalNamespace::OVRPlugin_Size3f  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Size3f, "zero", ::GlobalNamespace::OVRPlugin_Size3f>(std::forward<::GlobalNamespace::OVRPlugin_Size3f>(value));
}
inline ::GlobalNamespace::OVRPlugin_Size3f GlobalNamespace::OVRPlugin_Size3f::getStaticF_zero()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Size3f, "zero", ::GlobalNamespace::OVRPlugin_Size3f>();
}
// Ctor Parameters [CppParam { name: "w", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "d", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Size3f::OVRPlugin_Size3f(float_t  w, float_t  h, float_t  d) noexcept  {
this->w = w;
this->h = h;
this->d = d;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Size3f::OVRPlugin_Size3f()   {
}
