#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/ReportLimitWatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Services/zzzz__ReportLimitWatcher_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::ReportLimitWatcher::*)(uint32_t)>(&::Backtrace::Unity::Services::ReportLimitWatcher::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5efe1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.SetClientReportLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::ReportLimitWatcher::*)(uint32_t)>(&::Backtrace::Unity::Services::ReportLimitWatcher::SetClientReportLimit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5eff630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"SetClientReportLimit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.WatchReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::ReportLimitWatcher::*)(int64_t, bool)>(&::Backtrace::Unity::Services::ReportLimitWatcher::WatchReport)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5f01a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"WatchReport", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.WatchReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::ReportLimitWatcher::*)(::Backtrace::Unity::Model::BacktraceReport*, bool)>(&::Backtrace::Unity::Services::ReportLimitWatcher::WatchReport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0c3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"WatchReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.ShouldDisplayMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&::Backtrace::Unity::Services::ReportLimitWatcher::ShouldDisplayMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f0c3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"ShouldDisplayMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.DisplayReportLimitHitMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&::Backtrace::Unity::Services::ReportLimitWatcher::DisplayReportLimitHitMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f0c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"DisplayReportLimitHitMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&::Backtrace::Unity::Services::ReportLimitWatcher::Clear)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f0c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::ReportLimitWatcher.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::ReportLimitWatcher::*)()>(&::Backtrace::Unity::Services::ReportLimitWatcher::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f0c40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<int64_t>*& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__reportQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportQueue;
}
constexpr ::System::Collections::Generic::Queue_1<int64_t>* const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__reportQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportQueue;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__reportQueue(::System::Collections::Generic::Queue_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportQueue = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__object(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____object = value;
}
constexpr int64_t& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__queueReportTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueReportTime;
}
constexpr int64_t const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__queueReportTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queueReportTime;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__queueReportTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queueReportTime = value;
}
constexpr bool& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__watcherEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watcherEnable;
}
constexpr bool const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__watcherEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____watcherEnable;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__watcherEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____watcherEnable = value;
}
constexpr int32_t& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__reportPerMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportPerMin;
}
constexpr int32_t const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__reportPerMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportPerMin;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__reportPerMin(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportPerMin = value;
}
constexpr bool& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__displayMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayMessage;
}
constexpr bool const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__displayMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayMessage;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__displayMessage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayMessage = value;
}
constexpr bool& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__limitHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limitHit;
}
constexpr bool const& Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_get__limitHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limitHit;
}
constexpr void Backtrace::Unity::Services::ReportLimitWatcher::__cordl_internal_set__limitHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____limitHit = value;
}
inline void Backtrace::Unity::Services::ReportLimitWatcher::_ctor(uint32_t  reportPerMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportPerMin);
}
inline void Backtrace::Unity::Services::ReportLimitWatcher::SetClientReportLimit(uint32_t  reportPerMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"SetClientReportLimit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportPerMin);
}
inline bool Backtrace::Unity::Services::ReportLimitWatcher::WatchReport(int64_t  timestamp, bool  displayMessageOnLimitHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"WatchReport", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timestamp, displayMessageOnLimitHit);
}
inline bool Backtrace::Unity::Services::ReportLimitWatcher::WatchReport(::Backtrace::Unity::Model::BacktraceReport*  report, bool  displayMessageOnLimitHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"WatchReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, report, displayMessageOnLimitHit);
}
inline bool Backtrace::Unity::Services::ReportLimitWatcher::ShouldDisplayMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"ShouldDisplayMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::ReportLimitWatcher::DisplayReportLimitHitMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"DisplayReportLimitHitMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::ReportLimitWatcher::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::ReportLimitWatcher::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::ReportLimitWatcher*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Services::ReportLimitWatcher* Backtrace::Unity::Services::ReportLimitWatcher::New_ctor(uint32_t  reportPerMin)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::ReportLimitWatcher*>(reportPerMin));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::ReportLimitWatcher::ReportLimitWatcher()   {
}
