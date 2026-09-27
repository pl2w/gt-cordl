#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolClub.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include "GlobalNamespace/zzzz__GRToolClub_State_def.hpp"
#include "GlobalNamespace/zzzz__GameHitFx_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolClub)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
struct GRToolClub_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GameHitter;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
namespace GlobalNamespace {
class IGameHitter;
}
namespace GlobalNamespace {
class MeshAndMaterials;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolClub;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolClub*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolClub*, "", "GRToolClub");
// Dependencies GRAttributeType, GRToolClub::State, GameHitFx, MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolClub
class CORDL_TYPE GRToolClub : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using State = ::GlobalNamespace::GRToolClub_State;

/// @brief Field attributes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field closeHaptic, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeHaptic, put=__cordl_internal_set_closeHaptic)) ::GlobalNamespace::AbilityHaptic*  closeHaptic;

/// @brief Field dullLight, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dullLight, put=__cordl_internal_set_dullLight)) ::UnityW<::UnityEngine::GameObject>  dullLight;

/// @brief Field extendAudio, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendAudio, put=__cordl_internal_set_extendAudio)) ::UnityW<::UnityEngine::AudioClip>  extendAudio;

/// @brief Field extendVolume, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendVolume, put=__cordl_internal_set_extendVolume)) float_t  extendVolume;

/// @brief Field extendedAmount, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendedAmount, put=__cordl_internal_set_extendedAmount)) float_t  extendedAmount;

/// @brief Field extendedCollider, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendedCollider, put=__cordl_internal_set_extendedCollider)) ::UnityW<::UnityEngine::Collider>  extendedCollider;

/// @brief Field extensionTime, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_extensionTime, put=__cordl_internal_set_extensionTime)) float_t  extensionTime;

/// @brief Field gameEntity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gameHitter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameHitter, put=__cordl_internal_set_gameHitter)) ::UnityW<::GlobalNamespace::GameHitter>  gameHitter;

/// @brief Field humAudioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_humAudioSource, put=__cordl_internal_set_humAudioSource)) ::UnityW<::UnityEngine::AudioSource>  humAudioSource;

/// @brief Field humParticleEffects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_humParticleEffects, put=__cordl_internal_set_humParticleEffects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  humParticleEffects;

/// @brief Field idleCollider, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleCollider, put=__cordl_internal_set_idleCollider)) ::UnityW<::UnityEngine::Collider>  idleCollider;

/// @brief Field meshAndMaterials, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshAndMaterials, put=__cordl_internal_set_meshAndMaterials)) ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  meshAndMaterials;

/// @brief Field minHitSpeed, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHitSpeed, put=__cordl_internal_set_minHitSpeed)) float_t  minHitSpeed;

/// @brief Field noPowerAttribute, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_noPowerAttribute, put=__cordl_internal_set_noPowerAttribute)) ::GlobalNamespace::GRAttributeType  noPowerAttribute;

/// @brief Field noPowerFx, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_noPowerFx, put=__cordl_internal_set_noPowerFx)) ::GlobalNamespace::GameHitFx  noPowerFx;

/// @brief Field openHaptic, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_openHaptic, put=__cordl_internal_set_openHaptic)) ::GlobalNamespace::AbilityHaptic*  openHaptic;

/// @brief Field poweredAttribute, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_poweredAttribute, put=__cordl_internal_set_poweredAttribute)) ::GlobalNamespace::GRAttributeType  poweredAttribute;

/// @brief Field poweredImpactFx, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_poweredImpactFx, put=__cordl_internal_set_poweredImpactFx)) ::GlobalNamespace::GameHitFx  poweredImpactFx;

/// @brief Field retractAudio, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractAudio, put=__cordl_internal_set_retractAudio)) ::UnityW<::UnityEngine::AudioClip>  retractAudio;

/// @brief Field retractVolume, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractVolume, put=__cordl_internal_set_retractVolume)) float_t  retractVolume;

/// @brief Field retractableSection, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_retractableSection, put=__cordl_internal_set_retractableSection)) ::UnityW<::UnityEngine::Transform>  retractableSection;

/// @brief Field retractableSectionMax, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractableSectionMax, put=__cordl_internal_set_retractableSectionMax)) float_t  retractableSectionMax;

/// @brief Field retractableSectionMin, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractableSectionMin, put=__cordl_internal_set_retractableSectionMin)) float_t  retractableSectionMin;

/// @brief Field rigidBody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field state, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolClub_State  state;

/// @brief Field tool, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgrade1ImpactVFX, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get_upgrade1ImpactVFX, put=__cordl_internal_set_upgrade1ImpactVFX)) ::GlobalNamespace::GameHitFx  upgrade1ImpactVFX;

