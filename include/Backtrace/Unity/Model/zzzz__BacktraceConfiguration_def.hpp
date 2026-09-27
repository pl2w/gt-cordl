#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "Backtrace/Unity/Types/zzzz__ReportFilterType_def.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceConfiguration)
namespace Backtrace::Unity::Model {
class BacktraceCredentials;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceConfiguration*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceConfiguration*, "Backtrace.Unity.Model", "BacktraceConfiguration");
// [CreateAssetMenu(fileName = "Backtrace Configuration", menuName = "Backtrace/Configuration", order = 0)]
// Dependencies Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbType, Backtrace.Unity.Model.Breadcrumbs.UnityEngineLogLevel, Backtrace.Unity.Types.DeduplicationStrategy, Backtrace.Unity.Types.MiniDumpType, Backtrace.Unity.Types.ReportFilterType, Backtrace.Unity.Types.RetryOrder, UnityEngine.ScriptableObject
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceConfiguration
class CORDL_TYPE BacktraceConfiguration : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field AddUnityLogToReport, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddUnityLogToReport, put=__cordl_internal_set_AddUnityLogToReport)) bool  AddUnityLogToReport;

/// @brief Field AnrWatchdogTimeout, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_AnrWatchdogTimeout, put=__cordl_internal_set_AnrWatchdogTimeout)) int32_t  AnrWatchdogTimeout;

/// @brief Field AttachmentPaths, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttachmentPaths, put=__cordl_internal_set_AttachmentPaths)) ::ArrayW<::StringW>  AttachmentPaths;

/// @brief Field AutoSendMode, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoSendMode, put=__cordl_internal_set_AutoSendMode)) bool  AutoSendMode;

/// @brief Field BacktraceBreadcrumbsLevel, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_BacktraceBreadcrumbsLevel, put=__cordl_internal_set_BacktraceBreadcrumbsLevel)) ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  BacktraceBreadcrumbsLevel;

/// @brief Field CaptureNativeCrashes, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_CaptureNativeCrashes, put=__cordl_internal_set_CaptureNativeCrashes)) bool  CaptureNativeCrashes;

/// @brief Field ClientSideUnwinding, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_ClientSideUnwinding, put=__cordl_internal_set_ClientSideUnwinding)) bool  ClientSideUnwinding;

 __declspec(property(get=get_CrashpadDatabasePath)) ::StringW  CrashpadDatabasePath;

/// @brief Field CreateDatabase, offset 0x93, size 0x1 
 __declspec(property(get=__cordl_internal_get_CreateDatabase, put=__cordl_internal_set_CreateDatabase)) bool  CreateDatabase;

/// @brief Field DatabasePath, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_DatabasePath, put=__cordl_internal_set_DatabasePath)) ::StringW  DatabasePath;

/// @brief Field DeduplicationStrategy, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeduplicationStrategy, put=__cordl_internal_set_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

/// @brief Field DestroyOnLoad, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get_DestroyOnLoad, put=__cordl_internal_set_DestroyOnLoad)) bool  DestroyOnLoad;

/// @brief Field DisableInEditor, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableInEditor, put=__cordl_internal_set_DisableInEditor)) bool  DisableInEditor;

/// @brief Field EnableBreadcrumbsSupport, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableBreadcrumbsSupport, put=__cordl_internal_set_EnableBreadcrumbsSupport)) bool  EnableBreadcrumbsSupport;

/// @brief Field EnableMetricsSupport, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableMetricsSupport, put=__cordl_internal_set_EnableMetricsSupport)) bool  EnableMetricsSupport;

/// @brief Field Enabled, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field GameObjectDepth, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GameObjectDepth, put=__cordl_internal_set_GameObjectDepth)) int32_t  GameObjectDepth;

/// @brief Field GenerateScreenshotOnException, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_GenerateScreenshotOnException, put=__cordl_internal_set_GenerateScreenshotOnException)) bool  GenerateScreenshotOnException;

