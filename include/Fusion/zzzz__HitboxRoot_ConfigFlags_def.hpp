#pragma once
// IWYU pragma private; include "Fusion/HitboxRoot_ConfigFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxRoot_ConfigFlags)
// Forward declare root types
namespace GlobalNamespace {
struct HitboxRoot_ConfigFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HitboxRoot_ConfigFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitboxRoot_ConfigFlags, "Fusion", "HitboxRoot/ConfigFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.HitboxRoot/ConfigFlags
struct CORDL_TYPE HitboxRoot_ConfigFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HitboxRoot_ConfigFlags_Unwrapped
enum struct __HitboxRoot_ConfigFlags_Unwrapped : int32_t {
__E_ReinitializeHitboxesBeforeRegistration = static_cast<int32_t>(0x1),
__E_IncludeInactiveHitboxes = static_cast<int32_t>(0x2),
__E_Legacy = static_cast<int32_t>(0x1),
__E_Default = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HitboxRoot_ConfigFlags_Unwrapped () const noexcept {
return static_cast<__HitboxRoot_ConfigFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HitboxRoot_ConfigFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HitboxRoot_ConfigFlags(int32_t  value__) noexcept;

/// @brief Field Default value: I32(3)
static ::GlobalNamespace::HitboxRoot_ConfigFlags const Default;

/// @brief Field IncludeInactiveHitboxes value: I32(2)
static ::GlobalNamespace::HitboxRoot_ConfigFlags const IncludeInactiveHitboxes;

/// @brief Field Legacy value: I32(1)
static ::GlobalNamespace::HitboxRoot_ConfigFlags const Legacy;

/// @brief Field ReinitializeHitboxesBeforeRegistration value: I32(1)
static ::GlobalNamespace::HitboxRoot_ConfigFlags const ReinitializeHitboxesBeforeRegistration;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitboxRoot_ConfigFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitboxRoot_ConfigFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
