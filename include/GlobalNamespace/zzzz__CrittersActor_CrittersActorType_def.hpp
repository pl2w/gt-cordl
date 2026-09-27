#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActor_CrittersActorType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActor_CrittersActorType)
// Forward declare root types
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrittersActor_CrittersActorType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActor_CrittersActorType, "", "CrittersActor/CrittersActorType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrittersActor/CrittersActorType
struct CORDL_TYPE CrittersActor_CrittersActorType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrittersActor_CrittersActorType_Unwrapped
enum struct __CrittersActor_CrittersActorType_Unwrapped : int32_t {
__E_Creature = static_cast<int32_t>(0x0),
__E_Food = static_cast<int32_t>(0x1),
__E_LoudNoise = static_cast<int32_t>(0x2),
__E_BrightLight = static_cast<int32_t>(0x3),
__E_Darkness = static_cast<int32_t>(0x4),
__E_HidingArea = static_cast<int32_t>(0x5),
__E_Disappear = static_cast<int32_t>(0x6),
__E_Spawn = static_cast<int32_t>(0x7),
__E_Player = static_cast<int32_t>(0x8),
__E_Grabber = static_cast<int32_t>(0x9),
__E_Cage = static_cast<int32_t>(0xa),
__E_FoodSpawner = static_cast<int32_t>(0xb),
__E_AttachPoint = static_cast<int32_t>(0xc),
__E_StunBomb = static_cast<int32_t>(0xd),
__E_Bag = static_cast<int32_t>(0xe),
__E_BodyAttachPoint = static_cast<int32_t>(0xf),
__E_NoiseMaker = static_cast<int32_t>(0x10),
__E_StickyTrap = static_cast<int32_t>(0x11),
__E_StickyGoo = static_cast<int32_t>(0x12),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrittersActor_CrittersActorType_Unwrapped () const noexcept {
return static_cast<__CrittersActor_CrittersActorType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrittersActor_CrittersActorType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CrittersActor_CrittersActorType(int32_t  value__) noexcept;

/// @brief Field AttachPoint value: I32(12)
static ::GlobalNamespace::CrittersActor_CrittersActorType const AttachPoint;

/// @brief Field Bag value: I32(14)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Bag;

/// @brief Field BodyAttachPoint value: I32(15)
static ::GlobalNamespace::CrittersActor_CrittersActorType const BodyAttachPoint;

/// @brief Field BrightLight value: I32(3)
static ::GlobalNamespace::CrittersActor_CrittersActorType const BrightLight;

/// @brief Field Cage value: I32(10)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Cage;

/// @brief Field Creature value: I32(0)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Creature;

/// @brief Field Darkness value: I32(4)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Darkness;

/// @brief Field Disappear value: I32(6)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Disappear;

/// @brief Field Food value: I32(1)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Food;

/// @brief Field FoodSpawner value: I32(11)
static ::GlobalNamespace::CrittersActor_CrittersActorType const FoodSpawner;

/// @brief Field Grabber value: I32(9)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Grabber;

/// @brief Field HidingArea value: I32(5)
static ::GlobalNamespace::CrittersActor_CrittersActorType const HidingArea;

/// @brief Field LoudNoise value: I32(2)
static ::GlobalNamespace::CrittersActor_CrittersActorType const LoudNoise;

/// @brief Field NoiseMaker value: I32(16)
static ::GlobalNamespace::CrittersActor_CrittersActorType const NoiseMaker;

/// @brief Field Player value: I32(8)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Player;

/// @brief Field Spawn value: I32(7)
static ::GlobalNamespace::CrittersActor_CrittersActorType const Spawn;

/// @brief Field StickyGoo value: I32(18)
static ::GlobalNamespace::CrittersActor_CrittersActorType const StickyGoo;

/// @brief Field StickyTrap value: I32(17)
static ::GlobalNamespace::CrittersActor_CrittersActorType const StickyTrap;

/// @brief Field StunBomb value: I32(13)
static ::GlobalNamespace::CrittersActor_CrittersActorType const StunBomb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{73};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActor_CrittersActorType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActor_CrittersActorType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
