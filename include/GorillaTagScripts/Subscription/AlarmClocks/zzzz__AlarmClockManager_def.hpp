#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/AlarmClocks/AlarmClockManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AlarmClockManager)
namespace GlobalNamespace {
struct GTZone;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager_AlarmClockData;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__ClearUnsubPlayerData_d__39;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__DoTracking_d__38;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__PerformWakeUpSequence_d__23;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClock;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager_AlarmClockData;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__ClearUnsubPlayerData_d__39;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__DoTracking_d__38;
}
namespace GorillaTagScripts::Subscription::AlarmClocks {
class AlarmClockManager__PerformWakeUpSequence_d__23;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*);
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*);
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*);
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*);
MARK_REF_T(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClockManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClockManager/AlarmClockData");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClockManager/<ClearUnsubPlayerData>d__39");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClockManager/<DoTracking>d__38");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*, "GorillaTagScripts.Subscription.AlarmClocks", "AlarmClockManager/<PerformWakeUpSequence>d__23");
// [DefaultExecutionOrder(10000)]
// Dependencies GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager::AlarmClockData, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager
class CORDL_TYPE AlarmClockManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AlarmClockData = ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData;

using _ClearUnsubPlayerData_d__39 = ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39;

using _DoTracking_d__38 = ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38;

using _PerformWakeUpSequence_d__23 = ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23;

 __declspec(property(get=get_ActiveKey, put=set_ActiveKey)) ::StringW  ActiveKey;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

/// @brief Field OnWakeUp, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWakeUp, put=__cordl_internal_set_OnWakeUp)) ::UnityEngine::Events::UnityEvent*  OnWakeUp;

/// @brief Field <ActiveKey>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveKey_k__BackingField, put=__cordl_internal_set__ActiveKey_k__BackingField)) ::StringW  _ActiveKey_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  _Instance_k__BackingField;

/// @brief Field _activeClock, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeClock, put=__cordl_internal_set__activeClock)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  _activeClock;

/// @brief Field _activeClockData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeClockData, put=__cordl_internal_set__activeClockData)) ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*  _activeClockData;

/// @brief Field _clockData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clockData, put=__cordl_internal_set__clockData)) ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>  _clockData;

/// @brief Field _defaultSpawn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultSpawn, put=__cordl_internal_set__defaultSpawn)) ::UnityW<::UnityEngine::Transform>  _defaultSpawn;

/// @brief Field _loadingMessage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadingMessage, put=__cordl_internal_set__loadingMessage)) ::StringW  _loadingMessage;

/// @brief Field _telemetryDict, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryDict, put=__cordl_internal_set__telemetryDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _telemetryDict;

/// @brief Field _teleportTarget, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__teleportTarget, put=__cordl_internal_set__teleportTarget)) ::UnityW<::UnityEngine::Transform>  _teleportTarget;

/// @brief Field _trackingEndTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__trackingEndTime, put=__cordl_internal_set__trackingEndTime)) float_t  _trackingEndTime;

/// @brief Field _wrongWarpTolerance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__wrongWarpTolerance, put=__cordl_internal_set__wrongWarpTolerance)) float_t  _wrongWarpTolerance;

/// [UsedImplicitly]
/// @brief Method AllUniqueClockKeys, addr 0x5c1015c, size 0xf4, virtual false, abstract: false, final false
inline bool AllUniqueClockKeys() ;

/// @brief Method AllZonesLoaded, addr 0x5c104d0, size 0x184, virtual false, abstract: false, final false
inline bool AllZonesLoaded() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager::<ClearUnsubPlayerData>d__39))]
/// @brief Method ClearUnsubPlayerData, addr 0x5c10c70, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ClearUnsubPlayerData() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager::<DoTracking>d__38))]
/// @brief Method DoTracking, addr 0x5c10b00, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoTracking() ;

/// @brief Method GameSystemsLoaded, addr 0x5c10250, size 0x280, virtual false, abstract: false, final false
static inline bool GameSystemsLoaded() ;

/// @brief Method GetActiveZones, addr 0x5c10654, size 0x3a4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* GetActiveZones() ;

/// @brief Method GetClockData, addr 0x5c0fcd4, size 0x80, virtual false, abstract: false, final false
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* GetClockData(::StringW  key) ;

/// @brief Method IsVIMOnly, addr 0x5c0f100, size 0xec, virtual false, abstract: false, final false
static inline bool IsVIMOnly(::StringW  key) ;

static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c10080, size 0xdc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager::<PerformWakeUpSequence>d__23))]
/// @brief Method PerformWakeUpSequence, addr 0x5c0fea0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PerformWakeUpSequence() ;

/// @brief Method RequestLoadZones, addr 0x5c109f8, size 0xe8, virtual false, abstract: false, final false
inline void RequestLoadZones() ;

/// @brief Method SendTelemetryEvent, addr 0x5c0fd54, size 0x14c, virtual false, abstract: false, final false
inline void SendTelemetryEvent(::StringW  eventType, ::StringW  key) ;

