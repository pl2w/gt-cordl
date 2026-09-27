#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Boundsf.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Size3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Boundsf_def.hpp"
// Ctor Parameters [CppParam { name: "Pos", ty: "::GlobalNamespace::OVRPlugin_Vector3f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "::GlobalNamespace::OVRPlugin_Size3f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Boundsf::OVRPlugin_Boundsf(::GlobalNamespace::OVRPlugin_Vector3f  Pos, ::GlobalNamespace::OVRPlugin_Size3f  Size) noexcept  {
this->Pos = Pos;
this->Size = Size;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Boundsf::OVRPlugin_Boundsf()   {
}
