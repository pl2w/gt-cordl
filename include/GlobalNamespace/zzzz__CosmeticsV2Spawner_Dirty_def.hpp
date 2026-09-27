#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsV2Spawner_Dirty)
namespace GlobalNamespace {
struct CosmeticsV2Spawner_Dirty_LoadOpInfo;
}
namespace GlobalNamespace {
struct CosmeticsV2Spawner_Dirty_VRRigData;
}
namespace GlobalNamespace {
struct CosmeticsV2Spawner_Dirty____Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0_d;
}
namespace GlobalNamespace {
class CosmeticsV2Spawner_Dirty___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class CosmeticsV2Spawner_Dirty___c__DisplayClass37_1;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class SnowballMaker;
}
namespace GlobalNamespace {
class SnowballThrowable;
}
namespace GlobalNamespace {
template<typename TEnum>
struct StringEnum_1;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace GorillaNetworking {
class CosmeticItemRegistry;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticPart;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Action;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsV2Spawner_Dirty;
}
namespace GlobalNamespace {
class CosmeticsV2Spawner_Dirty___c__DisplayClass37_0;
}
namespace GlobalNamespace {
class CosmeticsV2Spawner_Dirty___c__DisplayClass37_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticsV2Spawner_Dirty*);
MARK_REF_T(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*);
MARK_REF_T(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsV2Spawner_Dirty*, "", "CosmeticsV2Spawner_Dirty");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*, "", "CosmeticsV2Spawner_Dirty/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1*, "", "CosmeticsV2Spawner_Dirty/<>c__DisplayClass37_1");
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsV2Spawner_Dirty
class CORDL_TYPE CosmeticsV2Spawner_Dirty : public ::System::Object {
public:
// Declarations
using LoadOpInfo = ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo;

using VRRigData = ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData;

using ___Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0_d = ::GlobalNamespace::CosmeticsV2Spawner_Dirty____Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0_d;

using __c__DisplayClass37_0 = ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0;

using __c__DisplayClass37_1 = ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1;

/// @brief Field OnPostInstantiateAllPrefabs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPostInstantiateAllPrefabs, put=setStaticF_OnPostInstantiateAllPrefabs)) ::System::Action*  OnPostInstantiateAllPrefabs;

/// @brief Field _gDeactivatedSpawnParent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gDeactivatedSpawnParent, put=setStaticF__gDeactivatedSpawnParent)) ::UnityW<::UnityEngine::Transform>  _gDeactivatedSpawnParent;

/// @brief Field _gSnowballMakerLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gSnowballMakerLeft, put=setStaticF__gSnowballMakerLeft)) ::UnityW<::GlobalNamespace::SnowballMaker>  _gSnowballMakerLeft;

/// @brief Field _gSnowballMakerLeft_throwables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gSnowballMakerLeft_throwables, put=setStaticF__gSnowballMakerLeft_throwables)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  _gSnowballMakerLeft_throwables;

/// @brief Field _gSnowballMakerRight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gSnowballMakerRight, put=setStaticF__gSnowballMakerRight)) ::UnityW<::GlobalNamespace::SnowballMaker>  _gSnowballMakerRight;

/// @brief Field _gSnowballMakerRight_throwables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gSnowballMakerRight_throwables, put=setStaticF__gSnowballMakerRight_throwables)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  _gSnowballMakerRight_throwables;

/// @brief Field _gVRRigDatas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gVRRigDatas, put=setStaticF__gVRRigDatas)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*  _gVRRigDatas;

/// @brief Field _gVRRigDatasIndexByRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gVRRigDatasIndexByRig, put=setStaticF__gVRRigDatasIndexByRig)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*  _gVRRigDatasIndexByRig;

/// @brief Field _g_loadOpInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_loadOpInfos, put=setStaticF__g_loadOpInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*  _g_loadOpInfos;

/// @brief Field _g_loadOpInfosForRigAndCosmeticIDDicts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_loadOpInfosForRigAndCosmeticIDDicts, put=setStaticF__g_loadOpInfosForRigAndCosmeticIDDicts)) ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>  _g_loadOpInfosForRigAndCosmeticIDDicts;

/// @brief Field _g_loadOp_to_index, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_loadOp_to_index, put=setStaticF__g_loadOp_to_index)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*  _g_loadOp_to_index;

/// @brief Field _g_loadOpsCountCompleted, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__g_loadOpsCountCompleted, put=setStaticF__g_loadOpsCountCompleted)) int32_t  _g_loadOpsCountCompleted;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::GlobalNamespace::CosmeticsV2Spawner_Dirty*  _instance;

/// @brief Field <isPrepared>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isPrepared_k__BackingField, put=setStaticF__isPrepared_k__BackingField)) bool  _isPrepared_k__BackingField;

/// @brief Field currentGOBatchByRegistry, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentGOBatchByRegistry, put=setStaticF_currentGOBatchByRegistry)) ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  currentGOBatchByRegistry;

/// @brief Field g_gorillaPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_g_gorillaPlayer, put=setStaticF_g_gorillaPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  g_gorillaPlayer;

/// @brief Field k_stopwatch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_stopwatch, put=setStaticF_k_stopwatch)) ::System::Diagnostics::Stopwatch*  k_stopwatch;

/// @brief Field materialIndexToSnowballThrowablePlayfabIdStringLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft, put=setStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  materialIndexToSnowballThrowablePlayfabIdStringLeft;

/// @brief Field materialIndexToSnowballThrowablePlayfabIdStringRight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight, put=setStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  materialIndexToSnowballThrowablePlayfabIdStringRight;

/// @brief Field overrides, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overrides, put=setStaticF_overrides)) ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*  overrides;

/// @brief Field processedIdsByRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_processedIdsByRig, put=setStaticF_processedIdsByRig)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*  processedIdsByRig;

/// @brief Field sides, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sides, put=setStaticF_sides)) ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*  sides;

/// @brief Field throwableIndexPlayfabIdStringLeft, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_throwableIndexPlayfabIdStringLeft, put=setStaticF_throwableIndexPlayfabIdStringLeft)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  throwableIndexPlayfabIdStringLeft;

/// @brief Field throwableIndexPlayfabIdStringRight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_throwableIndexPlayfabIdStringRight, put=setStaticF_throwableIndexPlayfabIdStringRight)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  throwableIndexPlayfabIdStringRight;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method AddEachAttachInfoToLoadOpInfosList, addr 0x5668998, size 0x7a4, virtual false, abstract: false, final false
static inline void AddEachAttachInfoToLoadOpInfosList(::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo, int32_t  vrRigIndex, ::by_ref<int32_t>  partCount) ;

/// @brief Method AddPartToThrowableLists, addr 0x566b5d8, size 0x5ac, virtual false, abstract: false, final false
static inline void AddPartToThrowableLists(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo, ::GlobalNamespace::SnowballThrowable*  throwable) ;

/// @brief Method GetPlayfabIdFromThrowableIndex, addr 0x566944c, size 0x134, virtual false, abstract: false, final false
static inline bool GetPlayfabIdFromThrowableIndex(bool  isLeft, int32_t  throwableIndex, ::by_ref<::StringW>  playfabId) ;

/// @brief Method GetThrowableIDFromMaterialIndex, addr 0x5669580, size 0x134, virtual false, abstract: false, final false
static inline bool GetThrowableIDFromMaterialIndex(bool  isLeft, int32_t  matIndex, ::by_ref<::StringW>  throwableId) ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x56666ec, size 0x114, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

static inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty* New_ctor() ;

/// @brief Method PrepareLoadOpInfos, addr 0x56675d8, size 0xfac, virtual false, abstract: false, final false
static inline void PrepareLoadOpInfos() ;

/// @brief Method ProcessLoadOpInfos, addr 0x56696b4, size 0x6e4, virtual false, abstract: false, final false
static inline void ProcessLoadOpInfos(::GlobalNamespace::VRRig*  rig, ::StringW  playfabId, ::GorillaNetworking::CosmeticItemRegistry*  registry) ;

/// @brief Method ResizeAndSetAtIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeAndSetAtIndex(::System::Collections::Generic::List_1<T>*  list, T  item, int32_t  index) ;

/// @brief Method RigDataForRig, addr 0x566bc14, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData RigDataForRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method _ProcessLoadOpInfo, addr 0x5669da8, size 0x530, virtual false, abstract: false, final false
static inline void _ProcessLoadOpInfo(int32_t  currentIndex, ::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo) ;

/// [CompilerGenerated]
/// @brief Method <ProcessLoadOpInfos>g__ObjectToInitialize|37_1, addr 0x566cfbc, size 0x274, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> _ProcessLoadOpInfos_g__ObjectToInitialize_37_1(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo  loadOpInfo) ;

/// [CompilerGenerated]
/// @brief Method <ProcessLoadOpInfos>g__PostCompletionProcess|37_0, addr 0x566c0a0, size 0xf1c, virtual false, abstract: false, final false
static inline void _ProcessLoadOpInfos_g__PostCompletionProcess_37_0() ;

/// @brief Method _RetryDownload, addr 0x5666800, size 0x654, virtual false, abstract: false, final false
static inline void _RetryDownload(int32_t  loadOpIndex) ;

/// @brief Method _Step3_HandleLoadOpCompleted, addr 0x566a2d8, size 0x1300, virtual false, abstract: false, final false
static inline void _Step3_HandleLoadOpCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp) ;

/// @brief Method _Step4_PopulateAllArrays, addr 0x566913c, size 0x25c, virtual false, abstract: false, final false
static inline void _Step4_PopulateAllArrays() ;

/// @brief Method _Step5_InitializeVRRigsAndCosmeticsControllerFinalize, addr 0x5666e54, size 0x784, virtual false, abstract: false, final false
static inline void _Step5_InitializeVRRigsAndCosmeticsControllerFinalize() ;

/// [AsyncStateMachine(typeof(CosmeticsV2Spawner_Dirty::<<_Step5_InitializeVRRigsAndCosmeticsControllerFinalize>g__StartupRerun|44_0>d))]
/// [CompilerGenerated]
/// @brief Method <_Step5_InitializeVRRigsAndCosmeticsControllerFinalize>g__StartupRerun|44_0, addr 0x566bb84, size 0x90, virtual false, abstract: false, final false
static inline void __Step5_InitializeVRRigsAndCosmeticsControllerFinalize_g__StartupRerun_44_0() ;

/// @brief Method .ctor, addr 0x5668584, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnPostInstantiateAllPrefabs() ;

static inline ::UnityW<::UnityEngine::Transform> getStaticF__gDeactivatedSpawnParent() ;

static inline ::UnityW<::GlobalNamespace::SnowballMaker> getStaticF__gSnowballMakerLeft() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>* getStaticF__gSnowballMakerLeft_throwables() ;

static inline ::UnityW<::GlobalNamespace::SnowballMaker> getStaticF__gSnowballMakerRight() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>* getStaticF__gSnowballMakerRight_throwables() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>* getStaticF__gVRRigDatas() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>* getStaticF__gVRRigDatasIndexByRig() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>* getStaticF__g_loadOpInfos() ;

static inline ::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*> getStaticF__g_loadOpInfosForRigAndCosmeticIDDicts() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>* getStaticF__g_loadOp_to_index() ;

static inline int32_t getStaticF__g_loadOpsCountCompleted() ;

static inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty* getStaticF__instance() ;

static inline bool getStaticF__isPrepared_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF_currentGOBatchByRegistry() ;

static inline ::UnityW<::GorillaLocomotion::GTPlayer> getStaticF_g_gorillaPlayer() ;

static inline ::System::Diagnostics::Stopwatch* getStaticF_k_stopwatch() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight() ;

static inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>* getStaticF_overrides() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>* getStaticF_processedIdsByRig() ;

static inline ::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>* getStaticF_sides() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_throwableIndexPlayfabIdStringLeft() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_throwableIndexPlayfabIdStringRight() ;

/// [CompilerGenerated]
/// @brief Method get_isPrepared, addr 0x5666634, size 0x58, virtual false, abstract: false, final false
static inline bool get_isPrepared() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

static inline void setStaticF_OnPostInstantiateAllPrefabs(::System::Action*  value) ;

static inline void setStaticF__gDeactivatedSpawnParent(::UnityW<::UnityEngine::Transform>  value) ;

static inline void setStaticF__gSnowballMakerLeft(::UnityW<::GlobalNamespace::SnowballMaker>  value) ;

static inline void setStaticF__gSnowballMakerLeft_throwables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  value) ;

