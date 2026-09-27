#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FlockingData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FlockingManager)
namespace GlobalNamespace {
struct FlockingData;
}
namespace GlobalNamespace {
class FlockingManager_FishArea;
}
namespace GlobalNamespace {
class FlockingManager_FishFood;
}
namespace GlobalNamespace {
class Flocking;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class ZoneBasedObject;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlockingManager;
}
namespace GlobalNamespace {
class FlockingManager_FishArea;
}
namespace GlobalNamespace {
class FlockingManager_FishFood;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FlockingManager*);
MARK_REF_T(::GlobalNamespace::FlockingManager_FishArea*);
MARK_REF_T(::GlobalNamespace::FlockingManager_FishFood*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlockingManager*, "", "FlockingManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlockingManager_FishArea*, "", "FlockingManager/FishArea");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlockingManager_FishFood*, "", "FlockingManager/FishFood");
// [NetworkBehaviourWeaved(337)]
// Dependencies FlockingData, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlockingManager
class CORDL_TYPE FlockingManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using FishArea = ::GlobalNamespace::FlockingManager_FishArea;

using FishFood = ::GlobalNamespace::FlockingManager_FishFood;

/// [Networked]
/// @brief [NetworkedWeaved(0, 337)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::FlockingData  Data;

/// @brief Field _Data, offset 0xdc, size 0x544 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::FlockingData  _Data;

/// @brief Field allFish, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allFish, put=__cordl_internal_set_allFish)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  allFish;

/// @brief Field areaToWaypointDict, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_areaToWaypointDict, put=__cordl_internal_set_areaToWaypointDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*  areaToWaypointDict;

/// @brief Field avoidPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_avoidPoints, put=setStaticF_avoidPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  avoidPoints;

/// @brief Field fishAreaContainer, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fishAreaContainer, put=__cordl_internal_set_fishAreaContainer)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  fishAreaContainer;

/// @brief Field fishAreaList, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fishAreaList, put=__cordl_internal_set_fishAreaList)) ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*  fishAreaList;

/// @brief Field foodProjectileTag, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_foodProjectileTag, put=__cordl_internal_set_foodProjectileTag)) ::StringW  foodProjectileTag;

/// @brief Field hasBeenSerialized, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenSerialized, put=__cordl_internal_set_hasBeenSerialized)) bool  hasBeenSerialized;

/// @brief Field onFoodDestroyed, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFoodDestroyed, put=__cordl_internal_set_onFoodDestroyed)) ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*  onFoodDestroyed;

/// @brief Field onFoodDetected, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFoodDetected, put=__cordl_internal_set_onFoodDetected)) ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*  onFoodDetected;

/// @brief Method Awake, addr 0x5808ab0, size 0x5ac, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x580a474, size 0x64, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x580a4d8, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetRandomPointInsideCollider, addr 0x5807bc0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRandomPointInsideCollider(::GlobalNamespace::FlockingManager_FishArea*  fishArea) ;

/// @brief Method IsInside, addr 0x58076dc, size 0x134, virtual false, abstract: false, final false
inline bool IsInside(::UnityEngine::Vector3  point, ::GlobalNamespace::FlockingManager_FishArea*  fish) ;

static inline ::GlobalNamespace::FlockingManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58091a0, size 0x390, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ProjectileHitExit, addr 0x58099a8, size 0x9c, virtual false, abstract: false, final false
inline void ProjectileHitExit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider2) ;

/// @brief Method ProjectileHitReceiver, addr 0x5809844, size 0x15c, virtual false, abstract: false, final false
inline void ProjectileHitReceiver(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider1) ;

/// @brief Method ReadDataFusion, addr 0x5809d78, size 0x258, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x580a130, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterAvoidPoint, addr 0x580a134, size 0xd4, virtual false, abstract: false, final false
static inline void RegisterAvoidPoint(::UnityEngine::GameObject*  obj) ;

/// @brief Method RestrictPointToArea, addr 0x5807fb8, size 0x2e0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RestrictPointToArea(::UnityEngine::Vector3  point, ::GlobalNamespace::FlockingManager_FishArea*  fish) ;

/// @brief Method Start, addr 0x5809124, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnregisterAvoidPoint, addr 0x580a208, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterAvoidPoint(::UnityEngine::GameObject*  obj) ;

/// @brief Method Update, addr 0x5809530, size 0x314, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WriteDataFusion, addr 0x5809b00, size 0x84, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x580a12c, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::FlockingData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::FlockingData& __cordl_internal_get__Data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* const& __cordl_internal_get_allFish() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*& __cordl_internal_get_allFish() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>* const& __cordl_internal_get_areaToWaypointDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*& __cordl_internal_get_areaToWaypointDict() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_fishAreaContainer() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_fishAreaContainer() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>* const& __cordl_internal_get_fishAreaList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*& __cordl_internal_get_fishAreaList() ;

constexpr ::StringW const& __cordl_internal_get_foodProjectileTag() const;

constexpr ::StringW& __cordl_internal_get_foodProjectileTag() ;

constexpr bool const& __cordl_internal_get_hasBeenSerialized() const;

constexpr bool& __cordl_internal_get_hasBeenSerialized() ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>* const& __cordl_internal_get_onFoodDestroyed() const;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*& __cordl_internal_get_onFoodDestroyed() ;

constexpr ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>* const& __cordl_internal_get_onFoodDetected() const;

constexpr ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*& __cordl_internal_get_onFoodDetected() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::FlockingData  value) ;

constexpr void __cordl_internal_set_allFish(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value) ;

constexpr void __cordl_internal_set_areaToWaypointDict(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_fishAreaContainer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_fishAreaList(::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*  value) ;

constexpr void __cordl_internal_set_foodProjectileTag(::StringW  value) ;

constexpr void __cordl_internal_set_hasBeenSerialized(bool  value) ;

constexpr void __cordl_internal_set_onFoodDestroyed(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*  value) ;

constexpr void __cordl_internal_set_onFoodDetected(::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*  value) ;

/// @brief Method .ctor, addr 0x580a288, size 0x154, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_avoidPoints() ;

/// @brief Method get_Data, addr 0x5809a44, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::FlockingData get_Data() ;

static inline void setStaticF_avoidPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method set_Data, addr 0x5809aa4, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::FlockingData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlockingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlockingManager(FlockingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlockingManager(FlockingManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1700};

/// @brief Field fishAreaContainer, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___fishAreaContainer;

/// @brief Field foodProjectileTag, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___foodProjectileTag;

/// @brief Field areaToWaypointDict, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Vector3>*  ___areaToWaypointDict;

/// @brief Field fishAreaList, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FlockingManager_FishArea*>*  ___fishAreaList;

/// @brief Field allFish, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  ___allFish;

/// @brief Field onFoodDetected, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<::GlobalNamespace::FlockingManager_FishFood*>*  ___onFoodDetected;

/// @brief Field onFoodDestroyed, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::BoxCollider>>*  ___onFoodDestroyed;

/// @brief Field hasBeenSerialized, offset: 0xd8, size: 0x1, def value: None
 bool  ___hasBeenSerialized;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 337)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xdc, size: 0x544, def value: None
 ::GlobalNamespace::FlockingData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlockingManager, ___fishAreaContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___foodProjectileTag) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___areaToWaypointDict) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___fishAreaList) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___allFish) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___onFoodDetected) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___onFoodDestroyed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ___hasBeenSerialized) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager, ____Data) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlockingManager) == 0x620, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlockingManager/FishFood
class CORDL_TYPE FlockingManager_FishFood : public ::System::Object {
public:
// Declarations
/// @brief Field collider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::BoxCollider>  collider;

/// @brief Field isRealFood, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRealFood, put=__cordl_internal_set_isRealFood)) bool  isRealFood;

/// @brief Field slingshotProjectile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_slingshotProjectile, put=__cordl_internal_set_slingshotProjectile)) ::UnityW<::GlobalNamespace::SlingshotProjectile>  slingshotProjectile;

static inline ::GlobalNamespace::FlockingManager_FishFood* New_ctor() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_collider() ;

constexpr bool const& __cordl_internal_get_isRealFood() const;

constexpr bool& __cordl_internal_get_isRealFood() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile> const& __cordl_internal_get_slingshotProjectile() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile>& __cordl_internal_get_slingshotProjectile() ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_isRealFood(bool  value) ;

constexpr void __cordl_internal_set_slingshotProjectile(::UnityW<::GlobalNamespace::SlingshotProjectile>  value) ;

/// @brief Method .ctor, addr 0x58099a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlockingManager_FishFood() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager_FishFood", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlockingManager_FishFood(FlockingManager_FishFood && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager_FishFood", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlockingManager_FishFood(FlockingManager_FishFood const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1699};

/// @brief Field collider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___collider;

/// @brief Field isRealFood, offset: 0x18, size: 0x1, def value: None
 bool  ___isRealFood;

/// @brief Field slingshotProjectile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectile>  ___slingshotProjectile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlockingManager_FishFood, ___collider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishFood, ___isRealFood) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishFood, ___slingshotProjectile) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlockingManager_FishFood) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.BoxCollider, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FlockingManager/FishArea
class CORDL_TYPE FlockingManager_FishArea : public ::System::Object {
public:
// Declarations
/// @brief Field colliderCenter, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_colliderCenter, put=__cordl_internal_set_colliderCenter)) ::UnityEngine::Vector3  colliderCenter;

/// @brief Field colliders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  colliders;

/// @brief Field fishList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fishList, put=__cordl_internal_set_fishList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  fishList;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field nextWaypoint, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_nextWaypoint, put=__cordl_internal_set_nextWaypoint)) ::UnityEngine::Vector3  nextWaypoint;

/// @brief Field zoneBasedObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneBasedObject, put=__cordl_internal_set_zoneBasedObject)) ::UnityW<::GlobalNamespace::ZoneBasedObject>  zoneBasedObject;

static inline ::GlobalNamespace::FlockingManager_FishArea* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_colliderCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_colliderCenter() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>& __cordl_internal_get_colliders() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* const& __cordl_internal_get_fishList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*& __cordl_internal_get_fishList() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_nextWaypoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_nextWaypoint() ;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& __cordl_internal_get_zoneBasedObject() const;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& __cordl_internal_get_zoneBasedObject() ;

constexpr void __cordl_internal_set_colliderCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  value) ;

constexpr void __cordl_internal_set_fishList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_nextWaypoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_zoneBasedObject(::UnityW<::GlobalNamespace::ZoneBasedObject>  value) ;

/// @brief Method .ctor, addr 0x580905c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlockingManager_FishArea() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager_FishArea", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlockingManager_FishArea(FlockingManager_FishArea && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlockingManager_FishArea", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlockingManager_FishArea(FlockingManager_FishArea const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1698};

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field fishList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  ___fishList;

/// @brief Field colliderCenter, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___colliderCenter;

/// @brief Field colliders, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  ___colliders;

/// @brief Field nextWaypoint, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___nextWaypoint;

/// @brief Field zoneBasedObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneBasedObject>  ___zoneBasedObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___fishList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___colliderCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___colliders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___nextWaypoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlockingManager_FishArea, ___zoneBasedObject) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlockingManager_FishArea) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