/// @brief Field HandleANR, offset 0x47, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleANR, put=__cordl_internal_set_HandleANR)) bool  HandleANR;

/// @brief Field HandleUnhandledExceptions, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_HandleUnhandledExceptions, put=__cordl_internal_set_HandleUnhandledExceptions)) bool  HandleUnhandledExceptions;

/// @brief Field IgnoreSslValidation, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_IgnoreSslValidation, put=__cordl_internal_set_IgnoreSslValidation)) bool  IgnoreSslValidation;

/// @brief Field LogLevel, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_LogLevel, put=__cordl_internal_set_LogLevel)) ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  LogLevel;

/// @brief Field MaxDatabaseSize, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxDatabaseSize, put=__cordl_internal_set_MaxDatabaseSize)) int64_t  MaxDatabaseSize;

/// @brief Field MaxRecordCount, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRecordCount, put=__cordl_internal_set_MaxRecordCount)) int32_t  MaxRecordCount;

/// @brief Field MinidumpType, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinidumpType, put=__cordl_internal_set_MinidumpType)) ::Backtrace::Unity::Types::MiniDumpType  MinidumpType;

/// @brief Field NumberOfLogs, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumberOfLogs, put=__cordl_internal_set_NumberOfLogs)) uint32_t  NumberOfLogs;

/// @brief Field OomReports, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_OomReports, put=__cordl_internal_set_OomReports)) bool  OomReports;

/// @brief Field PerformanceStatistics, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_PerformanceStatistics, put=__cordl_internal_set_PerformanceStatistics)) bool  PerformanceStatistics;

/// @brief Field ReportFilterType, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReportFilterType, put=__cordl_internal_set_ReportFilterType)) ::Backtrace::Unity::Types::ReportFilterType  ReportFilterType;

/// @brief Field ReportPerMin, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReportPerMin, put=__cordl_internal_set_ReportPerMin)) int32_t  ReportPerMin;

/// @brief Field RetryInterval, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryInterval, put=__cordl_internal_set_RetryInterval)) int32_t  RetryInterval;

/// @brief Field RetryLimit, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryLimit, put=__cordl_internal_set_RetryLimit)) int32_t  RetryLimit;

/// @brief Field RetryOrder, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryOrder, put=__cordl_internal_set_RetryOrder)) ::Backtrace::Unity::Types::RetryOrder  RetryOrder;

/// @brief Field Sampling, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sampling, put=__cordl_internal_set_Sampling)) double_t  Sampling;

/// @brief Field SendUnhandledGameCrashesOnGameStartup, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_SendUnhandledGameCrashesOnGameStartup, put=__cordl_internal_set_SendUnhandledGameCrashesOnGameStartup)) bool  SendUnhandledGameCrashesOnGameStartup;

/// @brief Field ServerUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ServerUrl, put=__cordl_internal_set_ServerUrl)) ::StringW  ServerUrl;

/// @brief Field SymbolsUploadToken, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SymbolsUploadToken, put=__cordl_internal_set_SymbolsUploadToken)) ::StringW  SymbolsUploadToken;

/// @brief Field TimeIntervalInMin, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_TimeIntervalInMin, put=__cordl_internal_set_TimeIntervalInMin)) uint32_t  TimeIntervalInMin;

/// @brief Field Token, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Token, put=__cordl_internal_set_Token)) ::StringW  Token;

/// @brief Field UseNormalizedExceptionMessage, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseNormalizedExceptionMessage, put=__cordl_internal_set_UseNormalizedExceptionMessage)) bool  UseNormalizedExceptionMessage;

/// @brief Method GetAttachmentPaths, addr 0x5efe300, size 0x104, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::StringW>* GetAttachmentPaths() ;

/// @brief Method GetEventAggregationIntervalTimerInMs, addr 0x5efc674, size 0x10, virtual false, abstract: false, final false
inline uint32_t GetEventAggregationIntervalTimerInMs() ;

/// @brief Method GetFullDatabasePath, addr 0x5f02c50, size 0xc, virtual false, abstract: false, final false
inline ::StringW GetFullDatabasePath() ;

