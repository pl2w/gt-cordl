#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyProjectile_StickFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StickyProjectile_StickFlags)
// Forward declare root types
namespace GlobalNamespace {
struct StickyProjectile_StickFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StickyProjectile_StickFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyProjectile_StickFlags, "", "StickyProjectile/StickFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: StickyProjectile/StickFlags
struct CORDL_TYPE StickyProjectile_StickFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StickyProjectile_StickFlags_Unwrapped
enum struct __StickyProjectile_StickFlags_Unwrapped : int32_t {
__E_Wall = static_cast<int32_t>(0x1),
__E_LocalPlayer = static_cast<int32_t>(0x2),
__E_RemotePlayer = static_cast<int32_t>(0x4),
__E_LocalHeadZone = static_cast<int32_t>(0x8),
__E_RemoteHeadZone = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StickyProjectile_StickFlags_Unwrapped () const noexcept {
return static_cast<__StickyProjectile_StickFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StickyProjectile_StickFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StickyProjectile_StickFlags(int32_t  value__) noexcept;

/// @brief Field LocalHeadZone value: I32(8)
static ::GlobalNamespace::StickyProjectile_StickFlags const LocalHeadZone;

/// @brief Field LocalPlayer value: I32(2)
static ::GlobalNamespace::StickyProjectile_StickFlags const LocalPlayer;

/// @brief Field RemoteHeadZone value: I32(16)
static ::GlobalNamespace::StickyProjectile_StickFlags const RemoteHeadZone;

/// @brief Field RemotePlayer value: I32(4)
static ::GlobalNamespace::StickyProjectile_StickFlags const RemotePlayer;

/// @brief Field Wall value: I32(1)
static ::GlobalNamespace::StickyProjectile_StickFlags const Wall;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyProjectile_StickFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyProjectile_StickFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
