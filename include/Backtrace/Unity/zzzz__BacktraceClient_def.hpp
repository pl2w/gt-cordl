#pragma once
// IWYU pragma private; include "Backtrace/Unity/BacktraceClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceClient)
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceClient;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabase;
}
namespace Backtrace::Unity::Interfaces {
class IBacktraceMetrics;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class BacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceBreadcrumbs;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model::JsonData {
class AttributeProvider;
}
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceLogManager;
}
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace Backtrace::Unity::Runtime::Native {
class INativeClient;
}
namespace Backtrace::Unity::Services {
class BacktraceMetrics;
}
namespace Backtrace::Unity::Services {
class ReportLimitWatcher;
}
namespace Backtrace::Unity::Types {
struct ReportFilterType;
}
namespace Backtrace::Unity {
class BacktraceClient__CollectDataAndSend_d__89;
}
namespace Backtrace::Unity {
class BacktraceClient___c;
}
namespace Backtrace::Unity {
class BacktraceClient___c__DisplayClass89_0;
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
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Backtrace::Unity {
class BacktraceClient;
}
namespace Backtrace::Unity {
class BacktraceClient__CollectDataAndSend_d__89;
}
namespace Backtrace::Unity {
class BacktraceClient___c;
}
namespace Backtrace::Unity {
class BacktraceClient___c__DisplayClass89_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::BacktraceClient*);
MARK_REF_T(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*);
MARK_REF_T(::Backtrace::Unity::BacktraceClient___c*);
MARK_REF_T(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceClient*, "Backtrace.Unity", "BacktraceClient");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*, "Backtrace.Unity", "BacktraceClient/<CollectDataAndSend>d__89");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceClient___c*, "Backtrace.Unity", "BacktraceClient/<>c");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*, "Backtrace.Unity", "BacktraceClient/<>c__DisplayClass89_0");
// [DefaultMember("Item")]
// Dependencies UnityEngine.MonoBehaviour
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceClient
class CORDL_TYPE BacktraceClient : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CollectDataAndSend_d__89 = ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89;

using __c = ::Backtrace::Unity::BacktraceClient___c;

using __c__DisplayClass89_0 = ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0;

 __declspec(property(get=get_AttributeProvider, put=set_AttributeProvider)) ::Backtrace::Unity::Model::JsonData::AttributeProvider*  AttributeProvider;

/// @brief Field BackgroundExceptions, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_BackgroundExceptions, put=__cordl_internal_set_BackgroundExceptions)) ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*  BackgroundExceptions;

 __declspec(property(get=get_BacktraceApi, put=set_BacktraceApi)) ::Backtrace::Unity::Interfaces::IBacktraceApi*  BacktraceApi;