/// @brief Method GetToken, addr 0x5efc5a4, size 0xd0, virtual false, abstract: false, final false
inline ::StringW GetToken() ;

/// @brief Method GetUniverseName, addr 0x5efc418, size 0x18c, virtual false, abstract: false, final false
inline ::StringW GetUniverseName() ;

/// @brief Method GetValidServerUrl, addr 0x5efe404, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetValidServerUrl() ;

/// @brief Method IsValid, addr 0x5efe048, size 0x8, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::Backtrace::Unity::Model::BacktraceConfiguration* New_ctor() ;

/// @brief Method ToCredentials, addr 0x5f03804, size 0x5c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::BacktraceCredentials* ToCredentials() ;

/// @brief Method UpdateServerUrl, addr 0x5f10220, size 0x19c, virtual false, abstract: false, final false
static inline ::StringW UpdateServerUrl(::StringW  value) ;

/// @brief Method ValidateServerUrl, addr 0x5f103bc, size 0x6c, virtual false, abstract: false, final false
static inline bool ValidateServerUrl(::StringW  value) ;

constexpr bool const& __cordl_internal_get_AddUnityLogToReport() const;

constexpr bool& __cordl_internal_get_AddUnityLogToReport() ;

constexpr int32_t const& __cordl_internal_get_AnrWatchdogTimeout() const;

constexpr int32_t& __cordl_internal_get_AnrWatchdogTimeout() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_AttachmentPaths() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_AttachmentPaths() ;

constexpr bool const& __cordl_internal_get_AutoSendMode() const;

constexpr bool& __cordl_internal_get_AutoSendMode() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& __cordl_internal_get_BacktraceBreadcrumbsLevel() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& __cordl_internal_get_BacktraceBreadcrumbsLevel() ;

constexpr bool const& __cordl_internal_get_CaptureNativeCrashes() const;

constexpr bool& __cordl_internal_get_CaptureNativeCrashes() ;

constexpr bool const& __cordl_internal_get_ClientSideUnwinding() const;

constexpr bool& __cordl_internal_get_ClientSideUnwinding() ;

constexpr bool const& __cordl_internal_get_CreateDatabase() const;

constexpr bool& __cordl_internal_get_CreateDatabase() ;

constexpr ::StringW const& __cordl_internal_get_DatabasePath() const;

constexpr ::StringW& __cordl_internal_get_DatabasePath() ;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& __cordl_internal_get_DeduplicationStrategy() const;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& __cordl_internal_get_DeduplicationStrategy() ;

constexpr bool const& __cordl_internal_get_DestroyOnLoad() const;

constexpr bool& __cordl_internal_get_DestroyOnLoad() ;

constexpr bool const& __cordl_internal_get_DisableInEditor() const;

constexpr bool& __cordl_internal_get_DisableInEditor() ;

constexpr bool const& __cordl_internal_get_EnableBreadcrumbsSupport() const;

constexpr bool& __cordl_internal_get_EnableBreadcrumbsSupport() ;

constexpr bool const& __cordl_internal_get_EnableMetricsSupport() const;

constexpr bool& __cordl_internal_get_EnableMetricsSupport() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr int32_t const& __cordl_internal_get_GameObjectDepth() const;

constexpr int32_t& __cordl_internal_get_GameObjectDepth() ;

constexpr bool const& __cordl_internal_get_GenerateScreenshotOnException() const;

constexpr bool& __cordl_internal_get_GenerateScreenshotOnException() ;

constexpr bool const& __cordl_internal_get_HandleANR() const;

constexpr bool& __cordl_internal_get_HandleANR() ;

constexpr bool const& __cordl_internal_get_HandleUnhandledExceptions() const;

constexpr bool& __cordl_internal_get_HandleUnhandledExceptions() ;

constexpr bool const& __cordl_internal_get_IgnoreSslValidation() const;

constexpr bool& __cordl_internal_get_IgnoreSslValidation() ;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const& __cordl_internal_get_LogLevel() const;

constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel& __cordl_internal_get_LogLevel() ;

constexpr int64_t const& __cordl_internal_get_MaxDatabaseSize() const;

constexpr int64_t& __cordl_internal_get_MaxDatabaseSize() ;

constexpr int32_t const& __cordl_internal_get_MaxRecordCount() const;

constexpr int32_t& __cordl_internal_get_MaxRecordCount() ;

constexpr ::Backtrace::Unity::Types::MiniDumpType const& __cordl_internal_get_MinidumpType() const;

constexpr ::Backtrace::Unity::Types::MiniDumpType& __cordl_internal_get_MinidumpType() ;

constexpr uint32_t const& __cordl_internal_get_NumberOfLogs() const;

constexpr uint32_t& __cordl_internal_get_NumberOfLogs() ;

constexpr bool const& __cordl_internal_get_OomReports() const;

constexpr bool& __cordl_internal_get_OomReports() ;

constexpr bool const& __cordl_internal_get_PerformanceStatistics() const;

constexpr bool& __cordl_internal_get_PerformanceStatistics() ;

constexpr ::Backtrace::Unity::Types::ReportFilterType const& __cordl_internal_get_ReportFilterType() const;

constexpr ::Backtrace::Unity::Types::ReportFilterType& __cordl_internal_get_ReportFilterType() ;

constexpr int32_t const& __cordl_internal_get_ReportPerMin() const;

constexpr int32_t& __cordl_internal_get_ReportPerMin() ;

constexpr int32_t const& __cordl_internal_get_RetryInterval() const;

constexpr int32_t& __cordl_internal_get_RetryInterval() ;

constexpr int32_t const& __cordl_internal_get_RetryLimit() const;

constexpr int32_t& __cordl_internal_get_RetryLimit() ;

constexpr ::Backtrace::Unity::Types::RetryOrder const& __cordl_internal_get_RetryOrder() const;

constexpr ::Backtrace::Unity::Types::RetryOrder& __cordl_internal_get_RetryOrder() ;

constexpr double_t const& __cordl_internal_get_Sampling() const;

constexpr double_t& __cordl_internal_get_Sampling() ;

constexpr bool const& __cordl_internal_get_SendUnhandledGameCrashesOnGameStartup() const;

constexpr bool& __cordl_internal_get_SendUnhandledGameCrashesOnGameStartup() ;

constexpr ::StringW const& __cordl_internal_get_ServerUrl() const;

constexpr ::StringW& __cordl_internal_get_ServerUrl() ;

constexpr ::StringW const& __cordl_internal_get_SymbolsUploadToken() const;

constexpr ::StringW& __cordl_internal_get_SymbolsUploadToken() ;

constexpr uint32_t const& __cordl_internal_get_TimeIntervalInMin() const;

constexpr uint32_t& __cordl_internal_get_TimeIntervalInMin() ;

constexpr ::StringW const& __cordl_internal_get_Token() const;

constexpr ::StringW& __cordl_internal_get_Token() ;

constexpr bool const& __cordl_internal_get_UseNormalizedExceptionMessage() const;

constexpr bool& __cordl_internal_get_UseNormalizedExceptionMessage() ;

constexpr void __cordl_internal_set_AddUnityLogToReport(bool  value) ;

constexpr void __cordl_internal_set_AnrWatchdogTimeout(int32_t  value) ;

constexpr void __cordl_internal_set_AttachmentPaths(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_AutoSendMode(bool  value) ;

constexpr void __cordl_internal_set_BacktraceBreadcrumbsLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value) ;

constexpr void __cordl_internal_set_CaptureNativeCrashes(bool  value) ;

constexpr void __cordl_internal_set_ClientSideUnwinding(bool  value) ;

constexpr void __cordl_internal_set_CreateDatabase(bool  value) ;

constexpr void __cordl_internal_set_DatabasePath(::StringW  value) ;

constexpr void __cordl_internal_set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

constexpr void __cordl_internal_set_DestroyOnLoad(bool  value) ;

constexpr void __cordl_internal_set_DisableInEditor(bool  value) ;

constexpr void __cordl_internal_set_EnableBreadcrumbsSupport(bool  value) ;

constexpr void __cordl_internal_set_EnableMetricsSupport(bool  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_GameObjectDepth(int32_t  value) ;

constexpr void __cordl_internal_set_GenerateScreenshotOnException(bool  value) ;

constexpr void __cordl_internal_set_HandleANR(bool  value) ;

constexpr void __cordl_internal_set_HandleUnhandledExceptions(bool  value) ;

constexpr void __cordl_internal_set_IgnoreSslValidation(bool  value) ;

constexpr void __cordl_internal_set_LogLevel(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value) ;

constexpr void __cordl_internal_set_MaxDatabaseSize(int64_t  value) ;

constexpr void __cordl_internal_set_MaxRecordCount(int32_t  value) ;

constexpr void __cordl_internal_set_MinidumpType(::Backtrace::Unity::Types::MiniDumpType  value) ;

constexpr void __cordl_internal_set_NumberOfLogs(uint32_t  value) ;

constexpr void __cordl_internal_set_OomReports(bool  value) ;

constexpr void __cordl_internal_set_PerformanceStatistics(bool  value) ;

constexpr void __cordl_internal_set_ReportFilterType(::Backtrace::Unity::Types::ReportFilterType  value) ;

constexpr void __cordl_internal_set_ReportPerMin(int32_t  value) ;

constexpr void __cordl_internal_set_RetryInterval(int32_t  value) ;

constexpr void __cordl_internal_set_RetryLimit(int32_t  value) ;

constexpr void __cordl_internal_set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value) ;

constexpr void __cordl_internal_set_Sampling(double_t  value) ;

constexpr void __cordl_internal_set_SendUnhandledGameCrashesOnGameStartup(bool  value) ;

constexpr void __cordl_internal_set_ServerUrl(::StringW  value) ;

constexpr void __cordl_internal_set_SymbolsUploadToken(::StringW  value) ;

constexpr void __cordl_internal_set_TimeIntervalInMin(uint32_t  value) ;

constexpr void __cordl_internal_set_Token(::StringW  value) ;

constexpr void __cordl_internal_set_UseNormalizedExceptionMessage(bool  value) ;

