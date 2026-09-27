#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilitySummon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilitySummon)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
struct GRAbilitySummon_State;
}
namespace GlobalNamespace {
class GRAbilitySummon_SummonMarker;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilitySummon;
}
namespace GlobalNamespace {
class GRAbilitySummon_SummonMarker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilitySummon*);
MARK_REF_T(::GlobalNamespace::GRAbilitySummon_SummonMarker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilitySummon*, "", "GRAbilitySummon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilitySummon_SummonMarker*, "", "GRAbilitySummon/SummonMarker");
// Dependencies GRAbilityBase, GRAbilitySummon::State
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilitySummon
class CORDL_TYPE GRAbilitySummon : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
using State = ::GlobalNamespace::GRAbilitySummon_State;

using SummonMarker = ::GlobalNamespace::GRAbilitySummon_SummonMarker;

/// @brief Field animData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_animData, put=__cordl_internal_set_animData)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  animData;

/// @brief Field animSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_animSpeed, put=__cordl_internal_set_animSpeed)) float_t  animSpeed;

/// @brief Field chargeTime, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeTime, put=__cordl_internal_set_chargeTime)) float_t  chargeTime;

/// @brief Field coolDown, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolDown, put=__cordl_internal_set_coolDown)) float_t  coolDown;

/// @brief Field desiredSpawnDistance, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredSpawnDistance, put=__cordl_internal_set_desiredSpawnDistance)) float_t  desiredSpawnDistance;

/// @brief Field duration, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field entityPrefabToSpawn, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityPrefabToSpawn, put=__cordl_internal_set_entityPrefabToSpawn)) ::UnityW<::GlobalNamespace::GameEntity>  entityPrefabToSpawn;

/// @brief Field fxOnSpawn, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxOnSpawn, put=__cordl_internal_set_fxOnSpawn)) ::UnityW<::UnityEngine::GameObject>  fxOnSpawn;

/// @brief Field fxStartSummon, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxStartSummon, put=__cordl_internal_set_fxStartSummon)) ::UnityW<::UnityEngine::GameObject>  fxStartSummon;

/// @brief Field lastAnimIndex, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAnimIndex, put=__cordl_internal_set_lastAnimIndex)) int32_t  lastAnimIndex;

/// @brief Field lookAtTarget, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookAtTarget, put=__cordl_internal_set_lookAtTarget)) ::UnityW<::UnityEngine::Transform>  lookAtTarget;

/// @brief Field minSpawnDistance, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpawnDistance, put=__cordl_internal_set_minSpawnDistance)) float_t  minSpawnDistance;

/// @brief Field range, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_range, put=__cordl_internal_set_range)) float_t  range;

/// @brief Field spawnHeight, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnHeight, put=__cordl_internal_set_spawnHeight)) float_t  spawnHeight;

/// @brief Field spawned, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawned, put=__cordl_internal_set_spawned)) bool  spawned;

/// @brief Field spawnedCount, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnedCount, put=__cordl_internal_set_spawnedCount)) int32_t  spawnedCount;

/// @brief Field state, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRAbilitySummon_State  state;

/// @brief Field summonConeAngle, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_summonConeAngle, put=__cordl_internal_set_summonConeAngle)) float_t  summonConeAngle;

/// @brief Field summonMarkers, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_summonMarkers, put=__cordl_internal_set_summonMarkers)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*  summonMarkers;

/// @brief Field summonSound, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_summonSound, put=__cordl_internal_set_summonSound)) ::GlobalNamespace::AbilitySound*  summonSound;

/// @brief Field summonSpawnAudioClip, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_summonSpawnAudioClip, put=__cordl_internal_set_summonSpawnAudioClip)) ::UnityW<::UnityEngine::AudioClip>  summonSpawnAudioClip;

/// @brief Method DoSpawn, addr 0x586f5c8, size 0x224, virtual false, abstract: false, final false
inline bool DoSpawn() ;

/// @brief Method ForceSpawn, addr 0x586fb78, size 0x4, virtual false, abstract: false, final false
inline bool ForceSpawn() ;

/// @brief Method GetRange, addr 0x586fbc4, size 0x8, virtual true, abstract: false, final false
inline float_t GetRange() ;

/// @brief Method GetSpawnLocation, addr 0x586f7ec, size 0x38c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> GetSpawnLocation() ;

/// @brief Method IsCoolDownOver, addr 0x586fb8c, size 0x38, virtual true, abstract: false, final false
inline bool IsCoolDownOver() ;

/// @brief Method IsDone, addr 0x586fb7c, size 0x10, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilitySummon* New_ctor() ;

/// @brief Method OnStart, addr 0x586f27c, size 0x1e4, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x586f460, size 0x34, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnThink, addr 0x586f49c, size 0x4, virtual true, abstract: false, final false
inline void OnThink(float_t  dt) ;

/// @brief Method OnUpdateShared, addr 0x586f528, size 0x98, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetLookAtTarget, addr 0x586f494, size 0x8, virtual false, abstract: false, final false
inline void SetLookAtTarget(::UnityEngine::Transform*  transform) ;

/// @brief Method SetState, addr 0x586f5c0, size 0x8, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRAbilitySummon_State  newState) ;

/// @brief Method Setup, addr 0x586f278, size 0x4, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method UpdateState, addr 0x586f4a0, size 0x88, virtual false, abstract: false, final false
inline void UpdateState(float_t  dt) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& __cordl_internal_get_animData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& __cordl_internal_get_animData() ;

constexpr float_t const& __cordl_internal_get_animSpeed() const;

constexpr float_t& __cordl_internal_get_animSpeed() ;

constexpr float_t const& __cordl_internal_get_chargeTime() const;

constexpr float_t& __cordl_internal_get_chargeTime() ;

constexpr float_t const& __cordl_internal_get_coolDown() const;

constexpr float_t& __cordl_internal_get_coolDown() ;

constexpr float_t const& __cordl_internal_get_desiredSpawnDistance() const;

constexpr float_t& __cordl_internal_get_desiredSpawnDistance() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entityPrefabToSpawn() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entityPrefabToSpawn() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxOnSpawn() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxOnSpawn() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxStartSummon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxStartSummon() ;

constexpr int32_t const& __cordl_internal_get_lastAnimIndex() const;

constexpr int32_t& __cordl_internal_get_lastAnimIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookAtTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookAtTarget() ;

constexpr float_t const& __cordl_internal_get_minSpawnDistance() const;

constexpr float_t& __cordl_internal_get_minSpawnDistance() ;

constexpr float_t const& __cordl_internal_get_range() const;

constexpr float_t& __cordl_internal_get_range() ;

constexpr float_t const& __cordl_internal_get_spawnHeight() const;

constexpr float_t& __cordl_internal_get_spawnHeight() ;

constexpr bool const& __cordl_internal_get_spawned() const;

constexpr bool& __cordl_internal_get_spawned() ;

constexpr int32_t const& __cordl_internal_get_spawnedCount() const;

constexpr int32_t& __cordl_internal_get_spawnedCount() ;

constexpr ::GlobalNamespace::GRAbilitySummon_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRAbilitySummon_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_summonConeAngle() const;

constexpr float_t& __cordl_internal_get_summonConeAngle() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>* const& __cordl_internal_get_summonMarkers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*& __cordl_internal_get_summonMarkers() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_summonSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_summonSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_summonSpawnAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_summonSpawnAudioClip() ;

constexpr void __cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_animSpeed(float_t  value) ;

constexpr void __cordl_internal_set_chargeTime(float_t  value) ;

constexpr void __cordl_internal_set_coolDown(float_t  value) ;

constexpr void __cordl_internal_set_desiredSpawnDistance(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_entityPrefabToSpawn(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_fxOnSpawn(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_fxStartSummon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lastAnimIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_minSpawnDistance(float_t  value) ;

constexpr void __cordl_internal_set_range(float_t  value) ;

constexpr void __cordl_internal_set_spawnHeight(float_t  value) ;

constexpr void __cordl_internal_set_spawned(bool  value) ;

constexpr void __cordl_internal_set_spawnedCount(int32_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRAbilitySummon_State  value) ;

constexpr void __cordl_internal_set_summonConeAngle(float_t  value) ;

constexpr void __cordl_internal_set_summonMarkers(::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*  value) ;

constexpr void __cordl_internal_set_summonSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_summonSpawnAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x586fbcc, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilitySummon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilitySummon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilitySummon(GRAbilitySummon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilitySummon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilitySummon(GRAbilitySummon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1875};

/// @brief Field lastAnimIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  ___lastAnimIndex;

/// @brief Field entityPrefabToSpawn, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entityPrefabToSpawn;

/// @brief Field animData, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___animData;

/// @brief Field animSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___animSpeed;

/// @brief Field coolDown, offset: 0x8c, size: 0x4, def value: None
 float_t  ___coolDown;

/// @brief Field range, offset: 0x90, size: 0x4, def value: None
 float_t  ___range;

/// @brief Field chargeTime, offset: 0x94, size: 0x4, def value: None
 float_t  ___chargeTime;

/// @brief Field duration, offset: 0x98, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field desiredSpawnDistance, offset: 0x9c, size: 0x4, def value: None
 float_t  ___desiredSpawnDistance;

/// @brief Field minSpawnDistance, offset: 0xa0, size: 0x4, def value: None
 float_t  ___minSpawnDistance;

/// @brief Field spawnHeight, offset: 0xa4, size: 0x4, def value: None
 float_t  ___spawnHeight;

/// @brief Field summonConeAngle, offset: 0xa8, size: 0x4, def value: None
 float_t  ___summonConeAngle;

/// @brief Field spawned, offset: 0xac, size: 0x1, def value: None
 bool  ___spawned;

/// @brief Field summonSpawnAudioClip, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___summonSpawnAudioClip;

/// @brief Field fxStartSummon, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxStartSummon;

/// @brief Field fxOnSpawn, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxOnSpawn;

/// @brief Field summonSound, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___summonSound;

/// @brief Field spawnedCount, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___spawnedCount;

/// @brief Field lookAtTarget, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookAtTarget;

/// @brief Field summonMarkers, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*  ___summonMarkers;

/// @brief Field state, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::GRAbilitySummon_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___lastAnimIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___entityPrefabToSpawn) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___animData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___animSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___coolDown) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___range) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___chargeTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___duration) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___desiredSpawnDistance) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___minSpawnDistance) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___spawnHeight) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___summonConeAngle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___spawned) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___summonSpawnAudioClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___fxStartSummon) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___fxOnSpawn) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___summonSound) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___spawnedCount) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___lookAtTarget) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___summonMarkers) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilitySummon, ___state) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilitySummon) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilitySummon/SummonMarker
class CORDL_TYPE GRAbilitySummon_SummonMarker : public ::System::Object {
public:
// Declarations
/// @brief Field transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

static inline ::GlobalNamespace::GRAbilitySummon_SummonMarker* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x586fbfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilitySummon_SummonMarker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilitySummon_SummonMarker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilitySummon_SummonMarker(GRAbilitySummon_SummonMarker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilitySummon_SummonMarker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilitySummon_SummonMarker(GRAbilitySummon_SummonMarker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1873};

/// @brief Field transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilitySummon_SummonMarker, ___transform) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilitySummon_SummonMarker) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
