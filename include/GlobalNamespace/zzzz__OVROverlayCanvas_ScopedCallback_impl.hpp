#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas_ScopedCallback.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_ScopedCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_ScopedCallback.add_OnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_ScopedCallback::*)(::System::Action*)>(&::GlobalNamespace::OVROverlayCanvas_ScopedCallback::add_OnDispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa603e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"add_OnDispose", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_ScopedCallback.remove_OnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_ScopedCallback::*)(::System::Action*)>(&::GlobalNamespace::OVROverlayCanvas_ScopedCallback::remove_OnDispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa60460c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"remove_OnDispose", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas_ScopedCallback.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas_ScopedCallback::*)()>(&::GlobalNamespace::OVROverlayCanvas_ScopedCallback::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6046a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVROverlayCanvas_ScopedCallback::add_OnDispose(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"add_OnDispose", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlayCanvas_ScopedCallback::remove_OnDispose(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"remove_OnDispose", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlayCanvas_ScopedCallback::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas_ScopedCallback>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVROverlayCanvas_ScopedCallback::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVROverlayCanvas_ScopedCallback::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "OnDispose", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVROverlayCanvas_ScopedCallback::OVROverlayCanvas_ScopedCallback(::System::Action*  OnDispose) noexcept  {
this->OnDispose = OnDispose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas_ScopedCallback::OVROverlayCanvas_ScopedCallback()   {
}
