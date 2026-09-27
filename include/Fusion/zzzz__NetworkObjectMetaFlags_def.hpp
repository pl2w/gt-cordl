#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectMetaFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectMetaFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectMetaFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectMetaFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectMetaFlags, "Fusion", "NetworkObjectMetaFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectMetaFlags
struct CORDL_TYPE NetworkObjectMetaFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectMetaFlags_Unwrapped
enum struct __NetworkObjectMetaFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_InstanceWillNotBeCreated = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectMetaFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectMetaFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectMetaFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectMetaFlags(int32_t  value__) noexcept;

/// @brief Field InstanceWillNotBeCreated value: I32(1)
static ::Fusion::NetworkObjectMetaFlags const InstanceWillNotBeCreated;

/// @brief Field None value: I32(0)
static ::Fusion::NetworkObjectMetaFlags const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectMetaFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectMetaFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
