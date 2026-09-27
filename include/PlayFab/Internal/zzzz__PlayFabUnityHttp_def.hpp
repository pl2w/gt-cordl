#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabUnityHttp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabUnityHttp)
namespace PlayFab::Internal {
class CallRequestContainer;
}
namespace PlayFab::Internal {
class PlayFabUnityHttp__Post_d__13;
}
namespace PlayFab::Internal {
class PlayFabUnityHttp__SimpleCallCoroutine_d__11;
}
namespace PlayFab {
class IPlayFabPlugin;
}
namespace PlayFab {
class ITransportPlugin;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace PlayFab::Internal {
class PlayFabUnityHttp;
}
namespace PlayFab::Internal {
class PlayFabUnityHttp__Post_d__13;
}
namespace PlayFab::Internal {
class PlayFabUnityHttp__SimpleCallCoroutine_d__11;
}
// Write type traits
MARK_REF_T(::PlayFab::Internal::PlayFabUnityHttp*);
MARK_REF_T(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*);
MARK_REF_T(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*);
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabUnityHttp*, "PlayFab.Internal", "PlayFabUnityHttp");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13*, "PlayFab.Internal", "PlayFabUnityHttp/<Post>d__13");
DEFINE_IL2CPP_CLASS(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11*, "PlayFab.Internal", "PlayFabUnityHttp/<SimpleCallCoroutine>d__11");
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabUnityHttp
class CORDL_TYPE PlayFabUnityHttp : public ::System::Object {
public:
// Declarations
using _Post_d__13 = ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13;

using _SimpleCallCoroutine_d__11 = ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Field _isInitialized, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _pendingWwwMessages, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__pendingWwwMessages, put=__cordl_internal_set__pendingWwwMessages)) int32_t  _pendingWwwMessages;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr operator  ::PlayFab::IPlayFabPlugin*() noexcept;

/// @brief Convert operator to "::PlayFab::ITransportPlugin"
constexpr operator  ::PlayFab::ITransportPlugin*() noexcept;

/// @brief Method GetPendingMessages, addr 0xa847658, size 0x8, virtual true, abstract: false, final true
inline int32_t GetPendingMessages() ;

/// @brief Method Initialize, addr 0xa846e4c, size 0xc, virtual true, abstract: false, final true
inline void Initialize() ;

/// @brief Method MakeApiCall, addr 0xa847154, size 0x454, virtual true, abstract: false, final true
inline void MakeApiCall(::System::Object*  reqContainerObj) ;

static inline ::PlayFab::Internal::PlayFabUnityHttp* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa846e5c, size 0x4, virtual true, abstract: false, final true
inline void OnDestroy() ;

