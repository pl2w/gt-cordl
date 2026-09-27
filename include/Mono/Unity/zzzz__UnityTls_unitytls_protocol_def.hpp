#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_protocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_protocol)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_protocol;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_protocol);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_protocol, "Mono.Unity", "UnityTls/unitytls_protocol");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_protocol
struct CORDL_TYPE UnityTls_unitytls_protocol {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __UnityTls_unitytls_protocol_Unwrapped
enum struct __UnityTls_unitytls_protocol_Unwrapped : uint32_t {
__E_UNITYTLS_PROTOCOL_TLS_1_0 = static_cast<uint32_t>(0x0u),
__E_UNITYTLS_PROTOCOL_TLS_1_1 = static_cast<uint32_t>(0x1u),
__E_UNITYTLS_PROTOCOL_TLS_1_2 = static_cast<uint32_t>(0x2u),
__E_UNITYTLS_PROTOCOL_INVALID = static_cast<uint32_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTls_unitytls_protocol_Unwrapped () const noexcept {
return static_cast<__UnityTls_unitytls_protocol_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_protocol() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_protocol(uint32_t  value__) noexcept;

/// @brief Field UNITYTLS_PROTOCOL_INVALID value: U32(3)
static ::GlobalNamespace::UnityTls_unitytls_protocol const UNITYTLS_PROTOCOL_INVALID;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_0 value: U32(0)
static ::GlobalNamespace::UnityTls_unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_0;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_1 value: U32(1)
static ::GlobalNamespace::UnityTls_unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_1;

/// @brief Field UNITYTLS_PROTOCOL_TLS_1_2 value: U32(2)
static ::GlobalNamespace::UnityTls_unitytls_protocol const UNITYTLS_PROTOCOL_TLS_1_2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_protocol, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_protocol) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
