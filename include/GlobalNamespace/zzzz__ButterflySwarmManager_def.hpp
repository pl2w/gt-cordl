#pragma once
// IWYU pragma private; include "GlobalNamespace/ButterflySwarmManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ButterflySwarmManager)
namespace GlobalNamespace {
struct AnimatedButterfly;
}
namespace GlobalNamespace {
struct SRand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ButterflySwarmManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ButterflySwarmManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ButterflySwarmManager*, "", "ButterflySwarmManager");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ButterflySwarmManager
class CORDL_TYPE ButterflySwarmManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AvoidPointRadius, put=set_AvoidPointRadius)) float_t  AvoidPointRadius;

 __declspec(property(get=get_BeeAcceleration, put=set_BeeAcceleration)) float_t  BeeAcceleration;

 __declspec(property(get=get_BeeColors, put=set_BeeColors)) ::ArrayW<::UnityEngine::Color>  BeeColors;

 __declspec(property(get=get_BeeJitterDamping, put=set_BeeJitterDamping)) float_t  BeeJitterDamping;

 __declspec(property(get=get_BeeJitterStrength, put=set_BeeJitterStrength)) float_t  BeeJitterStrength;

 __declspec(property(get=get_BeeMaxFlowerDuration, put=set_BeeMaxFlowerDuration)) float_t  BeeMaxFlowerDuration;

 __declspec(property(get=get_BeeMaxJitterRadius, put=set_BeeMaxJitterRadius)) float_t  BeeMaxJitterRadius;

 __declspec(property(get=get_BeeMaxTravelTime, put=set_BeeMaxTravelTime)) float_t  BeeMaxTravelTime;

 __declspec(property(get=get_BeeMinFlowerDuration, put=set_BeeMinFlowerDuration)) float_t  BeeMinFlowerDuration;

 __declspec(property(get=get_BeeNearDestinationRadius, put=set_BeeNearDestinationRadius)) float_t  BeeNearDestinationRadius;

 __declspec(property(get=get_BeeSpeed, put=set_BeeSpeed)) float_t  BeeSpeed;

 __declspec(property(get=get_DestRotationAlignmentSpeed, put=set_DestRotationAlignmentSpeed)) float_t  DestRotationAlignmentSpeed;

 __declspec(property(get=get_PerchedFlapPhase, put=set_PerchedFlapPhase)) float_t  PerchedFlapPhase;

 __declspec(property(get=get_PerchedFlapSpeed, put=set_PerchedFlapSpeed)) float_t  PerchedFlapSpeed;

 __declspec(property(get=get_TravellingLocalRotation, put=set_TravellingLocalRotation)) ::UnityEngine::Quaternion  TravellingLocalRotation;

 __declspec(property(get=get_TravellingLocalRotationEuler, put=set_TravellingLocalRotationEuler)) ::UnityEngine::Vector3  TravellingLocalRotationEuler;

/// @brief Field <AvoidPointRadius>k__BackingField, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__AvoidPointRadius_k__BackingField, put=__cordl_internal_set__AvoidPointRadius_k__BackingField)) float_t  _AvoidPointRadius_k__BackingField;

/// @brief Field <BeeAcceleration>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeAcceleration_k__BackingField, put=__cordl_internal_set__BeeAcceleration_k__BackingField)) float_t  _BeeAcceleration_k__BackingField;

/// @brief Field <BeeColors>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__BeeColors_k__BackingField, put=__cordl_internal_set__BeeColors_k__BackingField)) ::ArrayW<::UnityEngine::Color>  _BeeColors_k__BackingField;

/// @brief Field <BeeJitterDamping>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeJitterDamping_k__BackingField, put=__cordl_internal_set__BeeJitterDamping_k__BackingField)) float_t  _BeeJitterDamping_k__BackingField;

/// @brief Field <BeeJitterStrength>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeJitterStrength_k__BackingField, put=__cordl_internal_set__BeeJitterStrength_k__BackingField)) float_t  _BeeJitterStrength_k__BackingField;

/// @brief Field <BeeMaxFlowerDuration>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxFlowerDuration_k__BackingField, put=__cordl_internal_set__BeeMaxFlowerDuration_k__BackingField)) float_t  _BeeMaxFlowerDuration_k__BackingField;

/// @brief Field <BeeMaxJitterRadius>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxJitterRadius_k__BackingField, put=__cordl_internal_set__BeeMaxJitterRadius_k__BackingField)) float_t  _BeeMaxJitterRadius_k__BackingField;

/// @brief Field <BeeMaxTravelTime>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMaxTravelTime_k__BackingField, put=__cordl_internal_set__BeeMaxTravelTime_k__BackingField)) float_t  _BeeMaxTravelTime_k__BackingField;

/// @brief Field <BeeMinFlowerDuration>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeMinFlowerDuration_k__BackingField, put=__cordl_internal_set__BeeMinFlowerDuration_k__BackingField)) float_t  _BeeMinFlowerDuration_k__BackingField;

/// @brief Field <BeeNearDestinationRadius>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeNearDestinationRadius_k__BackingField, put=__cordl_internal_set__BeeNearDestinationRadius_k__BackingField)) float_t  _BeeNearDestinationRadius_k__BackingField;

/// @brief Field <BeeSpeed>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__BeeSpeed_k__BackingField, put=__cordl_internal_set__BeeSpeed_k__BackingField)) float_t  _BeeSpeed_k__BackingField;

/// @brief Field <DestRotationAlignmentSpeed>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__DestRotationAlignmentSpeed_k__BackingField, put=__cordl_internal_set__DestRotationAlignmentSpeed_k__BackingField)) float_t  _DestRotationAlignmentSpeed_k__BackingField;

/// @brief Field <PerchedFlapPhase>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__PerchedFlapPhase_k__BackingField, put=__cordl_internal_set__PerchedFlapPhase_k__BackingField)) float_t  _PerchedFlapPhase_k__BackingField;

/// @brief Field <PerchedFlapSpeed>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__PerchedFlapSpeed_k__BackingField, put=__cordl_internal_set__PerchedFlapSpeed_k__BackingField)) float_t  _PerchedFlapSpeed_k__BackingField;

/// @brief Field <TravellingLocalRotationEuler>k__BackingField, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__TravellingLocalRotationEuler_k__BackingField, put=__cordl_internal_set__TravellingLocalRotationEuler_k__BackingField)) ::UnityEngine::Vector3  _TravellingLocalRotationEuler_k__BackingField;

/// @brief Field <TravellingLocalRotation>k__BackingField, offset 0x74, size 0x10 
 __declspec(property(get=__cordl_internal_get__TravellingLocalRotation_k__BackingField, put=__cordl_internal_set__TravellingLocalRotation_k__BackingField)) ::UnityEngine::Quaternion  _TravellingLocalRotation_k__BackingField;

/// @brief Field allPerchZones, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPerchZones, put=__cordl_internal_set_allPerchZones)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  allPerchZones;

/// @brief Field beePrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_beePrefab, put=__cordl_internal_set_beePrefab)) ::UnityW<::UnityEngine::MeshRenderer>  beePrefab;

/// @brief Field butterflies, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_butterflies, put=__cordl_internal_set_butterflies)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly>*  butterflies;

/// @brief Field loopSizePerBee, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSizePerBee, put=__cordl_internal_set_loopSizePerBee)) int32_t  loopSizePerBee;

/// @brief Field maxFlapSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFlapSpeed, put=__cordl_internal_set_maxFlapSpeed)) float_t  maxFlapSpeed;

/// @brief Field minFlapSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minFlapSpeed, put=__cordl_internal_set_minFlapSpeed)) float_t  minFlapSpeed;

/// @brief Field numBees, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_numBees, put=__cordl_internal_set_numBees)) int32_t  numBees;

/// @brief Field perchSections, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_perchSections, put=__cordl_internal_set_perchSections)) ::ArrayW<::GlobalNamespace::XSceneRef>  perchSections;

/// @brief Method Awake, addr 0x5614cbc, size 0x228, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ButterflySwarmManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56158ac, size 0xc0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSeedChange, addr 0x56153ec, size 0x4c0, virtual false, abstract: false, final false
inline void OnSeedChange() ;

/// @brief Method PickPoints, addr 0x5615ac0, size 0x250, virtual false, abstract: false, final false
inline void PickPoints(int32_t  n, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  pickBuffer, ::by_ref<::GlobalNamespace::SRand>  rand, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  resultBuffer) ;

/// @brief Method Start, addr 0x5614ee4, size 0x508, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x561596c, size 0x154, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__AvoidPointRadius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AvoidPointRadius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__BeeAcceleration_k__BackingField() const;

constexpr float_t& __cordl_internal_get__BeeAcceleration_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__BeeColors_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__BeeColors_k__BackingField() ;

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

constexpr float_t const& __cordl_internal_get__DestRotationAlignmentSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DestRotationAlignmentSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__PerchedFlapPhase_k__BackingField() const;