/// @brief Method Start, addr 0x5c0fa44, size 0x290, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartTracking, addr 0x5c10ae0, size 0x20, virtual false, abstract: false, final false
inline void StartTracking() ;

/// @brief Method StopTracking, addr 0x5c10b6c, size 0xdc, virtual false, abstract: false, final false
inline void StopTracking(float_t  delay) ;

/// @brief Method ToggleAlarmClock, addr 0x5c0f5e0, size 0x58, virtual false, abstract: false, final false
static inline void ToggleAlarmClock(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*  clock) ;

/// @brief Method ToggleAlarmClockInternal, addr 0x5c0ff34, size 0x14c, virtual false, abstract: false, final false
inline void ToggleAlarmClockInternal(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*  clock) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnWakeUp() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnWakeUp() ;

constexpr ::StringW const& __cordl_internal_get__ActiveKey_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ActiveKey_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock> const& __cordl_internal_get__activeClock() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>& __cordl_internal_get__activeClock() ;

constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* const& __cordl_internal_get__activeClockData() const;

constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*& __cordl_internal_get__activeClockData() ;

constexpr ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*> const& __cordl_internal_get__clockData() const;

constexpr ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>& __cordl_internal_get__clockData() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__defaultSpawn() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__defaultSpawn() ;

constexpr ::StringW const& __cordl_internal_get__loadingMessage() const;

constexpr ::StringW& __cordl_internal_get__loadingMessage() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__telemetryDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__telemetryDict() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__teleportTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__teleportTarget() ;

constexpr float_t const& __cordl_internal_get__trackingEndTime() const;

constexpr float_t& __cordl_internal_get__trackingEndTime() ;

constexpr float_t const& __cordl_internal_get__wrongWarpTolerance() const;

constexpr float_t& __cordl_internal_get__wrongWarpTolerance() ;

constexpr void __cordl_internal_set_OnWakeUp(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__ActiveKey_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeClock(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  value) ;

constexpr void __cordl_internal_set__activeClockData(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*  value) ;

constexpr void __cordl_internal_set__clockData(::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>  value) ;

constexpr void __cordl_internal_set__defaultSpawn(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__loadingMessage(::StringW  value) ;

constexpr void __cordl_internal_set__telemetryDict(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__teleportTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__trackingEndTime(float_t  value) ;

constexpr void __cordl_internal_set__wrongWarpTolerance(float_t  value) ;

/// @brief Method .ctor, addr 0x5c10d04, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ActiveKey, addr 0x5c0fa34, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ActiveKey() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5c0fa24, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5c0f984, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActiveKey, addr 0x5c0fa3c, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveKey(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5c0fa2c, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5c0f9cc, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlarmClockManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClockManager(AlarmClockManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClockManager(AlarmClockManager const& ) = delete;

/// @brief Field SaveDataKey offset 0xffffffff size 0x8
static constexpr ::ConstString  SaveDataKey{u"AlarmClock"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4102};

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// [SerializeField]
/// @brief Field _loadingMessage, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____loadingMessage;

/// [SerializeField]
/// @brief Field _wrongWarpTolerance, offset: 0x30, size: 0x4, def value: None
 float_t  ____wrongWarpTolerance;

/// [SerializeField]
/// @brief Field _clockData, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>  ____clockData;

/// [SerializeField]
/// @brief Field _defaultSpawn, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____defaultSpawn;

/// @brief Field OnWakeUp, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnWakeUp;

/// @brief Field _teleportTarget, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____teleportTarget;

/// [CompilerGenerated]
/// @brief Field <ActiveKey>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____ActiveKey_k__BackingField;

/// @brief Field _activeClockData, offset: 0x60, size: 0x8, def value: None
 ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*  ____activeClockData;

/// [CanBeNull]
/// @brief Field _activeClock, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  ____activeClock;

/// @brief Field _telemetryDict, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____telemetryDict;

/// @brief Field _trackingEndTime, offset: 0x78, size: 0x4, def value: None
 float_t  ____trackingEndTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____Initialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____loadingMessage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____wrongWarpTolerance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____clockData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____defaultSpawn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ___OnWakeUp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____teleportTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____ActiveKey_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____activeClockData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____activeClock) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____telemetryDict) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager, ____trackingEndTime) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager/<PerformWakeUpSequence>d__23
class CORDL_TYPE AlarmClockManager__PerformWakeUpSequence_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  __4__this;

/// @brief Field <fixAttempts>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__fixAttempts_5__2, put=__cordl_internal_set__fixAttempts_5__2)) int32_t  _fixAttempts_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c1168c, size 0xd98, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c12424, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c1242c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c12464, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c11688, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__fixAttempts_5__2() const;

constexpr int32_t& __cordl_internal_get__fixAttempts_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value) ;

