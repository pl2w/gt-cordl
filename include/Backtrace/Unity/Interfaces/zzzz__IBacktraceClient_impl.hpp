#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceClient.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceClient_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceMetrics_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.get_Breadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (::Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceClient::get_Breadcrumbs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceClient::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceClient::*)(::System::Exception*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Interfaces::IBacktraceClient::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.SetClientReportLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceClient::*)(uint32_t)>(&::Backtrace::Unity::Interfaces::IBacktraceClient::SetClientReportLimit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceClient::Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.EnableBreadcrumbsSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceClient::EnableBreadcrumbsSupport)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.get_Metrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceMetrics* (::Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceClient::get_Metrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceClient::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceClient::*)(::StringW, ::StringW, uint32_t, ::StringW)>(&::Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 9}
                ));
    return ___internal_method;
  }
};
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* Backtrace::Unity::Interfaces::IBacktraceClient::get_Breadcrumbs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceClient::Send(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, sendCallback);
}
inline void Backtrace::Unity::Interfaces::IBacktraceClient::Send(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, attachmentPaths, attributes);
}
inline void Backtrace::Unity::Interfaces::IBacktraceClient::Send(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, attachmentPaths, attributes);
}
inline void Backtrace::Unity::Interfaces::IBacktraceClient::SetClientReportLimit(uint32_t  reportPerMin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportPerMin);
}
inline void Backtrace::Unity::Interfaces::IBacktraceClient::Refresh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceClient::EnableBreadcrumbsSupport()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceMetrics* Backtrace::Unity::Interfaces::IBacktraceClient::get_Metrics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceMetrics*>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceClient::EnableMetrics(::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl, uint32_t  timeIntervalInSec, ::StringW  uniqueEventName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uniqueEventsSubmissionUrl, summedEventsSubmissionUrl, timeIntervalInSec, uniqueEventName);
}
