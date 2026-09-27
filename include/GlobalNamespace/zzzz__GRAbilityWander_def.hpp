#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityWander.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GRAbilityWander)
namespace GlobalNamespace {
class GRAbilityMoveToTarget;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityWander;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityWander*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityWander*, "", "GRAbilityWander");
// Dependencies GRAbilityBase, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityWander
class CORDL_TYPE GRAbilityWander : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field moveAbility, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveAbility, put=__cordl_internal_set_moveAbility)) ::GlobalNamespace::GRAbilityMoveToTarget*  moveAbility;

/// @brief Field rotationWeight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rotationWeight, put=setStaticF_rotationWeight)) ::ArrayW<float_t>  rotationWeight;

/// @brief Field rotations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rotations, put=setStaticF_rotations)) ::ArrayW<::UnityEngine::Quaternion>  rotations;

/// @brief Method IsDone, addr 0x586a718, size 0x8, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityWander* New_ctor() ;

/// @brief Method OnStart, addr 0x586a404, size 0x50, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586a6e8, size 0x30, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x586a720, size 0x44, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x586a764, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586a7a8, size 0x44, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PickRandomDestination, addr 0x586a454, size 0x294, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PickRandomDestination() ;

/// @brief Method Setup, addr 0x586a394, size 0x70, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_moveAbility() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_moveAbility() ;

constexpr void __cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

/// @brief Method .ctor, addr 0x586a7ec, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_rotationWeight() ;

static inline ::ArrayW<::UnityEngine::Quaternion> getStaticF_rotations() ;

static inline void setStaticF_rotationWeight(::ArrayW<float_t>  value) ;

static inline void setStaticF_rotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityWander() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityWander", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityWander(GRAbilityWander && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityWander", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityWander(GRAbilityWander const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1857};

/// @brief Field moveAbility, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___moveAbility;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityWander, ___moveAbility) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityWander) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
