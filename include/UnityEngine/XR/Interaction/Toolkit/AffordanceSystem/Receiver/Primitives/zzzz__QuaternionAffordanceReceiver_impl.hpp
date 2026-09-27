#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/QuaternionAffordanceReceiver.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector4AffordanceReceiver_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__QuaternionAffordanceReceiver_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__QuaternionUnityEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.get_quaternionValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::QuaternionUnityEvent* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::get_quaternionValueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {"get_quaternionValueUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.set_quaternionValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)(::Unity::XR::CoreUtils::QuaternionUnityEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::set_quaternionValueUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4dc378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {"set_quaternionValueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::QuaternionUnityEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver.OnAffordanceValueUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)(::Unity::Mathematics::float4)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::OnAffordanceValueUpdated)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4dc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4dc428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_get_m_QuaternionValueUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuaternionValueUpdated;
}
constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_get_m_QuaternionValueUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuaternionValueUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::__cordl_internal_set_m_QuaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_QuaternionValueUpdated = value;
}
inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::get_quaternionValueUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {"get_quaternionValueUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::QuaternionUnityEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::set_quaternionValueUpdated(::Unity::XR::CoreUtils::QuaternionUnityEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {"set_quaternionValueUpdated", {}, {::i2c::type_of<::Unity::XR::CoreUtils::QuaternionUnityEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::OnAffordanceValueUpdated(::Unity::Mathematics::float4  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::QuaternionAffordanceReceiver::QuaternionAffordanceReceiver()   {
}
