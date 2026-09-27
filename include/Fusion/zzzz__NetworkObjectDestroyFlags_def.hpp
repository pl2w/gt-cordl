#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectDestroyFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectDestroyFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectDestroyFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectDestroyFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectDestroyFlags, "Fusion", "NetworkObjectDestroyFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectDestroyFlags
struct CORDL_TYPE NetworkObjectDestroyFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectDestroyFlags_Unwrapped
enum struct __NetworkObjectDestroyFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DestroyedByEngine = static_cast<int32_t>(0x1),
__E_DestroyState = static_cast<int32_t>(0x2),
__E_DestroyedByReplicator = static_cast<int32_t>(0x4),
__E_DestroyedByDespawn = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectDestroyFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectDestroyFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectDestroyFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectDestroyFlags(int32_t  value__) noexcept;

/// @brief Field DestroyState value: I32(2)
static ::Fusion::NetworkObjectDestroyFlags const DestroyState;

/// @brief Field DestroyedByDespawn value: I32(8)
static ::Fusion::NetworkObjectDestroyFlags const DestroyedByDespawn;

/// @brief Field DestroyedByEngine value: I32(1)
static ::Fusion::NetworkObjectDestroyFlags const DestroyedByEngine;

/// @brief Field DestroyedByReplicator value: I32(4)
static ::Fusion::NetworkObjectDestroyFlags const DestroyedByReplicator;

/// @brief Field None value: I32(0)
static ::Fusion::NetworkObjectDestroyFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectDestroyFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectDestroyFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
