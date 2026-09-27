#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityPatrol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "Unity/Mathematics/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityPatrol)
namespace GlobalNamespace {
class GRAbilityMoveToTarget;
}
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace UnityEngine::AI {
class NavMeshAgent;
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
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityPatrol;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityPatrol*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityPatrol*, "", "GRAbilityPatrol");
// Dependencies GRAbilityBase, Unity.Mathematics.Random, UnityEngine.AudioClip
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityPatrol
class CORDL_TYPE GRAbilityPatrol : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field ambientPatrolSounds, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientPatrolSounds, put=__cordl_internal_set_ambientPatrolSounds)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ambientPatrolSounds;

/// @brief Field ambientSoundDelayMax, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientSoundDelayMax, put=__cordl_internal_set_ambientSoundDelayMax)) double_t  ambientSoundDelayMax;

/// @brief Field ambientSoundDelayMin, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ambientSoundDelayMin, put=__cordl_internal_set_ambientSoundDelayMin)) double_t  ambientSoundDelayMin;

/// @brief Field ambientSoundVolume, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientSoundVolume, put=__cordl_internal_set_ambientSoundVolume)) float_t  ambientSoundVolume;

/// @brief Field lastPartrolAmbientSoundTime, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPartrolAmbientSoundTime, put=__cordl_internal_set_lastPartrolAmbientSoundTime)) double_t  lastPartrolAmbientSoundTime;

/// @brief Field lastStateChange, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastStateChange, put=__cordl_internal_set_lastStateChange)) double_t  lastStateChange;

/// @brief Field moveAbility, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_moveAbility, put=__cordl_internal_set_moveAbility)) ::GlobalNamespace::GRAbilityMoveToTarget*  moveAbility;

/// @brief Field navMeshAgent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_navMeshAgent, put=__cordl_internal_set_navMeshAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navMeshAgent;

/// @brief Field nextPatrolGroanTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextPatrolGroanTime, put=__cordl_internal_set_nextPatrolGroanTime)) double_t  nextPatrolGroanTime;

/// @brief Field nextPatrolNode, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPatrolNode, put=__cordl_internal_set_nextPatrolNode)) int32_t  nextPatrolNode;

/// @brief Field patrolGroanSoundDelayRandom, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolGroanSoundDelayRandom, put=__cordl_internal_set_patrolGroanSoundDelayRandom)) ::Unity::Mathematics::Random  patrolGroanSoundDelayRandom;

/// @brief Field patrolGroanSoundRandom, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolGroanSoundRandom, put=__cordl_internal_set_patrolGroanSoundRandom)) ::Unity::Mathematics::Random  patrolGroanSoundRandom;

/// @brief Field patrolPath, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) ::UnityW<::GlobalNamespace::GRPatrolPath>  patrolPath;

/// @brief Method CalculateNextPatrolGroan, addr 0x586c0b8, size 0xb4, virtual false, abstract: false, final false
inline void CalculateNextPatrolGroan() ;

/// @brief Method GetPatrolPath, addr 0x586c1ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GetPatrolPath() ;

/// @brief Method HasValidPatrolPath, addr 0x586bd3c, size 0x9c, virtual false, abstract: false, final false
inline bool HasValidPatrolPath() ;

/// @brief Method InitializeRandoms, addr 0x586bf24, size 0x58, virtual false, abstract: false, final false
inline void InitializeRandoms() ;

/// @brief Method IsDone, addr 0x586c19c, size 0x8, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityPatrol* New_ctor() ;

/// @brief Method OnStart, addr 0x586bf7c, size 0x13c, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586c16c, size 0x30, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateAuthority, addr 0x586c250, size 0x20c, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x586c45c, size 0x1c8, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayPatrolGroan, addr 0x586c1bc, size 0x94, virtual false, abstract: false, final false
inline void PlayPatrolGroan() ;

/// @brief Method SetNextPatrolNode, addr 0x586c1b4, size 0x8, virtual false, abstract: false, final false
inline void SetNextPatrolNode(int32_t  nextPatrolNode) ;

/// @brief Method SetPatrolPath, addr 0x586c1a4, size 0x8, virtual false, abstract: false, final false
inline void SetPatrolPath(::GlobalNamespace::GRPatrolPath*  patrolPath) ;

/// @brief Method Setup, addr 0x586bdd8, size 0x14c, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_ambientPatrolSounds() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_ambientPatrolSounds() ;

constexpr double_t const& __cordl_internal_get_ambientSoundDelayMax() const;

constexpr double_t& __cordl_internal_get_ambientSoundDelayMax() ;

constexpr double_t const& __cordl_internal_get_ambientSoundDelayMin() const;