/// @brief Method .ctor, addr 0x5f10428, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CrashpadDatabasePath, addr 0x5f0e78c, size 0xac, virtual false, abstract: false, final false
inline ::StringW get_CrashpadDatabasePath() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceConfiguration(BacktraceConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceConfiguration(BacktraceConfiguration const& ) = delete;

/// @brief Field AllBreadcrumbsTypes value: I32(127)
static ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const AllBreadcrumbsTypes;

/// @brief Field AllLogTypes value: I32(31)
static ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const AllLogTypes;

/// @brief Field DefaultAnrWatchdogTimeout offset 0xffffffff size 0x4
static constexpr int32_t  DefaultAnrWatchdogTimeout{static_cast<int32_t>(0x1388)};

/// @brief Field DefaultGameObjectDepth offset 0xffffffff size 0x4
static constexpr int32_t  DefaultGameObjectDepth{static_cast<int32_t>(0xffffffff)};

/// @brief Field DefaultMaxDatabaseSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultMaxDatabaseSize{static_cast<int32_t>(0x0)};

/// @brief Field DefaultMaxRecordCount offset 0xffffffff size 0x4
static constexpr int32_t  DefaultMaxRecordCount{static_cast<int32_t>(0x8)};

/// @brief Field DefaultNumberOfLogs offset 0xffffffff size 0x4
static constexpr int32_t  DefaultNumberOfLogs{static_cast<int32_t>(0xa)};

/// @brief Field DefaultReportPerMin offset 0xffffffff size 0x4
static constexpr int32_t  DefaultReportPerMin{static_cast<int32_t>(0x32)};

/// @brief Field DefaultRetryInterval offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRetryInterval{static_cast<int32_t>(0x3c)};

/// @brief Field DefaultRetryLimit offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRetryLimit{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27590};

/// [Header("Backtrace client configuration")]
/// [Tooltip("This field is required to submit exceptions from your Unity project to your Backtrace instance.\n \nMore information about how to retrieve this value for your instance is our docs at What is a submission URL and What is a submission token?\n\nNOTE: the backtrace-unity plugin will expect full URL with token to your Backtrace instance.")]
/// @brief Field ServerUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ServerUrl;

/// @brief Field Token, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Token;

/// [Tooltip("Reports per minute: Limits the number of reports the client will send per minutes. If set to 0, there is no limit. If set to a higher value and the value is reached, the client will not send any reports until the next minute. Default: 50")]
/// @brief Field ReportPerMin, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ReportPerMin;

/// [Tooltip("Disable error reporting integration in editor mode.")]
/// @brief Field DisableInEditor, offset: 0x2c, size: 0x1, def value: None
 bool  ___DisableInEditor;

/// [Tooltip("Toggle this on or off to set the library to handle unhandled exceptions that are not captured by try-catch blocks.")]
/// @brief Field HandleUnhandledExceptions, offset: 0x2d, size: 0x1, def value: None
 bool  ___HandleUnhandledExceptions;

/// [Tooltip("Unity by default will validate ssl certificates. By using this option you can avoid ssl certificates validation. However, if you don\'t need to ignore ssl validation, please set this option to false.")]
/// @brief Field IgnoreSslValidation, offset: 0x2e, size: 0x1, def value: None
 bool  ___IgnoreSslValidation;

/// [Tooltip("Backtrace-client by default will be available on each scene. Once you initialize Backtrace integration, you can fetch Backtrace game object from every scene. In case if you don\'t want to have Backtrace-unity integration available by default in each scene, please set this value to true.")]
/// @brief Field DestroyOnLoad, offset: 0x2f, size: 0x1, def value: None
 bool  ___DestroyOnLoad;

/// [Tooltip("Log random sampling rate - Enables a random sampling mechanism for Unity.Error logs - by default sampling is equal to 0.01 - which means only 1% of randomply sampling reports will be send to Backtrace. \n* 1 - means 100% of error reports will be reported by library,\n* 0.1 - means 10% of error reports will be reported by library,\n* 0 - means library is going to drop all errors.")]
/// [Range(0, 1)]
/// @brief Field Sampling, offset: 0x30, size: 0x8, def value: None
 double_t  ___Sampling;

/// [Tooltip("Report filter allows to filter specific type of reports. Possible options:\n* Disable - Disable report filtering - send every type of report.\n* Message - Prevent message reports.\n* Exception - Prevent exception reports.\n* Unhandled exception- Prevent unhandled exception reports.\n* Hang - Prevent sending reports when game hang.\n* Error log - Prevent sending error logs.")]
/// @brief Field ReportFilterType, offset: 0x38, size: 0x4, def value: None
 ::Backtrace::Unity::Types::ReportFilterType  ___ReportFilterType;

/// [Tooltip("Allows developer to filter number of game object childrens in Backtrace report.")]
/// @brief Field GameObjectDepth, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___GameObjectDepth;

/// [Tooltip("Number of logs collected by Backtrace-Unity")]
/// @brief Field NumberOfLogs, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___NumberOfLogs;

/// [Tooltip("Enable performance statistics")]
/// @brief Field PerformanceStatistics, offset: 0x44, size: 0x1, def value: None
 bool  ___PerformanceStatistics;

/// [Tooltip("Try to find game native crashes and send them on Game startup")]
/// @brief Field SendUnhandledGameCrashesOnGameStartup, offset: 0x45, size: 0x1, def value: None
 bool  ___SendUnhandledGameCrashesOnGameStartup;

/// [Tooltip("Capture native NDK Crashes (ANDROID API 21+)")]
/// @brief Field CaptureNativeCrashes, offset: 0x46, size: 0x1, def value: None
 bool  ___CaptureNativeCrashes;

/// [Tooltip("Capture ANR events - Application not responding")]
/// @brief Field HandleANR, offset: 0x47, size: 0x1, def value: None
 bool  ___HandleANR;

/// [Tooltip("ANR watchdog timeout")]
/// @brief Field AnrWatchdogTimeout, offset: 0x48, size: 0x4, def value: None
 int32_t  ___AnrWatchdogTimeout;

/// [Tooltip("Send Out of Memory exceptions to Backtrace")]
/// @brief Field OomReports, offset: 0x4c, size: 0x1, def value: None
 bool  ___OomReports;

/// [Tooltip("Enable client-side unwinding.")]
/// @brief Field ClientSideUnwinding, offset: 0x4d, size: 0x1, def value: None
 bool  ___ClientSideUnwinding;

/// [Tooltip("Symbols upload token required to upload symbols to Backtrace")]
/// @brief Field SymbolsUploadToken, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___SymbolsUploadToken;

/// [Tooltip("Client-side deduplication allows the backtrace-unity library to group multiple error reports into a single one based on various factors. Factors include:\n\n* Disable - Client-side deduplication rules are disabled.\n* Everything - Use all the options as a factor in client-side deduplication.\n* Faulting callstack - Use the faulting callstack as a factor in client-side deduplication.\n* Exception type - Use the exception type as a factor in client-side deduplication.\n* Exception message - Use the exception message as a factor in client-side deduplication.")]
/// @brief Field DeduplicationStrategy, offset: 0x58, size: 0x4, def value: None
 ::Backtrace::Unity::Types::DeduplicationStrategy  ___DeduplicationStrategy;

/// [Tooltip("Enable breadcurmbs integration that will include game breadcrumbs in each report (native + managed).")]
/// @brief Field EnableBreadcrumbsSupport, offset: 0x5c, size: 0x1, def value: None
 bool  ___EnableBreadcrumbsSupport;

/// [Tooltip("Breadcrumbs support breadcrumbs level- Backtrace breadcrumbs log level controls what type of information will be available in the breadcrumb file")]
/// @brief Field BacktraceBreadcrumbsLevel, offset: 0x60, size: 0x4, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  ___BacktraceBreadcrumbsLevel;

/// [Tooltip("Breadcrumbs log level")]
/// @brief Field LogLevel, offset: 0x64, size: 0x4, def value: None
 ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  ___LogLevel;

/// [Tooltip("If exception does not have a stack trace, use a normalized exception message to generate fingerprint.")]
/// @brief Field UseNormalizedExceptionMessage, offset: 0x68, size: 0x1, def value: None
 bool  ___UseNormalizedExceptionMessage;

/// [Tooltip("Type of minidump that will be attached to Backtrace report in the report generated on Windows machine.")]
/// @brief Field MinidumpType, offset: 0x6c, size: 0x4, def value: None
 ::Backtrace::Unity::Types::MiniDumpType  ___MinidumpType;

/// [Tooltip("Generate and attach screenshot of frame as exception occurs")]
/// @brief Field GenerateScreenshotOnException, offset: 0x70, size: 0x1, def value: None
 bool  ___GenerateScreenshotOnException;

/// [Tooltip("List of path to attachments that Backtrace client will include in the native and managed reports.")]
/// @brief Field AttachmentPaths, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___AttachmentPaths;

/// [Tooltip("This is the path to directory where the Backtrace database will store reports on your game. NOTE: Backtrace database will remove all existing files on database start.")]
/// @brief Field DatabasePath, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___DatabasePath;

/// [Tooltip("This toggles the periodic (default: every 30 minutes) transmission of session information to the Backtrace endpoints. This will enable metrics such as crash free users and crash free sessions.")]
/// @brief Field EnableMetricsSupport, offset: 0x88, size: 0x1, def value: None
 bool  ___EnableMetricsSupport;

/// [Range(0, 60)]
/// [Tooltip("How often events should be sent to the Backtrace endpoints, in minutes. Zero (0) disables auto send and will require manual periodic sending using the API. For more information, see the README.")]
/// @brief Field TimeIntervalInMin, offset: 0x8c, size: 0x4, def value: None
 uint32_t  ___TimeIntervalInMin;

/// [Header("Backtrace database configuration")]
/// [Tooltip("When this setting is toggled, the backtrace-unity plugin will configure an offline database that will store reports if they can\'t be submitted do to being offline or not finding a network. When toggled on, there are a number of Database settings to configure.")]
/// @brief Field Enabled, offset: 0x90, size: 0x1, def value: None
 bool  ___Enabled;

/// [Tooltip("Add Unity player log file to Backtrace report")]
/// @brief Field AddUnityLogToReport, offset: 0x91, size: 0x1, def value: None
 bool  ___AddUnityLogToReport;

/// [Tooltip("When toggled on, the database will send automatically reports to Backtrace server based on the Retry Settings below. When toggled off, the developer will need to use the Flush method to attempt to send and clear. Recommend that this is toggled on.")]
/// @brief Field AutoSendMode, offset: 0x92, size: 0x1, def value: None
 bool  ___AutoSendMode;

/// [Tooltip("If toggled, the library will create the offline database directory if the provided path doesn\'t exists.")]
/// @brief Field CreateDatabase, offset: 0x93, size: 0x1, def value: None
 bool  ___CreateDatabase;

/// [Tooltip("This is one of two limits you can impose for controlling the growth of the offline store. This setting is the maximum number of stored reports in database. If value is equal to zero, then limit not exists, When the limit is reached, the database will remove the oldest entries.")]
/// @brief Field MaxRecordCount, offset: 0x94, size: 0x4, def value: None
 int32_t  ___MaxRecordCount;

/// [Tooltip("This is the second limit you can impose for controlling the growth of the offline store. This setting is the maximum database size in MB. If value is equal to zero, then size is unlimited, When the limit is reached, the database will remove the oldest entries.")]
/// @brief Field MaxDatabaseSize, offset: 0x98, size: 0x8, def value: None
 int64_t  ___MaxDatabaseSize;

/// [Tooltip("If the database is unable to send its record, this setting specifies how many seconds the library should wait between retries.")]
/// @brief Field RetryInterval, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___RetryInterval;

/// [Tooltip("If the database is unable to send its record, this setting specifies the maximum number of retries before the system gives up.")]
/// @brief Field RetryLimit, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___RetryLimit;

/// [Tooltip("This specifies in which order records are sent to the Backtrace server.")]
/// @brief Field RetryOrder, offset: 0xa8, size: 0x4, def value: None
 ::Backtrace::Unity::Types::RetryOrder  ___RetryOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___ServerUrl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___Token) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___ReportPerMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___DisableInEditor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___HandleUnhandledExceptions) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___IgnoreSslValidation) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___DestroyOnLoad) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___Sampling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___ReportFilterType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___GameObjectDepth) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___NumberOfLogs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___PerformanceStatistics) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___SendUnhandledGameCrashesOnGameStartup) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___CaptureNativeCrashes) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___HandleANR) == 0x47, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___AnrWatchdogTimeout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___OomReports) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___ClientSideUnwinding) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___SymbolsUploadToken) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___DeduplicationStrategy) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___EnableBreadcrumbsSupport) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___BacktraceBreadcrumbsLevel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___LogLevel) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___UseNormalizedExceptionMessage) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___MinidumpType) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___GenerateScreenshotOnException) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___AttachmentPaths) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___DatabasePath) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___EnableMetricsSupport) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___TimeIntervalInMin) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___Enabled) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___AddUnityLogToReport) == 0x91, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___AutoSendMode) == 0x92, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___CreateDatabase) == 0x93, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___MaxRecordCount) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___MaxDatabaseSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___RetryInterval) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___RetryLimit) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceConfiguration, ___RetryOrder) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceConfiguration) == 0xb0, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
