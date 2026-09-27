#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_dict_directive.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dict_directive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_dict_directive::LL_dict_directive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_dict_directive::LL_dict_directive()   {
}
constexpr ::GlobalNamespace::LL_dict_directive  GlobalNamespace::LL_dict_directive::noDict{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_dict_directive  GlobalNamespace::LL_dict_directive::withPrefix64k{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LL_dict_directive  GlobalNamespace::LL_dict_directive::usingExtDict{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LL_dict_directive  GlobalNamespace::LL_dict_directive::usingDictCtx{static_cast<int32_t>(0x3)};
