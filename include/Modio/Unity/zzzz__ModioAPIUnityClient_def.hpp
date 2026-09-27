#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIUnityClient)
namespace GlobalNamespace {
struct ModioAPIUnityClient__DownloadFile_d__13;
}
namespace GlobalNamespace {
template<typename T>
struct ModioAPIUnityClient__GetJson_d__19_1;
}
namespace GlobalNamespace {
struct ModioAPIUnityClient__SendRequest_d__29;
}
namespace GlobalNamespace {
struct __c__DisplayClass14_0_ModioAPIUnityClient___CheckFakeErrorsForTest_g__FakeConnectionError_0_d;
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
namespace Modio::Unity {
class ModioAPIUnityClient___c;
}
namespace Modio::Unity {
template<typename T>
class ModioAPIUnityClient___c__21_1;
}
namespace Modio::Unity {
class ModioAPIUnityClient___c__DisplayClass14_0;
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
class Stream;
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
namespace UnityEngine::Networking {
class DownloadHandler;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
class UploadHandler;
}
// Forward declare root types
namespace Modio::Unity {
class ModioAPIUnityClient;
}
namespace Modio::Unity {
class ModioAPIUnityClient___c;
}
namespace Modio::Unity {
template<typename T>
class ModioAPIUnityClient___c__21_1;
}
namespace Modio::Unity {
class ModioAPIUnityClient___c__DisplayClass14_0;
}
// Write type traits
MARK_REF_T(::Modio::Unity::ModioAPIUnityClient*);
MARK_REF_T(::Modio::Unity::ModioAPIUnityClient___c*);
MARK_GEN_REF_T_PTR(::Modio::Unity::ModioAPIUnityClient___c__21_1);
MARK_REF_T(::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioAPIUnityClient*, "Modio.Unity", "ModioAPIUnityClient");
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioAPIUnityClient___c*, "Modio.Unity", "ModioAPIUnityClient/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Modio::Unity::ModioAPIUnityClient___c__21_1, "Modio.Unity", "ModioAPIUnityClient/<>c__21`1");
DEFINE_IL2CPP_CLASS(::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*, "Modio.Unity", "ModioAPIUnityClient/<>c__DisplayClass14_0");
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioAPIUnityClient
class CORDL_TYPE ModioAPIUnityClient : public ::System::Object {
public:
// Declarations
using _DownloadFile_d__13 = ::GlobalNamespace::ModioAPIUnityClient__DownloadFile_d__13;

template<typename T>
using _GetJson_d__19_1 = ::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>;

using _SendRequest_d__29 = ::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29;

using __c = ::Modio::Unity::ModioAPIUnityClient___c;

template<typename T>
using __c__21_1 = ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>;

using __c__DisplayClass14_0 = ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0;

/// @brief Field _basePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__basePath, put=__cordl_internal_set__basePath)) ::StringW  _basePath;

/// @brief Field _cancellationTokenSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _defaultHeaders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultHeaders, put=__cordl_internal_set__defaultHeaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _defaultHeaders;

/// @brief Field _defaultParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultParameters, put=__cordl_internal_set__defaultParameters)) ::System::Collections::Generic::List_1<::StringW>*  _defaultParameters;

/// @brief Field _pathParameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pathParameters, put=__cordl_internal_set__pathParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _pathParameters;

/// @brief Field _webRequests, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__webRequests, put=__cordl_internal_set__webRequests)) ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*  _webRequests;

/// @brief Convert operator to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr operator  ::Modio::API::Interfaces::IModioAPIInterface*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AddDefaultParameter, addr 0x9f8fefc, size 0xac, virtual true, abstract: false, final true
inline void AddDefaultParameter(::StringW  value) ;

/// @brief Method AddDefaultPathParameter, addr 0x9f8fe3c, size 0x68, virtual true, abstract: false, final true
inline void AddDefaultPathParameter(::StringW  key, ::StringW  value) ;

/// @brief Method BuildPath, addr 0x9f923d4, size 0x214, virtual false, abstract: false, final false
inline ::StringW BuildPath(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method CheckFakeErrorsForTest, addr 0x9f902d8, size 0x194, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* CheckFakeErrorsForTest(::StringW  url) ;

/// @brief Method CreateFormUrlEncodedContent, addr 0x9f91590, size 0x244, virtual false, abstract: false, final false
inline ::StringW CreateFormUrlEncodedContent(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  formParameters) ;

/// @brief Method CreateMultipartFormDataUploadHandler, addr 0x9f917d4, size 0xb24, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UploadHandler* CreateMultipartFormDataUploadHandler(::Modio::API::ModioAPIRequestOptions*  options) ;

/// @brief Method CreateWebRequest, addr 0x9f9063c, size 0x454, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::Modio::API::ModioAPIRequest*  request, ::StringW  target, ::UnityEngine::Networking::DownloadHandler*  downloadHandler) ;

/// @brief Method Dispose, addr 0x9f92724, size 0x128, virtual true, abstract: false, final true
inline void Dispose() ;

/// [AsyncStateMachine(typeof(Modio.Unity.ModioAPIUnityClient::<DownloadFile>d__13))]
/// @brief Method DownloadFile, addr 0x9f90198, size 0x140, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token) ;

/// @brief Method EnforceAuthentication, addr 0x9f90cfc, size 0x174, virtual false, abstract: false, final false
static inline ::Modio::Error* EnforceAuthentication(::Modio::API::ModioAPIRequest*  downloadRequest, ::UnityEngine::Networking::UnityWebRequest*  webRequest) ;

/// @brief Method GetErrorAndLogBadResponse, addr 0x9f90e70, size 0x618, virtual false, abstract: false, final false
static inline ::Modio::Error* GetErrorAndLogBadResponse(::StringW  jsonResponse) ;

/// @brief Method GetJson, addr 0x9f91488, size 0x108, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* GetJson(::Modio::API::ModioAPIRequest*  request) ;

/// [AsyncStateMachine(typeof(Modio.Unity.ModioAPIUnityClient::<GetJson>d__19`1<T>))]
/// @brief Method GetJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* GetJson(::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader) ;

/// @brief Method IsResponseConnectionFailure, addr 0x9f92ed8, size 0x24, virtual false, abstract: false, final false
static inline bool IsResponseConnectionFailure(int64_t  responseCode) ;

/// @brief Method LogRequest, addr 0x9f9284c, size 0x68c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LogRequest(::UnityEngine::Networking::UnityWebRequest*  request, ::Modio::API::ModioAPIRequest*  modioRequest) ;

/// @brief Method MapMethod, addr 0x9f90a90, size 0xa8, virtual false, abstract: false, final false
inline ::StringW MapMethod(::Modio::API::ModioAPIRequestMethod  method) ;

/// @brief Method MapUploadHandler, addr 0x9f90b38, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UploadHandler* MapUploadHandler(::Modio::API::ModioAPIRequest*  request) ;

static inline ::Modio::Unity::ModioAPIUnityClient* New_ctor() ;

/// @brief Method PrepareByteArray, addr 0x9f922f8, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::Networking::UploadHandler* PrepareByteArray(::Modio::API::ModioAPIRequestOptions*  options) ;

/// @brief Method RemoveDefaultHeader, addr 0x9f905e4, size 0x58, virtual true, abstract: false, final true
inline void RemoveDefaultHeader(::StringW  name) ;

/// @brief Method RemoveDefaultParameter, addr 0x9f8ffa8, size 0x58, virtual true, abstract: false, final true
inline void RemoveDefaultParameter(::StringW  value) ;

/// @brief Method RemoveDefaultPathParameter, addr 0x9f8fea4, size 0x58, virtual true, abstract: false, final true
inline void RemoveDefaultPathParameter(::StringW  key) ;

/// @brief Method ResetConfiguration, addr 0x9f90000, size 0x184, virtual true, abstract: false, final true
inline void ResetConfiguration() ;

/// [AsyncStateMachine(typeof(Modio.Unity.ModioAPIUnityClient::<SendRequest>d__29))]
/// @brief Method SendRequest, addr 0x9f925e8, size 0x13c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SendRequest(::UnityEngine::Networking::UnityWebRequest*  webRequest, ::System::Threading::CancellationToken  shutdownToken, ::System::Threading::CancellationToken  token) ;

/// @brief Method SetBasePath, addr 0x9f8fe34, size 0x8, virtual true, abstract: false, final true
inline void SetBasePath(::StringW  value) ;

/// @brief Method SetDefaultHeader, addr 0x9f9057c, size 0x68, virtual true, abstract: false, final true
inline void SetDefaultHeader(::StringW  name, ::StringW  value) ;

/// @brief Method Shutdown, addr 0x9f90184, size 0x14, virtual false, abstract: false, final false
inline void Shutdown() ;

constexpr ::StringW const& __cordl_internal_get__basePath() const;

constexpr ::StringW& __cordl_internal_get__basePath() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__defaultHeaders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__defaultHeaders() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__defaultParameters() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__defaultParameters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__pathParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__pathParameters() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>* const& __cordl_internal_get__webRequests() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*& __cordl_internal_get__webRequests() ;

constexpr void __cordl_internal_set__basePath(::StringW  value) ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__defaultHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__defaultParameters(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__pathParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__webRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

/// @brief Method .ctor, addr 0x9f9314c, size 0x174, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UseUnityClient, addr 0x9f92efc, size 0xb4, virtual false, abstract: false, final false
static inline bool get_UseUnityClient() ;

/// @brief Convert to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr ::Modio::API::Interfaces::IModioAPIInterface* i___Modio__API__Interfaces__IModioAPIInterface() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_UseUnityClient, addr 0x9f92fb0, size 0x19c, virtual false, abstract: false, final false
static inline void set_UseUnityClient(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIUnityClient(ModioAPIUnityClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIUnityClient(ModioAPIUnityClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32061};

/// @brief Field _basePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____basePath;

/// @brief Field _defaultParameters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____defaultParameters;

/// @brief Field _pathParameters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____pathParameters;

/// @brief Field _defaultHeaders, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____defaultHeaders;

/// @brief Field _webRequests, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*  ____webRequests;

/// @brief Field _cancellationTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____basePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____defaultParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____pathParameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____defaultHeaders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____webRequests) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient, ____cancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ModioAPIUnityClient) == 0x40, "Size mismatch!");

} // namespace end def Modio::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioAPIUnityClient/<>c__DisplayClass14_0
class CORDL_TYPE ModioAPIUnityClient___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
using __CheckFakeErrorsForTest_g__FakeConnectionError_0_d = ::GlobalNamespace::__c__DisplayClass14_0_ModioAPIUnityClient___CheckFakeErrorsForTest_g__FakeConnectionError_0_d;

/// @brief Field testSettings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_testSettings, put=__cordl_internal_set_testSettings)) ::Modio::API::ModioAPITestSettings*  testSettings;

static inline ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.Unity.ModioAPIUnityClient::<>c__DisplayClass14_0::<<CheckFakeErrorsForTest>g__FakeConnectionError|0>d))]
/// @brief Method <CheckFakeErrorsForTest>g__FakeConnectionError|0, addr 0x9f90474, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* _CheckFakeErrorsForTest_g__FakeConnectionError_0() ;

constexpr ::Modio::API::ModioAPITestSettings* const& __cordl_internal_get_testSettings() const;

constexpr ::Modio::API::ModioAPITestSettings*& __cordl_internal_get_testSettings() ;

constexpr void __cordl_internal_set_testSettings(::Modio::API::ModioAPITestSettings*  value) ;

/// @brief Method .ctor, addr 0x9f9046c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c__DisplayClass14_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIUnityClient___c__DisplayClass14_0(ModioAPIUnityClient___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c__DisplayClass14_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIUnityClient___c__DisplayClass14_0(ModioAPIUnityClient___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32057};

/// @brief Field testSettings, offset: 0x10, size: 0x8, def value: None
 ::Modio::API::ModioAPITestSettings*  ___testSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0, ___testSettings) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Modio.Unity.ModioAPIUnityClient/<>c__21`1<T>
class CORDL_TYPE ModioAPIUnityClient___c__21_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  __9__21_0;

static inline ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>* New_ctor() ;

/// @brief Method <GetJson>b__21_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>* _GetJson_b__21_0(::Newtonsoft::Json::JsonTextReader*  reader) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>* getStaticF___9__21_0() ;

static inline void setStaticF___9(::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*  value) ;

static inline void setStaticF___9__21_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient___c__21_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c__21_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIUnityClient___c__21_1(ModioAPIUnityClient___c__21_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c__21_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIUnityClient___c__21_1(ModioAPIUnityClient___c__21_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity {
// Is value type: false
// CS Name: Modio.Unity.ModioAPIUnityClient/<>c
class CORDL_TYPE ModioAPIUnityClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::ModioAPIUnityClient___c*  __9;

/// @brief Field <>9__22_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__22_0, put=setStaticF___9__22_0)) ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  __9__22_0;

static inline ::Modio::Unity::ModioAPIUnityClient___c* New_ctor() ;

/// @brief Method <GetJson>b__22_0, addr 0x9f93330, size 0x5c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* _GetJson_b__22_0(::Newtonsoft::Json::JsonTextReader*  reader) ;

/// @brief Method .ctor, addr 0x9f93328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::ModioAPIUnityClient___c* getStaticF___9() ;

static inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>* getStaticF___9__22_0() ;

static inline void setStaticF___9(::Modio::Unity::ModioAPIUnityClient___c*  value) ;

static inline void setStaticF___9__22_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAPIUnityClient___c(ModioAPIUnityClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAPIUnityClient___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAPIUnityClient___c(ModioAPIUnityClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::ModioAPIUnityClient___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity
