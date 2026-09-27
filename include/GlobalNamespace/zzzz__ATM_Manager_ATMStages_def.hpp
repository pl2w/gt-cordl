#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager_ATMStages.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATM_Manager_ATMStages)
// Forward declare root types
namespace GlobalNamespace {
struct ATM_Manager_ATMStages;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ATM_Manager_ATMStages);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ATM_Manager_ATMStages, "", "ATM_Manager/ATMStages");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ATM_Manager/ATMStages
struct CORDL_TYPE ATM_Manager_ATMStages {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ATM_Manager_ATMStages_Unwrapped
enum struct __ATM_Manager_ATMStages_Unwrapped : int32_t {
__E_Unavailable = static_cast<int32_t>(0x0),
__E_Begin = static_cast<int32_t>(0x1),
__E_Menu = static_cast<int32_t>(0x2),
__E_Balance = static_cast<int32_t>(0x3),
__E_Choose = static_cast<int32_t>(0x4),
__E_Confirm = static_cast<int32_t>(0x5),
__E_Purchasing = static_cast<int32_t>(0x6),
__E_Success = static_cast<int32_t>(0x7),
__E_Failure = static_cast<int32_t>(0x8),
__E_SafeAccount = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ATM_Manager_ATMStages_Unwrapped () const noexcept {
return static_cast<__ATM_Manager_ATMStages_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ATM_Manager_ATMStages() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ATM_Manager_ATMStages(int32_t  value__) noexcept;

/// @brief Field Balance value: I32(3)
static ::GlobalNamespace::ATM_Manager_ATMStages const Balance;

/// @brief Field Begin value: I32(1)
static ::GlobalNamespace::ATM_Manager_ATMStages const Begin;

/// @brief Field Choose value: I32(4)
static ::GlobalNamespace::ATM_Manager_ATMStages const Choose;

/// @brief Field Confirm value: I32(5)
static ::GlobalNamespace::ATM_Manager_ATMStages const Confirm;

/// @brief Field Failure value: I32(8)
static ::GlobalNamespace::ATM_Manager_ATMStages const Failure;

/// @brief Field Menu value: I32(2)
static ::GlobalNamespace::ATM_Manager_ATMStages const Menu;

/// @brief Field Purchasing value: I32(6)
static ::GlobalNamespace::ATM_Manager_ATMStages const Purchasing;

/// @brief Field SafeAccount value: I32(9)
static ::GlobalNamespace::ATM_Manager_ATMStages const SafeAccount;

/// @brief Field Success value: I32(7)
static ::GlobalNamespace::ATM_Manager_ATMStages const Success;

/// @brief Field Unavailable value: I32(0)
static ::GlobalNamespace::ATM_Manager_ATMStages const Unavailable;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ATM_Manager_ATMStages, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ATM_Manager_ATMStages) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
