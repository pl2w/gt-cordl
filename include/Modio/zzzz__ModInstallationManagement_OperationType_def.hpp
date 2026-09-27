#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_OperationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement_OperationType)
// Forward declare root types
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModInstallationManagement_OperationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModInstallationManagement_OperationType, "Modio", "ModInstallationManagement/OperationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/OperationType
struct CORDL_TYPE ModInstallationManagement_OperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModInstallationManagement_OperationType_Unwrapped
enum struct __ModInstallationManagement_OperationType_Unwrapped : int32_t {
__E_Download = static_cast<int32_t>(0x0),
__E_Install = static_cast<int32_t>(0x1),
__E_Update = static_cast<int32_t>(0x2),
__E_Uninstall = static_cast<int32_t>(0x3),
__E_Validate = static_cast<int32_t>(0x4),
__E_Scan = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModInstallationManagement_OperationType_Unwrapped () const noexcept {
return static_cast<__ModInstallationManagement_OperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_OperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModInstallationManagement_OperationType(int32_t  value__) noexcept;

/// @brief Field Download value: I32(0)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Download;

/// @brief Field Install value: I32(1)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Install;

/// @brief Field Scan value: I32(5)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Scan;

/// @brief Field Uninstall value: I32(3)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Uninstall;

/// @brief Field Update value: I32(2)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Update;

/// @brief Field Validate value: I32(4)
static ::GlobalNamespace::ModInstallationManagement_OperationType const Validate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModInstallationManagement_OperationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModInstallationManagement_OperationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
