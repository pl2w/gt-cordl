#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker_AsyncLock.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock__AcquireAsync_d__3_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)(::GlobalNamespace::OVRAnchor_Tracker*)>(&::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa56eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)()>(&::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa56eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.AcquireAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> (*)(::GlobalNamespace::OVRAnchor_Tracker*)>(&::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa56eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {"AcquireAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor(::GlobalNamespace::OVRAnchor_Tracker*  tracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tracker);
}
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync(::GlobalNamespace::OVRAnchor_Tracker*  tracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(),
                        {"AcquireAsync", {}, {::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>>(nullptr, ___internal_method, tracker);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::Tracker_OVRAnchor_AsyncLock::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Tracker_OVRAnchor_AsyncLock::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock(::GlobalNamespace::OVRAnchor_Tracker*  _tracker) noexcept  {
this->_tracker = _tracker;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock()   {
}