/// @brief Field BeforeSend, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_BeforeSend, put=__cordl_internal_set_BeforeSend)) ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*  BeforeSend;

 __declspec(property(get=get_Breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*  Breadcrumbs;

/// @brief Field Configuration, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Configuration, put=__cordl_internal_set_Configuration)) ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  Configuration;

/// @brief Field Database, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Database, put=__cordl_internal_set_Database)) ::Backtrace::Unity::Interfaces::IBacktraceDatabase*  Database;

 __declspec(property(get=get_EnablePerformanceStatistics)) bool  EnablePerformanceStatistics;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_GameObjectDepth)) int32_t  GameObjectDepth;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

 __declspec(property(get=get_Metrics)) ::Backtrace::Unity::Interfaces::IBacktraceMetrics*  Metrics;

 __declspec(property(get=get_NativeClient)) ::Backtrace::Unity::Runtime::Native::INativeClient*  NativeClient;

 __declspec(property(get=get_OnClientReportLimitReached, put=set_OnClientReportLimitReached)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  OnClientReportLimitReached;

 __declspec(property(get=get_OnServerError, put=set_OnServerError)) ::System::Action_1<::System::Exception*>*  OnServerError;

 __declspec(property(get=get_OnServerResponse, put=set_OnServerResponse)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  OnServerResponse;

/// @brief Field OnUnhandledApplicationException, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUnhandledApplicationException, put=__cordl_internal_set_OnUnhandledApplicationException)) ::System::Action_1<::System::Exception*>*  OnUnhandledApplicationException;

 __declspec(property(get=get_Random)) ::System::Random*  Random;

 __declspec(property(get=get_ReportLimitWatcher, put=set_ReportLimitWatcher)) ::Backtrace::Unity::Services::ReportLimitWatcher*  ReportLimitWatcher;

 __declspec(property(get=get_RequestHandler, put=set_RequestHandler)) ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  RequestHandler;

/// @brief Field SkipReport, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_SkipReport, put=__cordl_internal_set_SkipReport)) ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*  SkipReport;

/// @brief Field <Enabled>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled_k__BackingField, put=__cordl_internal_set__Enabled_k__BackingField)) bool  _Enabled_k__BackingField;

/// @brief Field _attributeProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributeProvider, put=__cordl_internal_set__attributeProvider)) ::Backtrace::Unity::Model::JsonData::AttributeProvider*  _attributeProvider;

/// @brief Field _backtraceApi, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__backtraceApi, put=__cordl_internal_set__backtraceApi)) ::Backtrace::Unity::Interfaces::IBacktraceApi*  _backtraceApi;

/// @brief Field _backtraceLogManager, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__backtraceLogManager, put=__cordl_internal_set__backtraceLogManager)) ::Backtrace::Unity::Model::BacktraceLogManager*  _backtraceLogManager;

/// @brief Field _breadcrumbs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__breadcrumbs, put=__cordl_internal_set__breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  _breadcrumbs;

/// @brief Field _clientReportAttachments, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientReportAttachments, put=__cordl_internal_set__clientReportAttachments)) ::System::Collections::Generic::HashSet_1<::StringW>*  _clientReportAttachments;

/// @brief Field _current, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) ::System::Threading::Thread*  _current;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Backtrace::Unity::BacktraceClient>  _instance;

/// @brief Field _metrics, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__metrics, put=__cordl_internal_set__metrics)) ::Backtrace::Unity::Services::BacktraceMetrics*  _metrics;

/// @brief Field _nativeClient, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeClient, put=__cordl_internal_set__nativeClient)) ::Backtrace::Unity::Runtime::Native::INativeClient*  _nativeClient;

/// @brief Field _onClientReportLimitReached, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__onClientReportLimitReached, put=__cordl_internal_set__onClientReportLimitReached)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  _onClientReportLimitReached;

/// @brief Field _random, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__random, put=__cordl_internal_set__random)) ::System::Random*  _random;

/// @brief Field _reportLimitWatcher, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportLimitWatcher, put=__cordl_internal_set__reportLimitWatcher)) ::Backtrace::Unity::Services::ReportLimitWatcher*  _reportLimitWatcher;

/// @brief Field _useProguard, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__useProguard, put=__cordl_internal_set__useProguard)) bool  _useProguard;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceClient"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceClient*() noexcept;

/// @brief Method AddAttachment, addr 0x5efcb70, size 0x58, virtual false, abstract: false, final false
inline void AddAttachment(::StringW  pathToAttachment) ;

/// @brief Method Awake, addr 0x5efee5c, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CaptureUnityMessages, addr 0x5efe050, size 0x1a8, virtual false, abstract: false, final false
inline void CaptureUnityMessages() ;

/// [IteratorStateMachine(typeof(Backtrace.Unity.BacktraceClient::<CollectDataAndSend>d__89))]
/// @brief Method CollectDataAndSend, addr 0x5f00138, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CollectDataAndSend(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback) ;

/// @brief Method EnableBreadcrumbsSupport, addr 0x5efea00, size 0xb0, virtual true, abstract: false, final true
inline bool EnableBreadcrumbsSupport() ;

/// @brief Method EnableMetrics, addr 0x5efeab0, size 0x8, virtual true, abstract: false, final true
inline bool EnableMetrics() ;

/// @brief Method EnableMetrics, addr 0x5efe5f4, size 0xb8, virtual false, abstract: false, final false
inline bool EnableMetrics(bool  enableIfConfigurationIsDisabled) ;

/// @brief Method EnableMetrics, addr 0x5efeab8, size 0x108, virtual false, abstract: false, final false
inline bool EnableMetrics(::StringW  uniqueAttributeName) ;

/// @brief Method EnableMetrics, addr 0x5efebc0, size 0x138, virtual true, abstract: false, final true
inline bool EnableMetrics(::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl, uint32_t  timeIntervalInSec, ::StringW  uniqueAttributeName) ;

/// @brief Method GetAttachments, addr 0x5efcbc8, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetAttachments() ;

/// @brief Method GetAttributesCount, addr 0x5efcd18, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetAttributesCount() ;

/// @brief Method GetNativeAttachments, addr 0x5efe6ac, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::StringW>* GetNativeAttachments() ;

/// @brief Method HandleInnerException, addr 0x5f01bb4, size 0x58, virtual false, abstract: false, final false
inline void HandleInnerException(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method HandleLowMemory, addr 0x5f0161c, size 0x114, virtual false, abstract: false, final false
inline void HandleLowMemory() ;

/// @brief Method HandleUnhandledExceptionsFromAndroidBackgroundThread, addr 0x5f00da0, size 0x2bc, virtual false, abstract: false, final false
inline void HandleUnhandledExceptionsFromAndroidBackgroundThread(::StringW  backgroundExceptionMessage) ;

/// @brief Method HandleUnityBackgroundException, addr 0x5f013d0, size 0x60, virtual false, abstract: false, final false
inline void HandleUnityBackgroundException(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method HandleUnityMessage, addr 0x5f01430, size 0x1ec, virtual false, abstract: false, final false
inline void HandleUnityMessage(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method Initialize, addr 0x5efd48c, size 0x35c, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> Initialize(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName) ;

/// @brief Method Initialize, addr 0x5efdfa4, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> Initialize(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::ArrayW<::StringW>  attachments, ::StringW  gameObjectName) ;

/// @brief Method Initialize, addr 0x5efdf38, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> Initialize(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName) ;

/// @brief Method Initialize, addr 0x5efde80, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> Initialize(::StringW  url, ::StringW  databasePath, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::ArrayW<::StringW>  attachments, ::StringW  gameObjectName) ;

/// @brief Method Initialize, addr 0x5efde74, size 0xc, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> Initialize(::StringW  url, ::StringW  databasePath, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName) ;

/// @brief Method LateUpdate, addr 0x5efeebc, size 0x134, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Backtrace::Unity::BacktraceClient* New_ctor() ;

/// @brief Method OnAnrDetected, addr 0x5f008d0, size 0x260, virtual false, abstract: false, final false
inline void OnAnrDetected(::StringW  stackTrace) ;

/// @brief Method OnApplicationPause, addr 0x5f011f8, size 0x1d8, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnApplicationQuit, addr 0x5efedb0, size 0xac, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x5eff360, size 0x23c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5efe040, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Refresh, addr 0x5efd7e8, size 0x68c, virtual true, abstract: false, final true
inline void Refresh() ;

/// @brief Method SamplingShouldSkip, addr 0x5f01934, size 0xb4, virtual false, abstract: false, final false
inline bool SamplingShouldSkip() ;

/// @brief Method Send, addr 0x5effa20, size 0xd0, virtual true, abstract: false, final true
inline void Send(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Send, addr 0x5eff694, size 0xcc, virtual true, abstract: false, final true
inline void Send(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Send, addr 0x5efff20, size 0x68, virtual true, abstract: false, final true
inline void Send(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback) ;

/// @brief Method SendReport, addr 0x5eff298, size 0xc8, virtual false, abstract: false, final false
inline void SendReport(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback) ;

/// @brief Method SendUnhandledExceptionReport, addr 0x5f00d20, size 0x80, virtual false, abstract: false, final false
inline void SendUnhandledExceptionReport(::Backtrace::Unity::Model::BacktraceReport*  report, bool  invokeSkipApi) ;

/// @brief Method SetAttributes, addr 0x5efcbd0, size 0x148, virtual false, abstract: false, final false
inline void SetAttributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method SetClientReportLimit, addr 0x5eff59c, size 0x94, virtual true, abstract: false, final true
inline void SetClientReportLimit(uint32_t  reportPerMin) ;

/// @brief Method SetupBacktraceData, addr 0x5f001fc, size 0x128, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceData* SetupBacktraceData(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method ShouldSendReport, addr 0x5effaf0, size 0x2b0, virtual false, abstract: false, final false
inline bool ShouldSendReport(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, bool  invokeSkipApi) ;

/// @brief Method ShouldSendReport, addr 0x5eff760, size 0x218, virtual false, abstract: false, final false
inline bool ShouldSendReport(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method ShouldSendReport, addr 0x5efff88, size 0x1b0, virtual false, abstract: false, final false
inline bool ShouldSendReport(::Backtrace::Unity::Model::BacktraceReport*  report) ;

/// @brief Method ShouldSkipReport, addr 0x5f019e8, size 0x4c, virtual false, abstract: false, final false
inline bool ShouldSkipReport(::Backtrace::Unity::Types::ReportFilterType  type, ::System::Exception*  exception, ::StringW  message) ;

/// @brief Method StartupMetrics, addr 0x5efecf8, size 0x48, virtual false, abstract: false, final false
inline void StartupMetrics() ;

/// @brief Method UseProguard, addr 0x5efc258, size 0x68, virtual false, abstract: false, final false
inline void UseProguard(::StringW  symbolicationId) ;

/// @brief Method ValidClientConfiguration, addr 0x5efcef0, size 0x8c, virtual false, abstract: false, final false
inline bool ValidClientConfiguration() ;

constexpr ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>* const& __cordl_internal_get_BackgroundExceptions() const;

constexpr ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*& __cordl_internal_get_BackgroundExceptions() ;

constexpr ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>* const& __cordl_internal_get_BeforeSend() const;

constexpr ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*& __cordl_internal_get_BeforeSend() ;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& __cordl_internal_get_Configuration() const;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& __cordl_internal_get_Configuration() ;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase* const& __cordl_internal_get_Database() const;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase*& __cordl_internal_get_Database() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_OnUnhandledApplicationException() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_OnUnhandledApplicationException() ;

constexpr ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>* const& __cordl_internal_get_SkipReport() const;

constexpr ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*& __cordl_internal_get_SkipReport() ;

constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Enabled_k__BackingField() ;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& __cordl_internal_get__attributeProvider() const;

constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& __cordl_internal_get__attributeProvider() ;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* const& __cordl_internal_get__backtraceApi() const;

constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi*& __cordl_internal_get__backtraceApi() ;

constexpr ::Backtrace::Unity::Model::BacktraceLogManager* const& __cordl_internal_get__backtraceLogManager() const;

constexpr ::Backtrace::Unity::Model::BacktraceLogManager*& __cordl_internal_get__backtraceLogManager() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& __cordl_internal_get__breadcrumbs() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& __cordl_internal_get__breadcrumbs() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__clientReportAttachments() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__clientReportAttachments() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__current() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__current() ;

constexpr ::Backtrace::Unity::Services::BacktraceMetrics* const& __cordl_internal_get__metrics() const;

constexpr ::Backtrace::Unity::Services::BacktraceMetrics*& __cordl_internal_get__metrics() ;

constexpr ::Backtrace::Unity::Runtime::Native::INativeClient* const& __cordl_internal_get__nativeClient() const;

constexpr ::Backtrace::Unity::Runtime::Native::INativeClient*& __cordl_internal_get__nativeClient() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>* const& __cordl_internal_get__onClientReportLimitReached() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*& __cordl_internal_get__onClientReportLimitReached() ;

constexpr ::System::Random* const& __cordl_internal_get__random() const;

constexpr ::System::Random*& __cordl_internal_get__random() ;

constexpr ::Backtrace::Unity::Services::ReportLimitWatcher* const& __cordl_internal_get__reportLimitWatcher() const;

constexpr ::Backtrace::Unity::Services::ReportLimitWatcher*& __cordl_internal_get__reportLimitWatcher() ;

constexpr bool const& __cordl_internal_get__useProguard() const;

constexpr bool& __cordl_internal_get__useProguard() ;

constexpr void __cordl_internal_set_BackgroundExceptions(::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*  value) ;

constexpr void __cordl_internal_set_BeforeSend(::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*  value) ;

constexpr void __cordl_internal_set_Configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value) ;

constexpr void __cordl_internal_set_Database(::Backtrace::Unity::Interfaces::IBacktraceDatabase*  value) ;

constexpr void __cordl_internal_set_OnUnhandledApplicationException(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_SkipReport(::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*  value) ;

constexpr void __cordl_internal_set__Enabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value) ;

constexpr void __cordl_internal_set__backtraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value) ;

constexpr void __cordl_internal_set__backtraceLogManager(::Backtrace::Unity::Model::BacktraceLogManager*  value) ;

constexpr void __cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value) ;

constexpr void __cordl_internal_set__clientReportAttachments(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__current(::System::Threading::Thread*  value) ;

constexpr void __cordl_internal_set__metrics(::Backtrace::Unity::Services::BacktraceMetrics*  value) ;

constexpr void __cordl_internal_set__nativeClient(::Backtrace::Unity::Runtime::Native::INativeClient*  value) ;

constexpr void __cordl_internal_set__onClientReportLimitReached(::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  value) ;

constexpr void __cordl_internal_set__random(::System::Random*  value) ;

constexpr void __cordl_internal_set__reportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value) ;

constexpr void __cordl_internal_set__useProguard(bool  value) ;

/// @brief Method .ctor, addr 0x5f01d14, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Backtrace::Unity::BacktraceClient> getStaticF__instance() ;

/// @brief Method get_AttributeProvider, addr 0x5efc1e0, size 0x70, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* get_AttributeProvider() ;

/// @brief Method get_BacktraceApi, addr 0x5efd2ec, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Interfaces::IBacktraceApi* get_BacktraceApi() ;

/// @brief Method get_Breadcrumbs, addr 0x5efc1c8, size 0x8, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs() ;

/// @brief Method get_EnablePerformanceStatistics, addr 0x5efd2b0, size 0x18, virtual false, abstract: false, final false
inline bool get_EnablePerformanceStatistics() ;

/// [CompilerGenerated]
/// @brief Method get_Enabled, addr 0x5efc1d0, size 0x8, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_GameObjectDepth, addr 0x5efd2c8, size 0x24, virtual false, abstract: false, final false
inline int32_t get_GameObjectDepth() ;

/// @brief Method get_Instance, addr 0x5efcd34, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Backtrace::Unity::BacktraceClient> get_Instance() ;

/// @brief Method get_Item, addr 0x5efca64, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Item(::StringW  index) ;

/// @brief Method get_Metrics, addr 0x5efc2c0, size 0x158, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Interfaces::IBacktraceMetrics* get_Metrics() ;

/// @brief Method get_NativeClient, addr 0x5efd2a8, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Runtime::Native::INativeClient* get_NativeClient() ;

/// @brief Method get_OnClientReportLimitReached, addr 0x5efd2a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>* get_OnClientReportLimitReached() ;

/// @brief Method get_OnServerError, addr 0x5efcd7c, size 0xb0, virtual false, abstract: false, final false
inline ::System::Action_1<::System::Exception*>* get_OnServerError() ;

/// @brief Method get_OnServerResponse, addr 0x5efd0f0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* get_OnServerResponse() ;

/// @brief Method get_Random, addr 0x5efc9f4, size 0x70, virtual false, abstract: false, final false
inline ::System::Random* get_Random() ;

/// @brief Method get_ReportLimitWatcher, addr 0x5efd3bc, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Services::ReportLimitWatcher* get_ReportLimitWatcher() ;

/// @brief Method get_RequestHandler, addr 0x5efcf7c, size 0xb0, virtual false, abstract: false, final false
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* get_RequestHandler() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceClient"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceClient* i___Backtrace__Unity__Interfaces__IBacktraceClient() noexcept;

static inline void setStaticF__instance(::UnityW<::Backtrace::Unity::BacktraceClient>  value) ;

/// @brief Method set_AttributeProvider, addr 0x5efc250, size 0x8, virtual false, abstract: false, final false
inline void set_AttributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value) ;

/// @brief Method set_BacktraceApi, addr 0x5efd2f4, size 0xc8, virtual false, abstract: false, final false
inline void set_BacktraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Enabled, addr 0x5efc1d8, size 0x8, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_Item, addr 0x5efca88, size 0xe8, virtual false, abstract: false, final false
inline void set_Item(::StringW  index, ::StringW  value) ;

/// @brief Method set_OnClientReportLimitReached, addr 0x5efd264, size 0x3c, virtual false, abstract: false, final false
inline void set_OnClientReportLimitReached(::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  value) ;

/// @brief Method set_OnServerError, addr 0x5efce2c, size 0xc4, virtual false, abstract: false, final false
inline void set_OnServerError(::System::Action_1<::System::Exception*>*  value) ;

/// @brief Method set_OnServerResponse, addr 0x5efd1a0, size 0xc4, virtual false, abstract: false, final false
inline void set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

/// @brief Method set_ReportLimitWatcher, addr 0x5efd3c4, size 0xc8, virtual false, abstract: false, final false
inline void set_ReportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value) ;

/// @brief Method set_RequestHandler, addr 0x5efd02c, size 0xc4, virtual false, abstract: false, final false
inline void set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceClient(BacktraceClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceClient(BacktraceClient const& ) = delete;

/// @brief Field DefaultBacktraceGameObjectName offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultBacktraceGameObjectName{u"BacktraceClient"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27556};

/// @brief Field VERSION offset 0xffffffff size 0x8
static constexpr ::ConstString  _cordl_VERSION{u"3.9.1"};

/// @brief Field Configuration, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  ___Configuration;

/// @brief Field _breadcrumbs, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  ____breadcrumbs;

/// [CompilerGenerated]
/// @brief Field <Enabled>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____Enabled_k__BackingField;

/// @brief Field _attributeProvider, offset: 0x38, size: 0x8, def value: None
 ::Backtrace::Unity::Model::JsonData::AttributeProvider*  ____attributeProvider;

/// @brief Field _useProguard, offset: 0x40, size: 0x1, def value: None
 bool  ____useProguard;

/// @brief Field _metrics, offset: 0x48, size: 0x8, def value: None
 ::Backtrace::Unity::Services::BacktraceMetrics*  ____metrics;

/// @brief Field _random, offset: 0x50, size: 0x8, def value: None
 ::System::Random*  ____random;

/// @brief Field BackgroundExceptions, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*  ___BackgroundExceptions;

/// @brief Field _clientReportAttachments, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____clientReportAttachments;

/// @brief Field Database, offset: 0x68, size: 0x8, def value: None
 ::Backtrace::Unity::Interfaces::IBacktraceDatabase*  ___Database;

/// @brief Field _backtraceApi, offset: 0x70, size: 0x8, def value: None
 ::Backtrace::Unity::Interfaces::IBacktraceApi*  ____backtraceApi;

/// @brief Field _reportLimitWatcher, offset: 0x78, size: 0x8, def value: None
 ::Backtrace::Unity::Services::ReportLimitWatcher*  ____reportLimitWatcher;

/// @brief Field _backtraceLogManager, offset: 0x80, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceLogManager*  ____backtraceLogManager;

/// @brief Field _onClientReportLimitReached, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  ____onClientReportLimitReached;

/// @brief Field BeforeSend, offset: 0x90, size: 0x8, def value: None
 ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*  ___BeforeSend;

/// @brief Field SkipReport, offset: 0x98, size: 0x8, def value: None
 ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*  ___SkipReport;

/// @brief Field OnUnhandledApplicationException, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___OnUnhandledApplicationException;

/// @brief Field _nativeClient, offset: 0xa8, size: 0x8, def value: None
 ::Backtrace::Unity::Runtime::Native::INativeClient*  ____nativeClient;

/// @brief Field _current, offset: 0xb0, size: 0x8, def value: None
 ::System::Threading::Thread*  ____current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___Configuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____breadcrumbs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____Enabled_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____attributeProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____useProguard) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____metrics) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____random) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___BackgroundExceptions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____clientReportAttachments) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___Database) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____backtraceApi) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____reportLimitWatcher) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____backtraceLogManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____onClientReportLimitReached) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___BeforeSend) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___SkipReport) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ___OnUnhandledApplicationException) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____nativeClient) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient, ____current) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceClient) == 0xb8, "Size mismatch!");

} // namespace end def Backtrace::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceClient/<CollectDataAndSend>d__89
class CORDL_TYPE BacktraceClient__CollectDataAndSend_d__89 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Backtrace::Unity::BacktraceClient>  __4__this;

