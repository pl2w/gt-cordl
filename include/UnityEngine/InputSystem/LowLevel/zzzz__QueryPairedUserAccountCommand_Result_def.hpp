#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPairedUserAccountCommand_Result)
// Forward declare root types
namespace GlobalNamespace {
struct QueryPairedUserAccountCommand_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QueryPairedUserAccountCommand_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QueryPairedUserAccountCommand_Result, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/Result");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result
struct CORDL_TYPE QueryPairedUserAccountCommand_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __QueryPairedUserAccountCommand_Result_Unwrapped
enum struct __QueryPairedUserAccountCommand_Result_Unwrapped : int64_t {
__E_DevicePairedToUserAccount = static_cast<int64_t>(0x2),
__E_UserAccountSelectionInProgress = static_cast<int64_t>(0x4),
__E_UserAccountSelectionComplete = static_cast<int64_t>(0x8),
__E_UserAccountSelectionCanceled = static_cast<int64_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __QueryPairedUserAccountCommand_Result_Unwrapped () const noexcept {
return static_cast<__QueryPairedUserAccountCommand_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QueryPairedUserAccountCommand_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr QueryPairedUserAccountCommand_Result(int64_t  value__) noexcept;

/// @brief Field DevicePairedToUserAccount value: I64(2)
static ::GlobalNamespace::QueryPairedUserAccountCommand_Result const DevicePairedToUserAccount;

/// @brief Field UserAccountSelectionCanceled value: I64(16)
static ::GlobalNamespace::QueryPairedUserAccountCommand_Result const UserAccountSelectionCanceled;

/// @brief Field UserAccountSelectionComplete value: I64(8)
static ::GlobalNamespace::QueryPairedUserAccountCommand_Result const UserAccountSelectionComplete;

/// @brief Field UserAccountSelectionInProgress value: I64(4)
static ::GlobalNamespace::QueryPairedUserAccountCommand_Result const UserAccountSelectionInProgress;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QueryPairedUserAccountCommand_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QueryPairedUserAccountCommand_Result) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
