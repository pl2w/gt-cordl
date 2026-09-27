#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreUpdater)
namespace FXP {
class CosmeticItemPrefab;
}
namespace GorillaNetworking::Store {
class StoreUpdateEvent;
}
namespace GorillaNetworking::Store {
class StoreUpdater__HandleClearCart_d__19;
}
namespace GorillaNetworking::Store {
class StoreUpdater__HandlePedestalUpdate_d__18;
}
namespace GorillaNetworking::Store {
class StoreUpdater___c;
}
namespace PlayFab {
class PlayFabError;
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
template<typename T>
class Action_1;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreUpdater;
}
namespace GorillaNetworking::Store {
class StoreUpdater__HandleClearCart_d__19;
}
namespace GorillaNetworking::Store {
class StoreUpdater__HandlePedestalUpdate_d__18;
}
namespace GorillaNetworking::Store {
class StoreUpdater___c;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreUpdater*);
MARK_REF_T(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*);
MARK_REF_T(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*);
MARK_REF_T(::GorillaNetworking::Store::StoreUpdater___c*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdater*, "GorillaNetworking.Store", "StoreUpdater");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19*, "GorillaNetworking.Store", "StoreUpdater/<HandleClearCart>d__19");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18*, "GorillaNetworking.Store", "StoreUpdater/<HandlePedestalUpdate>d__18");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreUpdater___c*, "GorillaNetworking.Store", "StoreUpdater/<>c");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdater
class CORDL_TYPE StoreUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HandleClearCart_d__19 = ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19;

using _HandlePedestalUpdate_d__18 = ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18;

using __c = ::GorillaNetworking::Store::StoreUpdater___c;

 __declspec(property(get=get_DateTimeNowServerAdjusted)) ::System::DateTime  DateTimeNowServerAdjusted;

/// @brief Field StoreItemsChangeTimeUTC, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StoreItemsChangeTimeUTC, put=__cordl_internal_set_StoreItemsChangeTimeUTC)) ::System::DateTime  StoreItemsChangeTimeUTC;

/// @brief Field bLoadFromJSON, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_bLoadFromJSON, put=__cordl_internal_set_bLoadFromJSON)) bool  bLoadFromJSON;

/// @brief Field bUsePlaceHolderJSON, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_bUsePlaceHolderJSON, put=__cordl_internal_set_bUsePlaceHolderJSON)) bool  bUsePlaceHolderJSON;

/// @brief Field cosmeticItemPrefabsDictionary, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticItemPrefabsDictionary, put=__cordl_internal_set_cosmeticItemPrefabsDictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*  cosmeticItemPrefabsDictionary;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::Store::StoreUpdater>  instance;

/// @brief Field pedestalClearCartCoroutines, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pedestalClearCartCoroutines, put=__cordl_internal_set_pedestalClearCartCoroutines)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  pedestalClearCartCoroutines;

/// @brief Field pedestalUpdateCoroutines, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pedestalUpdateCoroutines, put=__cordl_internal_set_pedestalUpdateCoroutines)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  pedestalUpdateCoroutines;

/// @brief Field pedestalUpdateEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pedestalUpdateEvents, put=__cordl_internal_set_pedestalUpdateEvents)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*  pedestalUpdateEvents;

/// @brief Field tempJson, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempJson, put=__cordl_internal_set_tempJson)) ::StringW  tempJson;

/// @brief Method Awake, addr 0x5cb3908, size 0x12c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckEvents, addr 0x5cb575c, size 0x110, virtual false, abstract: false, final false
inline void CheckEvents(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents) ;

/// @brief Method CheckEventsOnResume, addr 0x5cb480c, size 0x504, virtual false, abstract: false, final false
inline void CheckEventsOnResume(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents) ;

/// @brief Method CreateTempEvents, addr 0x5cb51f4, size 0x568, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* CreateTempEvents(::StringW  PedestalID, int32_t  minuteDelay, int32_t  totalEvents) ;

/// @brief Method CreateTempEvents, addr 0x5cb586c, size 0x55c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>* CreateTempEvents(::StringW  PedestalID, int32_t  minuteDelay, int32_t  totalEvents, ::System::DateTime  startTime) ;

/// @brief Method FindAllCosmeticItemPrefabs, addr 0x5cb4250, size 0x184, virtual false, abstract: false, final false
inline void FindAllCosmeticItemPrefabs() ;

/// @brief Method GetEventsFromTitleData, addr 0x5cb43d4, size 0x264, virtual false, abstract: false, final false
inline void GetEventsFromTitleData() ;

/// @brief Method GetStoreUpdateEventsPlaceHolder, addr 0x5cb50b8, size 0x13c, virtual false, abstract: false, final false
inline void GetStoreUpdateEventsPlaceHolder(::StringW  PedestalID) ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.StoreUpdater::<HandleClearCart>d__19))]
/// @brief Method HandleClearCart, addr 0x5cb5008, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HandleClearCart(::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent) ;

