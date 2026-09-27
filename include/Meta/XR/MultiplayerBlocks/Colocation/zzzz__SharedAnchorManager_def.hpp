#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedAnchorManager)
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
struct SharedAnchorManager__AnchorCreationTask_d__21;
}
namespace GlobalNamespace {
struct SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25;
}
namespace GlobalNamespace {
struct SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22;
}
namespace GlobalNamespace {
struct SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28;
}
namespace GlobalNamespace {
struct SharedAnchorManager__CreateAlignmentAnchor_d__19;
}
namespace GlobalNamespace {
struct SharedAnchorManager__CreateAnchor_d__20;
}
namespace GlobalNamespace {
struct SharedAnchorManager__RetrieveAnchorsFromGroup_d__23;
}
namespace GlobalNamespace {
struct SharedAnchorManager__RetrieveAnchors_d__24;
}
namespace GlobalNamespace {
struct SharedAnchorManager__ShareAnchorsWithGroup_d__26;
}
namespace GlobalNamespace {
struct SharedAnchorManager__ShareAnchorsWithUser_d__27;
}
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass24_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass26_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass27_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass29_0;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass21_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass23_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass24_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass26_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass27_0;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager___c__DisplayClass29_0;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass21_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass26_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass27_0");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<>c__DisplayClass29_0");
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager
class CORDL_TYPE SharedAnchorManager : public ::System::Object {
public:
// Declarations
using _AnchorCreationTask_d__21 = ::GlobalNamespace::SharedAnchorManager__AnchorCreationTask_d__21;

using _CheckIfRetrievingAnchorServiceHung_d__25 = ::GlobalNamespace::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25;

using _CheckIfSavingAnchorsServiceHung_d__22 = ::GlobalNamespace::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22;

using _CheckIfSharingAnchorServiceHung_d__28 = ::GlobalNamespace::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28;

using _CreateAlignmentAnchor_d__19 = ::GlobalNamespace::SharedAnchorManager__CreateAlignmentAnchor_d__19;

using _CreateAnchor_d__20 = ::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20;

using _RetrieveAnchorsFromGroup_d__23 = ::GlobalNamespace::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23;

using _RetrieveAnchors_d__24 = ::GlobalNamespace::SharedAnchorManager__RetrieveAnchors_d__24;

using _ShareAnchorsWithGroup_d__26 = ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithGroup_d__26;

using _ShareAnchorsWithUser_d__27 = ::GlobalNamespace::SharedAnchorManager__ShareAnchorsWithUser_d__27;

using __c__DisplayClass21_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0;

using __c__DisplayClass23_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0;

using __c__DisplayClass24_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0;

using __c__DisplayClass26_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0;

using __c__DisplayClass27_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0;

using __c__DisplayClass29_0 = ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0;

 __declspec(property(get=get_AnchorPrefab, put=set_AnchorPrefab)) ::UnityW<::UnityEngine::GameObject>  AnchorPrefab;

 __declspec(property(get=get_LocalAnchors)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  LocalAnchors;

/// @brief Field <AnchorPrefab>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorPrefab_k__BackingField, put=__cordl_internal_set__AnchorPrefab_k__BackingField)) ::UnityW<::UnityEngine::GameObject>  _AnchorPrefab_k__BackingField;

/// @brief Field _localAnchors, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localAnchors, put=__cordl_internal_set__localAnchors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _localAnchors;

/// @brief Field _localizationTasks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizationTasks, put=__cordl_internal_set__localizationTasks)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _localizationTasks;

/// @brief Field _localizationTcsList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localizationTcsList, put=__cordl_internal_set__localizationTcsList)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*  _localizationTcsList;

/// @brief Field _retrieveAnchorIsSuccessful, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__retrieveAnchorIsSuccessful, put=__cordl_internal_set__retrieveAnchorIsSuccessful)) bool  _retrieveAnchorIsSuccessful;

/// @brief Field _saveAnchorSaveToCloudIsSuccessful, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__saveAnchorSaveToCloudIsSuccessful, put=__cordl_internal_set__saveAnchorSaveToCloudIsSuccessful)) bool  _saveAnchorSaveToCloudIsSuccessful;

/// @brief Field _shareAnchorIsSuccessful, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__shareAnchorIsSuccessful, put=__cordl_internal_set__shareAnchorIsSuccessful)) bool  _shareAnchorIsSuccessful;

/// @brief Field _sharedAnchors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sharedAnchors, put=__cordl_internal_set__sharedAnchors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _sharedAnchors;

/// @brief Field _ssaCore, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ssaCore, put=__cordl_internal_set__ssaCore)) ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  _ssaCore;

/// @brief Field _userShareList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__userShareList, put=__cordl_internal_set__userShareList)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*  _userShareList;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<AnchorCreationTask>d__21))]
/// @brief Method AnchorCreationTask, addr 0x9f77118, size 0x15c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* AnchorCreationTask(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<CheckIfRetrievingAnchorServiceHung>d__25))]
/// @brief Method CheckIfRetrievingAnchorServiceHung, addr 0x9f7731c, size 0xa8, virtual false, abstract: false, final false
inline void CheckIfRetrievingAnchorServiceHung() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<CheckIfSavingAnchorsServiceHung>d__22))]
/// @brief Method CheckIfSavingAnchorsServiceHung, addr 0x9f77274, size 0xa8, virtual false, abstract: false, final false
inline void CheckIfSavingAnchorsServiceHung() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<CheckIfSharingAnchorServiceHung>d__28))]
/// @brief Method CheckIfSharingAnchorServiceHung, addr 0x9f773c4, size 0xa8, virtual false, abstract: false, final false
inline void CheckIfSharingAnchorServiceHung() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<CreateAlignmentAnchor>d__19))]
/// @brief Method CreateAlignmentAnchor, addr 0x9f68898, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CreateAlignmentAnchor() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<CreateAnchor>d__20))]
/// @brief Method CreateAnchor, addr 0x9f76fc0, size 0x158, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* CreateAnchor(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation) ;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* New_ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*  ssaCore) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<RetrieveAnchors>d__24))]
/// @brief Method RetrieveAnchors, addr 0x9f75a0c, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* RetrieveAnchors(::System::Collections::Generic::List_1<::System::Guid>*  anchorIds) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<RetrieveAnchorsFromGroup>d__23))]
/// @brief Method RetrieveAnchorsFromGroup, addr 0x9f69548, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* RetrieveAnchorsFromGroup(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<ShareAnchorsWithGroup>d__26))]
/// @brief Method ShareAnchorsWithGroup, addr 0x9f689a0, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ShareAnchorsWithGroup(::System::Guid  groupUuid) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager::<ShareAnchorsWithUser>d__27))]
/// @brief Method ShareAnchorsWithUser, addr 0x9f76024, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* ShareAnchorsWithUser(uint64_t  userId) ;

/// @brief Method StopSharingAnchorsWithUser, addr 0x9f7746c, size 0xd8, virtual false, abstract: false, final false
inline void StopSharingAnchorsWithUser(uint64_t  userId) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__AnchorPrefab_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__AnchorPrefab_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const& __cordl_internal_get__localAnchors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& __cordl_internal_get__localAnchors() ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get__localizationTasks() const;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get__localizationTasks() ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* const& __cordl_internal_get__localizationTcsList() const;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*& __cordl_internal_get__localizationTcsList() ;

constexpr bool const& __cordl_internal_get__retrieveAnchorIsSuccessful() const;

constexpr bool& __cordl_internal_get__retrieveAnchorIsSuccessful() ;

constexpr bool const& __cordl_internal_get__saveAnchorSaveToCloudIsSuccessful() const;

constexpr bool& __cordl_internal_get__saveAnchorSaveToCloudIsSuccessful() ;

constexpr bool const& __cordl_internal_get__shareAnchorIsSuccessful() const;

constexpr bool& __cordl_internal_get__shareAnchorIsSuccessful() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const& __cordl_internal_get__sharedAnchors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& __cordl_internal_get__sharedAnchors() ;

constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> const& __cordl_internal_get__ssaCore() const;

constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>& __cordl_internal_get__ssaCore() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* const& __cordl_internal_get__userShareList() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*& __cordl_internal_get__userShareList() ;

constexpr void __cordl_internal_set__AnchorPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__localAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value) ;

constexpr void __cordl_internal_set__localizationTasks(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set__localizationTcsList(::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*  value) ;

constexpr void __cordl_internal_set__retrieveAnchorIsSuccessful(bool  value) ;

constexpr void __cordl_internal_set__saveAnchorSaveToCloudIsSuccessful(bool  value) ;

constexpr void __cordl_internal_set__shareAnchorIsSuccessful(bool  value) ;

constexpr void __cordl_internal_set__sharedAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value) ;

constexpr void __cordl_internal_set__ssaCore(::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  value) ;

constexpr void __cordl_internal_set__userShareList(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*  value) ;

/// @brief Method .ctor, addr 0x9f66d30, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*  ssaCore) ;

/// [CompilerGenerated]
/// @brief Method get_AnchorPrefab, addr 0x9f76fa8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_AnchorPrefab() ;

/// @brief Method get_LocalAnchors, addr 0x9f76fb8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* get_LocalAnchors() ;

