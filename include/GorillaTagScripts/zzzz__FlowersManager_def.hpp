#pragma once
// IWYU pragma private; include "GorillaTagScripts/FlowersManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GorillaTagScripts/zzzz__FlowersDataStruct_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlowersManager)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GorillaTagScripts {
class Flower;
}
namespace GorillaTagScripts {
struct FlowersDataStruct;
}
namespace GorillaTagScripts {
class FlowersManager_FlowersInZone;
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
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts {
class FlowersManager;
}
namespace GorillaTagScripts {
class FlowersManager_FlowersInZone;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::FlowersManager*);
MARK_REF_T(::GorillaTagScripts::FlowersManager_FlowersInZone*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::FlowersManager*, "GorillaTagScripts", "FlowersManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::FlowersManager_FlowersInZone*, "GorillaTagScripts", "FlowersManager/FlowersInZone");
// [NetworkBehaviourWeaved(13)]
// Dependencies GorillaTagScripts.FlowersDataStruct, NetworkComponent, SlingshotProjectileHitNotifier
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.FlowersManager
class CORDL_TYPE FlowersManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using FlowersInZone = ::GorillaTagScripts::FlowersManager_FlowersInZone;

/// [Networked]
/// @brief [NetworkedWeaved(0, 13)]
 __declspec(property(get=get_Data, put=set_Data)) ::GorillaTagScripts::FlowersDataStruct  Data;

/// @brief Field _Data, offset 0xd4, size 0x34 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GorillaTagScripts::FlowersDataStruct  _Data;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaTagScripts::FlowersManager>  _Instance_k__BackingField;

/// @brief Field allFlowers, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allFlowers, put=__cordl_internal_set_allFlowers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  allFlowers;

/// @brief Field flowerCheckIndex, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowerCheckIndex, put=__cordl_internal_set_flowerCheckIndex)) int32_t  flowerCheckIndex;

/// @brief Field flowersToCheck, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowersToCheck, put=__cordl_internal_set_flowersToCheck)) int32_t  flowersToCheck;

/// @brief Field hasBeenSerialized, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenSerialized, put=__cordl_internal_set_hasBeenSerialized)) bool  hasBeenSerialized;

/// @brief Field hitNotifiers, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitNotifiers, put=__cordl_internal_set_hitNotifiers)) ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>  hitNotifiers;

/// @brief Field sectionToFlowersDict, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sectionToFlowersDict, put=__cordl_internal_set_sectionToFlowersDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*  sectionToFlowersDict;

/// @brief Field sectionToZonesDict, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sectionToZonesDict, put=__cordl_internal_set_sectionToZonesDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*  sectionToZonesDict;

/// @brief Field sections, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sections, put=__cordl_internal_set_sections)) ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*  sections;

/// @brief Method Awake, addr 0x5bb9e58, size 0x518, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bbbda4, size 0x74, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bbbe18, size 0x74, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetHealthyFlowersInZoneCount, addr 0x5bbae10, size 0x2cc, virtual false, abstract: false, final false
inline int32_t GetHealthyFlowersInZoneCount(::GlobalNamespace::GTZone  zone) ;

/// @brief Method HandleOnZoneChanged, addr 0x5bbab18, size 0x2f8, virtual false, abstract: false, final false
inline void HandleOnZoneChanged() ;

static inline ::GorillaTagScripts::FlowersManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bba5d4, size 0x2b0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ProjectileHitReceiver, addr 0x5bba884, size 0x84, virtual false, abstract: false, final false
inline void ProjectileHitReceiver(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

/// @brief Method ReadDataFusion, addr 0x5bbb790, size 0x274, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bbb264, size 0x1c4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Start, addr 0x5bba370, size 0x264, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5bbbbc4, size 0xa8, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WaterFlowers, addr 0x5bba908, size 0x210, virtual false, abstract: false, final false
inline void WaterFlowers(::UnityEngine::Collider*  collider) ;

/// @brief Method WriteDataFusion, addr 0x5bbb508, size 0x9c, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bbb0dc, size 0x188, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GorillaTagScripts::FlowersDataStruct const& __cordl_internal_get__Data() const;

constexpr ::GorillaTagScripts::FlowersDataStruct& __cordl_internal_get__Data() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>* const& __cordl_internal_get_allFlowers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*& __cordl_internal_get_allFlowers() ;

constexpr int32_t const& __cordl_internal_get_flowerCheckIndex() const;

constexpr int32_t& __cordl_internal_get_flowerCheckIndex() ;

constexpr int32_t const& __cordl_internal_get_flowersToCheck() const;

constexpr int32_t& __cordl_internal_get_flowersToCheck() ;

constexpr bool const& __cordl_internal_get_hasBeenSerialized() const;

constexpr bool& __cordl_internal_get_hasBeenSerialized() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>> const& __cordl_internal_get_hitNotifiers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>& __cordl_internal_get_hitNotifiers() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>* const& __cordl_internal_get_sectionToFlowersDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*& __cordl_internal_get_sectionToFlowersDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>* const& __cordl_internal_get_sectionToZonesDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*& __cordl_internal_get_sectionToZonesDict() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>* const& __cordl_internal_get_sections() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*& __cordl_internal_get_sections() ;

constexpr void __cordl_internal_set__Data(::GorillaTagScripts::FlowersDataStruct  value) ;

constexpr void __cordl_internal_set_allFlowers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  value) ;

constexpr void __cordl_internal_set_flowerCheckIndex(int32_t  value) ;

constexpr void __cordl_internal_set_flowersToCheck(int32_t  value) ;

constexpr void __cordl_internal_set_hasBeenSerialized(bool  value) ;

constexpr void __cordl_internal_set_hitNotifiers(::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>  value) ;

constexpr void __cordl_internal_set_sectionToFlowersDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*  value) ;

constexpr void __cordl_internal_set_sectionToZonesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*  value) ;

