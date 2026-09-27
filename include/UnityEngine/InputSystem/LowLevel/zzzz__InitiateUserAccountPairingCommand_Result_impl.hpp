#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InitiateUserAccountPairingCommand_Result.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InitiateUserAccountPairingCommand_Result_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InitiateUserAccountPairingCommand_Result::InitiateUserAccountPairingCommand_Result(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InitiateUserAccountPairingCommand_Result::InitiateUserAccountPairingCommand_Result()   {
}
constexpr ::GlobalNamespace::InitiateUserAccountPairingCommand_Result  GlobalNamespace::InitiateUserAccountPairingCommand_Result::SuccessfullyInitiated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InitiateUserAccountPairingCommand_Result  GlobalNamespace::InitiateUserAccountPairingCommand_Result::ErrorNotSupported{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::InitiateUserAccountPairingCommand_Result  GlobalNamespace::InitiateUserAccountPairingCommand_Result::ErrorAlreadyInProgress{static_cast<int32_t>(0xfffffffe)};
