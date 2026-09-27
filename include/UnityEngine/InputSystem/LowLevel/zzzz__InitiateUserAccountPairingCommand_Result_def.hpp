#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InitiateUserAccountPairingCommand_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitiateUserAccountPairingCommand_Result)
// Forward declare root types
namespace GlobalNamespace {
struct InitiateUserAccountPairingCommand_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InitiateUserAccountPairingCommand_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitiateUserAccountPairingCommand_Result, "UnityEngine.InputSystem.LowLevel", "InitiateUserAccountPairingCommand/Result");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand/Result
struct CORDL_TYPE InitiateUserAccountPairingCommand_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InitiateUserAccountPairingCommand_Result_Unwrapped
enum struct __InitiateUserAccountPairingCommand_Result_Unwrapped : int32_t {
__E_SuccessfullyInitiated = static_cast<int32_t>(0x1),
__E_ErrorNotSupported = static_cast<int32_t>(0xffffffff),
__E_ErrorAlreadyInProgress = static_cast<int32_t>(0xfffffffe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InitiateUserAccountPairingCommand_Result_Unwrapped () const noexcept {
return static_cast<__InitiateUserAccountPairingCommand_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InitiateUserAccountPairingCommand_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InitiateUserAccountPairingCommand_Result(int32_t  value__) noexcept;

/// @brief Field ErrorAlreadyInProgress value: I32(-2)
static ::GlobalNamespace::InitiateUserAccountPairingCommand_Result const ErrorAlreadyInProgress;

/// @brief Field ErrorNotSupported value: I32(-1)
static ::GlobalNamespace::InitiateUserAccountPairingCommand_Result const ErrorNotSupported;

/// @brief Field SuccessfullyInitiated value: I32(1)
static ::GlobalNamespace::InitiateUserAccountPairingCommand_Result const SuccessfullyInitiated;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitiateUserAccountPairingCommand_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitiateUserAccountPairingCommand_Result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
