#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/Analytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__Analytics_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsResult_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Analytics::Analytics::IsInitialized)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb9245ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEventWithLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, ::StringW, ::StringW, bool)>(&::UnityEngine::Analytics::Analytics::RegisterEventWithLimit)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xb9245d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEventWithLimit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendEventWithLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Object*, int32_t, ::StringW)>(&::UnityEngine::Analytics::Analytics::SendEventWithLimit)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb924a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEventWithLimit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, ::StringW)>(&::UnityEngine::Analytics::Analytics::RegisterEvent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb924d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, ::StringW, ::StringW)>(&::UnityEngine::Analytics::Analytics::RegisterEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb924d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Object*, int32_t, ::StringW)>(&::UnityEngine::Analytics::Analytics::SendEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb924e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEventWithLimit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::Analytics::Analytics::RegisterEventWithLimit_Injected)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9249d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEventWithLimit_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendEventWithLimit_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::Object*, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Analytics::Analytics::SendEventWithLimit_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb924cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEventWithLimit_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Analytics::Analytics::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEventWithLimit(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo, bool  notifyServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEventWithLimit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, ver, prefix, assemblyInfo, notifyServer);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendEventWithLimit(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEventWithLimit", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, parameters, ver, prefix);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, prefix);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, ver, prefix, assemblyInfo);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendEvent(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, parameters, ver, prefix);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEventWithLimit_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  vendorKey, int32_t  ver, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  prefix, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  assemblyInfo, bool  notifyServer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"RegisterEventWithLimit_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, ver, prefix, assemblyInfo, notifyServer);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendEventWithLimit_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  eventName, ::System::Object*  parameters, int32_t  ver, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::Analytics*>(),
                        {"SendEventWithLimit_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult>(nullptr, ___internal_method, eventName, parameters, ver, prefix);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::Analytics::Analytics()   {
}
