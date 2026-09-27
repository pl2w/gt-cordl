#pragma once
// IWYU pragma private; include "System/Net/CredentialUse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialUse)
// Forward declare root types
namespace System::Net {
struct CredentialUse;
}
// Write type traits
MARK_VAL_T(::System::Net::CredentialUse);
DEFINE_IL2CPP_CLASS(::System::Net::CredentialUse, "System.Net", "CredentialUse");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.CredentialUse
struct CORDL_TYPE CredentialUse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CredentialUse_Unwrapped
enum struct __CredentialUse_Unwrapped : int32_t {
__E_Inbound = static_cast<int32_t>(0x1),
__E_Outbound = static_cast<int32_t>(0x2),
__E_Both = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CredentialUse_Unwrapped () const noexcept {
return static_cast<__CredentialUse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CredentialUse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CredentialUse(int32_t  value__) noexcept;

/// @brief Field Both value: I32(3)
static ::System::Net::CredentialUse const Both;

/// @brief Field Inbound value: I32(1)
static ::System::Net::CredentialUse const Inbound;

/// @brief Field Outbound value: I32(2)
static ::System::Net::CredentialUse const Outbound;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CredentialUse, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::CredentialUse) == 0x4, "Size mismatch!");

} // namespace end def System::Net
