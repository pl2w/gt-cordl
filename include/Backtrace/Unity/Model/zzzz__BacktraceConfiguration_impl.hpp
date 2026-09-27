#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceConfiguration.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__ReportFilterType_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceCredentials_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetAttachmentPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetAttachmentPaths)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5efe300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetAttachmentPaths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetUniverseName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetUniverseName)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5efc418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetUniverseName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetToken)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5efc5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetFullDatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetFullDatabasePath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f02c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetFullDatabasePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.get_CrashpadDatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::get_CrashpadDatabasePath)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f0e78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"get_CrashpadDatabasePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetValidServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetValidServerUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetValidServerUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.UpdateServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceConfiguration::UpdateServerUrl)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5f10220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"UpdateServerUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.ValidateServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Backtrace::Unity::Model::BacktraceConfiguration::ValidateServerUrl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f103bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"ValidateServerUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::IsValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.GetEventAggregationIntervalTimerInMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::GetEventAggregationIntervalTimerInMs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5efc674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetEventAggregationIntervalTimerInMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration.ToCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceCredentials* (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::ToCredentials)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f03804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"ToCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceConfiguration::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f10428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ServerUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ServerUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerUrl;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_ServerUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerUrl = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Token;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Token;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_Token(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Token = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ReportPerMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportPerMin;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ReportPerMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportPerMin;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_ReportPerMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReportPerMin = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DisableInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableInEditor;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DisableInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableInEditor;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_DisableInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableInEditor = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_HandleUnhandledExceptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleUnhandledExceptions;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_HandleUnhandledExceptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleUnhandledExceptions;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_HandleUnhandledExceptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleUnhandledExceptions = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_IgnoreSslValidation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreSslValidation;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_IgnoreSslValidation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IgnoreSslValidation;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_IgnoreSslValidation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IgnoreSslValidation = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DestroyOnLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyOnLoad;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DestroyOnLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestroyOnLoad;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_DestroyOnLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestroyOnLoad = value;
}
constexpr double_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Sampling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sampling;
}
constexpr double_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Sampling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sampling;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_Sampling(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sampling = value;
}
constexpr ::Backtrace::Unity::Types::ReportFilterType& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ReportFilterType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportFilterType;
}
constexpr ::Backtrace::Unity::Types::ReportFilterType const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ReportFilterType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReportFilterType;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_ReportFilterType(::Backtrace::Unity::Types::ReportFilterType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReportFilterType = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_GameObjectDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObjectDepth;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_GameObjectDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObjectDepth;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_GameObjectDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameObjectDepth = value;
}
constexpr uint32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_NumberOfLogs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfLogs;
}
constexpr uint32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_NumberOfLogs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NumberOfLogs;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_NumberOfLogs(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NumberOfLogs = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_PerformanceStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceStatistics;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_PerformanceStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceStatistics;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_PerformanceStatistics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceStatistics = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_SendUnhandledGameCrashesOnGameStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendUnhandledGameCrashesOnGameStartup;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_SendUnhandledGameCrashesOnGameStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendUnhandledGameCrashesOnGameStartup;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_SendUnhandledGameCrashesOnGameStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendUnhandledGameCrashesOnGameStartup = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_CaptureNativeCrashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CaptureNativeCrashes;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_CaptureNativeCrashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CaptureNativeCrashes;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_CaptureNativeCrashes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CaptureNativeCrashes = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_HandleANR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleANR;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_HandleANR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandleANR;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_HandleANR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandleANR = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AnrWatchdogTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrWatchdogTimeout;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AnrWatchdogTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrWatchdogTimeout;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_AnrWatchdogTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnrWatchdogTimeout = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_OomReports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OomReports;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_OomReports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OomReports;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_OomReports(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OomReports = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ClientSideUnwinding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSideUnwinding;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_ClientSideUnwinding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClientSideUnwinding;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_ClientSideUnwinding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClientSideUnwinding = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_SymbolsUploadToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SymbolsUploadToken;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_SymbolsUploadToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SymbolsUploadToken;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_SymbolsUploadToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SymbolsUploadToken = value;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DeduplicationStrategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeduplicationStrategy;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DeduplicationStrategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeduplicationStrategy;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeduplicationStrategy = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_EnableBreadcrumbsSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableBreadcrumbsSupport;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_EnableBreadcrumbsSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableBreadcrumbsSupport;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_EnableBreadcrumbsSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableBreadcrumbsSupport = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_BacktraceBreadcrumbsLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BacktraceBreadcrumbsLevel;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_BacktraceBreadcrumbsLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BacktraceBreadcrumbsLevel;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_BacktraceBreadcrumbsLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BacktraceBreadcrumbsLevel = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_LogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_LogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_LogLevel(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogLevel = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_UseNormalizedExceptionMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNormalizedExceptionMessage;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_UseNormalizedExceptionMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseNormalizedExceptionMessage;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_UseNormalizedExceptionMessage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseNormalizedExceptionMessage = value;
}
constexpr ::Backtrace::Unity::Types::MiniDumpType& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MinidumpType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinidumpType;
}
constexpr ::Backtrace::Unity::Types::MiniDumpType const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MinidumpType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinidumpType;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_MinidumpType(::Backtrace::Unity::Types::MiniDumpType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinidumpType = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_GenerateScreenshotOnException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateScreenshotOnException;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_GenerateScreenshotOnException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateScreenshotOnException;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_GenerateScreenshotOnException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenerateScreenshotOnException = value;
}
constexpr ::ArrayW<::StringW>& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AttachmentPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttachmentPaths;
}
constexpr ::ArrayW<::StringW> const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AttachmentPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttachmentPaths;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_AttachmentPaths(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttachmentPaths = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DatabasePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DatabasePath;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_DatabasePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DatabasePath;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_DatabasePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DatabasePath = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_EnableMetricsSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableMetricsSupport;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_EnableMetricsSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableMetricsSupport;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_EnableMetricsSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableMetricsSupport = value;
}
constexpr uint32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_TimeIntervalInMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeIntervalInMin;
}
constexpr uint32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_TimeIntervalInMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeIntervalInMin;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_TimeIntervalInMin(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeIntervalInMin = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AddUnityLogToReport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddUnityLogToReport;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AddUnityLogToReport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddUnityLogToReport;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_AddUnityLogToReport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddUnityLogToReport = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AutoSendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSendMode;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_AutoSendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSendMode;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_AutoSendMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoSendMode = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_CreateDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateDatabase;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_CreateDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateDatabase;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_CreateDatabase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateDatabase = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MaxRecordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRecordCount;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MaxRecordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRecordCount;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_MaxRecordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRecordCount = value;
}
constexpr int64_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MaxDatabaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatabaseSize;
}
constexpr int64_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_MaxDatabaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatabaseSize;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_MaxDatabaseSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDatabaseSize = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryInterval;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryInterval;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_RetryInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryInterval = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryLimit;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryLimit;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_RetryLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryLimit = value;
}
constexpr ::Backtrace::Unity::Types::RetryOrder& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryOrder;
}
constexpr ::Backtrace::Unity::Types::RetryOrder const& Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_get_RetryOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryOrder;
}
constexpr void Backtrace::Unity::Model::BacktraceConfiguration::__cordl_internal_set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryOrder = value;
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Backtrace::Unity::Model::BacktraceConfiguration::GetAttachmentPaths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetAttachmentPaths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::GetUniverseName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetUniverseName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::GetToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::GetFullDatabasePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetFullDatabasePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::get_CrashpadDatabasePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"get_CrashpadDatabasePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::GetValidServerUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetValidServerUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::BacktraceConfiguration::UpdateServerUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"UpdateServerUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline bool Backtrace::Unity::Model::BacktraceConfiguration::ValidateServerUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"ValidateServerUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool Backtrace::Unity::Model::BacktraceConfiguration::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t Backtrace::Unity::Model::BacktraceConfiguration::GetEventAggregationIntervalTimerInMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"GetEventAggregationIntervalTimerInMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceCredentials* Backtrace::Unity::Model::BacktraceConfiguration::ToCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {"ToCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceCredentials*>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceConfiguration* Backtrace::Unity::Model::BacktraceConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceConfiguration*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceConfiguration::BacktraceConfiguration()   {
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  Backtrace::Unity::Model::BacktraceConfiguration::AllBreadcrumbsTypes{static_cast<int32_t>(0x7f)};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  Backtrace::Unity::Model::BacktraceConfiguration::AllLogTypes{static_cast<int32_t>(0x1f)};
