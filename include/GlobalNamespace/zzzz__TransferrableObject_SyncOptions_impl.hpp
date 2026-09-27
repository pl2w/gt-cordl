#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject_SyncOptions.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions::TransferrableObject_SyncOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions::TransferrableObject_SyncOptions()   {
}
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions  GlobalNamespace::TransferrableObject_SyncOptions::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions  GlobalNamespace::TransferrableObject_SyncOptions::Bool{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions  GlobalNamespace::TransferrableObject_SyncOptions::Int{static_cast<int32_t>(0x2)};
