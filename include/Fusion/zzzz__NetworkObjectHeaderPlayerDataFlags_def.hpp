#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeaderPlayerDataFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectHeaderPlayerDataFlags)
// Forward declare root types
namespace Fusion {
struct NetworkObjectHeaderPlayerDataFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkObjectHeaderPlayerDataFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectHeaderPlayerDataFlags, "Fusion", "NetworkObjectHeaderPlayerDataFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectHeaderPlayerDataFlags
struct CORDL_TYPE NetworkObjectHeaderPlayerDataFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkObjectHeaderPlayerDataFlags_Unwrapped
enum struct __NetworkObjectHeaderPlayerDataFlags_Unwrapped : int32_t {
__E_InAreaOfInterest = static_cast<int32_t>(0x1),
__E_ForceInterest = static_cast<int32_t>(0x2),
__E_AllInterestFlags = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkObjectHeaderPlayerDataFlags_Unwrapped () const noexcept {
return static_cast<__NetworkObjectHeaderPlayerDataFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectHeaderPlayerDataFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectHeaderPlayerDataFlags(int32_t  value__) noexcept;

/// @brief Field AllInterestFlags value: I32(3)
static ::Fusion::NetworkObjectHeaderPlayerDataFlags const AllInterestFlags;

/// @brief Field ForceInterest value: I32(2)
static ::Fusion::NetworkObjectHeaderPlayerDataFlags const ForceInterest;

/// @brief Field InAreaOfInterest value: I32(1)
static ::Fusion::NetworkObjectHeaderPlayerDataFlags const InAreaOfInterest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19137};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkObjectHeaderPlayerDataFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkObjectHeaderPlayerDataFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion
