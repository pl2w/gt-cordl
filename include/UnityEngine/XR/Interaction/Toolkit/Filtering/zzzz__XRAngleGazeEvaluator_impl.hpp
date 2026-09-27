#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRAngleGazeEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRAngleGazeEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.GetXROriginCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::GetXROriginCamera)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4a95a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"GetXROriginCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.get_gazeTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_gazeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"get_gazeTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.set_gazeTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_gazeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a963c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"set_gazeTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.get_maxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_maxAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"get_maxAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.set_maxAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_maxAngle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4a964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"set_maxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.InitializeGazeTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::InitializeGazeTransform)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb4a9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"InitializeGazeTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb4a9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a97fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator.CalculateNormalizedScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::CalculateNormalizedScore)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb4a9804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4a9b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_GazeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_GazeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_set_m_GazeTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GazeTransform = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_MaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_get_m_MaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::__cordl_internal_set_m_MaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxAngle = value;
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::GetXROriginCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"GetXROriginCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_gazeTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"get_gazeTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_gazeTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"set_gazeTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::get_maxAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"get_maxAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::set_maxAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"set_maxAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::InitializeGazeTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {"InitializeGazeTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, target);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator::XRAngleGazeEvaluator()   {
}
