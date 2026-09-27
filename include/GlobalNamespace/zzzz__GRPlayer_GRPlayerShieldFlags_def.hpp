#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_GRPlayerShieldFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_GRPlayerShieldFlags)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_GRPlayerShieldFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_GRPlayerShieldFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_GRPlayerShieldFlags, "", "GRPlayer/GRPlayerShieldFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/GRPlayerShieldFlags
struct CORDL_TYPE GRPlayer_GRPlayerShieldFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRPlayer_GRPlayerShieldFlags_Unwrapped
enum struct __GRPlayer_GRPlayerShieldFlags_Unwrapped : int32_t {
__E_Light = static_cast<int32_t>(0x1),
__E_Stealth = static_cast<int32_t>(0x2),
__E_Heal = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRPlayer_GRPlayerShieldFlags_Unwrapped () const noexcept {
return static_cast<__GRPlayer_GRPlayerShieldFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_GRPlayerShieldFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_GRPlayerShieldFlags(int32_t  value__) noexcept;

/// @brief Field Heal value: I32(4)
static ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags const Heal;

/// @brief Field Light value: I32(1)
static ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags const Light;

/// @brief Field Stealth value: I32(2)
static ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags const Stealth;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2000};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_GRPlayerShieldFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_GRPlayerShieldFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
