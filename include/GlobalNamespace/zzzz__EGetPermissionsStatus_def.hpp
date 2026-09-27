#pragma once
// IWYU pragma private; include "GlobalNamespace/EGetPermissionsStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EGetPermissionsStatus)
// Forward declare root types
namespace GlobalNamespace {
struct EGetPermissionsStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EGetPermissionsStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EGetPermissionsStatus, "", "EGetPermissionsStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EGetPermissionsStatus
struct CORDL_TYPE EGetPermissionsStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EGetPermissionsStatus_Unwrapped
enum struct __EGetPermissionsStatus_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_GetPermission = static_cast<int32_t>(0x1),
__E_RequestingPermission = static_cast<int32_t>(0x2),
__E_RequestedPermission = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EGetPermissionsStatus_Unwrapped () const noexcept {
return static_cast<__EGetPermissionsStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EGetPermissionsStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EGetPermissionsStatus(int32_t  value__) noexcept;

/// @brief Field GetPermission value: I32(1)
static ::GlobalNamespace::EGetPermissionsStatus const GetPermission;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EGetPermissionsStatus const None;

/// @brief Field RequestedPermission value: I32(3)
static ::GlobalNamespace::EGetPermissionsStatus const RequestedPermission;

/// @brief Field RequestingPermission value: I32(2)
static ::GlobalNamespace::EGetPermissionsStatus const RequestingPermission;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EGetPermissionsStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EGetPermissionsStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
