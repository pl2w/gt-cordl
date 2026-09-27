#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaClimbable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaClimbable)
namespace GorillaLocomotion::Climbing {
class GorillaClimbableRef;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Climbing::GorillaClimbable*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Climbing::GorillaClimbable*, "GorillaLocomotion.Climbing", "GorillaClimbable");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaLocomotion::Climbing {
// Is value type: false
// CS Name: GorillaLocomotion.Climbing.GorillaClimbable
class CORDL_TYPE GorillaClimbable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field IsPlayerAttached, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsPlayerAttached, put=__cordl_internal_set_IsPlayerAttached)) bool  IsPlayerAttached;

/// @brief Field climbOnlyWhileSmall, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_climbOnlyWhileSmall, put=__cordl_internal_set_climbOnlyWhileSmall)) bool  climbOnlyWhileSmall;

/// @brief Field clip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Field clipOnFullRelease, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipOnFullRelease, put=__cordl_internal_set_clipOnFullRelease)) ::UnityW<::UnityEngine::AudioClip>  clipOnFullRelease;

/// @brief Field colliderCache, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderCache, put=__cordl_internal_set_colliderCache)) ::UnityW<::UnityEngine::Collider>  colliderCache;

/// @brief Field isBeingClimbed, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBeingClimbed, put=__cordl_internal_set_isBeingClimbed)) bool  isBeingClimbed;

/// @brief Field maxDistanceSnap, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceSnap, put=__cordl_internal_set_maxDistanceSnap)) float_t  maxDistanceSnap;

/// @brief Field onBeforeClimb, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBeforeClimb, put=__cordl_internal_set_onBeforeClimb)) ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*  onBeforeClimb;

/// @brief Field snapX, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapX, put=__cordl_internal_set_snapX)) bool  snapX;

/// @brief Field snapY, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapY, put=__cordl_internal_set_snapY)) bool  snapY;

/// @brief Field snapZ, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_snapZ, put=__cordl_internal_set_snapZ)) bool  snapZ;

/// @brief Method Awake, addr 0x5cf3584, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaLocomotion::Climbing::GorillaClimbable* New_ctor() ;

constexpr bool const& __cordl_internal_get_IsPlayerAttached() const;

constexpr bool& __cordl_internal_get_IsPlayerAttached() ;

constexpr bool const& __cordl_internal_get_climbOnlyWhileSmall() const;

constexpr bool& __cordl_internal_get_climbOnlyWhileSmall() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clip() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clipOnFullRelease() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clipOnFullRelease() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_colliderCache() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_colliderCache() ;

constexpr bool const& __cordl_internal_get_isBeingClimbed() const;

constexpr bool& __cordl_internal_get_isBeingClimbed() ;

constexpr float_t const& __cordl_internal_get_maxDistanceSnap() const;

constexpr float_t& __cordl_internal_get_maxDistanceSnap() ;

constexpr ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>* const& __cordl_internal_get_onBeforeClimb() const;

constexpr ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*& __cordl_internal_get_onBeforeClimb() ;

constexpr bool const& __cordl_internal_get_snapX() const;

constexpr bool& __cordl_internal_get_snapX() ;

constexpr bool const& __cordl_internal_get_snapY() const;

constexpr bool& __cordl_internal_get_snapY() ;

constexpr bool const& __cordl_internal_get_snapZ() const;

constexpr bool& __cordl_internal_get_snapZ() ;

constexpr void __cordl_internal_set_IsPlayerAttached(bool  value) ;

constexpr void __cordl_internal_set_climbOnlyWhileSmall(bool  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_clipOnFullRelease(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_colliderCache(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_isBeingClimbed(bool  value) ;

constexpr void __cordl_internal_set_maxDistanceSnap(float_t  value) ;

constexpr void __cordl_internal_set_onBeforeClimb(::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*  value) ;

constexpr void __cordl_internal_set_snapX(bool  value) ;

constexpr void __cordl_internal_set_snapY(bool  value) ;

constexpr void __cordl_internal_set_snapZ(bool  value) ;

/// @brief Method .ctor, addr 0x5cf35dc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaClimbable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaClimbable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaClimbable(GorillaClimbable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaClimbable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaClimbable(GorillaClimbable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4547};

/// @brief Field snapX, offset: 0x20, size: 0x1, def value: None
 bool  ___snapX;

/// @brief Field snapY, offset: 0x21, size: 0x1, def value: None
 bool  ___snapY;

/// @brief Field snapZ, offset: 0x22, size: 0x1, def value: None
 bool  ___snapZ;

/// @brief Field maxDistanceSnap, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxDistanceSnap;

/// @brief Field clip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___clip;

/// @brief Field clipOnFullRelease, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___clipOnFullRelease;

/// @brief Field onBeforeClimb, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*  ___onBeforeClimb;

/// @brief Field climbOnlyWhileSmall, offset: 0x40, size: 0x1, def value: None
 bool  ___climbOnlyWhileSmall;

/// @brief Field IsPlayerAttached, offset: 0x41, size: 0x1, def value: None
 bool  ___IsPlayerAttached;

/// @brief Field isBeingClimbed, offset: 0x42, size: 0x1, def value: None
 bool  ___isBeingClimbed;

/// @brief Field colliderCache, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___colliderCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___snapX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___snapY) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___snapZ) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___maxDistanceSnap) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___clip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___clipOnFullRelease) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___onBeforeClimb) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___climbOnlyWhileSmall) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___IsPlayerAttached) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___isBeingClimbed) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Climbing::GorillaClimbable, ___colliderCache) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Climbing::GorillaClimbable) == 0x50, "Size mismatch!");

} // namespace end def GorillaLocomotion::Climbing
