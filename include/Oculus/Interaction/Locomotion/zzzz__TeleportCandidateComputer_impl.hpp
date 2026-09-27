#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportCandidateComputer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportCandidateComputer_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportCandidateComputer___c__DisplayClass10_0_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IPolyline_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.get_EqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)()>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::get_EqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cc2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"get_EqualDistanceThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.set_EqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(float_t)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::set_EqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cc2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"set_EqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.get_BlockCheckOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)()>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::get_BlockCheckOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cc2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"get_BlockCheckOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.set_BlockCheckOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::set_BlockCheckOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cc300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"set_BlockCheckOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)()>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::Awake)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4cc308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::Oculus::Interaction::IPolyline*, ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::ComputeCandidate)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xa4cc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)()>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4cd024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer._ComputeCandidate_g__CheckOriginBlockers_10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Oculus::Interaction::Locomotion::TeleportInteractable*, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__CheckOriginBlockers_10_0)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa4ccbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__CheckOriginBlockers|10_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer._ComputeCandidate_g__CheckCandidate_10_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__CheckCandidate_10_1)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa4ccd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__CheckCandidate|10_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer._ComputeCandidate_g__TrySetScore_10_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::Oculus::Interaction::Locomotion::TeleportHit, float_t, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__TrySetScore_10_2)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4cd398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__TrySetScore|10_2", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportHit>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportCandidateComputer._ComputeCandidate_g__Tiebreak_10_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportCandidateComputer::*)(::Oculus::Interaction::Locomotion::TeleportInteractable*, ::Oculus::Interaction::Locomotion::TeleportInteractable*, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>)>(&::Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__Tiebreak_10_3)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4cd4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__Tiebreak|10_3", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__equalDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr float_t const& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__equalDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr void Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_set__equalDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalDistanceThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__blockCheckOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockCheckOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__blockCheckOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockCheckOrigin;
}
constexpr void Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_set__blockCheckOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockCheckOrigin = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__teleportInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor> const& Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_get__teleportInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportInteractor;
}
constexpr void Oculus::Interaction::Locomotion::TeleportCandidateComputer::__cordl_internal_set__teleportInteractor(::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportInteractor = value;
}
inline float_t Oculus::Interaction::Locomotion::TeleportCandidateComputer::get_EqualDistanceThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"get_EqualDistanceThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportCandidateComputer::set_EqualDistanceThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"set_EqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Locomotion::TeleportCandidateComputer::get_BlockCheckOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"get_BlockCheckOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportCandidateComputer::set_BlockCheckOrigin(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"set_BlockCheckOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TeleportCandidateComputer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable> Oculus::Interaction::Locomotion::TeleportCandidateComputer::ComputeCandidate(::Oculus::Interaction::IPolyline*  TeleportArc, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractor>,::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>>  interactables, ::Oculus::Interaction::Locomotion::TeleportInteractor_ComputeCandidateTiebreakerDelegate*  tiebreaker, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hitPose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::TeleportInteractable>>(this, ___internal_method, TeleportArc, interactables, tiebreaker, hitPose);
}
inline void Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__CheckOriginBlockers_10_0(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__CheckOriginBlockers|10_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, candidate, _cordl_fixed_empty_name_whitespace);
}
inline void Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__CheckCandidate_10_1(::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__CheckCandidate|10_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, candidate, _cordl_fixed_empty_name_whitespace);
}
inline bool Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__TrySetScore_10_2(::Oculus::Interaction::Locomotion::TeleportInteractable*  candidate, ::Oculus::Interaction::Locomotion::TeleportHit  hit, float_t  score, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__TrySetScore|10_2", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportHit>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, candidate, hit, score, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Oculus::Interaction::Locomotion::TeleportCandidateComputer::_ComputeCandidate_g__Tiebreak_10_3(::Oculus::Interaction::Locomotion::TeleportInteractable*  a, ::Oculus::Interaction::Locomotion::TeleportInteractable*  b, ::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>(),
                        {"<ComputeCandidate>g__Tiebreak|10_3", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TeleportCandidateComputer___c__DisplayClass10_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::Locomotion::TeleportCandidateComputer* Oculus::Interaction::Locomotion::TeleportCandidateComputer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportCandidateComputer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportCandidateComputer::TeleportCandidateComputer()   {
}
