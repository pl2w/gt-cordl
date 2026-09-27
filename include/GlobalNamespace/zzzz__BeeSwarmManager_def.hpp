#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeSwarmManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeeSwarmManager)
namespace GlobalNamespace {
struct AnimatedBee;
}
namespace GlobalNamespace {
class BeePerchPoint;
}
namespace GlobalNamespace {
struct SRand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BeeSwarmManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeeSwarmManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeeSwarmManager*, "", "BeeSwarmManager");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeeSwarmManager
class CORDL_TYPE BeeSwarmManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AvoidPointRadius, put=set_AvoidPointRadius)) float_t  AvoidPointRadius;

 __declspec(property(get=get_BeeAcceleration, put=set_BeeAcceleration)) float_t  BeeAcceleration;

 __declspec(property(get=get_BeeHive, put=set_BeeHive)) ::UnityW<::GlobalNamespace::BeePerchPoint>  BeeHive;

 __declspec(property(get=get_BeeJitterDamping, put=set_BeeJitterDamping)) float_t  BeeJitterDamping;

 __declspec(property(get=get_BeeJitterStrength, put=set_BeeJitterStrength)) float_t  BeeJitterStrength;

 __declspec(property(get=get_BeeMaxFlowerDuration, put=set_BeeMaxFlowerDuration)) float_t  BeeMaxFlowerDuration;

 __declspec(property(get=get_BeeMaxJitterRadius, put=set_BeeMaxJitterRadius)) float_t  BeeMaxJitterRadius;

 __declspec(property(get=get_BeeMaxTravelTime, put=set_BeeMaxTravelTime)) float_t  BeeMaxTravelTime;

 __declspec(property(get=get_BeeMinFlowerDuration, put=set_BeeMinFlowerDuration)) float_t  BeeMinFlowerDuration;

 __declspec(property(get=get_BeeNearDestinationRadius, put=set_BeeNearDestinationRadius)) float_t  BeeNearDestinationRadius;

 __declspec(property(get=get_BeeSpeed, put=set_BeeSpeed)) float_t  BeeSpeed;

 __declspec(property(get=get_GeneralBuzzRange, put=set_GeneralBuzzRange)) float_t  GeneralBuzzRange;

/// @brief Field <AvoidPointRadius>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__AvoidPointRadius_k__BackingField, put=__cordl_internal_set__AvoidPointRadius_k__BackingField)) float_t  _AvoidPointRadius_k__BackingField;

/// @brief Field <BeeAcceleration>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeAcceleration_k__BackingField, put=__cordl_internal_set__BeeAcceleration_k__BackingField)) float_t  _BeeAcceleration_k__BackingField;

/// @brief Field <BeeHive>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__BeeHive_k__BackingField, put=__cordl_internal_set__BeeHive_k__BackingField)) ::UnityW<::GlobalNamespace::BeePerchPoint>  _BeeHive_k__BackingField;

/// @brief Field <BeeJitterDamping>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeJitterDamping_k__BackingField, put=__cordl_internal_set__BeeJitterDamping_k__BackingField)) float_t  _BeeJitterDamping_k__BackingField;

/// @brief Field <BeeJitterStrength>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeJitterStrength_k__BackingField, put=__cordl_internal_set__BeeJitterStrength_k__BackingField)) float_t  _BeeJitterStrength_k__BackingField;

/// @brief Field <BeeMaxFlowerDuration>k__BackingField, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxFlowerDuration_k__BackingField, put=__cordl_internal_set__BeeMaxFlowerDuration_k__BackingField)) float_t  _BeeMaxFlowerDuration_k__BackingField;

/// @brief Field <BeeMaxJitterRadius>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxJitterRadius_k__BackingField, put=__cordl_internal_set__BeeMaxJitterRadius_k__BackingField)) float_t  _BeeMaxJitterRadius_k__BackingField;

