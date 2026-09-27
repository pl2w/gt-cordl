#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ChannelBindingKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelBindingKind)
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
struct ChannelBindingKind;
}
// Write type traits
MARK_VAL_T(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind);
DEFINE_IL2CPP_CLASS(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind, "System.Security.Authentication.ExtendedProtection", "ChannelBindingKind");
// Dependencies 
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: true
// CS Name: System.Security.Authentication.ExtendedProtection.ChannelBindingKind
struct CORDL_TYPE ChannelBindingKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChannelBindingKind_Unwrapped
enum struct __ChannelBindingKind_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Unique = static_cast<int32_t>(0x19),
__E_Endpoint = static_cast<int32_t>(0x1a),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChannelBindingKind_Unwrapped () const noexcept {
return static_cast<__ChannelBindingKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChannelBindingKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChannelBindingKind(int32_t  value__) noexcept;

/// @brief Field Endpoint value: I32(26)
static ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind const Endpoint;

/// @brief Field Unique value: I32(25)
static ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind const Unique;

/// @brief Field Unknown value: I32(0)
static ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind) == 0x4, "Size mismatch!");

} // namespace end def System::Security::Authentication::ExtendedProtection
