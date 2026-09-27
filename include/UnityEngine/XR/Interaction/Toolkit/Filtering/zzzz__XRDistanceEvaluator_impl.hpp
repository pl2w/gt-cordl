#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRDistanceEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRDistanceEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator.get_maxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::get_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {"get_maxDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator.set_maxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::set_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {"set_maxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::Reset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb4a9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator.CalculateNormalizedScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::CalculateNormalizedScore)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb4a9c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a9e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::__cordl_internal_get_m_MaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::__cordl_internal_get_m_MaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::__cordl_internal_set_m_MaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDistance = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::get_maxDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {"get_maxDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::set_maxDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {"set_maxDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, target);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRDistanceEvaluator::XRDistanceEvaluator()   {
}
