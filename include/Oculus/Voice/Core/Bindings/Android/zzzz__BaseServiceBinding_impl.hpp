#pragma once
// IWYU pragma private; include "Oculus/Voice/Core/Bindings/Android/BaseServiceBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Voice/Core/Bindings/Android/zzzz__BaseServiceBinding_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::*)(::UnityEngine::AndroidJavaObject*)>(&::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e30934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::*)()>(&::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::Shutdown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e30964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AndroidJavaObject*& Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::__cordl_internal_get_binding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr ::UnityEngine::AndroidJavaObject* const& Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::__cordl_internal_get_binding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binding;
}
constexpr void Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::__cordl_internal_set_binding(::UnityEngine::AndroidJavaObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binding = value;
}
inline void Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AndroidJavaObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sdkInstance);
}
inline void Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding* Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::New_ctor(::UnityEngine::AndroidJavaObject*  sdkInstance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding*>(sdkInstance));
}
// Ctor Parameters []
constexpr ::Oculus::Voice::Core::Bindings::Android::BaseServiceBinding::BaseServiceBinding()   {
}
