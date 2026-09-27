#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeaderFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeaderFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderFlags, "Fusion", "NetworkObjectHeaderFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeaderFlags
struct CORDL_TYPE NetworkObjectHeaderFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectHeaderFlags_Unwrapped
enum struct __NetworkObjectHeaderFlags_Unwrapped : int32_t {
__E_GlobalObjectInterest = static_cast<int32_t>(0x1),
__E_DestroyWhenStateAuthorityLeaves = static_cast<int32_t>(0x2),
__E_SpawnedByClient = static_cast<int32_t>(0x4),
__E_AllowStateAuthorityOverride = static_cast<int32_t>(0x10),
__E_Struct = static_cast<int32_t>(0x20),
__E_StructArray = static_cast<int32_t>(0x80),
__E_DontDestroyOnLoad = static_cast<int32_t>(0x40),
__E_HasMainNetworkTRSP = static_cast<int32_t>(0x8),
__E_AreaOfInterest = static_cast<int32_t>(0x100),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectHeaderFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectHeaderFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeaderFlags(int32_t  value__) noexcept;

/// @brief Field AllowStateAuthorityOverride value: I32(16)
static ::Fusion::NetworkObjectHeaderFlags const AllowStateAuthorityOverride;

/// @brief Field AreaOfInterest value: I32(256)
static ::Fusion::NetworkObjectHeaderFlags const AreaOfInterest;

/// @brief Field DestroyWhenStateAuthorityLeaves value: I32(2)
static ::Fusion::NetworkObjectHeaderFlags const DestroyWhenStateAuthorityLeaves;

/// @brief Field DontDestroyOnLoad value: I32(64)
static ::Fusion::NetworkObjectHeaderFlags const DontDestroyOnLoad;

/// @brief Field GlobalObjectInterest value: I32(1)
static ::Fusion::NetworkObjectHeaderFlags const GlobalObjectInterest;

/// @brief Field HasMainNetworkTRSP value: I32(8)
static ::Fusion::NetworkObjectHeaderFlags const HasMainNetworkTRSP;

/// @brief Field SpawnedByClient value: I32(4)
static ::Fusion::NetworkObjectHeaderFlags const SpawnedByClient;

/// @brief Field Struct value: I32(32)
static ::Fusion::NetworkObjectHeaderFlags const Struct;

/// @brief Field StructArray value: I32(128)
static ::Fusion::NetworkObjectHeaderFlags const StructArray;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
