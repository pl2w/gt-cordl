#pragma once
// IWYU pragma private; include "GorillaTagScripts/ScavengerHunt/ScavengerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScavengerManager)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipUserData;
}
namespace GlobalNamespace {
class SetUserDataResponse;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager_Hunt;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager_ScavengerJson;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager__ImportMothershipUserData_d__11;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerTarget;
}
namespace Newtonsoft::Json {
class JsonReader;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager_Hunt;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager_ScavengerJson;
}
namespace GorillaTagScripts::ScavengerHunt {
class ScavengerManager__ImportMothershipUserData_d__11;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerManager*);
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*);
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*);
MARK_REF_T(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerManager*, "GorillaTagScripts.ScavengerHunt", "ScavengerManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*, "GorillaTagScripts.ScavengerHunt", "ScavengerManager/Hunt");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*, "GorillaTagScripts.ScavengerHunt", "ScavengerManager/ScavengerJson");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11*, "GorillaTagScripts.ScavengerHunt", "ScavengerManager/<ImportMothershipUserData>d__11");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies GorillaTagScripts.ScavengerHunt.ScavengerManager::Hunt, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerManager
class CORDL_TYPE ScavengerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Hunt = ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt;

using ScavengerJson = ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson;

using _ImportMothershipUserData_d__11 = ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11;

/// @brief Field Hunts, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hunts, put=__cordl_internal_set_Hunts)) ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>  Hunts;

/// @brief Field OnHuntCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnHuntCompleted, put=setStaticF_OnHuntCompleted)) ::System::Action_2<::StringW,bool>*  OnHuntCompleted;

/// @brief Field OnTargetCollected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTargetCollected, put=setStaticF_OnTargetCollected)) ::System::Action_3<::StringW,::StringW,bool>*  OnTargetCollected;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  _Instance_k__BackingField;

/// @brief Field _collectOnLoad, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collectOnLoad, put=__cordl_internal_set__collectOnLoad)) ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*  _collectOnLoad;

/// @brief Method Awake, addr 0x5c12504, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Collect, addr 0x5c12f38, size 0x334, virtual false, abstract: false, final false
inline void Collect(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target) ;

/// @brief Method FromJson, addr 0x5c13c68, size 0x414, virtual false, abstract: false, final false
inline void FromJson(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*  json) ;

/// @brief Method FromJson, addr 0x5c127c0, size 0x20, virtual false, abstract: false, final false
inline void FromJson(::StringW  json) ;

/// @brief Method GetHunt, addr 0x5c1290c, size 0x80, virtual false, abstract: false, final false
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* GetHunt(::StringW  huntName) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.ScavengerHunt.ScavengerManager::<ImportMothershipUserData>d__11))]
/// @brief Method ImportMothershipUserData, addr 0x5c12634, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ImportMothershipUserData() ;

/// @brief Method IsCollected, addr 0x5c12ea8, size 0x30, virtual false, abstract: false, final false
inline bool IsCollected(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target) ;

static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c128c8, size 0x44, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGetUserDataFailure, addr 0x5c127e0, size 0xe8, virtual false, abstract: false, final false
inline void OnGetUserDataFailure(::GlobalNamespace::MothershipError*  error, int32_t  responseCode) ;

/// @brief Method OnGetUserDataSuccess, addr 0x5c126c8, size 0xf8, virtual false, abstract: false, final false
inline void OnGetUserDataSuccess(::GlobalNamespace::MothershipUserData*  data) ;

/// @brief Method OnSetUserDataFailure, addr 0x5c13700, size 0xe8, virtual false, abstract: false, final false
inline void OnSetUserDataFailure(::GlobalNamespace::MothershipError*  error, int32_t  statusCode) ;

/// @brief Method OnSetUserDataSuccess, addr 0x5c13630, size 0xd0, virtual false, abstract: false, final false
inline void OnSetUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response) ;

