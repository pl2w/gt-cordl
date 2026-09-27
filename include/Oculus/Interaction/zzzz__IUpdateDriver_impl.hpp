#pragma once
// IWYU pragma private; include "Oculus/Interaction/IUpdateDriver.hpp"
#include "Oculus/Interaction/zzzz__IUpdateDriver_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IUpdateDriver.get_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IUpdateDriver::*)()>(&::Oculus::Interaction::IUpdateDriver::get_IsRootDriver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(),
                    {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IUpdateDriver.set_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IUpdateDriver::*)(bool)>(&::Oculus::Interaction::IUpdateDriver::set_IsRootDriver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(),
                    {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IUpdateDriver.Drive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IUpdateDriver::*)()>(&::Oculus::Interaction::IUpdateDriver::Drive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(),
                    {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::IUpdateDriver::get_IsRootDriver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::IUpdateDriver::set_IsRootDriver(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::IUpdateDriver::Drive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IUpdateDriver*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
