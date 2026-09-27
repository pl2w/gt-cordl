#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SignalSourceAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_def.hpp"
#include "Unity/Cinemachine/zzzz__ISignalSource6D_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::SignalSourceAsset.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::SignalSourceAsset::*)()>(&::Unity::Cinemachine::SignalSourceAsset::get_SignalDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SignalSourceAsset.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SignalSourceAsset::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::SignalSourceAsset::GetSignal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(),
                    {::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::SignalSourceAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::SignalSourceAsset::*)()>(&::Unity::Cinemachine::SignalSourceAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb9174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::SignalSourceAsset::get_SignalDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::SignalSourceAsset::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
inline void Unity::Cinemachine::SignalSourceAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::SignalSourceAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::SignalSourceAsset* Unity::Cinemachine::SignalSourceAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::SignalSourceAsset*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr  Unity::Cinemachine::SignalSourceAsset::operator ::Unity::Cinemachine::ISignalSource6D*() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* Unity::Cinemachine::SignalSourceAsset::i___Unity__Cinemachine__ISignalSource6D() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::SignalSourceAsset::SignalSourceAsset()   {
}
