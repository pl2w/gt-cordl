#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReviveStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRReviveStation)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class GRReviveStation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRReviveStation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRReviveStation*, "", "GRReviveStation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRReviveStation
class CORDL_TYPE GRReviveStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) int32_t  Index;

/// @brief Field <Index>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__Index_k__BackingField, put=__cordl_internal_set__Index_k__BackingField)) int32_t  _Index_k__BackingField;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field cooldownStartTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cooldownStartTime, put=__cordl_internal_set_cooldownStartTime)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*  cooldownStartTime;

/// @brief Field particleEffects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleEffects, put=__cordl_internal_set_particleEffects)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particleEffects;

/// @brief Field reactor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field reviveCooldownSeconds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveCooldownSeconds, put=__cordl_internal_set_reviveCooldownSeconds)) double_t  reviveCooldownSeconds;

/// @brief Method CalculateRemainingReviveCooldownSeconds, addr 0x58a99c8, size 0x170, virtual false, abstract: false, final false
inline double_t CalculateRemainingReviveCooldownSeconds(int32_t  ActorNumber) ;

/// @brief Method GetReviveCooldownSeconds, addr 0x58a9b84, size 0x8, virtual false, abstract: false, final false
inline double_t GetReviveCooldownSeconds() ;

/// @brief Method Init, addr 0x58a9b50, size 0x2c, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor, int32_t  index) ;

static inline ::GlobalNamespace::GRReviveStation* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x58a9d70, size 0x2b0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method RevivePlayer, addr 0x58a9b8c, size 0x1e4, virtual false, abstract: false, final false
inline void RevivePlayer(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method SetReviveCooldownSeconds, addr 0x58a9b7c, size 0x8, virtual false, abstract: false, final false
inline void SetReviveCooldownSeconds(double_t  seconds) ;

constexpr int32_t const& __cordl_internal_get__Index_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Index_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>* const& __cordl_internal_get_cooldownStartTime() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*& __cordl_internal_get_cooldownStartTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particleEffects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particleEffects() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr double_t const& __cordl_internal_get_reviveCooldownSeconds() const;

constexpr double_t& __cordl_internal_get_reviveCooldownSeconds() ;

constexpr void __cordl_internal_set__Index_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_cooldownStartTime(::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*  value) ;

constexpr void __cordl_internal_set_particleEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_reviveCooldownSeconds(double_t  value) ;

/// @brief Method .ctor, addr 0x58aa020, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Index, addr 0x58a9b40, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// [CompilerGenerated]
/// @brief Method set_Index, addr 0x58a9b48, size 0x8, virtual false, abstract: false, final false
inline void set_Index(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRReviveStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRReviveStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRReviveStation(GRReviveStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRReviveStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRReviveStation(GRReviveStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2020};

/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field particleEffects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particleEffects;

/// [SerializeField]
/// @brief Field reviveCooldownSeconds, offset: 0x30, size: 0x8, def value: None
 double_t  ___reviveCooldownSeconds;

/// @brief Field cooldownStartTime, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::DateTime>*  ___cooldownStartTime;

/// [CompilerGenerated]
/// @brief Field <Index>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____Index_k__BackingField;

/// @brief Field reactor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRReviveStation, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveStation, ___particleEffects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveStation, ___reviveCooldownSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveStation, ___cooldownStartTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveStation, ____Index_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRReviveStation, ___reactor) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRReviveStation) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
