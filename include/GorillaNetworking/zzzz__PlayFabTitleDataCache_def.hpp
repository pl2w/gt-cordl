#pragma once
// IWYU pragma private; include "GorillaNetworking/PlayFabTitleDataCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabTitleDataCache)
namespace GlobalNamespace {
class ListClientMothershipTitleDataResponse;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GorillaNetworking {
class CacheImport;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache_DataRequest;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache_DataUpdate;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache__UpdateDataCo_d__27;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache___c;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache___c__DisplayClass27_0;
}
namespace GorillaUtil {
class StringTable;
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
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
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
namespace GorillaNetworking {
class PlayFabTitleDataCache;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache_DataRequest;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache_DataUpdate;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache__UpdateDataCo_d__27;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache___c;
}
namespace GorillaNetworking {
class PlayFabTitleDataCache___c__DisplayClass27_0;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache*);
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache_DataRequest*);
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*);
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*);
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache___c*);
MARK_REF_T(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache*, "GorillaNetworking", "PlayFabTitleDataCache");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache_DataRequest*, "GorillaNetworking", "PlayFabTitleDataCache/DataRequest");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*, "GorillaNetworking", "PlayFabTitleDataCache/DataUpdate");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27*, "GorillaNetworking", "PlayFabTitleDataCache/<UpdateDataCo>d__27");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache___c*, "GorillaNetworking", "PlayFabTitleDataCache/<>c");
DEFINE_IL2CPP_CLASS(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*, "GorillaNetworking", "PlayFabTitleDataCache/<>c__DisplayClass27_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache
class CORDL_TYPE PlayFabTitleDataCache : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DataRequest = ::GorillaNetworking::PlayFabTitleDataCache_DataRequest;

using DataUpdate = ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate;

using _UpdateDataCo_d__27 = ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27;

using __c = ::GorillaNetworking::PlayFabTitleDataCache___c;

using __c__DisplayClass27_0 = ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0;

/// @brief Field OnCachedValueRetieved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCachedValueRetieved, put=setStaticF_OnCachedValueRetieved)) ::System::Action_2<::StringW,::StringW>*  OnCachedValueRetieved;

/// @brief Field OnTitleDataUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTitleDataUpdate, put=__cordl_internal_set_OnTitleDataUpdate)) ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*  OnTitleDataUpdate;

/// @brief Field OnValueRetieved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnValueRetieved, put=setStaticF_OnValueRetieved)) ::System::Action_2<::StringW,::StringW>*  OnValueRetieved;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  _Instance_k__BackingField;

/// @brief Field betaTitleDataOveride, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_betaTitleDataOveride, put=__cordl_internal_set_betaTitleDataOveride)) ::UnityW<::GorillaUtil::StringTable>  betaTitleDataOveride;

/// @brief Field isFirstLoad, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirstLoad, put=__cordl_internal_set_isFirstLoad)) bool  isFirstLoad;

/// @brief Field k_onnLoaded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_onnLoaded, put=setStaticF_k_onnLoaded)) ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  k_onnLoaded;

/// @brief Field localesUpdated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_localesUpdated, put=__cordl_internal_set_localesUpdated)) ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  localesUpdated;

/// @brief Field localizedTitleData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizedTitleData, put=__cordl_internal_set_localizedTitleData)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  localizedTitleData;

/// @brief Field requests, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_requests, put=__cordl_internal_set_requests)) ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*  requests;

/// @brief Field updateDataCoroutine, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateDataCoroutine, put=__cordl_internal_set_updateDataCoroutine)) ::UnityEngine::Coroutine*  updateDataCoroutine;

/// @brief Method Awake, addr 0x5c9bc80, size 0x144, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearRequestWithError, addr 0x5c9c3ac, size 0x1ec, virtual false, abstract: false, final false
inline void ClearRequestWithError(::PlayFab::PlayFabError*  e) ;

/// @brief Method GetTitleData, addr 0x5c90460, size 0x250, virtual false, abstract: false, final false
inline void GetTitleData(::StringW  name, ::System::Action_1<::StringW>*  callback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, bool  ignoreCache) ;

/// @brief Method LoadDataFromFile, addr 0x5c9bf44, size 0x208, virtual false, abstract: false, final false
inline ::GorillaNetworking::CacheImport* LoadDataFromFile() ;

static inline ::GorillaNetworking::PlayFabTitleDataCache* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c9bea0, size 0xa4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RegisterOnLoad, addr 0x5c9c598, size 0x18c, virtual false, abstract: false, final false
static inline void RegisterOnLoad(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  callback) ;

/// @brief Method SaveDataToFile, addr 0x5c9c154, size 0x1c4, virtual false, abstract: false, final false
static inline void SaveDataToFile(::StringW  filepath, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  titleData) ;

/// @brief Method Start, addr 0x5c9bdc4, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryUpdateData, addr 0x5c9bc68, size 0x18, virtual false, abstract: false, final false
inline void TryUpdateData() ;

/// @brief Method UpdateData, addr 0x5c9be70, size 0x30, virtual false, abstract: false, final false
inline void UpdateData() ;

/// [IteratorStateMachine(typeof(GorillaNetworking.PlayFabTitleDataCache::<UpdateDataCo>d__27))]
/// @brief Method UpdateDataCo, addr 0x5c9c318, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateDataCo() ;

constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* const& __cordl_internal_get_OnTitleDataUpdate() const;

constexpr ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*& __cordl_internal_get_OnTitleDataUpdate() ;

constexpr ::UnityW<::GorillaUtil::StringTable> const& __cordl_internal_get_betaTitleDataOveride() const;

constexpr ::UnityW<::GorillaUtil::StringTable>& __cordl_internal_get_betaTitleDataOveride() ;

constexpr bool const& __cordl_internal_get_isFirstLoad() const;

constexpr bool& __cordl_internal_get_isFirstLoad() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>* const& __cordl_internal_get_localesUpdated() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,bool>*& __cordl_internal_get_localesUpdated() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& __cordl_internal_get_localizedTitleData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& __cordl_internal_get_localizedTitleData() ;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>* const& __cordl_internal_get_requests() const;

constexpr ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*& __cordl_internal_get_requests() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_updateDataCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_updateDataCoroutine() ;

constexpr void __cordl_internal_set_OnTitleDataUpdate(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*  value) ;

constexpr void __cordl_internal_set_betaTitleDataOveride(::UnityW<::GorillaUtil::StringTable>  value) ;

constexpr void __cordl_internal_set_isFirstLoad(bool  value) ;

constexpr void __cordl_internal_set_localesUpdated(::System::Collections::Generic::Dictionary_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_localizedTitleData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

constexpr void __cordl_internal_set_requests(::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*  value) ;

constexpr void __cordl_internal_set_updateDataCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5c9c724, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::StringW,::StringW>* getStaticF_OnCachedValueRetieved() ;

static inline ::System::Action_2<::StringW,::StringW>* getStaticF_OnValueRetieved() ;

static inline ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> getStaticF__Instance_k__BackingField() ;

static inline ::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>* getStaticF_k_onnLoaded() ;

/// @brief Method get_FilePath, addr 0x5c9bbc0, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW get_FilePath() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5c9bb20, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> get_Instance() ;

static inline void setStaticF_OnCachedValueRetieved(::System::Action_2<::StringW,::StringW>*  value) ;

static inline void setStaticF_OnValueRetieved(::System::Action_2<::StringW,::StringW>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  value) ;

static inline void setStaticF_k_onnLoaded(::System::Action_1<::UnityW<::GorillaNetworking::PlayFabTitleDataCache>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5c9bb68, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaNetworking::PlayFabTitleDataCache*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache(PlayFabTitleDataCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache(PlayFabTitleDataCache const& ) = delete;

/// @brief Field FileName offset 0xffffffff size 0x8
static constexpr ::ConstString  FileName{u"TitleDataCache.json"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4399};

/// @brief Field OnTitleDataUpdate, offset: 0x20, size: 0x8, def value: None
 ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate*  ___OnTitleDataUpdate;

/// @brief Field requests, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaNetworking::PlayFabTitleDataCache_DataRequest*>*  ___requests;

/// @brief Field localizedTitleData, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  ___localizedTitleData;

/// @brief Field localesUpdated, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,bool>*  ___localesUpdated;

/// @brief Field isFirstLoad, offset: 0x40, size: 0x1, def value: None
 bool  ___isFirstLoad;

/// @brief Field updateDataCoroutine, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___updateDataCoroutine;

/// [SerializeField]
/// @brief Field betaTitleDataOveride, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaUtil::StringTable>  ___betaTitleDataOveride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___OnTitleDataUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___requests) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___localizedTitleData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___localesUpdated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___isFirstLoad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___updateDataCoroutine) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache, ___betaTitleDataOveride) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache) == 0x58, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache/<UpdateDataCo>d__27
class CORDL_TYPE PlayFabTitleDataCache__UpdateDataCo_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  __4__this;

/// @brief Field <>8__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*  __8__1;

/// @brief Field <oldCache>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__oldCache_5__2, put=__cordl_internal_set__oldCache_5__2)) ::GorillaNetworking::CacheImport*  _oldCache_5__2;

/// @brief Field <oldLocalizedCache>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__oldLocalizedCache_5__4, put=__cordl_internal_set__oldLocalizedCache_5__4)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _oldLocalizedCache_5__4;

/// @brief Field <titleData>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleData_5__3, put=__cordl_internal_set__titleData_5__3)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _titleData_5__3;

/// @brief Field <wipeOldData>5__5, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__wipeOldData_5__5, put=__cordl_internal_set__wipeOldData_5__5)) bool  _wipeOldData_5__5;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c9ced8, size 0x1014, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c9df28, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c9df30, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c9df68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c9ceac, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaNetworking::PlayFabTitleDataCache> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaNetworking::PlayFabTitleDataCache>& __cordl_internal_get___4__this() ;

constexpr ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0* const& __cordl_internal_get___8__1() const;

constexpr ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*& __cordl_internal_get___8__1() ;

constexpr ::GorillaNetworking::CacheImport* const& __cordl_internal_get__oldCache_5__2() const;

constexpr ::GorillaNetworking::CacheImport*& __cordl_internal_get__oldCache_5__2() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__oldLocalizedCache_5__4() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__oldLocalizedCache_5__4() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__titleData_5__3() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__titleData_5__3() ;

constexpr bool const& __cordl_internal_get__wipeOldData_5__5() const;

constexpr bool& __cordl_internal_get__wipeOldData_5__5() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  value) ;

constexpr void __cordl_internal_set___8__1(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*  value) ;

constexpr void __cordl_internal_set__oldCache_5__2(::GorillaNetworking::CacheImport*  value) ;

constexpr void __cordl_internal_set__oldLocalizedCache_5__4(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__titleData_5__3(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__wipeOldData_5__5(bool  value) ;

/// @brief Method <>m__Finally1, addr 0x5c9deec, size 0x3c, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c9c384, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabTitleDataCache__UpdateDataCo_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache__UpdateDataCo_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache__UpdateDataCo_d__27(PlayFabTitleDataCache__UpdateDataCo_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache__UpdateDataCo_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache__UpdateDataCo_d__27(PlayFabTitleDataCache__UpdateDataCo_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4398};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::PlayFabTitleDataCache>  _____4__this;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0*  _____8__1;

/// @brief Field <oldCache>5__2, offset: 0x30, size: 0x8, def value: None
 ::GorillaNetworking::CacheImport*  ____oldCache_5__2;

/// @brief Field <titleData>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____titleData_5__3;

/// @brief Field <oldLocalizedCache>5__4, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____oldLocalizedCache_5__4;

/// @brief Field <wipeOldData>5__5, offset: 0x48, size: 0x1, def value: None
 bool  ____wipeOldData_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, _____8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, ____oldCache_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, ____titleData_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, ____oldLocalizedCache_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27, ____wipeOldData_5__5) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache__UpdateDataCo_d__27) == 0x50, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache/<>c__DisplayClass27_0
class CORDL_TYPE PlayFabTitleDataCache___c__DisplayClass27_0 : public ::System::Object {
public:
// Declarations
/// @brief Field currentLocale, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLocale, put=__cordl_internal_set_currentLocale)) ::StringW  currentLocale;

/// @brief Field finished, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_finished, put=__cordl_internal_set_finished)) bool  finished;

/// @brief Field mothershipError, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipError, put=__cordl_internal_set_mothershipError)) ::StringW  mothershipError;

/// @brief Field newTitleData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_newTitleData, put=__cordl_internal_set_newTitleData)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  newTitleData;

static inline ::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0* New_ctor() ;

/// @brief Method <UpdateDataCo>b__1, addr 0x5c9c99c, size 0x3c4, virtual false, abstract: false, final false
inline void _UpdateDataCo_b__1(::GlobalNamespace::ListClientMothershipTitleDataResponse*  response) ;

/// @brief Method <UpdateDataCo>b__2, addr 0x5c9cd60, size 0x144, virtual false, abstract: false, final false
inline void _UpdateDataCo_b__2(::GlobalNamespace::MothershipError*  error, int32_t  statusCode) ;

/// @brief Method <UpdateDataCo>b__3, addr 0x5c9cea4, size 0x8, virtual false, abstract: false, final false
inline bool _UpdateDataCo_b__3() ;

constexpr ::StringW const& __cordl_internal_get_currentLocale() const;

constexpr ::StringW& __cordl_internal_get_currentLocale() ;

constexpr bool const& __cordl_internal_get_finished() const;

constexpr bool& __cordl_internal_get_finished() ;

constexpr ::StringW const& __cordl_internal_get_mothershipError() const;

constexpr ::StringW& __cordl_internal_get_mothershipError() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_newTitleData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_newTitleData() ;

constexpr void __cordl_internal_set_currentLocale(::StringW  value) ;

constexpr void __cordl_internal_set_finished(bool  value) ;

constexpr void __cordl_internal_set_mothershipError(::StringW  value) ;

constexpr void __cordl_internal_set_newTitleData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x5c9c994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataCache___c__DisplayClass27_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache___c__DisplayClass27_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache___c__DisplayClass27_0(PlayFabTitleDataCache___c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache___c__DisplayClass27_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache___c__DisplayClass27_0(PlayFabTitleDataCache___c__DisplayClass27_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4397};

/// @brief Field newTitleData, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___newTitleData;

/// @brief Field currentLocale, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___currentLocale;

/// @brief Field mothershipError, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mothershipError;

/// @brief Field finished, offset: 0x28, size: 0x1, def value: None
 bool  ___finished;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0, ___newTitleData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0, ___currentLocale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0, ___mothershipError) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0, ___finished) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache___c__DisplayClass27_0) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache/<>c
class CORDL_TYPE PlayFabTitleDataCache___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaNetworking::PlayFabTitleDataCache___c*  __9;

/// @brief Field <>9__27_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__27_0, put=setStaticF___9__27_0)) ::System::Func_1<bool>*  __9__27_0;

static inline ::GorillaNetworking::PlayFabTitleDataCache___c* New_ctor() ;

/// @brief Method <UpdateDataCo>b__27_0, addr 0x5c9c944, size 0x50, virtual false, abstract: false, final false
inline bool _UpdateDataCo_b__27_0() ;

/// @brief Method .ctor, addr 0x5c9c93c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaNetworking::PlayFabTitleDataCache___c* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__27_0() ;

static inline void setStaticF___9(::GorillaNetworking::PlayFabTitleDataCache___c*  value) ;

static inline void setStaticF___9__27_0(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataCache___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache___c(PlayFabTitleDataCache___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache___c(PlayFabTitleDataCache___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache/DataRequest
class CORDL_TYPE PlayFabTitleDataCache_DataRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Callback, put=set_Callback)) ::System::Action_1<::StringW>*  Callback;

 __declspec(property(get=get_ErrorCallback, put=set_ErrorCallback)) ::System::Action_1<::PlayFab::PlayFabError*>*  ErrorCallback;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Callback>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Callback_k__BackingField, put=__cordl_internal_set__Callback_k__BackingField)) ::System::Action_1<::StringW>*  _Callback_k__BackingField;

/// @brief Field <ErrorCallback>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ErrorCallback_k__BackingField, put=__cordl_internal_set__ErrorCallback_k__BackingField)) ::System::Action_1<::PlayFab::PlayFabError*>*  _ErrorCallback_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::GorillaNetworking::PlayFabTitleDataCache_DataRequest* New_ctor() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__Callback_k__BackingField() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__Callback_k__BackingField() ;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& __cordl_internal_get__ErrorCallback_k__BackingField() const;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& __cordl_internal_get__ErrorCallback_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Callback_k__BackingField(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__ErrorCallback_k__BackingField(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c9bc60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Callback, addr 0x5c9c8b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::StringW>* get_Callback() ;

/// [CompilerGenerated]
/// @brief Method get_ErrorCallback, addr 0x5c9c8c4, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::PlayFab::PlayFabError*>* get_ErrorCallback() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5c9c8a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_Callback, addr 0x5c9c8bc, size 0x8, virtual false, abstract: false, final false
inline void set_Callback(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ErrorCallback, addr 0x5c9c8cc, size 0x8, virtual false, abstract: false, final false
inline void set_ErrorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5c9c8ac, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataCache_DataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache_DataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache_DataRequest(PlayFabTitleDataCache_DataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache_DataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache_DataRequest(PlayFabTitleDataCache_DataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4395};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Callback>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____Callback_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ErrorCallback>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::PlayFabError*>*  ____ErrorCallback_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache_DataRequest, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache_DataRequest, ____Callback_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::PlayFabTitleDataCache_DataRequest, ____ErrorCallback_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache_DataRequest) == 0x28, "Size mismatch!");

} // namespace end def GorillaNetworking
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.PlayFabTitleDataCache/DataUpdate
class CORDL_TYPE PlayFabTitleDataCache_DataUpdate : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
static inline ::GorillaNetworking::PlayFabTitleDataCache_DataUpdate* New_ctor() ;

/// @brief Method .ctor, addr 0x5c9c85c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataCache_DataUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache_DataUpdate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataCache_DataUpdate(PlayFabTitleDataCache_DataUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataCache_DataUpdate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataCache_DataUpdate(PlayFabTitleDataCache_DataUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaNetworking::PlayFabTitleDataCache_DataUpdate) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking
