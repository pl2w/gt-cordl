#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolLantern.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolLantern_State_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolLantern)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
struct GRToolLantern_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameLight;
}
namespace GlobalNamespace {
class IGRSummoningEntity;
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
// Forward declare root types
namespace GlobalNamespace {
class GRToolLantern;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolLantern*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolLantern*, "", "GRToolLantern");
// [RequireComponent(typeof(GameEntity))]
// Dependencies GRToolLantern::State, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolLantern
class CORDL_TYPE GRToolLantern : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolLantern_State;

/// @brief Field attributes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field flareSpawnoffset, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_flareSpawnoffset, put=__cordl_internal_set_flareSpawnoffset)) ::UnityEngine::Vector3  flareSpawnoffset;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field gameLight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameLight, put=__cordl_internal_set_gameLight)) ::UnityW<::GlobalNamespace::GameLight>  gameLight;

/// @brief Field lanternFlarePrefab, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lanternFlarePrefab, put=__cordl_internal_set_lanternFlarePrefab)) ::UnityW<::GlobalNamespace::GameEntity>  lanternFlarePrefab;

/// @brief Field lastFlareDropTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastFlareDropTime, put=__cordl_internal_set_lastFlareDropTime)) double_t  lastFlareDropTime;

/// @brief Field maxSpawnedFlares, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpawnedFlares, put=__cordl_internal_set_maxSpawnedFlares)) int32_t  maxSpawnedFlares;

/// @brief Field meshAndMaterials, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshAndMaterials, put=__cordl_internal_set_meshAndMaterials)) ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  meshAndMaterials;

/// @brief Field minEnergyPerUse, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_minEnergyPerUse, put=__cordl_internal_set_minEnergyPerUse)) int32_t  minEnergyPerUse;

/// @brief Field minFlareDropInterval, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_minFlareDropInterval, put=__cordl_internal_set_minFlareDropInterval)) double_t  minFlareDropInterval;

/// @brief Field minOnDuration, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_minOnDuration, put=__cordl_internal_set_minOnDuration)) float_t  minOnDuration;

/// @brief Field onHaptic, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHaptic, put=__cordl_internal_set_onHaptic)) ::GlobalNamespace::AbilityHaptic*  onHaptic;

/// @brief Field providingXRay, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_providingXRay, put=__cordl_internal_set_providingXRay)) bool  providingXRay;

/// @brief Field state, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolLantern_State  state;

/// @brief Field timeLastTurnedOn, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastTurnedOn, put=__cordl_internal_set_timeLastTurnedOn)) float_t  timeLastTurnedOn;

/// @brief Field timeOnPerEnergyUseDurationSeconds, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOnPerEnergyUseDurationSeconds, put=__cordl_internal_set_timeOnPerEnergyUseDurationSeconds)) float_t  timeOnPerEnergyUseDurationSeconds;

/// @brief Field timeOnSpentEnergy, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOnSpentEnergy, put=__cordl_internal_set_timeOnSpentEnergy)) float_t  timeOnSpentEnergy;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field trackedEntities, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedEntities, put=__cordl_internal_set_trackedEntities)) ::System::Collections::Generic::List_1<int32_t>*  trackedEntities;

/// @brief Field turnOnSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnOnSound, put=__cordl_internal_set_turnOnSound)) ::UnityW<::UnityEngine::AudioClip>  turnOnSound;

/// @brief Field turnOnSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnOnSoundVolume, put=__cordl_internal_set_turnOnSoundVolume)) float_t  turnOnSoundVolume;

/// @brief Field upgrade1TurnOnSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1TurnOnSound, put=__cordl_internal_set_upgrade1TurnOnSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade1TurnOnSound;

/// @brief Field upgrade2TurnOnSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2TurnOnSound, put=__cordl_internal_set_upgrade2TurnOnSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade2TurnOnSound;

/// @brief Field upgrade3TurnOnSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3TurnOnSound, put=__cordl_internal_set_upgrade3TurnOnSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade3TurnOnSound;

/// @brief Convert operator to "::GlobalNamespace::IGRSummoningEntity"
constexpr operator  ::GlobalNamespace::IGRSummoningEntity*() noexcept;

/// @brief Method AddTrackedEntity, addr 0x58bef08, size 0x9c, virtual false, abstract: false, final false
inline void AddTrackedEntity(::GlobalNamespace::GameEntity*  entityToTrack) ;

/// @brief Method Awake, addr 0x58be0b8, size 0x2c0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanChangeState, addr 0x58bee18, size 0x74, virtual false, abstract: false, final false
inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method DisableXRay, addr 0x58be484, size 0x8c, virtual false, abstract: false, final false
inline void DisableXRay() ;

/// @brief Method EnableLights, addr 0x58beb50, size 0x12c, virtual false, abstract: false, final false
inline void EnableLights(bool  isOn) ;

/// @brief Method EnableXRay, addr 0x58be5b0, size 0x90, virtual false, abstract: false, final false
inline void EnableXRay() ;

/// @brief Method IsButtonHeld, addr 0x58bece0, size 0xb0, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeld, addr 0x58beb38, size 0x18, virtual false, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsHeldLocal, addr 0x58be6a0, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::GRToolLantern* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58be448, size 0x3c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x58be3f4, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrabbed, addr 0x58be510, size 0x4, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x58be514, size 0x24, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnStateChanged, addr 0x58bef04, size 0x4, virtual false, abstract: false, final false
inline void OnStateChanged(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnSummonedEntityDestroy, addr 0x58bf050, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnSummonedEntityInit, addr 0x58bf04c, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnToolUpgraded, addr 0x58be378, size 0x7c, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdateAuthority, addr 0x58be718, size 0x3f8, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58beb10, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RemoveTrackedEntity, addr 0x58befa4, size 0xa8, virtual false, abstract: false, final false
inline void RemoveTrackedEntity(::GlobalNamespace::GameEntity*  entityToRemove) ;

/// @brief Method SetState, addr 0x58bec7c, size 0x64, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolLantern_State  newState) ;

/// @brief Method TryConsumeEnergy, addr 0x58bed90, size 0x88, virtual false, abstract: false, final false
inline void TryConsumeEnergy() ;

/// @brief Method TurnOff, addr 0x58be40c, size 0x3c, virtual false, abstract: false, final false
inline void TurnOff() ;

/// @brief Method TurnOn, addr 0x58bee8c, size 0x78, virtual false, abstract: false, final false
inline void TurnOn() ;

/// @brief Method Update, addr 0x58be640, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WasLastHeldLocal, addr 0x58be538, size 0x78, virtual false, abstract: false, final false
inline bool WasLastHeldLocal() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_flareSpawnoffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_flareSpawnoffset() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_gameLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_gameLight() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_lanternFlarePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_lanternFlarePrefab() ;

constexpr double_t const& __cordl_internal_get_lastFlareDropTime() const;

constexpr double_t& __cordl_internal_get_lastFlareDropTime() ;

constexpr int32_t const& __cordl_internal_get_maxSpawnedFlares() const;

constexpr int32_t& __cordl_internal_get_maxSpawnedFlares() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>* const& __cordl_internal_get_meshAndMaterials() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*& __cordl_internal_get_meshAndMaterials() ;

constexpr int32_t const& __cordl_internal_get_minEnergyPerUse() const;

constexpr int32_t& __cordl_internal_get_minEnergyPerUse() ;

constexpr double_t const& __cordl_internal_get_minFlareDropInterval() const;

constexpr double_t& __cordl_internal_get_minFlareDropInterval() ;

constexpr float_t const& __cordl_internal_get_minOnDuration() const;

constexpr float_t& __cordl_internal_get_minOnDuration() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_onHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_onHaptic() ;

constexpr bool const& __cordl_internal_get_providingXRay() const;

constexpr bool& __cordl_internal_get_providingXRay() ;

constexpr ::GlobalNamespace::GRToolLantern_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolLantern_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_timeLastTurnedOn() const;

constexpr float_t& __cordl_internal_get_timeLastTurnedOn() ;

constexpr float_t const& __cordl_internal_get_timeOnPerEnergyUseDurationSeconds() const;

constexpr float_t& __cordl_internal_get_timeOnPerEnergyUseDurationSeconds() ;

constexpr float_t const& __cordl_internal_get_timeOnSpentEnergy() const;

constexpr float_t& __cordl_internal_get_timeOnSpentEnergy() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_trackedEntities() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_trackedEntities() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_turnOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_turnOnSound() ;

constexpr float_t const& __cordl_internal_get_turnOnSoundVolume() const;

constexpr float_t& __cordl_internal_get_turnOnSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade1TurnOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade1TurnOnSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade2TurnOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade2TurnOnSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade3TurnOnSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade3TurnOnSound() ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_flareSpawnoffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_lanternFlarePrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_lastFlareDropTime(double_t  value) ;

constexpr void __cordl_internal_set_maxSpawnedFlares(int32_t  value) ;

constexpr void __cordl_internal_set_meshAndMaterials(::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  value) ;

constexpr void __cordl_internal_set_minEnergyPerUse(int32_t  value) ;

constexpr void __cordl_internal_set_minFlareDropInterval(double_t  value) ;

constexpr void __cordl_internal_set_minOnDuration(float_t  value) ;

constexpr void __cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_providingXRay(bool  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolLantern_State  value) ;

constexpr void __cordl_internal_set_timeLastTurnedOn(float_t  value) ;

constexpr void __cordl_internal_set_timeOnPerEnergyUseDurationSeconds(float_t  value) ;

constexpr void __cordl_internal_set_timeOnSpentEnergy(float_t  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_trackedEntities(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_turnOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_turnOnSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_upgrade1TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade2TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade3TurnOnSound(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x58bf054, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGRSummoningEntity"
constexpr ::GlobalNamespace::IGRSummoningEntity* i___GlobalNamespace__IGRSummoningEntity() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolLantern() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolLantern", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolLantern(GRToolLantern && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolLantern", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolLantern(GRToolLantern const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2069};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field gameLight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___gameLight;

/// @brief Field attributes, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// [SerializeField]
/// @brief Field timeOnPerEnergyUseDurationSeconds, offset: 0x40, size: 0x4, def value: None
 float_t  ___timeOnPerEnergyUseDurationSeconds;

/// [SerializeField]
/// @brief Field minEnergyPerUse, offset: 0x44, size: 0x4, def value: None
 int32_t  ___minEnergyPerUse;

/// [SerializeField]
/// @brief Field turnOnSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___turnOnSoundVolume;

/// [SerializeField]
/// @brief Field turnOnSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___turnOnSound;

/// [SerializeField]
/// @brief Field upgrade1TurnOnSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade1TurnOnSound;

/// [SerializeField]
/// @brief Field upgrade2TurnOnSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade2TurnOnSound;

/// [SerializeField]
/// @brief Field upgrade3TurnOnSound, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade3TurnOnSound;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field meshAndMaterials, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MeshAndMaterials*>*  ___meshAndMaterials;

/// [Header("Haptic")]
/// @brief Field onHaptic, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___onHaptic;

/// @brief Field timeOnSpentEnergy, offset: 0x88, size: 0x4, def value: None
 float_t  ___timeOnSpentEnergy;

/// @brief Field timeLastTurnedOn, offset: 0x8c, size: 0x4, def value: None
 float_t  ___timeLastTurnedOn;

/// @brief Field minOnDuration, offset: 0x90, size: 0x4, def value: None
 float_t  ___minOnDuration;

/// @brief Field state, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::GRToolLantern_State  ___state;

/// @brief Field trackedEntities, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___trackedEntities;

/// @brief Field lastFlareDropTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___lastFlareDropTime;

/// @brief Field minFlareDropInterval, offset: 0xa8, size: 0x8, def value: None
 double_t  ___minFlareDropInterval;

/// @brief Field lanternFlarePrefab, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___lanternFlarePrefab;

/// @brief Field maxSpawnedFlares, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___maxSpawnedFlares;

/// @brief Field providingXRay, offset: 0xbc, size: 0x1, def value: None
 bool  ___providingXRay;

/// @brief Field flareSpawnoffset, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___flareSpawnoffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___gameLight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___attributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___timeOnPerEnergyUseDurationSeconds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___minEnergyPerUse) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___turnOnSoundVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___turnOnSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___upgrade1TurnOnSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___upgrade2TurnOnSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___upgrade3TurnOnSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___audioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___meshAndMaterials) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___onHaptic) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___timeOnSpentEnergy) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___timeLastTurnedOn) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___minOnDuration) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___state) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___trackedEntities) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___lastFlareDropTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___minFlareDropInterval) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___lanternFlarePrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___maxSpawnedFlares) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___providingXRay) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolLantern, ___flareSpawnoffset) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolLantern) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