constexpr float_t& __cordl_internal_get__PerchedFlapPhase_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__PerchedFlapSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__PerchedFlapSpeed_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TravellingLocalRotationEuler_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TravellingLocalRotationEuler_k__BackingField() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__TravellingLocalRotation_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__TravellingLocalRotation_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* const& __cordl_internal_get_allPerchZones() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*& __cordl_internal_get_allPerchZones() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_beePrefab() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_beePrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly>* const& __cordl_internal_get_butterflies() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly>*& __cordl_internal_get_butterflies() ;

constexpr int32_t const& __cordl_internal_get_loopSizePerBee() const;

constexpr int32_t& __cordl_internal_get_loopSizePerBee() ;

constexpr float_t const& __cordl_internal_get_maxFlapSpeed() const;

constexpr float_t& __cordl_internal_get_maxFlapSpeed() ;

constexpr float_t const& __cordl_internal_get_minFlapSpeed() const;

constexpr float_t& __cordl_internal_get_minFlapSpeed() ;

constexpr int32_t const& __cordl_internal_get_numBees() const;

constexpr int32_t& __cordl_internal_get_numBees() ;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& __cordl_internal_get_perchSections() const;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& __cordl_internal_get_perchSections() ;

constexpr void __cordl_internal_set__AvoidPointRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeAcceleration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeColors_k__BackingField(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__BeeJitterDamping_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeJitterStrength_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxFlowerDuration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxJitterRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMaxTravelTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeMinFlowerDuration_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeNearDestinationRadius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__BeeSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DestRotationAlignmentSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__PerchedFlapPhase_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__PerchedFlapSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TravellingLocalRotationEuler_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__TravellingLocalRotation_k__BackingField(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_allPerchZones(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

constexpr void __cordl_internal_set_beePrefab(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_butterflies(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly>*  value) ;

constexpr void __cordl_internal_set_loopSizePerBee(int32_t  value) ;

constexpr void __cordl_internal_set_maxFlapSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minFlapSpeed(float_t  value) ;

constexpr void __cordl_internal_set_numBees(int32_t  value) ;

constexpr void __cordl_internal_set_perchSections(::ArrayW<::GlobalNamespace::XSceneRef>  value) ;

/// @brief Method .ctor, addr 0x5615d10, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_AvoidPointRadius, addr 0x5614c7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_AvoidPointRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeAcceleration, addr 0x5614bec, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeAcceleration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeColors, addr 0x5614cac, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> get_BeeColors() ;

/// [CompilerGenerated]
/// @brief Method get_BeeJitterDamping, addr 0x5614c0c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeJitterDamping() ;

/// [CompilerGenerated]
/// @brief Method get_BeeJitterStrength, addr 0x5614bfc, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeJitterStrength() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxFlowerDuration, addr 0x5614c9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxFlowerDuration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxJitterRadius, addr 0x5614c1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxJitterRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMaxTravelTime, addr 0x5614bdc, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMaxTravelTime() ;

/// [CompilerGenerated]
/// @brief Method get_BeeMinFlowerDuration, addr 0x5614c8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeMinFlowerDuration() ;

/// [CompilerGenerated]
/// @brief Method get_BeeNearDestinationRadius, addr 0x5614c2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeNearDestinationRadius() ;

/// [CompilerGenerated]
/// @brief Method get_BeeSpeed, addr 0x5614bcc, size 0x8, virtual false, abstract: false, final false
inline float_t get_BeeSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_DestRotationAlignmentSpeed, addr 0x5614c3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_DestRotationAlignmentSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_PerchedFlapPhase, addr 0x5614bbc, size 0x8, virtual false, abstract: false, final false
inline float_t get_PerchedFlapPhase() ;

/// [CompilerGenerated]
/// @brief Method get_PerchedFlapSpeed, addr 0x5614bac, size 0x8, virtual false, abstract: false, final false
inline float_t get_PerchedFlapSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_TravellingLocalRotation, addr 0x5614c64, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_TravellingLocalRotation() ;

/// [CompilerGenerated]
/// @brief Method get_TravellingLocalRotationEuler, addr 0x5614c4c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TravellingLocalRotationEuler() ;

/// [CompilerGenerated]
/// @brief Method set_AvoidPointRadius, addr 0x5614c84, size 0x8, virtual false, abstract: false, final false
inline void set_AvoidPointRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeAcceleration, addr 0x5614bf4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeAcceleration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeColors, addr 0x5614cb4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeColors(::ArrayW<::UnityEngine::Color>  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeJitterDamping, addr 0x5614c14, size 0x8, virtual false, abstract: false, final false
inline void set_BeeJitterDamping(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeJitterStrength, addr 0x5614c04, size 0x8, virtual false, abstract: false, final false
inline void set_BeeJitterStrength(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxFlowerDuration, addr 0x5614ca4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxFlowerDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxJitterRadius, addr 0x5614c24, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxJitterRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMaxTravelTime, addr 0x5614be4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMaxTravelTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeMinFlowerDuration, addr 0x5614c94, size 0x8, virtual false, abstract: false, final false
inline void set_BeeMinFlowerDuration(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeNearDestinationRadius, addr 0x5614c34, size 0x8, virtual false, abstract: false, final false
inline void set_BeeNearDestinationRadius(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BeeSpeed, addr 0x5614bd4, size 0x8, virtual false, abstract: false, final false
inline void set_BeeSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DestRotationAlignmentSpeed, addr 0x5614c44, size 0x8, virtual false, abstract: false, final false
inline void set_DestRotationAlignmentSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PerchedFlapPhase, addr 0x5614bc4, size 0x8, virtual false, abstract: false, final false
inline void set_PerchedFlapPhase(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PerchedFlapSpeed, addr 0x5614bb4, size 0x8, virtual false, abstract: false, final false
inline void set_PerchedFlapSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TravellingLocalRotation, addr 0x5614c70, size 0xc, virtual false, abstract: false, final false
inline void set_TravellingLocalRotation(::UnityEngine::Quaternion  value) ;

/// [CompilerGenerated]
/// @brief Method set_TravellingLocalRotationEuler, addr 0x5614c58, size 0xc, virtual false, abstract: false, final false
inline void set_TravellingLocalRotationEuler(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButterflySwarmManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButterflySwarmManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ButterflySwarmManager(ButterflySwarmManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButterflySwarmManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButterflySwarmManager(ButterflySwarmManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{552};

/// [SerializeField]
/// @brief Field perchSections, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XSceneRef>  ___perchSections;

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
/// @brief Field maxFlapSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxFlapSpeed;

/// [SerializeField]
/// @brief Field minFlapSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___minFlapSpeed;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <PerchedFlapSpeed>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____PerchedFlapSpeed_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <PerchedFlapPhase>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____PerchedFlapPhase_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeSpeed>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____BeeSpeed_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMaxTravelTime>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 float_t  ____BeeMaxTravelTime_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeAcceleration>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____BeeAcceleration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeJitterStrength>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____BeeJitterStrength_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Should be 0-1; closer to 1 = less damping")]
/// @brief Field <BeeJitterDamping>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____BeeJitterDamping_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Limits how far the bee can get off course")]
/// @brief Field <BeeMaxJitterRadius>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____BeeMaxJitterRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Bees stop jittering when close to their destination")]
/// @brief Field <BeeNearDestinationRadius>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____BeeNearDestinationRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip(">0 to get butterflies to align to their destination rotation as they land")]
/// @brief Field <DestRotationAlignmentSpeed>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____DestRotationAlignmentSpeed_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Model orientation relative to the direction vector while flying")]
/// @brief Field <TravellingLocalRotationEuler>k__BackingField, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TravellingLocalRotationEuler_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TravellingLocalRotation>k__BackingField, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____TravellingLocalRotation_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <AvoidPointRadius>k__BackingField, offset: 0x84, size: 0x4, def value: None
 float_t  ____AvoidPointRadius_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMinFlowerDuration>k__BackingField, offset: 0x88, size: 0x4, def value: None
 float_t  ____BeeMinFlowerDuration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeMaxFlowerDuration>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 float_t  ____BeeMaxFlowerDuration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <BeeColors>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____BeeColors_k__BackingField;

/// @brief Field butterflies, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedButterfly>*  ___butterflies;

/// @brief Field allPerchZones, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  ___allPerchZones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___perchSections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___loopSizePerBee) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___numBees) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___beePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___maxFlapSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___minFlapSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____PerchedFlapSpeed_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____PerchedFlapPhase_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeSpeed_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeMaxTravelTime_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeAcceleration_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeJitterStrength_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeJitterDamping_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeMaxJitterRadius_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeNearDestinationRadius_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____DestRotationAlignmentSpeed_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____TravellingLocalRotationEuler_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____TravellingLocalRotation_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____AvoidPointRadius_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeMinFlowerDuration_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeMaxFlowerDuration_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ____BeeColors_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___butterflies) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButterflySwarmManager, ___allPerchZones) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ButterflySwarmManager) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
