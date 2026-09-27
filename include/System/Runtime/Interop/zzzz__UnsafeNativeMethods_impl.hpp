#pragma once
// IWYU pragma private; include "System/Runtime/Interop/UnsafeNativeMethods.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Interop/zzzz__SafeEventLogWriteHandle_def.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_EventData_def.hpp"
#include "System/Runtime/Interop/zzzz__UnsafeNativeMethods_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventRegister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::Guid>, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>, ::ByRefConst<void*>, ::by_ref<int64_t>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventRegister)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaa93adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventRegister", {}, {::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>>(), ::i2c::type_of<::ByRefConst<void*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventUnregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ByRefConst<int64_t>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventUnregister)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaa93b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventUnregister", {}, {::i2c::type_of<::ByRefConst<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ByRefConst<int64_t>, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaa93c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventEnabled", {}, {::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ByRefConst<int64_t>, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::ByRefConst<uint32_t>, ::ByRefConst<::GlobalNamespace::UnsafeNativeMethods_EventData*>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaa93c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventWrite", {}, {::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::ByRefConst<uint32_t>>(), ::i2c::type_of<::ByRefConst<::GlobalNamespace::UnsafeNativeMethods_EventData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.EventActivityIdControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ByRefConst<int32_t>, ::by_ref<::System::Guid>)>(&::System::Runtime::Interop::UnsafeNativeMethods::EventActivityIdControl)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaa93d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventActivityIdControl", {}, {::i2c::type_of<::ByRefConst<int32_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.ReportEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::InteropServices::SafeHandle*, uint16_t, uint16_t, uint32_t, ::ArrayW<uint8_t>, uint16_t, uint32_t, ::System::Runtime::InteropServices::HandleRef, ::ArrayW<uint8_t>)>(&::System::Runtime::Interop::UnsafeNativeMethods::ReportEvent)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xaa93db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"ReportEvent", {}, {::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods.RegisterEventSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Interop::SafeEventLogWriteHandle* (*)(::StringW, ::StringW)>(&::System::Runtime::Interop::UnsafeNativeMethods::RegisterEventSource)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaa93960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"RegisterEventSource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventRegister(::by_ref<::System::Guid>  providerId, ::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>  enableCallback, ::ByRefConst<void*>  callbackContext, ::by_ref<int64_t>  registrationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventRegister", {}, {::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::ByRefConst<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>>(), ::i2c::type_of<::ByRefConst<void*>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, providerId, enableCallback, callbackContext, registrationHandle);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventUnregister(::ByRefConst<int64_t>  registrationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventUnregister", {}, {::i2c::type_of<::ByRefConst<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, registrationHandle);
}
inline bool System::Runtime::Interop::UnsafeNativeMethods::EventEnabled(::ByRefConst<int64_t>  registrationHandle, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>  eventDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventEnabled", {}, {::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, registrationHandle, eventDescriptor);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventWrite(::ByRefConst<int64_t>  registrationHandle, ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>  eventDescriptor, ::ByRefConst<uint32_t>  userDataCount, ::ByRefConst<::GlobalNamespace::UnsafeNativeMethods_EventData*>  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventWrite", {}, {::i2c::type_of<::ByRefConst<int64_t>>(), ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::ByRefConst<uint32_t>>(), ::i2c::type_of<::ByRefConst<::GlobalNamespace::UnsafeNativeMethods_EventData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, registrationHandle, eventDescriptor, userDataCount, userData);
}
inline uint32_t System::Runtime::Interop::UnsafeNativeMethods::EventActivityIdControl(::ByRefConst<int32_t>  ControlCode, ::by_ref<::System::Guid>  ActivityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"EventActivityIdControl", {}, {::i2c::type_of<::ByRefConst<int32_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, ControlCode, ActivityId);
}
inline bool System::Runtime::Interop::UnsafeNativeMethods::ReportEvent(::System::Runtime::InteropServices::SafeHandle*  hEventLog, uint16_t  type, uint16_t  category, uint32_t  eventID, ::ArrayW<uint8_t>  userSID, uint16_t  numStrings, uint32_t  dataLen, ::System::Runtime::InteropServices::HandleRef  strings, ::ArrayW<uint8_t>  rawData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"ReportEvent", {}, {::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Runtime::InteropServices::HandleRef>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hEventLog, type, category, eventID, userSID, numStrings, dataLen, strings, rawData);
}
inline ::System::Runtime::Interop::SafeEventLogWriteHandle* System::Runtime::Interop::UnsafeNativeMethods::RegisterEventSource(::StringW  uncServerName, ::StringW  sourceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods*>(),
                        {"RegisterEventSource", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Interop::SafeEventLogWriteHandle*>(nullptr, ___internal_method, uncServerName, sourceName);
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::UnsafeNativeMethods::UnsafeNativeMethods()   {
}
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::*)(::System::Object*, ::System::IntPtr)>(&::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaa93ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::*)(::by_ref<::System::Guid>, ::ByRefConst<int32_t>, ::ByRefConst<uint8_t>, ::ByRefConst<int64_t>, ::ByRefConst<int64_t>, ::ByRefConst<void*>, ::ByRefConst<void*>)>(&::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaa93fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(),
                    {::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::Invoke(::by_ref<::System::Guid>  sourceId, ::ByRefConst<int32_t>  isEnabled, ::ByRefConst<uint8_t>  level, ::ByRefConst<int64_t>  matchAnyKeywords, ::ByRefConst<int64_t>  matchAllKeywords, ::ByRefConst<void*>  filterData, ::ByRefConst<void*>  callbackContext)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceId, isEnabled, level, matchAnyKeywords, matchAllKeywords, filterData, callbackContext);
}
inline ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback* System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Runtime::Interop::UnsafeNativeMethods_EtwEnableCallback::UnsafeNativeMethods_EtwEnableCallback()   {
}
