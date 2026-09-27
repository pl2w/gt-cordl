#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioAPIHttpClient)
namespace GlobalNamespace {
struct ModioAPIHttpClient__DownloadFile_d__15;
}
namespace GlobalNamespace {
struct ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21;
}
namespace GlobalNamespace {
template<typename T>
struct ModioAPIHttpClient__GetJson_d__20_1;
}
namespace GlobalNamespace {
struct ModioAPIHttpClient__LogRequest_d__27;
}
namespace GlobalNamespace {
struct __c__DisplayClass17_0_ModioAPIHttpClient___CheckFakeErrorsForTest_g__FakeConnectionError_0_d;
}
namespace Modio::API::HttpClient {
class ModioAPIHttpClient___c;
}
namespace Modio::API::HttpClient {
template<typename T>
class ModioAPIHttpClient___c__22_1;
}
namespace Modio::API::HttpClient {
class ModioAPIHttpClient___c__DisplayClass17_0;
}
namespace Modio::API::Interfaces {
class IModioAPIInterface;
}
namespace Modio::API {
struct ModioAPIRequestMethod;
}
namespace Modio::API {
class ModioAPIRequestOptions;
}
namespace Modio::API {
class ModioAPIRequest;
}
namespace Modio::API {
class ModioAPITestSettings;
}
namespace Modio {
class Error;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class HttpMethod;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::API::HttpClient {
class ModioAPIHttpClient;
}
namespace Modio::API::HttpClient {
class ModioAPIHttpClient___c;
}
namespace Modio::API::HttpClient {
template<typename T>
class ModioAPIHttpClient___c__22_1;
}
namespace Modio::API::HttpClient {
class ModioAPIHttpClient___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_T(::Modio::API::HttpClient::ModioAPIHttpClient*);
MARK_REF_T(::Modio::API::HttpClient::ModioAPIHttpClient___c*);
MARK_GEN_REF_T_PTR(::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1);
MARK_REF_T(::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*);
DEFINE_IL2CPP_CLASS(::Modio::API::HttpClient::ModioAPIHttpClient*, "Modio.API.HttpClient", "ModioAPIHttpClient");
DEFINE_IL2CPP_CLASS(::Modio::API::HttpClient::ModioAPIHttpClient___c*, "Modio.API.HttpClient", "ModioAPIHttpClient/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1, "Modio.API.HttpClient", "ModioAPIHttpClient/<>c__22`1");
DEFINE_IL2CPP_CLASS(::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*, "Modio.API.HttpClient", "ModioAPIHttpClient/<>c__DisplayClass17_0");
// Dependencies System.Object
namespace Modio::API::HttpClient {
// Is value type: false
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient
class CORDL_TYPE ModioAPIHttpClient : public ::System::Object {
public:
// Declarations
using _DownloadFile_d__15 = ::GlobalNamespace::ModioAPIHttpClient__DownloadFile_d__15;

using _GetErrorAndLogBadResponse_d__21 = ::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21;

template<typename T>
using _GetJson_d__20_1 = ::GlobalNamespace::ModioAPIHttpClient__GetJson_d__20_1<T>;

using _LogRequest_d__27 = ::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27;

using __c = ::Modio::API::HttpClient::ModioAPIHttpClient___c;

template<typename T>
using __c__22_1 = ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>;

using __c__DisplayClass17_0 = ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0;

/// @brief Field _basePath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__basePath, put=__cordl_internal_set__basePath)) ::StringW  _basePath;

/// @brief Field _cancellationTokenSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _client, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__client, put=__cordl_internal_set__client)) ::System::Net::Http::HttpClient*  _client;

/// @brief Field _defaultParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultParameters, put=__cordl_internal_set__defaultParameters)) ::System::Collections::Generic::List_1<::StringW>*  _defaultParameters;

/// @brief Field _pathParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pathParameters, put=__cordl_internal_set__pathParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _pathParameters;

/// @brief Convert operator to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr operator  ::Modio::API::Interfaces::IModioAPIInterface*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddDefaultParameter, addr 0x9fdf000, size 0xac, virtual true, abstract: false, final true
inline void AddDefaultParameter(::StringW  value) ;

/// @brief Method AddDefaultPathParameter, addr 0x9fdeec8, size 0x68, virtual true, abstract: false, final true
inline void AddDefaultPathParameter(::StringW  key, ::StringW  value) ;

/// @brief Method BuildPath, addr 0x9fe0370, size 0x238, virtual false, abstract: false, final false
inline ::StringW BuildPath(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method CancelledOrShutDownError, addr 0x9fdee20, size 0xa0, virtual false, abstract: false, final false
inline ::Modio::Error* CancelledOrShutDownError(::System::Threading::CancellationToken  shutdownCancellationToken) ;

/// @brief Method CheckFakeErrorsForTest, addr 0x9fdf5a0, size 0x18c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* CheckFakeErrorsForTest(::StringW  url) ;

/// @brief Method Dispose, addr 0x9fe06a0, size 0x18, virtual true, abstract: false, final true
inline void Dispose() ;

/// [AsyncStateMachine(typeof(Modio.API.HttpClient.ModioAPIHttpClient::<DownloadFile>d__15))]
/// @brief Method DownloadFile, addr 0x9fdf2ac, size 0x140, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token) ;

/// @brief Method EnforceAuthentication, addr 0x9fdf3ec, size 0x1b4, virtual false, abstract: false, final false
static inline ::Modio::Error* EnforceAuthentication(::Modio::API::ModioAPIRequest*  downloadRequest, ::System::Net::Http::HttpRequestMessage*  httpRequest) ;

/// [AsyncStateMachine(typeof(Modio.API.HttpClient.ModioAPIHttpClient::<GetErrorAndLogBadResponse>d__21))]
/// @brief Method GetErrorAndLogBadResponse, addr 0x9fe0160, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* GetErrorAndLogBadResponse(::System::IO::StreamReader*  streamReader) ;

/// @brief Method GetJson, addr 0x9fe0268, size 0x108, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// [AsyncStateMachine(typeof(Modio.API.HttpClient.ModioAPIHttpClient::<GetJson>d__20`1<T>))]
/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* GetJson(::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader) ;

/// [AsyncStateMachine(typeof(Modio.API.HttpClient.ModioAPIHttpClient::<LogRequest>d__27))]
/// @brief Method LogRequest, addr 0x9fe05a8, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LogRequest(::System::Net::Http::HttpRequestMessage*  request) ;

/// @brief Method MapContent, addr 0x9fdf83c, size 0x244, virtual false, abstract: false, final false
inline ::System::Net::Http::HttpContent* MapContent(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method MapMethod, addr 0x9fdff74, size 0x1ec, virtual false, abstract: false, final false
inline ::System::Net::Http::HttpMethod* MapMethod(::Modio::API::ModioAPIRequestMethod  method) ;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient* New_ctor() ;

/// @brief Method PrepareByteArray, addr 0x9fdfea0, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Net::Http::HttpContent* PrepareByteArray(::Modio::API::ModioAPIRequestOptions*  options) ;

/// @brief Method PrepareMultipartFormDataContent, addr 0x9fdfa80, size 0x420, virtual false, abstract: false, final false
static inline ::System::Net::Http::HttpContent* PrepareMultipartFormDataContent(::Modio::API::ModioAPIRequestOptions*  options) ;

/// @brief Method RemoveDefaultHeader, addr 0x9fdefd0, size 0x30, virtual true, abstract: false, final true
inline void RemoveDefaultHeader(::StringW  name) ;

/// @brief Method RemoveDefaultParameter, addr 0x9fdf0ac, size 0x58, virtual true, abstract: false, final true
inline void RemoveDefaultParameter(::StringW  value) ;

/// @brief Method RemoveDefaultPathParameter, addr 0x9fdef30, size 0x58, virtual true, abstract: false, final true
inline void RemoveDefaultPathParameter(::StringW  key) ;

/// @brief Method ResetConfiguration, addr 0x9fdf104, size 0x194, virtual true, abstract: false, final true
inline void ResetConfiguration() ;

/// @brief Method SetBasePath, addr 0x9fdeec0, size 0x8, virtual true, abstract: false, final true
inline void SetBasePath(::StringW  value) ;

/// @brief Method SetDefaultHeader, addr 0x9fdef88, size 0x48, virtual true, abstract: false, final true
inline void SetDefaultHeader(::StringW  name, ::StringW  value) ;

/// @brief Method Shutdown, addr 0x9fdf298, size 0x14, virtual false, abstract: false, final false
inline void Shutdown() ;

constexpr ::StringW const& __cordl_internal_get__basePath() const;

constexpr ::StringW& __cordl_internal_get__basePath() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::System::Net::Http::HttpClient* const& __cordl_internal_get__client() const;

constexpr ::System::Net::Http::HttpClient*& __cordl_internal_get__client() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__defaultParameters() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__defaultParameters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__pathParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__pathParameters() ;

constexpr void __cordl_internal_set__basePath(::StringW  value) ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__client(::System::Net::Http::HttpClient*  value) ;

constexpr void __cordl_internal_set__defaultParameters(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__pathParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9fe06b8, size 0x134, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr ::Modio::API::Interfaces::IModioAPIInterface* i___Modio__API__Interfaces__IModioAPIInterface() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIHttpClient(ModioAPIHttpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIHttpClient(ModioAPIHttpClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18042};

/// @brief Field _client, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Http::HttpClient*  ____client;

/// @brief Field _defaultParameters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____defaultParameters;

/// @brief Field _pathParameters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____pathParameters;

/// @brief Field _basePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____basePath;

/// @brief Field _cancellationTokenSource, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient, ____client) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient, ____defaultParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient, ____pathParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient, ____basePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient, ____cancellationTokenSource) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::API::HttpClient::ModioAPIHttpClient) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::HttpClient
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::API::HttpClient {
// Is value type: false
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<>c__DisplayClass17_0
class CORDL_TYPE ModioAPIHttpClient___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
using __CheckFakeErrorsForTest_g__FakeConnectionError_0_d = ::GlobalNamespace::__c__DisplayClass17_0_ModioAPIHttpClient___CheckFakeErrorsForTest_g__FakeConnectionError_0_d;

/// @brief Field testSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_testSettings, put=__cordl_internal_set_testSettings)) ::Modio::API::ModioAPITestSettings*  testSettings;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.API.HttpClient.ModioAPIHttpClient::<>c__DisplayClass17_0::<<CheckFakeErrorsForTest>g__FakeConnectionError|0>d))]
/// @brief Method <CheckFakeErrorsForTest>g__FakeConnectionError|0, addr 0x9fdf734, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* _CheckFakeErrorsForTest_g__FakeConnectionError_0() ;

constexpr ::Modio::API::ModioAPITestSettings* const& __cordl_internal_get_testSettings() const;

constexpr ::Modio::API::ModioAPITestSettings*& __cordl_internal_get_testSettings() ;

constexpr void __cordl_internal_set_testSettings(::Modio::API::ModioAPITestSettings*  value) ;

/// @brief Method .ctor, addr 0x9fdf72c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c__DisplayClass17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIHttpClient___c__DisplayClass17_0(ModioAPIHttpClient___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c__DisplayClass17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIHttpClient___c__DisplayClass17_0(ModioAPIHttpClient___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18037};

/// @brief Field testSettings, offset: 0x10, size: 0x8, def value: None
 ::Modio::API::ModioAPITestSettings*  ___testSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0, ___testSettings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::HttpClient
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::API::HttpClient {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<>c__22`1<T>
class CORDL_TYPE ModioAPIHttpClient___c__22_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  __9__22_0;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>* New_ctor() ;

/// @brief Method <GetJson>b__22_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>* _GetJson_b__22_0(::Newtonsoft::Json::JsonTextReader*  reader) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient___c__22_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c__22_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIHttpClient___c__22_1(ModioAPIHttpClient___c__22_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c__22_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIHttpClient___c__22_1(ModioAPIHttpClient___c__22_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18035};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::API::HttpClient
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::API::HttpClient {
// Is value type: false
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<>c
class CORDL_TYPE ModioAPIHttpClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::API::HttpClient::ModioAPIHttpClient___c*  __9;

/// @brief Field <>9__23_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__23_0, put=setStaticF___9__23_0)) ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  __9__23_0;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient___c* New_ctor() ;

/// @brief Method <GetJson>b__23_0, addr 0x9fe085c, size 0x5c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* _GetJson_b__23_0(::Newtonsoft::Json::JsonTextReader*  reader) ;

/// @brief Method .ctor, addr 0x9fe0854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::API::HttpClient::ModioAPIHttpClient___c* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__23_0() ;

static inline void setStaticF___9(::Modio::API::HttpClient::ModioAPIHttpClient___c*  value) ;

static inline void setStaticF___9__23_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIHttpClient___c(ModioAPIHttpClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIHttpClient___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIHttpClient___c(ModioAPIHttpClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::API::HttpClient::ModioAPIHttpClient___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::HttpClient
