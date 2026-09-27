#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRLastSelectedEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRLastSelectedEvaluator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRTargetEvaluatorLinkable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.get_maxTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::get_maxTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"get_maxTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.set_maxTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::set_maxTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a9e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"set_maxTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.OnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnSelect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4a9e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.OnLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnLink)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4a9f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.OnUnlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnUnlink)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4aa03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4aa178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator.CalculateNormalizedScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::CalculateNormalizedScore)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4aa1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4aa288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_get_m_InteractableSelectionTimeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSelectionTimeMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_get_m_InteractableSelectionTimeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSelectionTimeMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_set_m_InteractableSelectionTimeMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableSelectionTimeMap = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_get_m_MaxTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_get_m_MaxTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::__cordl_internal_set_m_MaxTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxTime = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::get_maxTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"get_maxTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::set_maxTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"set_maxTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnSelect(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {"OnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, target);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable* UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRTargetEvaluatorLinkable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::XRLastSelectedEvaluator()   {
}