/// @brief Field upgrade2ImpactVFX, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_upgrade2ImpactVFX, put=__cordl_internal_set_upgrade2ImpactVFX)) ::GlobalNamespace::GameHitFx  upgrade2ImpactVFX;

/// @brief Field upgrade3ImpactVFX, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_upgrade3ImpactVFX, put=__cordl_internal_set_upgrade3ImpactVFX)) ::GlobalNamespace::GameHitFx  upgrade3ImpactVFX;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr operator  ::GlobalNamespace::IGameHitter*() noexcept;

/// @brief Method Awake, addr 0x58ba788, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableImpactVFXForCurrentUpgradeLevel, addr 0x58bac44, size 0x94, virtual false, abstract: false, final false
inline void EnableImpactVFXForCurrentUpgradeLevel() ;

/// @brief Method GetDebugTextLines, addr 0x58bafac, size 0x150, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method IsButtonHeld, addr 0x58baeac, size 0xdc, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

static inline ::GlobalNamespace::GRToolClub* New_ctor() ;

/// @brief Method OnEnable, addr 0x58ba7ac, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58bac3c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58bab70, size 0xc8, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58bac40, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnSuccessfulHit, addr 0x58baf88, size 0x24, virtual true, abstract: false, final true
inline void OnSuccessfulHit(::GlobalNamespace::GameHitData  hitData) ;

/// @brief Method OnToolUpgraded, addr 0x58bac38, size 0x4, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdateAuthority, addr 0x58bad44, size 0x90, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58badd4, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method OnUpdateShared, addr 0x58badfc, size 0xb0, virtual false, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method SetExtendedAmount, addr 0x58ba808, size 0x50, virtual false, abstract: false, final false
inline void SetExtendedAmount(float_t  newExtendedAmount) ;

/// @brief Method SetState, addr 0x58ba858, size 0x318, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolClub_State  newState) ;

/// @brief Method Tick, addr 0x58bacd8, size 0x6c, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_closeHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_closeHaptic() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dullLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dullLight() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_extendAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_extendAudio() ;

constexpr float_t const& __cordl_internal_get_extendVolume() const;

constexpr float_t& __cordl_internal_get_extendVolume() ;

constexpr float_t const& __cordl_internal_get_extendedAmount() const;

constexpr float_t& __cordl_internal_get_extendedAmount() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_extendedCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_extendedCollider() ;

constexpr float_t const& __cordl_internal_get_extensionTime() const;

constexpr float_t& __cordl_internal_get_extensionTime() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameHitter> const& __cordl_internal_get_gameHitter() const;

constexpr ::UnityW<::GlobalNamespace::GameHitter>& __cordl_internal_get_gameHitter() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_humAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_humAudioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& __cordl_internal_get_humParticleEffects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& __cordl_internal_get_humParticleEffects() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_idleCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_idleCollider() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>* const& __cordl_internal_get_meshAndMaterials() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*& __cordl_internal_get_meshAndMaterials() ;

constexpr float_t const& __cordl_internal_get_minHitSpeed() const;

constexpr float_t& __cordl_internal_get_minHitSpeed() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_noPowerAttribute() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_noPowerAttribute() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_noPowerFx() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_noPowerFx() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_openHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_openHaptic() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_poweredAttribute() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_poweredAttribute() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_poweredImpactFx() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_poweredImpactFx() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_retractAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_retractAudio() ;

constexpr float_t const& __cordl_internal_get_retractVolume() const;

constexpr float_t& __cordl_internal_get_retractVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_retractableSection() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_retractableSection() ;

constexpr float_t const& __cordl_internal_get_retractableSectionMax() const;

constexpr float_t& __cordl_internal_get_retractableSectionMax() ;

constexpr float_t const& __cordl_internal_get_retractableSectionMin() const;

constexpr float_t& __cordl_internal_get_retractableSectionMin() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::GlobalNamespace::GRToolClub_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolClub_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_upgrade1ImpactVFX() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_upgrade1ImpactVFX() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_upgrade2ImpactVFX() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_upgrade2ImpactVFX() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_upgrade3ImpactVFX() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_upgrade3ImpactVFX() ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_closeHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_dullLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_extendAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_extendVolume(float_t  value) ;

constexpr void __cordl_internal_set_extendedAmount(float_t  value) ;

constexpr void __cordl_internal_set_extendedCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_extensionTime(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameHitter(::UnityW<::GlobalNamespace::GameHitter>  value) ;

constexpr void __cordl_internal_set_humAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_humParticleEffects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value) ;

constexpr void __cordl_internal_set_idleCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_meshAndMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  value) ;

