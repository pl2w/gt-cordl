#pragma once
// IWYU pragma private; include "Modio/Errors/ModManagementErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModManagementErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ModManagementErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ModManagementErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ModManagementErrorCode, "Modio.Errors", "ModManagementErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ModManagementErrorCode
struct CORDL_TYPE ModManagementErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ModManagementErrorCode_Unwrapped
enum struct __ModManagementErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_ALREADY_SUBSCRIBED = static_cast<int64_t>(0x3a9c),
__E_NO_PENDING_WORK = static_cast<int64_t>(0xffffffff8000004d),
__E_INSTALL_OR_UPDATE_CANCELLED = static_cast<int64_t>(0xffffffff8000004e),
__E_MOD_MANAGEMENT_DISABLED = static_cast<int64_t>(0xffffffff8000004f),
__E_MOD_MANAGEMENT_ALREADY_ENABLED = static_cast<int64_t>(0xffffffff80000050),
__E_UPLOAD_CANCELLED = static_cast<int64_t>(0xffffffff80000051),
__E_MOD_BEING_PROCESSED = static_cast<int64_t>(0xffffffff80000052),
__E_TEMP_MOD_SET_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000053),
__E_INCOMPATIBLE_DEPENDENCIES = static_cast<int64_t>(0xffffffff80000054),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModManagementErrorCode_Unwrapped () const noexcept {
return static_cast<__ModManagementErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModManagementErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModManagementErrorCode(int64_t  value__) noexcept;

/// @brief Field ALREADY_SUBSCRIBED value: I64(15004)
static ::Modio::Errors::ModManagementErrorCode const ALREADY_SUBSCRIBED;

/// @brief Field INCOMPATIBLE_DEPENDENCIES value: I64(-2147483564)
static ::Modio::Errors::ModManagementErrorCode const INCOMPATIBLE_DEPENDENCIES;

/// @brief Field INSTALL_OR_UPDATE_CANCELLED value: I64(-2147483570)
static ::Modio::Errors::ModManagementErrorCode const INSTALL_OR_UPDATE_CANCELLED;

/// @brief Field MOD_BEING_PROCESSED value: I64(-2147483566)
static ::Modio::Errors::ModManagementErrorCode const MOD_BEING_PROCESSED;

/// @brief Field MOD_MANAGEMENT_ALREADY_ENABLED value: I64(-2147483568)
static ::Modio::Errors::ModManagementErrorCode const MOD_MANAGEMENT_ALREADY_ENABLED;

/// @brief Field MOD_MANAGEMENT_DISABLED value: I64(-2147483569)
static ::Modio::Errors::ModManagementErrorCode const MOD_MANAGEMENT_DISABLED;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ModManagementErrorCode const NONE;

/// @brief Field NO_PENDING_WORK value: I64(-2147483571)
static ::Modio::Errors::ModManagementErrorCode const NO_PENDING_WORK;

/// @brief Field TEMP_MOD_SET_NOT_INITIALIZED value: I64(-2147483565)
static ::Modio::Errors::ModManagementErrorCode const TEMP_MOD_SET_NOT_INITIALIZED;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ModManagementErrorCode const UNKNOWN;

/// @brief Field UPLOAD_CANCELLED value: I64(-2147483567)
static ::Modio::Errors::ModManagementErrorCode const UPLOAD_CANCELLED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17700};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ModManagementErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ModManagementErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
