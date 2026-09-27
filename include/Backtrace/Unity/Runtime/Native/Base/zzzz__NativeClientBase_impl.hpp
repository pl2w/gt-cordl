#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Base/NativeClientBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Runtime/Native/Base/zzzz__NativeClientBase_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)(::Backtrace::Unity::Model::BacktraceConfiguration*, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*)>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f0c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)(float_t)>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::Update)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f0c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase.OnAnrDetection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)()>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::OnAnrDetection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f0c920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"OnAnrDetection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase.PauseAnrThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)(bool)>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::PauseAnrThread)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f0c944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"PauseAnrThread", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)()>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::Disable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f0c968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase.ShouldStoreAnrBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::*)()>(&::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::ShouldStoreAnrBreadcrumbs)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f0c7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"ShouldStoreAnrBreadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_AnrWatchdogTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrWatchdogTimeout;
}
constexpr int32_t const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_AnrWatchdogTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrWatchdogTimeout;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_AnrWatchdogTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnrWatchdogTimeout = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_LogAnr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogAnr;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_LogAnr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogAnr;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_LogAnr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogAnr = value;
}
constexpr float_t& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_LastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdateTime;
}
constexpr float_t const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_LastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUpdateTime;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_LastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUpdateTime = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_PreventAnr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreventAnr;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_PreventAnr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreventAnr;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_PreventAnr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreventAnr = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_StopAnr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopAnr;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_StopAnr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StopAnr;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_StopAnr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StopAnr = value;
}
constexpr ::System::Threading::Thread*& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_AnrThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrThread;
}
constexpr ::System::Threading::Thread* const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_AnrThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnrThread;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_AnrThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnrThread = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_CaptureNativeCrashes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CaptureNativeCrashes;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_CaptureNativeCrashes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CaptureNativeCrashes;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_CaptureNativeCrashes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CaptureNativeCrashes = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_HandlerANR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandlerANR;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get_HandlerANR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandlerANR;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set_HandlerANR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandlerANR = value;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set__configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configuration = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__breadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__breadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbs = value;
}
constexpr bool& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__shouldLogAnrsInBreadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldLogAnrsInBreadcrumbs;
}
constexpr bool const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__shouldLogAnrsInBreadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldLogAnrsInBreadcrumbs;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set__shouldLogAnrsInBreadcrumbs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldLogAnrsInBreadcrumbs = value;
}
constexpr ::System::Object*& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr ::System::Object* const& Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_get__lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockObject;
}
constexpr void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::__cordl_internal_set__lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockObject = value;
}
inline void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration, breadcrumbs);
}
inline void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::Update(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"Update", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::OnAnrDetection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"OnAnrDetection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::PauseAnrThread(bool  stopAnr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"PauseAnrThread", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopAnr);
}
inline void Backtrace::Unity::Runtime::Native::Base::NativeClientBase::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Runtime::Native::Base::NativeClientBase::ShouldStoreAnrBreadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(),
                        {"ShouldStoreAnrBreadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase* Backtrace::Unity::Runtime::Native::Base::NativeClientBase::New_ctor(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  breadcrumbs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Runtime::Native::Base::NativeClientBase*>(configuration, breadcrumbs));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Runtime::Native::Base::NativeClientBase::NativeClientBase()   {
}
