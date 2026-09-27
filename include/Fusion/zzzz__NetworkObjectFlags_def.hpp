#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectFlags, "Fusion", "NetworkObjectFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectFlags
struct CORDL_TYPE NetworkObjectFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectFlags_Unwrapped
enum struct __NetworkObjectFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MaskVersion = static_cast<int32_t>(0xff),
__E_V1 = static_cast<int32_t>(0x1),
__E_Ignore = static_cast<int32_t>(0x10000),
__E_MasterClientObject = static_cast<int32_t>(0x20000),
__E_DestroyWhenStateAuthorityLeaves = static_cast<int32_t>(0x40000),
__E_AllowStateAuthorityOverride = static_cast<int32_t>(0x80000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectFlags(int32_t  value__) noexcept;

/// @brief Field AllowStateAuthorityOverride value: I32(524288)
static ::Fusion::NetworkObjectFlags const AllowStateAuthorityOverride;

/// @brief Field DestroyWhenStateAuthorityLeaves value: I32(262144)
static ::Fusion::NetworkObjectFlags const DestroyWhenStateAuthorityLeaves;

/// @brief Field Ignore value: I32(65536)
static ::Fusion::NetworkObjectFlags const Ignore;

/// @brief Field MaskVersion value: I32(255)
static ::Fusion::NetworkObjectFlags const MaskVersion;

/// @brief Field MasterClientObject value: I32(131072)
static ::Fusion::NetworkObjectFlags const MasterClientObject;

/// @brief Field None value: I32(0)
static ::Fusion::NetworkObjectFlags const None;

/// @brief Field V1 value: I32(1)
static ::Fusion::NetworkObjectFlags const V1;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
