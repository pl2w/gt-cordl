#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/IEventBinding.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__IEventBinding_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::IEventBinding.get_IsBound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::Bindings::IEventBinding::*)()>(&::Unity::XR::CoreUtils::Bindings::IEventBinding::get_IsBound)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::IEventBinding.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::IEventBinding::*)()>(&::Unity::XR::CoreUtils::Bindings::IEventBinding::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::IEventBinding.Unbind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::IEventBinding::*)()>(&::Unity::XR::CoreUtils::Bindings::IEventBinding::Unbind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::Bindings::IEventBinding.ClearBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::Bindings::IEventBinding::*)()>(&::Unity::XR::CoreUtils::Bindings::IEventBinding::ClearBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(),
                    {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Unity::XR::CoreUtils::Bindings::IEventBinding::get_IsBound()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::IEventBinding::Bind()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::IEventBinding::Unbind()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::Bindings::IEventBinding::ClearBinding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