/// @brief Field <>8__1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*  __8__1;

/// @brief Field <data>5__4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__data_5__4, put=__cordl_internal_set__data_5__4)) ::Backtrace::Unity::Model::BacktraceData*  _data_5__4;

/// @brief Field <json>5__5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__json_5__5, put=__cordl_internal_set__json_5__5)) ::StringW  _json_5__5;

/// @brief Field <queryAttributes>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__queryAttributes_5__2, put=__cordl_internal_set__queryAttributes_5__2)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _queryAttributes_5__2;

/// @brief Field <stopWatch>5__3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stopWatch_5__3, put=__cordl_internal_set__stopWatch_5__3)) ::System::Diagnostics::Stopwatch*  _stopWatch_5__3;

/// @brief Field report, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_report, put=__cordl_internal_set_report)) ::Backtrace::Unity::Model::BacktraceReport*  report;

/// @brief Field sendCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendCallback, put=__cordl_internal_set_sendCallback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5f01f60, size 0x828, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5f02afc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5f02b04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5f02b3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5f01f5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& __cordl_internal_get___4__this() ;

constexpr ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0* const& __cordl_internal_get___8__1() const;

constexpr ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*& __cordl_internal_get___8__1() ;

constexpr ::Backtrace::Unity::Model::BacktraceData* const& __cordl_internal_get__data_5__4() const;

