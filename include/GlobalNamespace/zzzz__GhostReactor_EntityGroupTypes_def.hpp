#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor_EntityGroupTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactor_EntityGroupTypes)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactor_EntityGroupTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactor_EntityGroupTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_EntityGroupTypes, "", "GhostReactor/EntityGroupTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactor/EntityGroupTypes
struct CORDL_TYPE GhostReactor_EntityGroupTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactor_EntityGroupTypes_Unwrapped
enum struct __GhostReactor_EntityGroupTypes_Unwrapped : int32_t {
__E_EnemyChaser = static_cast<int32_t>(0x0),
__E_EnemyChaserArmored = static_cast<int32_t>(0x1),
__E_EnemyRanged = static_cast<int32_t>(0x2),
__E_EnemyRangedArmored = static_cast<int32_t>(0x3),
__E_CollectibleFlower = static_cast<int32_t>(0x4),
__E_BarrierEnergyCostGate = static_cast<int32_t>(0x5),
__E_BarrierSpectralWall = static_cast<int32_t>(0x6),
__E_HazardSpectralLiquid = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactor_EntityGroupTypes_Unwrapped () const noexcept {
return static_cast<__GhostReactor_EntityGroupTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_EntityGroupTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactor_EntityGroupTypes(int32_t  value__) noexcept;

/// @brief Field BarrierEnergyCostGate value: I32(5)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const BarrierEnergyCostGate;

/// @brief Field BarrierSpectralWall value: I32(6)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const BarrierSpectralWall;

/// @brief Field CollectibleFlower value: I32(4)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const CollectibleFlower;

/// @brief Field EnemyChaser value: I32(0)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const EnemyChaser;

/// @brief Field EnemyChaserArmored value: I32(1)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const EnemyChaserArmored;

/// @brief Field EnemyRanged value: I32(2)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const EnemyRanged;

/// @brief Field EnemyRangedArmored value: I32(3)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const EnemyRangedArmored;

/// @brief Field HazardSpectralLiquid value: I32(7)
static ::GlobalNamespace::GhostReactor_EntityGroupTypes const HazardSpectralLiquid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1801};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_EntityGroupTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_EntityGroupTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