/// @brief Field <BeeMaxTravelTime>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxTravelTime_k__BackingField, put=__cordl_internal_set__BeeMaxTravelTime_k__BackingField)) float_t  _BeeMaxTravelTime_k__BackingField;

/// @brief Field <BeeMinFlowerDuration>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMinFlowerDuration_k__BackingField, put=__cordl_internal_set__BeeMinFlowerDuration_k__BackingField)) float_t  _BeeMinFlowerDuration_k__BackingField;

/// @brief Field <BeeNearDestinationRadius>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeNearDestinationRadius_k__BackingField, put=__cordl_internal_set__BeeNearDestinationRadius_k__BackingField)) float_t  _BeeNearDestinationRadius_k__BackingField;

/// @brief Field <BeeSpeed>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeSpeed_k__BackingField, put=__cordl_internal_set__BeeSpeed_k__BackingField)) float_t  _BeeSpeed_k__BackingField;

/// @brief Field <GeneralBuzzRange>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__GeneralBuzzRange_k__BackingField, put=__cordl_internal_set__GeneralBuzzRange_k__BackingField)) float_t  _GeneralBuzzRange_k__BackingField;

/// @brief Field allPerchPoints, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPerchPoints, put=__cordl_internal_set_allPerchPoints)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  allPerchPoints;

/// @brief Field avoidPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_avoidPoints, put=setStaticF_avoidPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  avoidPoints;

/// @brief Field beePrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_beePrefab, put=__cordl_internal_set_beePrefab)) ::UnityW<::UnityEngine::MeshRenderer>  beePrefab;

/// @brief Field bees, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_bees, put=__cordl_internal_set_bees)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*  bees;

/// @brief Field flowerSections, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowerSections, put=__cordl_internal_set_flowerSections)) ::ArrayW<::GlobalNamespace::XSceneRef>  flowerSections;

/// @brief Field flowerSectionsResolved, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowerSectionsResolved, put=__cordl_internal_set_flowerSectionsResolved)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  flowerSectionsResolved;

/// @brief Field generalBeeBuzz, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_generalBeeBuzz, put=__cordl_internal_set_generalBeeBuzz)) ::UnityW<::UnityEngine::AudioSource>  generalBeeBuzz;

/// @brief Field loopSizePerBee, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSizePerBee, put=__cordl_internal_set_loopSizePerBee)) int32_t  loopSizePerBee;

/// @brief Field nearbyBeeBuzz, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearbyBeeBuzz, put=__cordl_internal_set_nearbyBeeBuzz)) ::UnityW<::UnityEngine::AudioSource>  nearbyBeeBuzz;

/// @brief Field numBees, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numBees, put=__cordl_internal_set_numBees)) int32_t  numBees;

/// @brief Field playerCamera, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCamera, put=__cordl_internal_set_playerCamera)) ::UnityW<::UnityEngine::Transform>  playerCamera;

/// @brief Method Awake, addr 0x5613ddc, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BeeSwarmManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56144f8, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSeedChange, addr 0x56141c8, size 0x330, virtual false, abstract: false, final false
inline void OnSeedChange() ;

/// @brief Method PickPoints, addr 0x5614894, size 0x1f8, virtual false, abstract: false, final false
inline void PickPoints(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  pickBuffer, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  allPerchPoints, ::by_ref<::GlobalNamespace::SRand>  rand, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  resultBuffer) ;

/// @brief Method RegisterAvoidPoint, addr 0x5613b0c, size 0xd4, virtual false, abstract: false, final false
static inline void RegisterAvoidPoint(::UnityEngine::GameObject*  obj) ;

/// @brief Method Start, addr 0x5613fa4, size 0x224, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnregisterAvoidPoint, addr 0x5613c8c, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterAvoidPoint(::UnityEngine::GameObject*  obj) ;