/// [CompilerGenerated]
/// @brief Method set_AnchorPrefab, addr 0x9f76fb0, size 0x8, virtual false, abstract: false, final false
inline void set_AnchorPrefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager(SharedAnchorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager(SharedAnchorManager const& ) = delete;

/// @brief Field RetrieveAnchorWaitTimeThreshold offset 0xffffffff size 0x4
static constexpr int32_t  RetrieveAnchorWaitTimeThreshold{static_cast<int32_t>(0x2710)};

/// @brief Field SaveAnchorWaitTimeThreshold offset 0xffffffff size 0x4
static constexpr int32_t  SaveAnchorWaitTimeThreshold{static_cast<int32_t>(0x2710)};

/// @brief Field ShareAnchorWaitTimeThreshold offset 0xffffffff size 0x4
static constexpr int32_t  ShareAnchorWaitTimeThreshold{static_cast<int32_t>(0x2710)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30694};

/// @brief Field _localAnchors, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  ____localAnchors;

/// @brief Field _sharedAnchors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  ____sharedAnchors;

/// @brief Field _userShareList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*  ____userShareList;

/// @brief Field _saveAnchorSaveToCloudIsSuccessful, offset: 0x28, size: 0x1, def value: None
 bool  ____saveAnchorSaveToCloudIsSuccessful;

/// @brief Field _shareAnchorIsSuccessful, offset: 0x29, size: 0x1, def value: None
 bool  ____shareAnchorIsSuccessful;

/// @brief Field _retrieveAnchorIsSuccessful, offset: 0x2a, size: 0x1, def value: None
 bool  ____retrieveAnchorIsSuccessful;

/// @brief Field _localizationTasks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  ____localizationTasks;

/// @brief Field _localizationTcsList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*  ____localizationTcsList;

/// [CompilerGenerated]
/// @brief Field <AnchorPrefab>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____AnchorPrefab_k__BackingField;

/// @brief Field _ssaCore, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  ____ssaCore;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localAnchors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____sharedAnchors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____userShareList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____saveAnchorSaveToCloudIsSuccessful) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____shareAnchorIsSuccessful) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____retrieveAnchorIsSuccessful) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localizationTasks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____localizationTcsList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____AnchorPrefab_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager, ____ssaCore) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass29_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field userId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_userId, put=__cordl_internal_set_userId)) uint64_t  userId;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <StopSharingAnchorsWithUser>b__0, addr 0x9f77954, size 0x34, virtual false, abstract: false, final false
inline bool _StopSharingAnchorsWithUser_b__0(::GlobalNamespace::OVRSpaceUser  el) ;

constexpr uint64_t const& __cordl_internal_get_userId() const;

constexpr uint64_t& __cordl_internal_get_userId() ;

constexpr void __cordl_internal_set_userId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x9f77544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass29_0(SharedAnchorManager___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass29_0(SharedAnchorManager___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30683};

/// @brief Field userId, offset: 0x10, size: 0x8, def value: None
 uint64_t  ___userId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0, ___userId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass27_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  task;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <ShareAnchorsWithUser>g__ShareCompleteCallback|0, addr 0x9f7786c, size 0xe8, virtual false, abstract: false, final false
inline void _ShareAnchorsWithUser_g__ShareCompleteCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9f77864, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass27_0(SharedAnchorManager___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass27_0(SharedAnchorManager___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30682};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___task;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass26_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  task;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <ShareAnchorsWithGroup>g__ShareToGroupCompletedCallback|0, addr 0x9f7777c, size 0xe8, virtual false, abstract: false, final false
inline void _ShareAnchorsWithGroup_g__ShareToGroupCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _, ::GlobalNamespace::OVRAnchor_ShareResult  result) ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x9f77774, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass26_0(SharedAnchorManager___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass26_0(SharedAnchorManager___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30681};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___task;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass24_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field task, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  task;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* New_ctor() ;

/// @brief Method <RetrieveAnchors>g__LoadCompletedCallback|0, addr 0x9f776c4, size 0xb0, virtual false, abstract: false, final false
inline void _RetrieveAnchors_g__LoadCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  loadedAnchors, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

/// @brief Method .ctor, addr 0x9f776bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass24_0(SharedAnchorManager___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass24_0(SharedAnchorManager___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30680};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _____4__this;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0, ___task) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass23_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field task, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  task;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <RetrieveAnchorsFromGroup>g__LoadCompletedCallback|0, addr 0x9f7760c, size 0xb0, virtual false, abstract: false, final false
inline void _RetrieveAnchorsFromGroup_g__LoadCompletedCallback_0(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  loadedAnchors, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

/// @brief Method .ctor, addr 0x9f77604, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass23_0(SharedAnchorManager___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass23_0(SharedAnchorManager___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30679};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _____4__this;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0, ___task) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Colocation {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<>c__DisplayClass21_0
class CORDL_TYPE SharedAnchorManager___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field task, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*  task;

static inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <AnchorCreationTask>g__CreateCompletedCallback|0, addr 0x9f77554, size 0xb0, virtual false, abstract: false, final false
inline void _AnchorCreationTask_g__CreateCompletedCallback_0(::GlobalNamespace::OVRSpatialAnchor*  anchor, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*  value) ;

/// @brief Method .ctor, addr 0x9f7754c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedAnchorManager___c__DisplayClass21_0(SharedAnchorManager___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedAnchorManager___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedAnchorManager___c__DisplayClass21_0(SharedAnchorManager___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30678};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  _____4__this;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0, ___task) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation
