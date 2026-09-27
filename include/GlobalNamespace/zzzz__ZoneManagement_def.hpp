#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneManagement)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class ZoneData;
}
namespace GlobalNamespace {
class ZoneManagement_ZoneChangeEvent;
}
namespace GlobalNamespace {
class ZoneManagement___c;
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
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneManagement;
}
namespace GlobalNamespace {
class ZoneManagement_ZoneChangeEvent;
}
namespace GlobalNamespace {
class ZoneManagement___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneManagement*);
MARK_REF_T(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*);
MARK_REF_T(::GlobalNamespace::ZoneManagement___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneManagement*, "", "ZoneManagement");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*, "", "ZoneManagement/ZoneChangeEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneManagement___c*, "", "ZoneManagement/<>c");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour, ZoneData
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneManagement
class CORDL_TYPE ZoneManagement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ZoneChangeEvent = ::GlobalNamespace::ZoneManagement_ZoneChangeEvent;

using __c = ::GlobalNamespace::ZoneManagement___c;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

/// @brief Field OnSceneLoadsCompleted, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSceneLoadsCompleted, put=__cordl_internal_set_OnSceneLoadsCompleted)) ::System::Action*  OnSceneLoadsCompleted;

/// @brief Field OnZoneChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnZoneChange, put=setStaticF_OnZoneChange)) ::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  OnZoneChange;

/// @brief Field <Initialized>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field <hasInstance>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInstance_k__BackingField, put=__cordl_internal_set__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field _scenes_to_loadOps, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__scenes_to_loadOps, put=__cordl_internal_set__scenes_to_loadOps)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  _scenes_to_loadOps;

/// @brief Field _scenes_to_unloadOps, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__scenes_to_unloadOps, put=__cordl_internal_set__scenes_to_unloadOps)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  _scenes_to_unloadOps;

/// @brief Field activeZones, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeZones, put=__cordl_internal_set_activeZones)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  activeZones;

/// @brief Field allObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allObjects, put=__cordl_internal_set_allObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  allObjects;

 __declspec(property(get=get_hasInstance, put=set_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ZoneManagement>  instance;

/// @brief Field mainCamera, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

/// @brief Field objectActivationState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectActivationState, put=__cordl_internal_set_objectActivationState)) ::ArrayW<bool>  objectActivationState;

/// @brief Field onZoneChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onZoneChanged, put=__cordl_internal_set_onZoneChanged)) ::System::Action*  onZoneChanged;

/// @brief Field sceneForceStayLoaded, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneForceStayLoaded, put=__cordl_internal_set_sceneForceStayLoaded)) ::System::Collections::Generic::HashSet_1<::StringW>*  sceneForceStayLoaded;

/// @brief Field scenesLoaded, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesLoaded, put=__cordl_internal_set_scenesLoaded)) ::System::Collections::Generic::HashSet_1<::StringW>*  scenesLoaded;

/// @brief Field scenesRequested, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesRequested, put=__cordl_internal_set_scenesRequested)) ::System::Collections::Generic::HashSet_1<::StringW>*  scenesRequested;

/// @brief Field scenesToUnload, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenesToUnload, put=__cordl_internal_set_scenesToUnload)) ::System::Collections::Generic::List_1<::StringW>*  scenesToUnload;

/// @brief Field zones, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::ZoneData*>  zones;

/// @brief Method AddSceneToForceStayLoaded, addr 0x56b836c, size 0xc8, virtual false, abstract: false, final false
static inline void AddSceneToForceStayLoaded(::StringW  sceneName) ;

/// @brief Method AnyActiveLoadOps, addr 0x56b89d0, size 0x12c, virtual false, abstract: false, final false
inline bool AnyActiveLoadOps() ;

/// @brief Method Awake, addr 0x56b70d0, size 0x10c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindInstance, addr 0x56b7564, size 0x114, virtual false, abstract: false, final false
static inline void FindInstance() ;

/// @brief Method GetAllLoadedScenes, addr 0x56b8618, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::StringW>* GetAllLoadedScenes() ;

/// @brief Method GetPrimaryGameObject, addr 0x56b833c, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetPrimaryGameObject(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetSceneNameForZone, addr 0x56b8afc, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetSceneNameForZone(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetZoneData, addr 0x56b81d0, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ZoneData* GetZoneData(::GlobalNamespace::GTZone  zone) ;

/// @brief Method HandleOnSceneLoadCompleted, addr 0x56b8678, size 0x358, virtual false, abstract: false, final false
inline void HandleOnSceneLoadCompleted(::UnityEngine::AsyncOperation*  thisLoadOp) ;

/// @brief Method Initialize, addr 0x56b71dc, size 0x324, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsInZone, addr 0x56b8114, size 0xbc, virtual false, abstract: false, final false
static inline bool IsInZone(::GlobalNamespace::GTZone  zone) ;

/// @brief Method IsSceneLoaded, addr 0x56b84fc, size 0xfc, virtual false, abstract: false, final false
inline bool IsSceneLoaded(::GlobalNamespace::GTZone  gtZone) ;

/// @brief Method IsSceneLoaded, addr 0x56b8620, size 0x58, virtual false, abstract: false, final false
inline bool IsSceneLoaded(::StringW  sceneName) ;

/// @brief Method IsValidZoneInt, addr 0x56b8b14, size 0x10, virtual false, abstract: false, final false
static inline bool IsValidZoneInt(int32_t  zoneInt) ;

/// @brief Method IsZoneActive, addr 0x56b85f8, size 0x20, virtual false, abstract: false, final false
inline bool IsZoneActive(::GlobalNamespace::GTZone  zone) ;

/// @brief Method IsZoneLoaded, addr 0x56b8230, size 0x10c, virtual false, abstract: false, final false
static inline bool IsZoneLoaded(::GlobalNamespace::GTZone  zone) ;

static inline ::GlobalNamespace::ZoneManagement* New_ctor() ;

/// @brief Method RemoveSceneFromForceStayLoaded, addr 0x56b8434, size 0xc8, virtual false, abstract: false, final false
static inline void RemoveSceneFromForceStayLoaded(::StringW  sceneName) ;

/// @brief Method SetActiveZone, addr 0x56b7500, size 0x64, virtual false, abstract: false, final false
static inline void SetActiveZone(::GlobalNamespace::GTZone  zone) ;

/// @brief Method SetActiveZones, addr 0x56b6c90, size 0x118, virtual false, abstract: false, final false
static inline void SetActiveZones(::ArrayW<::GlobalNamespace::GTZone>  zones) ;

/// @brief Method SetZones, addr 0x56b7678, size 0xa9c, virtual false, abstract: false, final false
inline void SetZones(::ArrayW<::GlobalNamespace::GTZone>  newActiveZones) ;

constexpr ::System::Action* const& __cordl_internal_get_OnSceneLoadsCompleted() const;

constexpr ::System::Action*& __cordl_internal_get_OnSceneLoadsCompleted() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasInstance_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasInstance_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>* const& __cordl_internal_get__scenes_to_loadOps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*& __cordl_internal_get__scenes_to_loadOps() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>* const& __cordl_internal_get__scenes_to_unloadOps() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*& __cordl_internal_get__scenes_to_unloadOps() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* const& __cordl_internal_get_activeZones() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*& __cordl_internal_get_activeZones() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_allObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_allObjects() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_objectActivationState() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_objectActivationState() ;

constexpr ::System::Action* const& __cordl_internal_get_onZoneChanged() const;

constexpr ::System::Action*& __cordl_internal_get_onZoneChanged() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_sceneForceStayLoaded() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_sceneForceStayLoaded() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_scenesLoaded() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_scenesLoaded() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_scenesRequested() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_scenesRequested() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_scenesToUnload() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_scenesToUnload() ;

constexpr ::ArrayW<::GlobalNamespace::ZoneData*> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::ZoneData*>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_OnSceneLoadsCompleted(::System::Action*  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__hasInstance_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__scenes_to_loadOps(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set__scenes_to_unloadOps(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_activeZones(::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  value) ;

constexpr void __cordl_internal_set_allObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_objectActivationState(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_onZoneChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_sceneForceStayLoaded(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_scenesLoaded(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_scenesRequested(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_scenesToUnload(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::ZoneData*>  value) ;

/// @brief Method .ctor, addr 0x56b8b24, size 0x214, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnZoneChange, addr 0x56b6f40, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value) ;

static inline ::GlobalNamespace::ZoneManagement_ZoneChangeEvent* getStaticF_OnZoneChange() ;

static inline ::UnityW<::GlobalNamespace::ZoneManagement> getStaticF_instance() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x56b70c0, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x56b70b0, size 0x8, virtual false, abstract: false, final false
inline bool get_hasInstance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnZoneChange, addr 0x56b6ff8, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value) ;

static inline void setStaticF_OnZoneChange(::GlobalNamespace::ZoneManagement_ZoneChangeEvent*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ZoneManagement>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x56b70c8, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x56b70b8, size 0x8, virtual false, abstract: false, final false
inline void set_hasInstance(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneManagement(ZoneManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneManagement(ZoneManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{959};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"(beta only log)  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/ZoneManagement]  "};

/// [CompilerGenerated]
/// @brief Field <hasInstance>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____hasInstance_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// [SerializeField]
/// @brief Field zones, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ZoneData*>  ___zones;

/// @brief Field allObjects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___allObjects;

/// @brief Field objectActivationState, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<bool>  ___objectActivationState;

/// @brief Field onZoneChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___onZoneChanged;

/// @brief Field OnSceneLoadsCompleted, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnSceneLoadsCompleted;

/// @brief Field activeZones, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  ___activeZones;

/// @brief Field scenesLoaded, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___scenesLoaded;

/// @brief Field scenesRequested, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___scenesRequested;

/// @brief Field sceneForceStayLoaded, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___sceneForceStayLoaded;

/// @brief Field scenesToUnload, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___scenesToUnload;

/// @brief Field _scenes_to_loadOps, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  ____scenes_to_loadOps;

/// @brief Field _scenes_to_unloadOps, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::AsyncOperation*>*  ____scenes_to_unloadOps;

/// @brief Field mainCamera, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneManagement, ____hasInstance_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ____Initialized_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___zones) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___allObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___objectActivationState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___onZoneChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___OnSceneLoadsCompleted) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___activeZones) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___scenesLoaded) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___scenesRequested) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___sceneForceStayLoaded) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___scenesToUnload) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ____scenes_to_loadOps) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ____scenes_to_unloadOps) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneManagement, ___mainCamera) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneManagement) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneManagement/<>c
class CORDL_TYPE ZoneManagement___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ZoneManagement___c*  __9;

/// @brief Field <>9__45_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__45_0, put=setStaticF___9__45_0)) ::System::Func_2<::UnityEngine::AsyncOperation*,bool>*  __9__45_0;

static inline ::GlobalNamespace::ZoneManagement___c* New_ctor() ;

/// @brief Method <AnyActiveLoadOps>b__45_0, addr 0x56b8ef0, size 0x28, virtual false, abstract: false, final false
inline bool _AnyActiveLoadOps_b__45_0(::UnityEngine::AsyncOperation*  op) ;

/// @brief Method .ctor, addr 0x56b8ee8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ZoneManagement___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::AsyncOperation*,bool>* getStaticF___9__45_0() ;

static inline void setStaticF___9(::GlobalNamespace::ZoneManagement___c*  value) ;

static inline void setStaticF___9__45_0(::System::Func_2<::UnityEngine::AsyncOperation*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneManagement___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneManagement___c(ZoneManagement___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneManagement___c(ZoneManagement___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ZoneManagement___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneManagement/ZoneChangeEvent
class CORDL_TYPE ZoneManagement_ZoneChangeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x56b8e54, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::GlobalNamespace::ZoneData*>  zones, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x56b8e74, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x56b8e40, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<::GlobalNamespace::ZoneData*>  zones) ;

static inline ::GlobalNamespace::ZoneManagement_ZoneChangeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x56b8d38, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneManagement_ZoneChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement_ZoneChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneManagement_ZoneChangeEvent(ZoneManagement_ZoneChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneManagement_ZoneChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneManagement_ZoneChangeEvent(ZoneManagement_ZoneChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{957};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ZoneManagement_ZoneChangeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