/// @brief Method OnError, addr 0xa847bc4, size 0xe0, virtual false, abstract: false, final false
inline void OnError(::StringW  error, ::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// @brief Method OnResponse, addr 0xa847660, size 0x564, virtual false, abstract: false, final false
inline void OnResponse(::StringW  response, ::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// [IteratorStateMachine(typeof(PlayFab.Internal.PlayFabUnityHttp::<Post>d__13))]
/// @brief Method Post, addr 0xa8475a8, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Post(::PlayFab::Internal::CallRequestContainer*  reqContainer) ;

/// [IteratorStateMachine(typeof(PlayFab.Internal.PlayFabUnityHttp::<SimpleCallCoroutine>d__11))]
/// @brief Method SimpleCallCoroutine, addr 0xa846f08, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* SimpleCallCoroutine(::StringW  method, ::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimpleGetCall, addr 0xa846e60, size 0xa8, virtual true, abstract: false, final true
inline void SimpleGetCall(::StringW  fullUrl, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePostCall, addr 0xa847080, size 0xac, virtual true, abstract: false, final true
inline void SimplePostCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method SimplePutCall, addr 0xa846fd4, size 0xac, virtual true, abstract: false, final true
inline void SimplePutCall(::StringW  fullUrl, ::ArrayW<uint8_t>  payload, ::System::Action_1<::ArrayW<uint8_t>>*  successCallback, ::System::Action_1<::StringW>*  errorCallback) ;

/// @brief Method Update, addr 0xa846e58, size 0x4, virtual true, abstract: false, final true
inline void Update() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr int32_t const& __cordl_internal_get__pendingWwwMessages() const;

constexpr int32_t& __cordl_internal_get__pendingWwwMessages() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__pendingWwwMessages(int32_t  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

/// @brief Method .ctor, addr 0xa847ca4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInitialized, addr 0xa846e44, size 0x8, virtual true, abstract: false, final true
inline bool get_IsInitialized() ;

/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* i___PlayFab__IPlayFabPlugin() noexcept;

/// @brief Convert to "::PlayFab::ITransportPlugin"
constexpr ::PlayFab::ITransportPlugin* i___PlayFab__ITransportPlugin() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabUnityHttp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabUnityHttp(PlayFabUnityHttp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabUnityHttp(PlayFabUnityHttp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19928};

/// @brief Field _isInitialized, offset: 0x10, size: 0x1, def value: None
 bool  ____isInitialized;

/// @brief Field _pendingWwwMessages, offset: 0x14, size: 0x4, def value: None
 int32_t  ____pendingWwwMessages;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp, ____isInitialized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp, ____pendingWwwMessages) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp, ___count) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabUnityHttp) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabUnityHttp/<SimpleCallCoroutine>d__11
class CORDL_TYPE PlayFabUnityHttp__SimpleCallCoroutine_d__11 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <www>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__www_5__2, put=__cordl_internal_set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field errorCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::StringW>*  errorCallback;

/// @brief Field fullUrl, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullUrl, put=__cordl_internal_set_fullUrl)) ::StringW  fullUrl;

/// @brief Field method, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_method, put=__cordl_internal_set_method)) ::StringW  method;

/// @brief Field payload, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_payload, put=__cordl_internal_set_payload)) ::ArrayW<uint8_t>  payload;

/// @brief Field successCallback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_successCallback, put=__cordl_internal_set_successCallback)) ::System::Action_1<::ArrayW<uint8_t>>*  successCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa848604, size 0x4c8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa848b7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa848b84, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa848bbc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa8485e8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__www_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__www_5__2() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_errorCallback() ;

constexpr ::StringW const& __cordl_internal_get_fullUrl() const;

constexpr ::StringW& __cordl_internal_get_fullUrl() ;

constexpr ::StringW const& __cordl_internal_get_method() const;

constexpr ::StringW& __cordl_internal_get_method() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_payload() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_payload() ;

constexpr ::System::Action_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_successCallback() const;

constexpr ::System::Action_1<::ArrayW<uint8_t>>*& __cordl_internal_get_successCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_fullUrl(::StringW  value) ;

constexpr void __cordl_internal_set_method(::StringW  value) ;

constexpr void __cordl_internal_set_payload(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_successCallback(::System::Action_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method <>m__Finally1, addr 0xa848acc, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa84712c, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabUnityHttp__SimpleCallCoroutine_d__11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp__SimpleCallCoroutine_d__11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabUnityHttp__SimpleCallCoroutine_d__11(PlayFabUnityHttp__SimpleCallCoroutine_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp__SimpleCallCoroutine_d__11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabUnityHttp__SimpleCallCoroutine_d__11(PlayFabUnityHttp__SimpleCallCoroutine_d__11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19927};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field payload, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___payload;

/// @brief Field fullUrl, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___fullUrl;

/// @brief Field errorCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___errorCallback;

/// @brief Field successCallback, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t>>*  ___successCallback;

/// @brief Field method, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___method;

/// @brief Field <www>5__2, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____www_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ___payload) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ___fullUrl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ___errorCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ___successCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ___method) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11, ____www_5__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabUnityHttp__SimpleCallCoroutine_d__11) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Internal {
// Is value type: false
// CS Name: PlayFab.Internal.PlayFabUnityHttp/<Post>d__13
class CORDL_TYPE PlayFabUnityHttp__Post_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayFab::Internal::PlayFabUnityHttp*  __4__this;

/// @brief Field <www>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__www_5__2, put=__cordl_internal_set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field reqContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reqContainer, put=__cordl_internal_set_reqContainer)) ::PlayFab::Internal::CallRequestContainer*  reqContainer;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa847cb0, size 0x8f0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::PlayFab::Internal::PlayFabUnityHttp__Post_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa8485a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa8485a8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa8485e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa847cac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::PlayFab::Internal::PlayFabUnityHttp* const& __cordl_internal_get___4__this() const;

constexpr ::PlayFab::Internal::PlayFabUnityHttp*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__www_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__www_5__2() ;

constexpr ::PlayFab::Internal::CallRequestContainer* const& __cordl_internal_get_reqContainer() const;

constexpr ::PlayFab::Internal::CallRequestContainer*& __cordl_internal_get_reqContainer() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::PlayFab::Internal::PlayFabUnityHttp*  value) ;

constexpr void __cordl_internal_set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set_reqContainer(::PlayFab::Internal::CallRequestContainer*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa847630, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabUnityHttp__Post_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp__Post_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabUnityHttp__Post_d__13(PlayFabUnityHttp__Post_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabUnityHttp__Post_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabUnityHttp__Post_d__13(PlayFabUnityHttp__Post_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19926};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field reqContainer, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::Internal::CallRequestContainer*  ___reqContainer;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::Internal::PlayFabUnityHttp*  _____4__this;

/// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____www_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13, ___reqContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13, ____www_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Internal::PlayFabUnityHttp__Post_d__13) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::Internal