constexpr void __cordl_internal_set__fixAttempts_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c0ff0c, size 0x28, virtual false, abstract: false, final false
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
constexpr AlarmClockManager__PerformWakeUpSequence_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__PerformWakeUpSequence_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClockManager__PerformWakeUpSequence_d__23(AlarmClockManager__PerformWakeUpSequence_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__PerformWakeUpSequence_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClockManager__PerformWakeUpSequence_d__23(AlarmClockManager__PerformWakeUpSequence_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4101};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  _____4__this;

/// @brief Field <fixAttempts>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____fixAttempts_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23, ____fixAttempts_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager/<DoTracking>d__38
class CORDL_TYPE AlarmClockManager__DoTracking_d__38 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c10fc8, size 0x678, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c11640, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c11648, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c11680, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c10fc4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c10c48, size 0x28, virtual false, abstract: false, final false
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
constexpr AlarmClockManager__DoTracking_d__38() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__DoTracking_d__38", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClockManager__DoTracking_d__38(AlarmClockManager__DoTracking_d__38 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__DoTracking_d__38", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClockManager__DoTracking_d__38(AlarmClockManager__DoTracking_d__38 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4100};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager/<ClearUnsubPlayerData>d__39
class CORDL_TYPE AlarmClockManager__ClearUnsubPlayerData_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c10dbc, size 0x1c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c10f7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c10f84, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c10fbc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c10db8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c10cdc, size 0x28, virtual false, abstract: false, final false
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
constexpr AlarmClockManager__ClearUnsubPlayerData_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__ClearUnsubPlayerData_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClockManager__ClearUnsubPlayerData_d__39(AlarmClockManager__ClearUnsubPlayerData_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager__ClearUnsubPlayerData_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClockManager__ClearUnsubPlayerData_d__39(AlarmClockManager__ClearUnsubPlayerData_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4099};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
// Dependencies GTZone, System.Object, XSceneRef
namespace GorillaTagScripts::Subscription::AlarmClocks {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.AlarmClocks.AlarmClockManager/AlarmClockData
class CORDL_TYPE AlarmClockManager_AlarmClockData : public ::System::Object {
public:
// Declarations
/// @brief Field Key, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Key, put=__cordl_internal_set_Key)) ::StringW  Key;

/// @brief Field Objects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Objects, put=__cordl_internal_set_Objects)) ::ArrayW<::GlobalNamespace::XSceneRef>  Objects;

/// @brief Field OnSpawn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSpawn, put=__cordl_internal_set_OnSpawn)) ::UnityEngine::Events::UnityEvent*  OnSpawn;

/// @brief Field SkipZoneReadyWait, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_SkipZoneReadyWait, put=__cordl_internal_set_SkipZoneReadyWait)) bool  SkipZoneReadyWait;

/// @brief Field SpawnPoint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnPoint, put=__cordl_internal_set_SpawnPoint)) ::UnityW<::UnityEngine::Transform>  SpawnPoint;

/// @brief Field VIMOnly, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_VIMOnly, put=__cordl_internal_set_VIMOnly)) bool  VIMOnly;

/// @brief Field Zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Zones, put=__cordl_internal_set_Zones)) ::ArrayW<::GlobalNamespace::GTZone>  Zones;

static inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Key() const;

constexpr ::StringW& __cordl_internal_get_Key() ;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& __cordl_internal_get_Objects() const;

constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& __cordl_internal_get_Objects() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnSpawn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnSpawn() ;

constexpr bool const& __cordl_internal_get_SkipZoneReadyWait() const;

constexpr bool& __cordl_internal_get_SkipZoneReadyWait() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SpawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SpawnPoint() ;

constexpr bool const& __cordl_internal_get_VIMOnly() const;

constexpr bool& __cordl_internal_get_VIMOnly() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_Zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_Zones() ;

constexpr void __cordl_internal_set_Key(::StringW  value) ;

constexpr void __cordl_internal_set_Objects(::ArrayW<::GlobalNamespace::XSceneRef>  value) ;

constexpr void __cordl_internal_set_OnSpawn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_SkipZoneReadyWait(bool  value) ;

constexpr void __cordl_internal_set_SpawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_VIMOnly(bool  value) ;

constexpr void __cordl_internal_set_Zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x5c10db0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlarmClockManager_AlarmClockData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager_AlarmClockData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlarmClockManager_AlarmClockData(AlarmClockManager_AlarmClockData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlarmClockManager_AlarmClockData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlarmClockManager_AlarmClockData(AlarmClockManager_AlarmClockData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4098};

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Key;

/// @brief Field VIMOnly, offset: 0x18, size: 0x1, def value: None
 bool  ___VIMOnly;

/// @brief Field Zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___Zones;

/// [Tooltip("Skip waiting for the zone scenes to report loaded. Use for zones with no real backing scene (e.g. customMaps / the virtual stump), which are activated by object toggling and would otherwise never satisfy the load check and hang the wake-up.")]
/// @brief Field SkipZoneReadyWait, offset: 0x28, size: 0x1, def value: None
 bool  ___SkipZoneReadyWait;

/// @brief Field Objects, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XSceneRef>  ___Objects;

/// @brief Field SpawnPoint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___SpawnPoint;

/// @brief Field OnSpawn, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnSpawn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___Key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___VIMOnly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___Zones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___SkipZoneReadyWait) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___Objects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___SpawnPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData, ___OnSpawn) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription::AlarmClocks