constexpr void __cordl_internal_set_sections(::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*  value) ;

/// @brief Method .ctor, addr 0x5bbbc6c, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::FlowersManager> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Data, addr 0x5bbb428, size 0x70, virtual false, abstract: false, final false
inline ::GorillaTagScripts::FlowersDataStruct get_Data() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5bb9db8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::FlowersManager> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::FlowersManager>  value) ;

/// @brief Method set_Data, addr 0x5bbb498, size 0x70, virtual false, abstract: false, final false
inline void set_Data(::GorillaTagScripts::FlowersDataStruct  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5bb9e00, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaTagScripts::FlowersManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowersManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowersManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowersManager(FlowersManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowersManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowersManager(FlowersManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3975};

/// @brief Field sections, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::FlowersManager_FlowersInZone*>*  ___sections;

/// @brief Field flowersToCheck, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___flowersToCheck;

/// @brief Field flowerCheckIndex, offset: 0xac, size: 0x4, def value: None
 int32_t  ___flowerCheckIndex;

/// @brief Field allFlowers, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*  ___allFlowers;

/// @brief Field hitNotifiers, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>>  ___hitNotifiers;

/// @brief Field sectionToFlowersDict, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Flower>>*>*  ___sectionToFlowersDict;

/// @brief Field sectionToZonesDict, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::GTZone>*  ___sectionToZonesDict;

/// @brief Field hasBeenSerialized, offset: 0xd0, size: 0x1, def value: None
 bool  ___hasBeenSerialized;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 13)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xd4, size: 0x34, def value: None
 ::GorillaTagScripts::FlowersDataStruct  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___sections) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___flowersToCheck) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___flowerCheckIndex) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___allFlowers) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___hitNotifiers) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___sectionToFlowersDict) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___sectionToZonesDict) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ___hasBeenSerialized) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager, ____Data) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::FlowersManager) == 0x108, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies GTZone, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.FlowersManager/FlowersInZone
class CORDL_TYPE FlowersManager_FlowersInZone : public ::System::Object {
public:
// Declarations
/// @brief Field sections, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sections, put=__cordl_internal_set_sections)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  sections;

/// @brief Field zone, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GorillaTagScripts::FlowersManager_FlowersInZone* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_sections() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_sections() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_sections(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x5bbbe8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowersManager_FlowersInZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowersManager_FlowersInZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowersManager_FlowersInZone(FlowersManager_FlowersInZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowersManager_FlowersInZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowersManager_FlowersInZone(FlowersManager_FlowersInZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3974};

/// @brief Field zone, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field sections, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___sections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::FlowersManager_FlowersInZone, ___zone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FlowersManager_FlowersInZone, ___sections) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::FlowersManager_FlowersInZone) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts
