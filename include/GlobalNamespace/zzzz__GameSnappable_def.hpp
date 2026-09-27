#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameSnappable)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameSnappable_SnapJointOffset;
}
namespace GlobalNamespace {
struct SnapJointType;
}
namespace GlobalNamespace {
class SuperInfectionSnapPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSnappable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSnappable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSnappable*, "", "GameSnappable");
// Dependencies SnapJointType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSnappable
class CORDL_TYPE GameSnappable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SnapJointOffset = ::GlobalNamespace::GameSnappable_SnapJointOffset;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field snapHaptic, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapHaptic, put=__cordl_internal_set_snapHaptic)) ::GlobalNamespace::AbilityHaptic*  snapHaptic;

/// @brief Field snapLocationTypes, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapLocationTypes, put=__cordl_internal_set_snapLocationTypes)) ::GlobalNamespace::SnapJointType  snapLocationTypes;

/// @brief Field snapOffsets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapOffsets, put=__cordl_internal_set_snapOffsets)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*  snapOffsets;

/// @brief Field snapRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapRadius, put=__cordl_internal_set_snapRadius)) float_t  snapRadius;

/// @brief Field snapSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapSound, put=__cordl_internal_set_snapSound)) ::GlobalNamespace::AbilitySound*  snapSound;

/// @brief Field snappedToJoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_snappedToJoint, put=__cordl_internal_set_snappedToJoint)) ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  snappedToJoint;

/// @brief Field unsnapSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsnapSound, put=__cordl_internal_set_unsnapSound)) ::GlobalNamespace::AbilitySound*  unsnapSound;

/// @brief Method Awake, addr 0x5841698, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BestSnapPoint, addr 0x583f55c, size 0x780, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> BestSnapPoint() ;

/// @brief Method BestSnapPointDock, addr 0x5841900, size 0x364, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId BestSnapPointDock() ;

/// @brief Method CanGrabWithHand, addr 0x5841c64, size 0xb4, virtual false, abstract: false, final false
inline bool CanGrabWithHand(bool  leftHand) ;

/// @brief Method GetJointToSnapIndex, addr 0x5841eb8, size 0x1c, virtual false, abstract: false, final false
static inline int32_t GetJointToSnapIndex(::GlobalNamespace::SnapJointType  jointType) ;

/// @brief Method GetSnapIndexToJoint, addr 0x5841ed4, size 0x18, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SnapJointType GetSnapIndexToJoint(int32_t  snapIndex) ;

/// @brief Method GetSnapOffset, addr 0x584169c, size 0x204, virtual false, abstract: false, final false
inline void GetSnapOffset(::GlobalNamespace::SnapJointType  jointType, ::by_ref<::UnityEngine::Vector3>  positionOffset, ::by_ref<::UnityEngine::Quaternion>  rotationOffset) ;

/// @brief Method IsSnappedToLeftArm, addr 0x5841d50, size 0x90, virtual false, abstract: false, final false
inline bool IsSnappedToLeftArm() ;

/// @brief Method IsSnappedToRightArm, addr 0x5841de0, size 0x90, virtual false, abstract: false, final false
inline bool IsSnappedToRightArm() ;

static inline ::GlobalNamespace::GameSnappable* New_ctor() ;

/// @brief Method OnSnap, addr 0x5841d18, size 0x38, virtual false, abstract: false, final false
inline void OnSnap() ;

/// @brief Method OnUnsnap, addr 0x5841e70, size 0x1c, virtual false, abstract: false, final false
inline void OnUnsnap() ;

/// @brief Method TryGetJointToSnapIndex, addr 0x5841e8c, size 0x2c, virtual false, abstract: false, final false
static inline bool TryGetJointToSnapIndex(::GlobalNamespace::SnapJointType  jointType, ::by_ref<int32_t>  out_slot) ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_snapHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_snapHaptic() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get_snapLocationTypes() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get_snapLocationTypes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>* const& __cordl_internal_get_snapOffsets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*& __cordl_internal_get_snapOffsets() ;

constexpr float_t const& __cordl_internal_get_snapRadius() const;

constexpr float_t& __cordl_internal_get_snapRadius() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_snapSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_snapSound() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> const& __cordl_internal_get_snappedToJoint() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>& __cordl_internal_get_snappedToJoint() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_unsnapSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_unsnapSound() ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_snapHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_snapLocationTypes(::GlobalNamespace::SnapJointType  value) ;

constexpr void __cordl_internal_set_snapOffsets(::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*  value) ;

constexpr void __cordl_internal_set_snapRadius(float_t  value) ;

constexpr void __cordl_internal_set_snapSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_snappedToJoint(::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  value) ;

constexpr void __cordl_internal_set_unsnapSound(::GlobalNamespace::AbilitySound*  value) ;

/// @brief Method .ctor, addr 0x5841eec, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameSnappable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameSnappable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameSnappable(GameSnappable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameSnappable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameSnappable(GameSnappable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1794};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field snapRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___snapRadius;

/// @brief Field snappedToJoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>  ___snappedToJoint;

/// @brief Field snapSound, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___snapSound;

/// @brief Field unsnapSound, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___unsnapSound;

/// @brief Field snapHaptic, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___snapHaptic;

/// @brief Field snapLocationTypes, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  ___snapLocationTypes;

/// @brief Field snapOffsets, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameSnappable_SnapJointOffset>*  ___snapOffsets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSnappable, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snapRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snappedToJoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snapSound) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___unsnapSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snapHaptic) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snapLocationTypes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable, ___snapOffsets) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSnappable) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