/// @brief Method HandleHMDMounted, addr 0x5cb3a40, size 0x2b4, virtual false, abstract: false, final false
inline void HandleHMDMounted() ;

/// @brief Method HandleHMDUnmounted, addr 0x5cb3cf4, size 0x370, virtual false, abstract: false, final false
inline void HandleHMDUnmounted() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.Store.StoreUpdater::<HandlePedestalUpdate>d__18))]
/// @brief Method HandlePedestalUpdate, addr 0x5cb4f4c, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HandlePedestalUpdate(::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent, bool  playFX) ;

/// @brief Method HandleRecievingEventsFromTitleData, addr 0x5cb5dc8, size 0x6b0, virtual false, abstract: false, final false
inline void HandleRecievingEventsFromTitleData(::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*  updateEvents) ;

/// @brief Method Initialize, addr 0x5cb4064, size 0x1ec, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GorillaNetworking::Store::StoreUpdater* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x5cb3a34, size 0xc, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnDestroy, addr 0x5cb4638, size 0x1d4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PedestalAsleep, addr 0x5cb65ec, size 0xbc, virtual false, abstract: false, final false
inline void PedestalAsleep(::FXP::CosmeticItemPrefab*  pedestal) ;

/// @brief Method PedestalAwakened, addr 0x5cb66a8, size 0x108, virtual false, abstract: false, final false
inline void PedestalAwakened(::FXP::CosmeticItemPrefab*  pedestal) ;

/// @brief Method PrintJSONEvents, addr 0x5cb6478, size 0x174, virtual false, abstract: false, final false
inline void PrintJSONEvents() ;

/// @brief Method StartNextEvent, addr 0x5cb4d10, size 0x23c, virtual false, abstract: false, final false
inline void StartNextEvent(::StringW  pedestalID, bool  playFX) ;

/// [CompilerGenerated]
/// @brief Method <GetEventsFromTitleData>b__24_0, addr 0x5cb690c, size 0x20, virtual false, abstract: false, final false
inline void _GetEventsFromTitleData_b__24_0(::StringW  result) ;

constexpr ::System::DateTime const& __cordl_internal_get_StoreItemsChangeTimeUTC() const;

constexpr ::System::DateTime& __cordl_internal_get_StoreItemsChangeTimeUTC() ;

constexpr bool const& __cordl_internal_get_bLoadFromJSON() const;

constexpr bool& __cordl_internal_get_bLoadFromJSON() ;

constexpr bool const& __cordl_internal_get_bUsePlaceHolderJSON() const;

constexpr bool& __cordl_internal_get_bUsePlaceHolderJSON() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>* const& __cordl_internal_get_cosmeticItemPrefabsDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*& __cordl_internal_get_cosmeticItemPrefabsDictionary() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& __cordl_internal_get_pedestalClearCartCoroutines() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& __cordl_internal_get_pedestalClearCartCoroutines() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>* const& __cordl_internal_get_pedestalUpdateCoroutines() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*& __cordl_internal_get_pedestalUpdateCoroutines() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>* const& __cordl_internal_get_pedestalUpdateEvents() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*& __cordl_internal_get_pedestalUpdateEvents() ;

constexpr ::StringW const& __cordl_internal_get_tempJson() const;

constexpr ::StringW& __cordl_internal_get_tempJson() ;

constexpr void __cordl_internal_set_StoreItemsChangeTimeUTC(::System::DateTime  value) ;

constexpr void __cordl_internal_set_bLoadFromJSON(bool  value) ;

constexpr void __cordl_internal_set_bUsePlaceHolderJSON(bool  value) ;

constexpr void __cordl_internal_set_cosmeticItemPrefabsDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*  value) ;

constexpr void __cordl_internal_set_pedestalClearCartCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value) ;

constexpr void __cordl_internal_set_pedestalUpdateCoroutines(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  value) ;

constexpr void __cordl_internal_set_pedestalUpdateEvents(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*  value) ;

constexpr void __cordl_internal_set_tempJson(::StringW  value) ;

/// @brief Method .ctor, addr 0x5cb67b0, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaNetworking::Store::StoreUpdater> getStaticF_instance() ;