/// @brief Method Update, addr 0x56145b8, size 0x2dc, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__AvoidPointRadius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AvoidPointRadius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeAcceleration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeAcceleration_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::BeePerchPoint> const& __cordl_internal_get__BeeHive_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::BeePerchPoint>& __cordl_internal_get__BeeHive_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeJitterDamping_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeJitterDamping_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeJitterStrength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeJitterStrength_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeMaxFlowerDuration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeMaxFlowerDuration_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeMaxJitterRadius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeMaxJitterRadius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeMaxTravelTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeMaxTravelTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeMinFlowerDuration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeMinFlowerDuration_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeNearDestinationRadius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeNearDestinationRadius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__GeneralBuzzRange_k__BackingField() const;

constexpr float_t& __cordl_internal_get__GeneralBuzzRange_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>* const& __cordl_internal_get_allPerchPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*& __cordl_internal_get_allPerchPoints() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_beePrefab() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_beePrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>* const& __cordl_internal_get_bees() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*& __cordl_internal_get_bees() ;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& __cordl_internal_get_flowerSections() const;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& __cordl_internal_get_flowerSections() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_flowerSectionsResolved() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_flowerSectionsResolved() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_generalBeeBuzz() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_generalBeeBuzz() ;

constexpr int32_t const& __cordl_internal_get_loopSizePerBee() const;

constexpr int32_t& __cordl_internal_get_loopSizePerBee() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_nearbyBeeBuzz() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_nearbyBeeBuzz() ;

constexpr int32_t const& __cordl_internal_get_numBees() const;

constexpr int32_t& __cordl_internal_get_numBees() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerCamera() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerCamera() ;

constexpr void __cordl_internal_set__AvoidPointRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeAcceleration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeHive_k__BackingField(::UnityW<::GlobalNamespace::BeePerchPoint>  value) ;

constexpr void __cordl_internal_set__BeeJitterDamping_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeJitterStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxFlowerDuration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxJitterRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxTravelTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMinFlowerDuration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeNearDestinationRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__GeneralBuzzRange_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_allPerchPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  value) ;

