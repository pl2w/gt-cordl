#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostLab)
namespace GlobalNamespace {
class GhostLabReliableState;
}
namespace GlobalNamespace {
struct GhostLab_EntranceDoorsState;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostLab;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostLab*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostLab*, "", "GhostLab");
// Dependencies GhostLab::EntranceDoorsState, MonoBehaviourTick, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostLab
class CORDL_TYPE GhostLab : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using EntranceDoorsState = ::GlobalNamespace::GhostLab_EntranceDoorsState;

/// @brief Field doorMoveSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorMoveSpeed, put=__cordl_internal_set_doorMoveSpeed)) float_t  doorMoveSpeed;

/// @brief Field doorOpen, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorOpen, put=__cordl_internal_set_doorOpen)) ::ArrayW<bool>  doorOpen;

/// @brief Field doorState, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorState, put=__cordl_internal_set_doorState)) ::GlobalNamespace::GhostLab_EntranceDoorsState  doorState;

/// @brief Field doorTravelDistance, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_doorTravelDistance, put=__cordl_internal_set_doorTravelDistance)) ::UnityEngine::Vector3  doorTravelDistance;

/// @brief Field innerDoor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerDoor, put=__cordl_internal_set_innerDoor)) ::UnityW<::UnityEngine::Transform>  innerDoor;

/// @brief Field outerDoor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_outerDoor, put=__cordl_internal_set_outerDoor)) ::UnityW<::UnityEngine::Transform>  outerDoor;

/// @brief Field relState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_relState, put=__cordl_internal_set_relState)) ::UnityW<::GlobalNamespace::GhostLabReliableState>  relState;

/// @brief Field singleDoorMoveSpeed, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_singleDoorMoveSpeed, put=__cordl_internal_set_singleDoorMoveSpeed)) float_t  singleDoorMoveSpeed;

/// @brief Field singleDoorTravelDistance, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_singleDoorTravelDistance, put=__cordl_internal_set_singleDoorTravelDistance)) ::UnityEngine::Vector3  singleDoorTravelDistance;

/// @brief Field slidingDoor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_slidingDoor, put=__cordl_internal_set_slidingDoor)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  slidingDoor;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x5d0a1ec, size 0xbc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x5d0a2a8, size 0x8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method DoorButtonPress, addr 0x5d0a2b0, size 0x50, virtual false, abstract: false, final false
inline void DoorButtonPress(int32_t  buttonIndex, bool  forSingleDoor) ;

/// @brief Method IsDoorMoving, addr 0x5d09f00, size 0x2d4, virtual false, abstract: false, final false
inline bool IsDoorMoving(bool  singleDoor, int32_t  index) ;

static inline ::GlobalNamespace::GhostLab* New_ctor() ;

/// @brief Method SynchStates, addr 0x5d0b020, size 0x7c, virtual false, abstract: false, final false
inline void SynchStates() ;

/// @brief Method Tick, addr 0x5d0aae4, size 0x53c, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateDoorState, addr 0x5d0a578, size 0x1a0, virtual false, abstract: false, final false
inline void UpdateDoorState(int32_t  buttonIndex) ;

/// @brief Method UpdateEntranceDoorsState, addr 0x5d0a300, size 0x278, virtual false, abstract: false, final false
inline void UpdateEntranceDoorsState(int32_t  buttonIndex) ;

constexpr float_t const& __cordl_internal_get_doorMoveSpeed() const;

constexpr float_t& __cordl_internal_get_doorMoveSpeed() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_doorOpen() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_doorOpen() ;

constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState const& __cordl_internal_get_doorState() const;

constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState& __cordl_internal_get_doorState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_doorTravelDistance() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_doorTravelDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_innerDoor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_innerDoor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_outerDoor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_outerDoor() ;

constexpr ::UnityW<::GlobalNamespace::GhostLabReliableState> const& __cordl_internal_get_relState() const;

constexpr ::UnityW<::GlobalNamespace::GhostLabReliableState>& __cordl_internal_get_relState() ;

constexpr float_t const& __cordl_internal_get_singleDoorMoveSpeed() const;

constexpr float_t& __cordl_internal_get_singleDoorMoveSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_singleDoorTravelDistance() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_singleDoorTravelDistance() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_slidingDoor() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_slidingDoor() ;

constexpr void __cordl_internal_set_doorMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_doorOpen(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_doorState(::GlobalNamespace::GhostLab_EntranceDoorsState  value) ;

constexpr void __cordl_internal_set_doorTravelDistance(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_innerDoor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_outerDoor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_relState(::UnityW<::GlobalNamespace::GhostLabReliableState>  value) ;

constexpr void __cordl_internal_set_singleDoorMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_singleDoorTravelDistance(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_slidingDoor(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5d0b09c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostLab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostLab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostLab(GhostLab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostLab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostLab(GhostLab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{457};

/// @brief Field outerDoor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___outerDoor;

/// @brief Field innerDoor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___innerDoor;

/// @brief Field doorTravelDistance, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___doorTravelDistance;

/// @brief Field doorMoveSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___doorMoveSpeed;

/// @brief Field singleDoorMoveSpeed, offset: 0x48, size: 0x4, def value: None
 float_t  ___singleDoorMoveSpeed;

/// @brief Field doorState, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::GhostLab_EntranceDoorsState  ___doorState;

/// @brief Field relState, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostLabReliableState>  ___relState;

/// @brief Field slidingDoor, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___slidingDoor;

/// @brief Field singleDoorTravelDistance, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___singleDoorTravelDistance;

/// @brief Field doorOpen, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<bool>  ___doorOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostLab, ___outerDoor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___innerDoor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___doorTravelDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___doorMoveSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___singleDoorMoveSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___doorState) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___relState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___slidingDoor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___singleDoorTravelDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostLab, ___doorOpen) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostLab) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
