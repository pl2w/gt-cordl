#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_OperationPhase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement_OperationPhase)
// Forward declare root types
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModInstallationManagement_OperationPhase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModInstallationManagement_OperationPhase, "Modio", "ModInstallationManagement/OperationPhase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/OperationPhase
struct CORDL_TYPE ModInstallationManagement_OperationPhase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModInstallationManagement_OperationPhase_Unwrapped
enum struct __ModInstallationManagement_OperationPhase_Unwrapped : int32_t {
__E_Checking = static_cast<int32_t>(0x0),
__E_Started = static_cast<int32_t>(0x1),
__E_Completed = static_cast<int32_t>(0x2),
__E_Cancelled = static_cast<int32_t>(0x3),
__E_Failed = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModInstallationManagement_OperationPhase_Unwrapped () const noexcept {
return static_cast<__ModInstallationManagement_OperationPhase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_OperationPhase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModInstallationManagement_OperationPhase(int32_t  value__) noexcept;

/// @brief Field Cancelled value: I32(3)
static ::GlobalNamespace::ModInstallationManagement_OperationPhase const Cancelled;

/// @brief Field Checking value: I32(0)
static ::GlobalNamespace::ModInstallationManagement_OperationPhase const Checking;

/// @brief Field Completed value: I32(2)
static ::GlobalNamespace::ModInstallationManagement_OperationPhase const Completed;

/// @brief Field Failed value: I32(4)
static ::GlobalNamespace::ModInstallationManagement_OperationPhase const Failed;

/// @brief Field Started value: I32(1)
static ::GlobalNamespace::ModInstallationManagement_OperationPhase const Started;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17474};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModInstallationManagement_OperationPhase, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModInstallationManagement_OperationPhase) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