constexpr void __cordl_internal_set_beePrefab(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_bees(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*  value) ;

constexpr void __cordl_internal_set_flowerSections(::ArrayW<::GlobalNamespace::XSceneRef>  value) ;

constexpr void __cordl_internal_set_flowerSectionsResolved(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_generalBeeBuzz(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loopSizePerBee(int32_t  value) ;

constexpr void __cordl_internal_set_nearbyBeeBuzz(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_numBees(int32_t  value) ;

constexpr void __cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5614a8c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_avoidPoints() ;

/// [CompilerGenerated]
/// @brief Method get_AvoidPointRadius, addr 0x5613d9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_AvoidPointRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeAcceleration, addr 0x5613d4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeAcceleration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeHive, addr 0x5613d1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BeePerchPoint> get_BeeHive() ;

/// [CompilerGenerated]
/// @brief Method get_BeeJitterDamping, addr 0x5613d6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeJitterDamping() ;

/// [CompilerGenerated]
/// @brief Method get_BeeJitterStrength, addr 0x5613d5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeJitterStrength() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxFlowerDuration, addr 0x5613dbc, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxFlowerDuration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxJitterRadius, addr 0x5613d7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxJitterRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxTravelTime, addr 0x5613d3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxTravelTime() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMinFlowerDuration, addr 0x5613dac, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMinFlowerDuration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeNearDestinationRadius, addr 0x5613d8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeNearDestinationRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeSpeed, addr 0x5613d2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_GeneralBuzzRange, addr 0x5613dcc, size 0x8, virtual false, abstract: false, final false
inline float_t get_GeneralBuzzRange() ;

static inline void setStaticF_avoidPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AvoidPointRadius, addr 0x5613da4, size 0x8, virtual false, abstract: false, final false
inline void set_AvoidPointRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeAcceleration, addr 0x5613d54, size 0x8, virtual false, abstract: false, final false
inline void set_BeeAcceleration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeHive, addr 0x5613d24, size 0x8, virtual false, abstract: false, final false
inline void set_BeeHive(::GlobalNamespace::BeePerchPoint*  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeJitterDamping, addr 0x5613d74, size 0x8, virtual false, abstract: false, final false
inline void set_BeeJitterDamping(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeJitterStrength, addr 0x5613d64, size 0x8, virtual false, abstract: false, final false
inline void set_BeeJitterStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxFlowerDuration, addr 0x5613dc4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxFlowerDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxJitterRadius, addr 0x5613d84, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxJitterRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxTravelTime, addr 0x5613d44, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxTravelTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMinFlowerDuration, addr 0x5613db4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMinFlowerDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeNearDestinationRadius, addr 0x5613d94, size 0x8, virtual false, abstract: false, final false
inline void set_BeeNearDestinationRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeSpeed, addr 0x5613d34, size 0x8, virtual false, abstract: false, final false
inline void set_BeeSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_GeneralBuzzRange, addr 0x5613dd4, size 0x8, virtual false, abstract: false, final false
inline void set_GeneralBuzzRange(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeeSwarmManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeeSwarmManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeeSwarmManager(BeeSwarmManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeeSwarmManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeeSwarmManager(BeeSwarmManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{551};

/// [SerializeField]
/// @brief Field flowerSections, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XSceneRef>  ___flowerSections;

/// [SerializeField]
/// @brief Field loopSizePerBee, offset: 0x28, size: 0x4, def value: None
 int32_t  ___loopSizePerBee;

/// [SerializeField]
/// @brief Field numBees, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___numBees;

/// [SerializeField]
/// @brief Field beePrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___beePrefab;

/// [SerializeField]
/// @brief Field nearbyBeeBuzz, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___nearbyBeeBuzz;

/// [SerializeField]
/// @brief Field generalBeeBuzz, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___generalBeeBuzz;

/// @brief Field flowerSectionsResolved, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___flowerSectionsResolved;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeHive>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BeePerchPoint>  ____BeeHive_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeSpeed>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____BeeSpeed_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMaxTravelTime>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____BeeMaxTravelTime_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeAcceleration>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____BeeAcceleration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeJitterStrength>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____BeeJitterStrength_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Should be 0-1; closer to 1 = less damping")]
/// @brief Field <BeeJitterDamping>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____BeeJitterDamping_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Limits how far the bee can get off course")]
/// @brief Field <BeeMaxJitterRadius>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 float_t  ____BeeMaxJitterRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Bees stop jittering when close to their destination")]
/// @brief Field <BeeNearDestinationRadius>k__BackingField, offset: 0x70, size: 0x4, def value: None
 float_t  ____BeeNearDestinationRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <AvoidPointRadius>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____AvoidPointRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMinFlowerDuration>k__BackingField, offset: 0x78, size: 0x4, def value: None
 float_t  ____BeeMinFlowerDuration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMaxFlowerDuration>k__BackingField, offset: 0x7c, size: 0x4, def value: None
 float_t  ____BeeMaxFlowerDuration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <GeneralBuzzRange>k__BackingField, offset: 0x80, size: 0x4, def value: None
 float_t  ____GeneralBuzzRange_k__BackingField;

/// @brief Field bees, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*  ___bees;

/// @brief Field playerCamera, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerCamera;

/// @brief Field allPerchPoints, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  ___allPerchPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___flowerSections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___loopSizePerBee) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___numBees) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___beePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___nearbyBeeBuzz) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___generalBeeBuzz) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___flowerSectionsResolved) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeHive_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeSpeed_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeMaxTravelTime_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeAcceleration_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeJitterStrength_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeJitterDamping_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeMaxJitterRadius_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeNearDestinationRadius_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____AvoidPointRadius_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeMinFlowerDuration_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____BeeMaxFlowerDuration_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ____GeneralBuzzRange_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___bees) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___playerCamera) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeeSwarmManager, ___allPerchPoints) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeeSwarmManager) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