/// @brief Method get_DateTimeNowServerAdjusted, addr 0x5cb389c, size 0x6c, virtual false, abstract: false, final false
inline ::System::DateTime get_DateTimeNowServerAdjusted() ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdater(StoreUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdater(StoreUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4453};

/// @brief Field StoreItemsChangeTimeUTC, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___StoreItemsChangeTimeUTC;

/// @brief Field cosmeticItemPrefabsDictionary, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::FXP::CosmeticItemPrefab>>*  ___cosmeticItemPrefabsDictionary;

/// @brief Field pedestalUpdateEvents, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaNetworking::Store::StoreUpdateEvent*>*>*  ___pedestalUpdateEvents;

/// @brief Field pedestalUpdateCoroutines, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  ___pedestalUpdateCoroutines;

/// @brief Field pedestalClearCartCoroutines, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Coroutine*>*  ___pedestalClearCartCoroutines;

/// @brief Field tempJson, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___tempJson;

/// @brief Field bLoadFromJSON, offset: 0x50, size: 0x1, def value: None
 bool  ___bLoadFromJSON;

/// @brief Field bUsePlaceHolderJSON, offset: 0x51, size: 0x1, def value: None
 bool  ___bUsePlaceHolderJSON;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___StoreItemsChangeTimeUTC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___cosmeticItemPrefabsDictionary) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___pedestalUpdateEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___pedestalUpdateCoroutines) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___pedestalClearCartCoroutines) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___tempJson) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___bLoadFromJSON) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater, ___bUsePlaceHolderJSON) == 0x51, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreUpdater) == 0x58, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdater/<HandlePedestalUpdate>d__18
class CORDL_TYPE StoreUpdater__HandlePedestalUpdate_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::Store::StoreUpdater>  __4__this;

/// @brief Field playFX, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_playFX, put=__cordl_internal_set_playFX)) bool  playFX;

/// @brief Field updateEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateEvent, put=__cordl_internal_set_updateEvent)) ::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cb6d50, size 0x378, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cb70c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cb70d0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cb7108, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cb6d4c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_playFX() const;

constexpr bool& __cordl_internal_get_playFX() ;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent* const& __cordl_internal_get_updateEvent() const;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent*& __cordl_internal_get_updateEvent() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value) ;

constexpr void __cordl_internal_set_playFX(bool  value) ;

constexpr void __cordl_internal_set_updateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cb4fe0, size 0x28, virtual false, abstract: false, final false
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
constexpr StoreUpdater__HandlePedestalUpdate_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater__HandlePedestalUpdate_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdater__HandlePedestalUpdate_d__18(StoreUpdater__HandlePedestalUpdate_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater__HandlePedestalUpdate_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdater__HandlePedestalUpdate_d__18(StoreUpdater__HandlePedestalUpdate_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4452};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreUpdater>  _____4__this;

/// @brief Field updateEvent, offset: 0x28, size: 0x8, def value: None
 ::GorillaNetworking::Store::StoreUpdateEvent*  ___updateEvent;

/// @brief Field playFX, offset: 0x30, size: 0x1, def value: None
 bool  ___playFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18, ___updateEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18, ___playFX) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreUpdater__HandlePedestalUpdate_d__18) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdater/<HandleClearCart>d__19
class CORDL_TYPE StoreUpdater__HandleClearCart_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::Store::StoreUpdater>  __4__this;

/// @brief Field updateEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateEvent, put=__cordl_internal_set_updateEvent)) ::GorillaNetworking::Store::StoreUpdateEvent*  updateEvent;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cb6a2c, size 0x2d8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cb6d04, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cb6d0c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cb6d44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cb6a28, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::Store::StoreUpdater>& __cordl_internal_get___4__this() ;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent* const& __cordl_internal_get_updateEvent() const;

constexpr ::GorillaNetworking::Store::StoreUpdateEvent*& __cordl_internal_get_updateEvent() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::Store::StoreUpdater>  value) ;

constexpr void __cordl_internal_set_updateEvent(::GorillaNetworking::Store::StoreUpdateEvent*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cb5090, size 0x28, virtual false, abstract: false, final false
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
constexpr StoreUpdater__HandleClearCart_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater__HandleClearCart_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdater__HandleClearCart_d__19(StoreUpdater__HandleClearCart_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater__HandleClearCart_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdater__HandleClearCart_d__19(StoreUpdater__HandleClearCart_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4451};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field updateEvent, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::Store::StoreUpdateEvent*  ___updateEvent;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::StoreUpdater>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19, ___updateEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreUpdater__HandleClearCart_d__19) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreUpdater/<>c
class CORDL_TYPE StoreUpdater___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::Store::StoreUpdater___c*  __9;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__24_1;

static inline ::GorillaNetworking::Store::StoreUpdater___c* New_ctor() ;

/// @brief Method <GetEventsFromTitleData>b__24_1, addr 0x5cb699c, size 0x8c, virtual false, abstract: false, final false
inline void _GetEventsFromTitleData_b__24_1(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x5cb6994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::Store::StoreUpdater___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__24_1() ;

static inline void setStaticF___9(::GorillaNetworking::Store::StoreUpdater___c*  value) ;

static inline void setStaticF___9__24_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreUpdater___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreUpdater___c(StoreUpdater___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreUpdater___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreUpdater___c(StoreUpdater___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4450};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::Store::StoreUpdater___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
