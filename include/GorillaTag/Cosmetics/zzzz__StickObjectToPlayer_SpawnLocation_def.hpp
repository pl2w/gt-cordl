#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickObjectToPlayer_SpawnLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StickObjectToPlayer_SpawnLocation)
// Forward declare root types
namespace GlobalNamespace {
struct StickObjectToPlayer_SpawnLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StickObjectToPlayer_SpawnLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickObjectToPlayer_SpawnLocation, "GorillaTag.Cosmetics", "StickObjectToPlayer/SpawnLocation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.StickObjectToPlayer/SpawnLocation
struct CORDL_TYPE StickObjectToPlayer_SpawnLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StickObjectToPlayer_SpawnLocation_Unwrapped
enum struct __StickObjectToPlayer_SpawnLocation_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_RightHand = static_cast<int32_t>(0x1),
__E_LeftHand = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StickObjectToPlayer_SpawnLocation_Unwrapped () const noexcept {
return static_cast<__StickObjectToPlayer_SpawnLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StickObjectToPlayer_SpawnLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StickObjectToPlayer_SpawnLocation(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::StickObjectToPlayer_SpawnLocation const Head;

/// @brief Field LeftHand value: I32(2)
static ::GlobalNamespace::StickObjectToPlayer_SpawnLocation const LeftHand;

/// @brief Field RightHand value: I32(1)
static ::GlobalNamespace::StickObjectToPlayer_SpawnLocation const RightHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4863};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickObjectToPlayer_SpawnLocation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickObjectToPlayer_SpawnLocation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
