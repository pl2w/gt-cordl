#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisResetSource.hpp"
#include "Unity/Cinemachine/zzzz__IInputAxisResetSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisResetSource.RegisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::IInputAxisResetSource::*)(::System::Action*)>(&::Unity::Cinemachine::IInputAxisResetSource::RegisterResetHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisResetSource.UnregisterResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::IInputAxisResetSource::*)(::System::Action*)>(&::Unity::Cinemachine::IInputAxisResetSource::UnregisterResetHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::IInputAxisResetSource.get_HasResetHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::IInputAxisResetSource::*)()>(&::Unity::Cinemachine::IInputAxisResetSource::get_HasResetHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(),
                    {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::IInputAxisResetSource::RegisterResetHandler(::System::Action*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Unity::Cinemachine::IInputAxisResetSource::UnregisterResetHandler(::System::Action*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline bool Unity::Cinemachine::IInputAxisResetSource::get_HasResetHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::IInputAxisResetSource*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
