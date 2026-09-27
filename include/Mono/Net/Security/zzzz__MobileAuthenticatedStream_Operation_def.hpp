#pragma once
// IWYU pragma private; include "Mono/Net/Security/MobileAuthenticatedStream_Operation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileAuthenticatedStream_Operation)
// Forward declare root types
namespace GlobalNamespace {
struct MobileAuthenticatedStream_Operation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MobileAuthenticatedStream_Operation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MobileAuthenticatedStream_Operation, "Mono.Net.Security", "MobileAuthenticatedStream/Operation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Net.Security.MobileAuthenticatedStream/Operation
struct CORDL_TYPE MobileAuthenticatedStream_Operation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MobileAuthenticatedStream_Operation_Unwrapped
enum struct __MobileAuthenticatedStream_Operation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Handshake = static_cast<int32_t>(0x1),
__E_Authenticated = static_cast<int32_t>(0x2),
__E_Renegotiate = static_cast<int32_t>(0x3),
__E_Read = static_cast<int32_t>(0x4),
__E_Write = static_cast<int32_t>(0x5),
__E_Close = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MobileAuthenticatedStream_Operation_Unwrapped () const noexcept {
return static_cast<__MobileAuthenticatedStream_Operation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MobileAuthenticatedStream_Operation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MobileAuthenticatedStream_Operation(int32_t  value__) noexcept;

/// @brief Field Authenticated value: I32(2)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Authenticated;

/// @brief Field Close value: I32(6)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Close;

/// @brief Field Handshake value: I32(1)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Handshake;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const None;

/// @brief Field Read value: I32(4)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Read;

/// @brief Field Renegotiate value: I32(3)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Renegotiate;

/// @brief Field Write value: I32(5)
static ::GlobalNamespace::MobileAuthenticatedStream_Operation const Write;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MobileAuthenticatedStream_Operation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MobileAuthenticatedStream_Operation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
