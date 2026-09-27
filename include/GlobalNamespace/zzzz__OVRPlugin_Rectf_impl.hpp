#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Rectf.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Rectf_def.hpp"
// Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "::GlobalNamespace::OVRPlugin_Sizef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Rectf::OVRPlugin_Rectf(::GlobalNamespace::OVRPlugin_Vector2f  Pos, ::GlobalNamespace::OVRPlugin_Sizef  Size) noexcept  {
this->Pos = Pos;
this->Size = Size;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Rectf::OVRPlugin_Rectf()   {
}