constexpr double_t& __cordl_internal_get_ambientSoundDelayMin() ;

constexpr float_t const& __cordl_internal_get_ambientSoundVolume() const;

constexpr float_t& __cordl_internal_get_ambientSoundVolume() ;

constexpr double_t const& __cordl_internal_get_lastPartrolAmbientSoundTime() const;

constexpr double_t& __cordl_internal_get_lastPartrolAmbientSoundTime() ;

constexpr double_t const& __cordl_internal_get_lastStateChange() const;

constexpr double_t& __cordl_internal_get_lastStateChange() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_moveAbility() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_moveAbility() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navMeshAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navMeshAgent() ;

constexpr double_t const& __cordl_internal_get_nextPatrolGroanTime() const;

constexpr double_t& __cordl_internal_get_nextPatrolGroanTime() ;

constexpr int32_t const& __cordl_internal_get_nextPatrolNode() const;

constexpr int32_t& __cordl_internal_get_nextPatrolNode() ;

constexpr ::Unity::Mathematics::Random const& __cordl_internal_get_patrolGroanSoundDelayRandom() const;

constexpr ::Unity::Mathematics::Random& __cordl_internal_get_patrolGroanSoundDelayRandom() ;

constexpr ::Unity::Mathematics::Random const& __cordl_internal_get_patrolGroanSoundRandom() const;

constexpr ::Unity::Mathematics::Random& __cordl_internal_get_patrolGroanSoundRandom() ;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& __cordl_internal_get_patrolPath() const;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& __cordl_internal_get_patrolPath() ;

constexpr void __cordl_internal_set_ambientPatrolSounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_ambientSoundDelayMax(double_t  value) ;

constexpr void __cordl_internal_set_ambientSoundDelayMin(double_t  value) ;

constexpr void __cordl_internal_set_ambientSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_lastPartrolAmbientSoundTime(double_t  value) ;

constexpr void __cordl_internal_set_lastStateChange(double_t  value) ;

constexpr void __cordl_internal_set_moveAbility(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_nextPatrolGroanTime(double_t  value) ;

constexpr void __cordl_internal_set_nextPatrolNode(int32_t  value) ;

constexpr void __cordl_internal_set_patrolGroanSoundDelayRandom(::Unity::Mathematics::Random  value) ;

constexpr void __cordl_internal_set_patrolGroanSoundRandom(::Unity::Mathematics::Random  value) ;

constexpr void __cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value) ;

/// @brief Method .ctor, addr 0x586c624, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityPatrol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityPatrol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityPatrol(GRAbilityPatrol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityPatrol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityPatrol(GRAbilityPatrol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1861};

/// @brief Field navMeshAgent, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navMeshAgent;

/// @brief Field moveAbility, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___moveAbility;

/// @brief Field patrolPath, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPatrolPath>  ___patrolPath;

/// @brief Field lastStateChange, offset: 0x90, size: 0x8, def value: None
 double_t  ___lastStateChange;

/// @brief Field ambientSoundVolume, offset: 0x98, size: 0x4, def value: None
 float_t  ___ambientSoundVolume;

/// @brief Field ambientSoundDelayMin, offset: 0xa0, size: 0x8, def value: None
 double_t  ___ambientSoundDelayMin;

/// @brief Field ambientSoundDelayMax, offset: 0xa8, size: 0x8, def value: None
 double_t  ___ambientSoundDelayMax;

/// @brief Field ambientPatrolSounds, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___ambientPatrolSounds;

/// @brief Field lastPartrolAmbientSoundTime, offset: 0xb8, size: 0x8, def value: None
 double_t  ___lastPartrolAmbientSoundTime;

/// @brief Field nextPatrolGroanTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ___nextPatrolGroanTime;

/// @brief Field patrolGroanSoundDelayRandom, offset: 0xc8, size: 0x4, def value: None
 ::Unity::Mathematics::Random  ___patrolGroanSoundDelayRandom;

/// @brief Field patrolGroanSoundRandom, offset: 0xcc, size: 0x4, def value: None
 ::Unity::Mathematics::Random  ___patrolGroanSoundRandom;

/// [ReadOnly]
/// @brief Field nextPatrolNode, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___nextPatrolNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___navMeshAgent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___moveAbility) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___patrolPath) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___lastStateChange) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___ambientSoundVolume) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___ambientSoundDelayMin) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___ambientSoundDelayMax) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___ambientPatrolSounds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___lastPartrolAmbientSoundTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___nextPatrolGroanTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___patrolGroanSoundDelayRandom) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___patrolGroanSoundRandom) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityPatrol, ___nextPatrolNode) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityPatrol) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
