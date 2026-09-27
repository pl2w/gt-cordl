#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantCandidateComputer_2.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__DistantCandidateComputer_2_def.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_def.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetector_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detectionFrustums()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionFrustums;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detectionFrustums() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionFrustums;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__detectionFrustums(::Oculus::Interaction::DistantPointDetectorFrustums  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectionFrustums = value;
}
template<typename TInteractor,typename TInteractable>
constexpr float_t& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detectionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionDelay;
}
template<typename TInteractor,typename TInteractable>
constexpr float_t const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detectionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detectionDelay;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__detectionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detectionDelay = value;
}
template<typename TInteractor,typename TInteractable>
constexpr float_t& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__hoverStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverStartTime;
}
template<typename TInteractor,typename TInteractable>
constexpr float_t const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__hoverStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverStartTime;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__hoverStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverStartTime = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::DistantPointDetector*& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detector;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::DistantPointDetector* const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__detector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____detector;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__detector(::Oculus::Interaction::DistantPointDetector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____detector = value;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__stableCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stableCandidate;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__stableCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stableCandidate;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__stableCandidate(TInteractable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stableCandidate = value;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__pointedCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointedCandidate;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable const& Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_get__pointedCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointedCandidate;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::__cordl_internal_set__pointedCandidate(TInteractable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointedCandidate = value;
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::DistantPointDetectorFrustums Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::get_DetectionFrustums()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {"get_DetectionFrustums", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DistantPointDetectorFrustums>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::set_DetectionFrustums(::Oculus::Interaction::DistantPointDetectorFrustums  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {"set_DetectionFrustums", {}, {::i2c::type_of<::Oculus::Interaction::DistantPointDetectorFrustums>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline float_t Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::get_DetectionDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {"get_DetectionDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::set_DetectionDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {"set_DetectionDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::UnityEngine::Pose Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::get_Origin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::ComputeCandidate(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  registry, TInteractor  interactor, ::by_ref<::UnityEngine::Vector3>  bestHitPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method, registry, interactor, bestHitPoint);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::ComputeBestInteractable(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>  candidates, bool  narrowSearch, ::by_ref<::UnityEngine::Vector3>  bestHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {"ComputeBestInteractable", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method, candidates, narrowSearch, bestHitPoint);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>* Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::DistantCandidateComputer_2<TInteractor,TInteractable>::DistantCandidateComputer_2()   {
}
