#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ISignalSource6D.hpp"
#include "Unity/Cinemachine/zzzz__ISignalSource6D_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ISignalSource6D.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::ISignalSource6D::*)()>(&::Unity::Cinemachine::ISignalSource6D::get_SignalDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::ISignalSource6D.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::ISignalSource6D::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::ISignalSource6D::GetSignal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(), 1}
                ));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::ISignalSource6D::get_SignalDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::ISignalSource6D::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ISignalSource6D*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