/// @brief Method RegisterTarget, addr 0x5c1298c, size 0x100, virtual false, abstract: false, final false
inline void RegisterTarget(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target) ;

/// @brief Method Start, addr 0x5c12614, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToJson, addr 0x5c13368, size 0x4, virtual false, abstract: false, final false
inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* ToJson() ;

constexpr ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*> const& __cordl_internal_get_Hunts() const;

constexpr ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>& __cordl_internal_get_Hunts() ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>* const& __cordl_internal_get__collectOnLoad() const;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*& __cordl_internal_get__collectOnLoad() ;

constexpr void __cordl_internal_set_Hunts(::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>  value) ;

constexpr void __cordl_internal_set__collectOnLoad(::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0x5c143a4, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::StringW,bool>* getStaticF_OnHuntCompleted() ;

static inline ::System::Action_3<::StringW,::StringW,bool>* getStaticF_OnTargetCollected() ;

static inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> getStaticF__Instance_k__BackingField() ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5c1246c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> get_Instance() ;

static inline void setStaticF_OnHuntCompleted(::System::Action_2<::StringW,bool>*  value) ;

static inline void setStaticF_OnTargetCollected(::System::Action_3<::StringW,::StringW,bool>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5c124b4, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaTagScripts::ScavengerHunt::ScavengerManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerManager(ScavengerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerManager(ScavengerManager const& ) = delete;

/// @brief Field MothershipKey offset 0xffffffff size 0x8
static constexpr ::ConstString  MothershipKey{u"ScavengerHunt"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4106};

/// @brief Field _collectOnLoad, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Tuple_2<::StringW,::StringW>*>*  ____collectOnLoad;

/// @brief Field Hunts, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>  ___Hunts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager, ____collectOnLoad) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager, ___Hunts) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerManager) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerManager/<ImportMothershipUserData>d__11
class CORDL_TYPE ScavengerManager__ImportMothershipUserData_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c14d60, size 0x200, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c14f60, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c14f68, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c14fa0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c14d5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c126a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerManager__ImportMothershipUserData_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager__ImportMothershipUserData_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerManager__ImportMothershipUserData_d__11(ScavengerManager__ImportMothershipUserData_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager__ImportMothershipUserData_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerManager__ImportMothershipUserData_d__11(ScavengerManager__ImportMothershipUserData_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4105};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// [Nullable(0)]
/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerManager__ImportMothershipUserData_d__11) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
// [Nullable(0)]
// Dependencies System.Object
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerManager/ScavengerJson
class CORDL_TYPE ScavengerManager_ScavengerJson : public ::System::Object {
public:
// Declarations
/// @brief Field CollectedTargets, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CollectedTargets, put=__cordl_internal_set_CollectedTargets)) ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*  CollectedTargets;

/// @brief Method FromJson, addr 0x5c138e8, size 0x380, virtual false, abstract: false, final false
static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* FromJson(::StringW  json) ;

/// @brief Method FromManager, addr 0x5c137e8, size 0x100, virtual false, abstract: false, final false
static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* FromManager(::GorillaTagScripts::ScavengerHunt::ScavengerManager*  manager) ;

static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson* New_ctor() ;

/// @brief Method ReadCollectedTargets, addr 0x5c14a74, size 0x2e8, virtual false, abstract: false, final false
static inline void ReadCollectedTargets(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson*  json, ::Newtonsoft::Json::JsonReader*  reader) ;

/// @brief Method Write, addr 0x5c1336c, size 0x2c4, virtual false, abstract: false, final false
inline ::StringW Write() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>* const& __cordl_internal_get_CollectedTargets() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*& __cordl_internal_get_CollectedTargets() ;

constexpr void __cordl_internal_set_CollectedTargets(::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*  value) ;

/// @brief Method .ctor, addr 0x5c149ec, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerManager_ScavengerJson() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager_ScavengerJson", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerManager_ScavengerJson(ScavengerManager_ScavengerJson && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager_ScavengerJson", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerManager_ScavengerJson(ScavengerManager_ScavengerJson const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4104};

/// @brief Field CollectedTargets, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<::StringW>>*  ___CollectedTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson, ___CollectedTargets) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_ScavengerJson) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
// [Nullable(0)]
// Dependencies System.Object, UnityEngine.Events.UnityEvent, UnityEngine.Events.UnityEvent`1<T0>
namespace GorillaTagScripts::ScavengerHunt {
// Is value type: false
// CS Name: GorillaTagScripts.ScavengerHunt.ScavengerManager/Hunt
class CORDL_TYPE ScavengerManager_Hunt : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CollectedTargetNames)) ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*  CollectedTargetNames;

/// @brief Field Deprecated, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_Deprecated, put=__cordl_internal_set_Deprecated)) bool  Deprecated;

/// @brief Field HuntCompleted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_HuntCompleted, put=__cordl_internal_set_HuntCompleted)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  HuntCompleted;

/// @brief Field HuntCompletedArg, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_HuntCompletedArg, put=__cordl_internal_set_HuntCompletedArg)) ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>  HuntCompletedArg;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field SendHuntCompletedEventsOnLoad, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_SendHuntCompletedEventsOnLoad, put=__cordl_internal_set_SendHuntCompletedEventsOnLoad)) bool  SendHuntCompletedEventsOnLoad;

/// @brief Field SendTargetCollectedEventsOnLoad, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_SendTargetCollectedEventsOnLoad, put=__cordl_internal_set_SendTargetCollectedEventsOnLoad)) bool  SendTargetCollectedEventsOnLoad;

/// @brief Field TargetCollected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetCollected, put=__cordl_internal_set_TargetCollected)) ::ArrayW<::UnityEngine::Events::UnityEvent*>  TargetCollected;

/// @brief Field TargetCollectedArg, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetCollectedArg, put=__cordl_internal_set_TargetCollectedArg)) ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  TargetCollectedArg;

/// @brief Field TargetNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TargetNames, put=__cordl_internal_set_TargetNames)) ::ArrayW<::StringW>  TargetNames;

 __declspec(property(get=get_Targets)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*  Targets;

 __declspec(property(get=get__collectedTargetNames)) ::System::Collections::Generic::HashSet_1<::StringW>*  _collectedTargetNames;

/// @brief Field _collectedTargetNamesNullable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__collectedTargetNamesNullable, put=__cordl_internal_set__collectedTargetNamesNullable)) ::System::Collections::Generic::HashSet_1<::StringW>*  _collectedTargetNamesNullable;

/// @brief Field _targets, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targets, put=__cordl_internal_set__targets)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*  _targets;

/// @brief Method ClearCollectedTargets, addr 0x5c1407c, size 0x54, virtual false, abstract: false, final false
inline void ClearCollectedTargets() ;

/// @brief Method Collect, addr 0x5c1326c, size 0xfc, virtual false, abstract: false, final false
inline bool Collect(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target, bool  initialLoad) ;

/// @brief Method GetTarget, addr 0x5c140d0, size 0x2d4, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget> GetTarget(::StringW  name) ;

/// @brief Method IsCollected, addr 0x5c12ed8, size 0x60, virtual false, abstract: false, final false
inline bool IsCollected(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target) ;

static inline ::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt* New_ctor(::StringW  name) ;

/// @brief Method RegisterTarget, addr 0x5c12b10, size 0x398, virtual false, abstract: false, final false
inline void RegisterTarget(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target) ;

/// @brief Method SendHuntCompletedEvents, addr 0x5c1493c, size 0xb0, virtual false, abstract: false, final false
inline void SendHuntCompletedEvents(bool  initialLoad) ;

/// @brief Method SendTargetCollectedEvents, addr 0x5c14844, size 0xf8, virtual false, abstract: false, final false
inline void SendTargetCollectedEvents(::GorillaTagScripts::ScavengerHunt::ScavengerTarget*  target, bool  initialLoad) ;

constexpr bool const& __cordl_internal_get_Deprecated() const;

constexpr bool& __cordl_internal_get_Deprecated() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_HuntCompleted() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get_HuntCompleted() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*> const& __cordl_internal_get_HuntCompletedArg() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>& __cordl_internal_get_HuntCompletedArg() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr bool const& __cordl_internal_get_SendHuntCompletedEventsOnLoad() const;

constexpr bool& __cordl_internal_get_SendHuntCompletedEventsOnLoad() ;

constexpr bool const& __cordl_internal_get_SendTargetCollectedEventsOnLoad() const;

constexpr bool& __cordl_internal_get_SendTargetCollectedEventsOnLoad() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_TargetCollected() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent*>& __cordl_internal_get_TargetCollected() ;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*> const& __cordl_internal_get_TargetCollectedArg() const;

constexpr ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>& __cordl_internal_get_TargetCollectedArg() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_TargetNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_TargetNames() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__collectedTargetNamesNullable() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__collectedTargetNamesNullable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>* const& __cordl_internal_get__targets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*& __cordl_internal_get__targets() ;

constexpr void __cordl_internal_set_Deprecated(bool  value) ;

constexpr void __cordl_internal_set_HuntCompleted(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

constexpr void __cordl_internal_set_HuntCompletedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_SendHuntCompletedEventsOnLoad(bool  value) ;

constexpr void __cordl_internal_set_SendTargetCollectedEventsOnLoad(bool  value) ;

constexpr void __cordl_internal_set_TargetCollected(::ArrayW<::UnityEngine::Events::UnityEvent*>  value) ;

constexpr void __cordl_internal_set_TargetCollectedArg(::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  value) ;

constexpr void __cordl_internal_set_TargetNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__collectedTargetNamesNullable(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__targets(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*  value) ;

/// @brief Method .ctor, addr 0x5c14710, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_CollectedTargetNames, addr 0x5c14608, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* get_CollectedTargetNames() ;

/// @brief Method get_IsCompleted, addr 0x5c1445c, size 0x1ac, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_Targets, addr 0x5c12a8c, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>* get_Targets() ;

/// @brief Method get__collectedTargetNames, addr 0x5c1468c, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::StringW>* get__collectedTargetNames() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScavengerManager_Hunt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager_Hunt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScavengerManager_Hunt(ScavengerManager_Hunt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScavengerManager_Hunt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScavengerManager_Hunt(ScavengerManager_Hunt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4103};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field SendTargetCollectedEventsOnLoad, offset: 0x18, size: 0x1, def value: None
 bool  ___SendTargetCollectedEventsOnLoad;

/// @brief Field SendHuntCompletedEventsOnLoad, offset: 0x19, size: 0x1, def value: None
 bool  ___SendHuntCompletedEventsOnLoad;

/// @brief Field Deprecated, offset: 0x1a, size: 0x1, def value: None
 bool  ___Deprecated;

/// @brief Field TargetNames, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___TargetNames;

/// @brief Field TargetCollected, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ___TargetCollected;

/// @brief Field TargetCollectedArg, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*>  ___TargetCollectedArg;

/// @brief Field HuntCompleted, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent*>  ___HuntCompleted;

/// @brief Field HuntCompletedArg, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Events::UnityEvent_1<::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt*>*>  ___HuntCompletedArg;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field _targets, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ScavengerHunt::ScavengerTarget>>*  ____targets;

/// [Nullable(new[] { 2, 1 })]
/// @brief Field _collectedTargetNamesNullable, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____collectedTargetNamesNullable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___SendTargetCollectedEventsOnLoad) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___SendHuntCompletedEventsOnLoad) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___Deprecated) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___TargetNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___TargetCollected) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___TargetCollectedArg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___HuntCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ___HuntCompletedArg) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ____targets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt, ____collectedTargetNamesNullable) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::ScavengerHunt::ScavengerManager_Hunt) == 0x58, "Size mismatch!");

} // namespace end def GorillaTagScripts::ScavengerHunt