constexpr ::Backtrace::Unity::Model::BacktraceData*& __cordl_internal_get__data_5__4() ;

constexpr ::StringW const& __cordl_internal_get__json_5__5() const;

constexpr ::StringW& __cordl_internal_get__json_5__5() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__queryAttributes_5__2() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__queryAttributes_5__2() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__stopWatch_5__3() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__stopWatch_5__3() ;

constexpr ::Backtrace::Unity::Model::BacktraceReport* const& __cordl_internal_get_report() const;

constexpr ::Backtrace::Unity::Model::BacktraceReport*& __cordl_internal_get_report() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_sendCallback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_sendCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceClient>  value) ;

constexpr void __cordl_internal_set___8__1(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*  value) ;

constexpr void __cordl_internal_set__data_5__4(::Backtrace::Unity::Model::BacktraceData*  value) ;

constexpr void __cordl_internal_set__json_5__5(::StringW  value) ;

constexpr void __cordl_internal_set__queryAttributes_5__2(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__stopWatch_5__3(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_report(::Backtrace::Unity::Model::BacktraceReport*  value) ;

constexpr void __cordl_internal_set_sendCallback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5f001d4, size 0x28, virtual false, abstract: false, final false
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
constexpr BacktraceClient__CollectDataAndSend_d__89() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient__CollectDataAndSend_d__89", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceClient__CollectDataAndSend_d__89(BacktraceClient__CollectDataAndSend_d__89 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient__CollectDataAndSend_d__89", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceClient__CollectDataAndSend_d__89(BacktraceClient__CollectDataAndSend_d__89 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27555};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::BacktraceClient>  _____4__this;

/// @brief Field report, offset: 0x28, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceReport*  ___report;

/// @brief Field sendCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___sendCallback;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*  _____8__1;

/// @brief Field <queryAttributes>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____queryAttributes_5__2;

/// @brief Field <stopWatch>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____stopWatch_5__3;

/// @brief Field <data>5__4, offset: 0x50, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceData*  ____data_5__4;

/// @brief Field <json>5__5, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____json_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ___report) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ___sendCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, _____8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ____queryAttributes_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ____stopWatch_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ____data_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89, ____json_5__5) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89) == 0x60, "Size mismatch!");

} // namespace end def Backtrace::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceClient/<>c__DisplayClass89_0
class CORDL_TYPE BacktraceClient___c__DisplayClass89_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Backtrace::Unity::BacktraceClient>  __4__this;

/// @brief Field record, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_record, put=__cordl_internal_set_record)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record;

/// @brief Field report, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_report, put=__cordl_internal_set_report)) ::Backtrace::Unity::Model::BacktraceReport*  report;

/// @brief Field sendCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendCallback, put=__cordl_internal_set_sendCallback)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback;

static inline ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0* New_ctor() ;

/// @brief Method <CollectDataAndSend>b__0, addr 0x5f01e34, size 0x128, virtual false, abstract: false, final false
inline void _CollectDataAndSend_b__0(::Backtrace::Unity::Model::BacktraceResult*  result) ;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& __cordl_internal_get___4__this() ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& __cordl_internal_get_record() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& __cordl_internal_get_record() ;

constexpr ::Backtrace::Unity::Model::BacktraceReport* const& __cordl_internal_get_report() const;

constexpr ::Backtrace::Unity::Model::BacktraceReport*& __cordl_internal_get_report() ;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& __cordl_internal_get_sendCallback() const;

constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& __cordl_internal_get_sendCallback() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceClient>  value) ;

