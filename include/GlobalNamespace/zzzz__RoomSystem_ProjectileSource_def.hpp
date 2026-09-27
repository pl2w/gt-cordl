#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_ProjectileSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem_ProjectileSource)
// Forward declare root types
namespace GlobalNamespace {
struct RoomSystem_ProjectileSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomSystem_ProjectileSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_ProjectileSource, "", "RoomSystem/ProjectileSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/ProjectileSource
struct CORDL_TYPE RoomSystem_ProjectileSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RoomSystem_ProjectileSource_Unwrapped
enum struct __RoomSystem_ProjectileSource_Unwrapped : int32_t {
__E_ProjectileWeapon = static_cast<int32_t>(0x0),
__E_LeftHand = static_cast<int32_t>(0x1),
__E_RightHand = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoomSystem_ProjectileSource_Unwrapped () const noexcept {
return static_cast<__RoomSystem_ProjectileSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_ProjectileSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RoomSystem_ProjectileSource(int32_t  value__) noexcept;

/// @brief Field LeftHand value: I32(1)
static ::GlobalNamespace::RoomSystem_ProjectileSource const LeftHand;

/// @brief Field ProjectileWeapon value: I32(0)
static ::GlobalNamespace::RoomSystem_ProjectileSource const ProjectileWeapon;

/// @brief Field RightHand value: I32(2)
static ::GlobalNamespace::RoomSystem_ProjectileSource const RightHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_ProjectileSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_ProjectileSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