static inline void setStaticF__gSnowballMakerRight(::UnityW<::GlobalNamespace::SnowballMaker>  value) ;

static inline void setStaticF__gSnowballMakerRight_throwables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SnowballThrowable>>*  value) ;

static inline void setStaticF__gVRRigDatas(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_VRRigData>*  value) ;

static inline void setStaticF__gVRRigDatasIndexByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,int32_t>*  value) ;

static inline void setStaticF__g_loadOpInfos(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*  value) ;

static inline void setStaticF__g_loadOpInfosForRigAndCosmeticIDDicts(::ArrayW<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo>*>*>  value) ;

static inline void setStaticF__g_loadOp_to_index(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>,int32_t>*  value) ;

static inline void setStaticF__g_loadOpsCountCompleted(int32_t  value) ;

static inline void setStaticF__instance(::GlobalNamespace::CosmeticsV2Spawner_Dirty*  value) ;

static inline void setStaticF__isPrepared_k__BackingField(bool  value) ;

static inline void setStaticF_currentGOBatchByRegistry(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

static inline void setStaticF_g_gorillaPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

static inline void setStaticF_k_stopwatch(::System::Diagnostics::Stopwatch*  value) ;

static inline void setStaticF_materialIndexToSnowballThrowablePlayfabIdStringLeft(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

static inline void setStaticF_materialIndexToSnowballThrowablePlayfabIdStringRight(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

static inline void setStaticF_overrides(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<bool>*>*  value) ;

static inline void setStaticF_processedIdsByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::System::Collections::Generic::HashSet_1<::StringW>*>*  value) ;

static inline void setStaticF_sides(::System::Collections::Generic::Dictionary_2<::GorillaNetworking::CosmeticItemRegistry*,::System::Collections::Generic::List_1<::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>>*>*  value) ;

static inline void setStaticF_throwableIndexPlayfabIdStringLeft(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

static inline void setStaticF_throwableIndexPlayfabIdStringRight(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPrepared, addr 0x566668c, size 0x60, virtual false, abstract: false, final false
static inline void set_isPrepared(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsV2Spawner_Dirty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsV2Spawner_Dirty(CosmeticsV2Spawner_Dirty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsV2Spawner_Dirty(CosmeticsV2Spawner_Dirty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{783};

/// @brief Field _k_delayedStatusCheckContextId offset 0xffffffff size 0x4
static constexpr int32_t  _k_delayedStatusCheckContextId{static_cast<int32_t>(0xffffff9c)};

/// @brief Field _k_maxActiveLoadOps offset 0xffffffff size 0x4
static constexpr int32_t  _k_maxActiveLoadOps{static_cast<int32_t>(0x3c)};

/// @brief Field _k_maxTotalLoadOps offset 0xffffffff size 0x4
static constexpr int32_t  _k_maxTotalLoadOps{static_cast<int32_t>(0xf4240)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CosmeticsV2Spawner_Dirty) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsV2Spawner_Dirty/<>c__DisplayClass37_1
class CORDL_TYPE CosmeticsV2Spawner_Dirty___c__DisplayClass37_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*  CS$__8__locals1;

/// @brief Field currentIndex, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

static inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1* New_ctor() ;

/// @brief Method <ProcessLoadOpInfos>g__AddToRegistryWhenCompleted|2, addr 0x566d464, size 0x3a8, virtual false, abstract: false, final false
inline void _ProcessLoadOpInfos_g__AddToRegistryWhenCompleted_2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp) ;

constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5669da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsV2Spawner_Dirty___c__DisplayClass37_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty___c__DisplayClass37_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsV2Spawner_Dirty___c__DisplayClass37_1(CosmeticsV2Spawner_Dirty___c__DisplayClass37_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty___c__DisplayClass37_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsV2Spawner_Dirty___c__DisplayClass37_1(CosmeticsV2Spawner_Dirty___c__DisplayClass37_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{782};

/// @brief Field currentIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1, ___currentIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsV2Spawner_Dirty/<>c__DisplayClass37_0
class CORDL_TYPE CosmeticsV2Spawner_Dirty___c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field registry, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_registry, put=__cordl_internal_set_registry)) ::GorillaNetworking::CosmeticItemRegistry*  registry;

static inline ::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0* New_ctor() ;

constexpr ::GorillaNetworking::CosmeticItemRegistry* const& __cordl_internal_get_registry() const;

constexpr ::GorillaNetworking::CosmeticItemRegistry*& __cordl_internal_get_registry() ;

constexpr void __cordl_internal_set_registry(::GorillaNetworking::CosmeticItemRegistry*  value) ;

/// @brief Method .ctor, addr 0x5669d98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsV2Spawner_Dirty___c__DisplayClass37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsV2Spawner_Dirty___c__DisplayClass37_0(CosmeticsV2Spawner_Dirty___c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsV2Spawner_Dirty___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsV2Spawner_Dirty___c__DisplayClass37_0(CosmeticsV2Spawner_Dirty___c__DisplayClass37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{781};

/// @brief Field registry, offset: 0x10, size: 0x8, def value: None
 ::GorillaNetworking::CosmeticItemRegistry*  ___registry;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0, ___registry) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsV2Spawner_Dirty___c__DisplayClass37_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