constexpr void __cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value) ;

constexpr void __cordl_internal_set_report(::Backtrace::Unity::Model::BacktraceReport*  value) ;

constexpr void __cordl_internal_set_sendCallback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

/// @brief Method .ctor, addr 0x5f01e2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceClient___c__DisplayClass89_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient___c__DisplayClass89_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceClient___c__DisplayClass89_0(BacktraceClient___c__DisplayClass89_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient___c__DisplayClass89_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceClient___c__DisplayClass89_0(BacktraceClient___c__DisplayClass89_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27554};

/// @brief Field record, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  ___record;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::BacktraceClient>  _____4__this;

/// @brief Field report, offset: 0x20, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceReport*  ___report;

/// @brief Field sendCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  ___sendCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0, ___record) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0, ___report) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0, ___sendCallback) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity {
// Is value type: false
// CS Name: Backtrace.Unity.BacktraceClient/<>c
class CORDL_TYPE BacktraceClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::BacktraceClient___c*  __9;

/// @brief Field <>9__107_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__107_0, put=setStaticF___9__107_0)) ::System::Func_2<::StringW,bool>*  __9__107_0;

static inline ::Backtrace::Unity::BacktraceClient___c* New_ctor() ;

/// @brief Method <GetNativeAttachments>b__107_0, addr 0x5f01e0c, size 0x20, virtual false, abstract: false, final false
inline bool _GetNativeAttachments_b__107_0(::StringW  n) ;

/// @brief Method .ctor, addr 0x5f01e04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::BacktraceClient___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__107_0() ;

static inline void setStaticF___9(::Backtrace::Unity::BacktraceClient___c*  value) ;

static inline void setStaticF___9__107_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceClient___c(BacktraceClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceClient___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceClient___c(BacktraceClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::BacktraceClient___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity
