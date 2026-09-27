#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_dictCtx_directive.hpp"
#include "K4os/Compression/LZ4/Engine/zzzz__LL_dictCtx_directive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LL_dictCtx_directive::LL_dictCtx_directive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LL_dictCtx_directive::LL_dictCtx_directive()   {
}
constexpr ::GlobalNamespace::LL_dictCtx_directive  GlobalNamespace::LL_dictCtx_directive::noDictCtx{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LL_dictCtx_directive  GlobalNamespace::LL_dictCtx_directive::usingDictCtxHc{static_cast<int32_t>(0x1)};