constexpr void __cordl_internal_set_minHitSpeed(float_t  value) ;

constexpr void __cordl_internal_set_noPowerAttribute(::GlobalNamespace::GRAttributeType  value) ;

constexpr void __cordl_internal_set_noPowerFx(::GlobalNamespace::GameHitFx  value) ;

constexpr void __cordl_internal_set_openHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_poweredAttribute(::GlobalNamespace::GRAttributeType  value) ;

constexpr void __cordl_internal_set_poweredImpactFx(::GlobalNamespace::GameHitFx  value) ;

constexpr void __cordl_internal_set_retractAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_retractVolume(float_t  value) ;

constexpr void __cordl_internal_set_retractableSection(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_retractableSectionMax(float_t  value) ;

constexpr void __cordl_internal_set_retractableSectionMin(float_t  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolClub_State  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgrade1ImpactVFX(::GlobalNamespace::GameHitFx  value) ;

constexpr void __cordl_internal_set_upgrade2ImpactVFX(::GlobalNamespace::GameHitFx  value) ;

constexpr void __cordl_internal_set_upgrade3ImpactVFX(::GlobalNamespace::GameHitFx  value) ;

/// @brief Method .ctor, addr 0x58bb0fc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* i___GlobalNamespace__IGameEntityDebugComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* i___GlobalNamespace__IGameHitter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolClub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolClub", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolClub(GRToolClub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolClub", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolClub(GRToolClub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2060};

/// @brief Field gameEntity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field gameHitter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHitter>  ___gameHitter;

/// @brief Field tool, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field rigidBody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field humAudioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___humAudioSource;

/// @brief Field humParticleEffects, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  ___humParticleEffects;

/// @brief Field attributes, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field extendAudio, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___extendAudio;

/// @brief Field extendVolume, offset: 0x70, size: 0x4, def value: None
 float_t  ___extendVolume;

/// @brief Field retractAudio, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___retractAudio;

/// @brief Field retractVolume, offset: 0x80, size: 0x4, def value: None
 float_t  ___retractVolume;

/// @brief Field noPowerFx, offset: 0x88, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___noPowerFx;

/// @brief Field poweredImpactFx, offset: 0x98, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___poweredImpactFx;

/// @brief Field upgrade1ImpactVFX, offset: 0xa8, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___upgrade1ImpactVFX;

/// @brief Field upgrade2ImpactVFX, offset: 0xb8, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___upgrade2ImpactVFX;

/// @brief Field upgrade3ImpactVFX, offset: 0xc8, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___upgrade3ImpactVFX;

/// @brief Field noPowerAttribute, offset: 0xd8, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___noPowerAttribute;

/// @brief Field poweredAttribute, offset: 0xdc, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___poweredAttribute;

/// @brief Field minHitSpeed, offset: 0xe0, size: 0x4, def value: None
 float_t  ___minHitSpeed;

/// @brief Field dullLight, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dullLight;

/// @brief Field meshAndMaterials, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  ___meshAndMaterials;

/// @brief Field retractableSection, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___retractableSection;

/// @brief Field idleCollider, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___idleCollider;

/// @brief Field extendedCollider, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___extendedCollider;

/// @brief Field retractableSectionMin, offset: 0x110, size: 0x4, def value: None
 float_t  ___retractableSectionMin;

/// @brief Field retractableSectionMax, offset: 0x114, size: 0x4, def value: None
 float_t  ___retractableSectionMax;

/// @brief Field extensionTime, offset: 0x118, size: 0x4, def value: None
 float_t  ___extensionTime;

/// [Header("Haptic")]
/// @brief Field openHaptic, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___openHaptic;

/// @brief Field closeHaptic, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___closeHaptic;

/// @brief Field extendedAmount, offset: 0x130, size: 0x4, def value: None
 float_t  ___extendedAmount;

/// @brief Field state, offset: 0x134, size: 0x4, def value: None
 ::GlobalNamespace::GRToolClub_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolClub, ___gameEntity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___gameHitter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___tool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___rigidBody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___humAudioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___humParticleEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___attributes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___extendAudio) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___extendVolume) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___retractAudio) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___retractVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___noPowerFx) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___poweredImpactFx) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___upgrade1ImpactVFX) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___upgrade2ImpactVFX) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___upgrade3ImpactVFX) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___noPowerAttribute) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___poweredAttribute) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___minHitSpeed) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___dullLight) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___meshAndMaterials) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___retractableSection) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___idleCollider) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___extendedCollider) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___retractableSectionMin) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___retractableSectionMax) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___extensionTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___openHaptic) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___closeHaptic) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___extendedAmount) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolClub, ___state) == 0x134, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolClub) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
