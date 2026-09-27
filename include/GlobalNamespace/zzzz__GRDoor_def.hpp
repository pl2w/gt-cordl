#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRDoor_DoorState_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRDoor)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
struct GRDoor_DoorState;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDoor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDoor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDoor*, "", "GRDoor");
// Dependencies GRDoor::DoorState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDoor
class CORDL_TYPE GRDoor : public ::System::Object {
public:
// Declarations
using DoorState = ::GlobalNamespace::GRDoor_DoorState;

/// @brief Field animation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_animation, put=__cordl_internal_set_animation)) ::UnityW<::UnityEngine::Animation>  animation;

/// @brief Field closeAnim, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeAnim, put=__cordl_internal_set_closeAnim)) ::UnityW<::UnityEngine::AnimationClip>  closeAnim;

/// @brief Field closeDoorSound, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeDoorSound, put=__cordl_internal_set_closeDoorSound)) ::GlobalNamespace::AbilitySound*  closeDoorSound;

/// @brief Field doorState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorState, put=__cordl_internal_set_doorState)) ::GlobalNamespace::GRDoor_DoorState  doorState;

/// @brief Field openAnim, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_openAnim, put=__cordl_internal_set_openAnim)) ::UnityW<::UnityEngine::AnimationClip>  openAnim;

/// @brief Field openDoorSound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_openDoorSound, put=__cordl_internal_set_openDoorSound)) ::GlobalNamespace::AbilitySound*  openDoorSound;

static inline ::GlobalNamespace::GRDoor* New_ctor() ;

/// @brief Method SetDoorState, addr 0x58b4844, size 0x90, virtual false, abstract: false, final false
inline void SetDoorState(::GlobalNamespace::GRDoor_DoorState  newState) ;

/// @brief Method Setup, addr 0x58b483c, size 0x8, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_animation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_animation() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_closeAnim() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_closeAnim() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_closeDoorSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_closeDoorSound() ;

constexpr ::GlobalNamespace::GRDoor_DoorState const& __cordl_internal_get_doorState() const;

constexpr ::GlobalNamespace::GRDoor_DoorState& __cordl_internal_get_doorState() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_openAnim() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_openAnim() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_openDoorSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_openDoorSound() ;

constexpr void __cordl_internal_set_animation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_closeAnim(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_closeDoorSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_doorState(::GlobalNamespace::GRDoor_DoorState  value) ;

constexpr void __cordl_internal_set_openAnim(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_openDoorSound(::GlobalNamespace::AbilitySound*  value) ;

/// @brief Method .ctor, addr 0x58b48d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDoor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDoor(GRDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDoor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDoor(GRDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2041};

/// @brief Field doorState, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GRDoor_DoorState  ___doorState;

/// @brief Field animation, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___animation;

/// @brief Field openAnim, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___openAnim;

/// @brief Field closeAnim, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___closeAnim;

/// @brief Field openDoorSound, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___openDoorSound;

/// @brief Field closeDoorSound, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___closeDoorSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDoor, ___doorState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDoor, ___animation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDoor, ___openAnim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDoor, ___closeAnim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDoor, ___openDoorSound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDoor, ___closeDoorSound) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDoor) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
