#pragma once
// IWYU pragma private; include "System/Net/NetworkAccess.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkAccess)
// Forward declare root types
namespace System::Net {
struct NetworkAccess;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkAccess);
DEFINE_IL2CPP_CLASS(::System::Net::NetworkAccess, "System.Net", "NetworkAccess");
// [Flags]
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.NetworkAccess
struct CORDL_TYPE NetworkAccess {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkAccess_Unwrapped
enum struct __NetworkAccess_Unwrapped : int32_t {
__E_Accept = static_cast<int32_t>(0x80),
__E_Connect = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkAccess_Unwrapped () const noexcept {
return static_cast<__NetworkAccess_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkAccess() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkAccess(int32_t  value__) noexcept;

/// @brief Field Accept value: I32(128)
static ::System::Net::NetworkAccess const Accept;

/// @brief Field Connect value: I32(64)
static ::System::Net::NetworkAccess const Connect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10543};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkAccess, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Net::NetworkAccess) == 0x4, "Size mismatch!");

} // namespace end def System::Net
