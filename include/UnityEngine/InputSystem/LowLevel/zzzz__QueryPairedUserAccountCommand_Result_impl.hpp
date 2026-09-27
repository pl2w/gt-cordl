#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand_Result.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result::QueryPairedUserAccountCommand_Result(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result::QueryPairedUserAccountCommand_Result()   {
}
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result  GlobalNamespace::QueryPairedUserAccountCommand_Result::DevicePairedToUserAccount{static_cast<int64_t>(0x2)};
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result  GlobalNamespace::QueryPairedUserAccountCommand_Result::UserAccountSelectionInProgress{static_cast<int64_t>(0x4)};
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result  GlobalNamespace::QueryPairedUserAccountCommand_Result::UserAccountSelectionComplete{static_cast<int64_t>(0x8)};
constexpr ::GlobalNamespace::QueryPairedUserAccountCommand_Result  GlobalNamespace::QueryPairedUserAccountCommand_Result::UserAccountSelectionCanceled{static_cast<int64_t>(0x10)};
