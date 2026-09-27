#pragma once
// IWYU pragma private; include "Mono/RuntimeStructs_GenericParamInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Mono/zzzz__RuntimeStructs_GenericParamInfo_def.hpp"
#include "Mono/zzzz__RuntimeStructs_MonoClass_def.hpp"
// Ctor Parameters [CppParam { name: "pklass", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "constraints", ty: "::GlobalNamespace::RuntimeStructs_MonoClass*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RuntimeStructs_GenericParamInfo::RuntimeStructs_GenericParamInfo(::GlobalNamespace::RuntimeStructs_MonoClass*  pklass, ::System::IntPtr  name, uint16_t  flags, uint32_t  token, ::GlobalNamespace::RuntimeStructs_MonoClass*  constraints) noexcept  {
this->pklass = pklass;
this->name = name;
this->flags = flags;
this->token = token;
this->constraints = constraints;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RuntimeStructs_GenericParamInfo::RuntimeStructs_GenericParamInfo()   {
}
