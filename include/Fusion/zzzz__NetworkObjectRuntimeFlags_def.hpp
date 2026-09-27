#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectRuntimeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectRuntimeFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectRuntimeFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectRuntimeFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectRuntimeFlags, "Fusion", "NetworkObjectRuntimeFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectRuntimeFlags
struct CORDL_TYPE NetworkObjectRuntimeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectRuntimeFlags_Unwrapped
enum struct __NetworkObjectRuntimeFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HadAwake = static_cast<int32_t>(0x1),
__E_IsDestroyed = static_cast<int32_t>(0x2),
__E_IsNested = static_cast<int32_t>(0x4),
__E_NotAwakeWhenAttaching = static_cast<int32_t>(0x2000),
__E_ClearMask = static_cast<int32_t>(0xfff0000),
__E_InSimulation = static_cast<int32_t>(0x10000),
__E_PreexistingObject = static_cast<int32_t>(0x20000),
__E_AttachOptionLocalSpawn = static_cast<int32_t>(0x100000),
__E_Spawned = static_cast<int32_t>(0x800000),
__E_OwnsNestedObjects = static_cast<int32_t>(0x1000000),
__E_HasMainNetworkTRSP = static_cast<int32_t>(0x4000000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectRuntimeFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectRuntimeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectRuntimeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectRuntimeFlags(int32_t  value__) noexcept;

/// @brief Field AttachOptionLocalSpawn value: I32(1048576)
static ::Fusion::NetworkObjectRuntimeFlags const AttachOptionLocalSpawn;

/// @brief Field ClearMask value: I32(268369920)
static ::Fusion::NetworkObjectRuntimeFlags const ClearMask;

/// @brief Field HadAwake value: I32(1)
static ::Fusion::NetworkObjectRuntimeFlags const HadAwake;

/// @brief Field HasMainNetworkTRSP value: I32(67108864)
static ::Fusion::NetworkObjectRuntimeFlags const HasMainNetworkTRSP;

/// @brief Field InSimulation value: I32(65536)
static ::Fusion::NetworkObjectRuntimeFlags const InSimulation;

/// @brief Field IsDestroyed value: I32(2)
static ::Fusion::NetworkObjectRuntimeFlags const IsDestroyed;

/// @brief Field IsNested value: I32(4)
static ::Fusion::NetworkObjectRuntimeFlags const IsNested;

/// @brief Field None value: I32(0)
static ::Fusion::NetworkObjectRuntimeFlags const None;

/// @brief Field NotAwakeWhenAttaching value: I32(8192)
static ::Fusion::NetworkObjectRuntimeFlags const NotAwakeWhenAttaching;

/// @brief Field OwnsNestedObjects value: I32(16777216)
static ::Fusion::NetworkObjectRuntimeFlags const OwnsNestedObjects;

/// @brief Field PreexistingObject value: I32(131072)
static ::Fusion::NetworkObjectRuntimeFlags const PreexistingObject;

/// @brief Field Spawned value: I32(8388608)
static ::Fusion::NetworkObjectRuntimeFlags const Spawned;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectRuntimeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectRuntimeFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
