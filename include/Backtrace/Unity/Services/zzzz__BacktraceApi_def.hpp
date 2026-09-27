#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceApi)
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
namespace Backtrace::Unity::Model {
class BacktraceCredentials;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceHttpClient;
}
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__SendMinidump_d__24;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__25;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__26;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__27;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Backtrace::Unity::Services {
class BacktraceApi;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__SendMinidump_d__24;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__25;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__26;
}
namespace Backtrace::Unity::Services {
class BacktraceApi__Send_d__27;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Services::BacktraceApi*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceApi__Send_d__25*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceApi__Send_d__26*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceApi__Send_d__27*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceApi*, "Backtrace.Unity.Services", "BacktraceApi");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*, "Backtrace.Unity.Services", "BacktraceApi/<SendMinidump>d__24");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceApi__Send_d__25*, "Backtrace.Unity.Services", "BacktraceApi/<Send>d__25");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceApi__Send_d__26*, "Backtrace.Unity.Services", "BacktraceApi/<Send>d__26");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceApi__Send_d__27*, "Backtrace.Unity.Services", "BacktraceApi/<Send>d__27");
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceApi
class CORDL_TYPE BacktraceApi : public ::System::Object {
public:
// Declarations
using _SendMinidump_d__24 = ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24;

using _Send_d__25 = ::Backtrace::Unity::Services::BacktraceApi__Send_d__25;

using _Send_d__26 = ::Backtrace::Unity::Services::BacktraceApi__Send_d__26;

using _Send_d__27 = ::Backtrace::Unity::Services::BacktraceApi__Send_d__27;

 __declspec(property(get=get_EnablePerformanceStatistics, put=set_EnablePerformanceStatistics)) bool  EnablePerformanceStatistics;

 __declspec(property(get=get_OnServerError, put=set_OnServerError)) ::System::Action_1<::System::Exception*>*  OnServerError;

 __declspec(property(get=get_OnServerResponse, put=set_OnServerResponse)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  OnServerResponse;

/// @brief [Obsolete("RequestHandler is obsolete. BacktraceApi won\'t be able to provide BacktraceData in every situation")]
 __declspec(property(get=get_RequestHandler, put=set_RequestHandler)) ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  RequestHandler;

 __declspec(property(get=get_ServerUrl)) ::StringW  ServerUrl;

/// @brief Field <EnablePerformanceStatistics>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnablePerformanceStatistics_k__BackingField, put=__cordl_internal_set__EnablePerformanceStatistics_k__BackingField)) bool  _EnablePerformanceStatistics_k__BackingField;

/// @brief Field <OnServerError>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnServerError_k__BackingField, put=__cordl_internal_set__OnServerError_k__BackingField)) ::System::Action_1<::System::Exception*>*  _OnServerError_k__BackingField;

/// @brief Field <OnServerResponse>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnServerResponse_k__BackingField, put=__cordl_internal_set__OnServerResponse_k__BackingField)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  _OnServerResponse_k__BackingField;

/// @brief Field <RequestHandler>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestHandler_k__BackingField, put=__cordl_internal_set__RequestHandler_k__BackingField)) ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  _RequestHandler_k__BackingField;

/// @brief Field _credentials, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentials, put=__cordl_internal_set__credentials)) ::Backtrace::Unity::Model::BacktraceCredentials*  _credentials;

/// @brief Field _httpClient, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__httpClient, put=__cordl_internal_set__httpClient)) ::Backtrace::Unity::Model::BacktraceHttpClient*  _httpClient;

/// @brief Field _minidumpUrl, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__minidumpUrl, put=__cordl_internal_set__minidumpUrl)) ::StringW  _minidumpUrl;

/// @brief Field _serverUrl, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverUrl, put=__cordl_internal_set__serverUrl)) ::System::Uri*  _serverUrl;

/// @brief Field _shouldDisplayFailureMessage, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldDisplayFailureMessage, put=__cordl_internal_set__shouldDisplayFailureMessage)) bool  _shouldDisplayFailureMessage;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceApi"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceApi*() noexcept;

static inline ::Backtrace::Unity::Services::BacktraceApi* New_ctor(::Backtrace::Unity::Model::BacktraceCredentials*  credentials, bool  ignoreSslValidation) ;

/// @brief Method PrintLog, addr 0x5f06c14, size 0x130, virtual false, abstract: false, final false
inline void PrintLog(::UnityEngine::Networking::UnityWebRequest*  request) ;

/// [IteratorStateMachine(typeof(Backtrace.Unity.Services.BacktraceApi::<Send>d__25))]
/// @brief Method Send, addr 0x5f06974, size 0x9c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* Send(::Backtrace::Unity::Model::BacktraceData*  data, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// [IteratorStateMachine(typeof(Backtrace.Unity.Services.BacktraceApi::<Send>d__27))]
/// @brief Method Send, addr 0x5f06b20, size 0xcc, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// [IteratorStateMachine(typeof(Backtrace.Unity.Services.BacktraceApi::<Send>d__26))]
/// @brief Method Send, addr 0x5f06a38, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, int32_t  deduplication, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// [IteratorStateMachine(typeof(Backtrace.Unity.Services.BacktraceApi::<SendMinidump>d__24))]
/// @brief Method SendMinidump, addr 0x5f06880, size 0xcc, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* SendMinidump(::StringW  minidumpPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

constexpr bool const& __cordl_internal_get__EnablePerformanceStatistics_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnablePerformanceStatistics_k__BackingField() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get__OnServerError_k__BackingField() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get__OnServerError_k__BackingField() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get__OnServerResponse_k__BackingField() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get__OnServerResponse_k__BackingField() ;

constexpr ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get__RequestHandler_k__BackingField() const;

constexpr ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get__RequestHandler_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::BacktraceCredentials* const& __cordl_internal_get__credentials() const;

constexpr ::Backtrace::Unity::Model::BacktraceCredentials*& __cordl_internal_get__credentials() ;

constexpr ::Backtrace::Unity::Model::BacktraceHttpClient* const& __cordl_internal_get__httpClient() const;

constexpr ::Backtrace::Unity::Model::BacktraceHttpClient*& __cordl_internal_get__httpClient() ;

constexpr ::StringW const& __cordl_internal_get__minidumpUrl() const;

constexpr ::StringW& __cordl_internal_get__minidumpUrl() ;

constexpr ::System::Uri* const& __cordl_internal_get__serverUrl() const;

constexpr ::System::Uri*& __cordl_internal_get__serverUrl() ;

constexpr bool const& __cordl_internal_get__shouldDisplayFailureMessage() const;

constexpr bool& __cordl_internal_get__shouldDisplayFailureMessage() ;

constexpr void __cordl_internal_set__EnablePerformanceStatistics_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OnServerError_k__BackingField(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set__OnServerResponse_k__BackingField(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set__RequestHandler_k__BackingField(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set__credentials(::Backtrace::Unity::Model::BacktraceCredentials*  value) ;

constexpr void __cordl_internal_set__httpClient(::Backtrace::Unity::Model::BacktraceHttpClient*  value) ;

constexpr void __cordl_internal_set__minidumpUrl(::StringW  value) ;

constexpr void __cordl_internal_set__serverUrl(::System::Uri*  value) ;

constexpr void __cordl_internal_set__shouldDisplayFailureMessage(bool  value) ;

/// @brief Method .ctor, addr 0x5efe488, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::BacktraceCredentials*  credentials, bool  ignoreSslValidation) ;

/// [CompilerGenerated]
/// @brief Method get_EnablePerformanceStatistics, addr 0x5f06650, size 0x8, virtual true, abstract: false, final true
inline bool get_EnablePerformanceStatistics() ;

/// [CompilerGenerated]
/// @brief Method get_OnServerError, addr 0x5f06630, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::System::Exception*>* get_OnServerError() ;

/// [CompilerGenerated]
/// @brief Method get_OnServerResponse, addr 0x5f06640, size 0x8, virtual true, abstract: false, final true
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* get_OnServerResponse() ;

/// [CompilerGenerated]
/// @brief Method get_RequestHandler, addr 0x5f06620, size 0x8, virtual true, abstract: false, final true
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* get_RequestHandler() ;

/// @brief Method get_ServerUrl, addr 0x5f06660, size 0x1c, virtual true, abstract: false, final true
inline ::StringW get_ServerUrl() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceApi"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* i___Backtrace__Unity__Interfaces__IBacktraceApi() noexcept;

/// [CompilerGenerated]
/// @brief Method set_EnablePerformanceStatistics, addr 0x5f06658, size 0x8, virtual true, abstract: false, final true
inline void set_EnablePerformanceStatistics(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnServerError, addr 0x5f06638, size 0x8, virtual true, abstract: false, final true
inline void set_OnServerError(::System::Action_1<::System::Exception*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnServerResponse, addr 0x5f06648, size 0x8, virtual true, abstract: false, final true
inline void set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequestHandler, addr 0x5f06628, size 0x8, virtual true, abstract: false, final true
inline void set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceApi(BacktraceApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceApi(BacktraceApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27572};

/// @brief Field _httpClient, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceHttpClient*  ____httpClient;

/// [CompilerGenerated]
/// @brief Field <RequestHandler>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  ____RequestHandler_k__BackingField;

/// @brief Field _shouldDisplayFailureMessage, offset: 0x20, size: 0x1, def value: None
 bool  ____shouldDisplayFailureMessage;

/// [CompilerGenerated]
/// @brief Field <OnServerError>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ____OnServerError_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnServerResponse>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ____OnServerResponse_k__BackingField;

/// @brief Field _serverUrl, offset: 0x38, size: 0x8, def value: None
 ::System::Uri*  ____serverUrl;

/// [CompilerGenerated]
/// @brief Field <EnablePerformanceStatistics>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____EnablePerformanceStatistics_k__BackingField;

/// @brief Field _minidumpUrl, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____minidumpUrl;

/// @brief Field _credentials, offset: 0x50, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceCredentials*  ____credentials;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____httpClient) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____RequestHandler_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____shouldDisplayFailureMessage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____OnServerError_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____OnServerResponse_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____serverUrl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____EnablePerformanceStatistics_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____minidumpUrl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi, ____credentials) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi) == 0x58, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceApi/<SendMinidump>d__24
class CORDL_TYPE BacktraceApi__SendMinidump_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Services::BacktraceApi*  __4__this;

/// @brief Field <request>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__3, put=__cordl_internal_set__request_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__3;

/// @brief Field <stopWatch>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopWatch_5__2, put=__cordl_internal_set__stopWatch_5__2)) ::System::Diagnostics::Stopwatch*  _stopWatch_5__2;

/// @brief Field attachments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachments, put=__cordl_internal_set_attachments)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments;

/// @brief Field attributes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes;

/// @brief Field callback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback;

/// @brief Field minidumpPath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_minidumpPath, put=__cordl_internal_set_minidumpPath)) ::StringW  minidumpPath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f078a4, size 0x42c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f07db8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f07dc0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f07df8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f07878, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Backtrace::Unity::Services::BacktraceApi* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Services::BacktraceApi*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__3() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopWatch_5__2() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopWatch_5__2() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_attachments() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_attachments() ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get_attributes() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get_attributes() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_callback() ;

constexpr ::StringW const& __cordl_internal_get_minidumpPath() const;

constexpr ::StringW& __cordl_internal_get_minidumpPath() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value) ;

constexpr void __cordl_internal_set__request_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__stopWatch_5__2(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set_minidumpPath(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0x5f07d08, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f0694c, size 0x28, virtual false, abstract: false, final false
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
constexpr BacktraceApi__SendMinidump_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__SendMinidump_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceApi__SendMinidump_d__24(BacktraceApi__SendMinidump_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__SendMinidump_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceApi__SendMinidump_d__24(BacktraceApi__SendMinidump_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27571};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field attachments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___attachments;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Services::BacktraceApi*  _____4__this;

/// @brief Field minidumpPath, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___minidumpPath;

/// @brief Field attributes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ___attributes;

/// @brief Field callback, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___callback;

/// @brief Field <stopWatch>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____stopWatch_5__2;

/// @brief Field <request>5__3, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ___attachments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ___minidumpPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ___attributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ___callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ____stopWatch_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24, ____request_5__3) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24) == 0x58, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceApi/<Send>d__27
class CORDL_TYPE BacktraceApi__Send_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Services::BacktraceApi*  __4__this;

/// @brief Field <request>5__3, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__3, put=__cordl_internal_set__request_5__3)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__3;

/// @brief Field <stopWatch>5__2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopWatch_5__2, put=__cordl_internal_set__stopWatch_5__2)) ::System::Diagnostics::Stopwatch*  _stopWatch_5__2;

/// @brief Field attachments, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachments, put=__cordl_internal_set_attachments)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments;

/// @brief Field attributes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes;

/// @brief Field callback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback;

/// @brief Field json, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_json, put=__cordl_internal_set_json)) ::StringW  json;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f0704c, size 0x478, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f07830, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f07838, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f07870, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f07020, size 0x2c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Backtrace::Unity::Services::BacktraceApi* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Services::BacktraceApi*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__3() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__3() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopWatch_5__2() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopWatch_5__2() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_attachments() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_attachments() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_attributes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_attributes() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_callback() ;

constexpr ::StringW const& __cordl_internal_get_json() const;

constexpr ::StringW& __cordl_internal_get_json() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value) ;

constexpr void __cordl_internal_set__request_5__3(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__stopWatch_5__2(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_attributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set_json(::StringW  value) ;

/// @brief Method <>m__Finally1, addr 0x5f07780, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f06bec, size 0x28, virtual false, abstract: false, final false
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
constexpr BacktraceApi__Send_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceApi__Send_d__27(BacktraceApi__Send_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceApi__Send_d__27(BacktraceApi__Send_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27570};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Backtrace::Unity::Services::BacktraceApi*  _____4__this;

/// @brief Field json, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___json;

/// @brief Field attachments, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___attachments;

/// @brief Field attributes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___attributes;

/// @brief Field callback, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___callback;

/// @brief Field <stopWatch>5__2, offset: 0x48, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____stopWatch_5__2;

/// @brief Field <request>5__3, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ___json) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ___attachments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ___attributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ___callback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ____stopWatch_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27, ____request_5__3) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi__Send_d__27) == 0x58, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceApi/<Send>d__26
class CORDL_TYPE BacktraceApi__Send_d__26 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Services::BacktraceApi*  __4__this;

/// @brief Field attachments, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachments, put=__cordl_internal_set_attachments)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments;

/// @brief Field callback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback;

/// @brief Field deduplication, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_deduplication, put=__cordl_internal_set_deduplication)) int32_t  deduplication;

/// @brief Field json, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_json, put=__cordl_internal_set_json)) ::StringW  json;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f06e7c, size 0x15c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__26* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f06fd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f06fe0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f07018, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f06e78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Backtrace::Unity::Services::BacktraceApi* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Services::BacktraceApi*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_attachments() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_attachments() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_callback() ;

constexpr int32_t const& __cordl_internal_get_deduplication() const;

constexpr int32_t& __cordl_internal_get_deduplication() ;

constexpr ::StringW const& __cordl_internal_get_json() const;

constexpr ::StringW& __cordl_internal_get_json() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value) ;

constexpr void __cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set_deduplication(int32_t  value) ;

constexpr void __cordl_internal_set_json(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f06af8, size 0x28, virtual false, abstract: false, final false
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
constexpr BacktraceApi__Send_d__26() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__26", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceApi__Send_d__26(BacktraceApi__Send_d__26 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__26", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceApi__Send_d__26(BacktraceApi__Send_d__26 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27569};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field deduplication, offset: 0x20, size: 0x4, def value: None
 int32_t  ___deduplication;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Services::BacktraceApi*  _____4__this;

/// @brief Field json, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___json;

/// @brief Field attachments, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___attachments;

/// @brief Field callback, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, ___deduplication) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, ___json) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, ___attachments) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26, ___callback) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi__Send_d__26) == 0x48, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceApi/<Send>d__25
class CORDL_TYPE BacktraceApi__Send_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Backtrace::Unity::Services::BacktraceApi*  __4__this;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Backtrace::Unity::Model::BacktraceData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f06d48, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f06e30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f06e38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f06e70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f06d44, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Backtrace::Unity::Services::BacktraceApi* const& __cordl_internal_get___4__this() const;

constexpr ::Backtrace::Unity::Services::BacktraceApi*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_callback() ;

constexpr ::Backtrace::Unity::Model::BacktraceData* const& __cordl_internal_get_data() const;

constexpr ::Backtrace::Unity::Model::BacktraceData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

constexpr void __cordl_internal_set_data(::Backtrace::Unity::Model::BacktraceData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f06a10, size 0x28, virtual false, abstract: false, final false
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
constexpr BacktraceApi__Send_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceApi__Send_d__25(BacktraceApi__Send_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceApi__Send_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceApi__Send_d__25(BacktraceApi__Send_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27568};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Backtrace::Unity::Services::BacktraceApi*  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceData*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25, ___callback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceApi__Send_d__25) == 0x38, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
