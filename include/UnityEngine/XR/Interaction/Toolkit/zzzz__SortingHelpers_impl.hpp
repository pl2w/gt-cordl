#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/SortingHelpers.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SortingHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IInteractorDistanceEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SortingHelpers_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers.SortByDistanceToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb41c198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers.SortByDistanceToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xb41c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers.SortByDistanceToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb41c5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers.SortByDistanceToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb41c664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers.InteractableDistanceComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::InteractableDistanceComparison)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb41c92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"InteractableDistanceComparison", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::setStaticF_s_InteractableDistanceSqrMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*, "s_InteractableDistanceSqrMap", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* UnityEngine::XR::Interaction::Toolkit::SortingHelpers::getStaticF_s_InteractableDistanceSqrMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*, "s_InteractableDistanceSqrMap", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::setStaticF_s_InteractableDistanceComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_InteractableDistanceComparison", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(std::forward<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::SortingHelpers::getStaticF_s_InteractableDistanceComparison()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_InteractableDistanceComparison", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::setStaticF_squareDistanceAttachPointEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "squareDistanceAttachPointEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers::getStaticF_squareDistanceAttachPointEvaluator()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "squareDistanceAttachPointEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::setStaticF_interactableBasedEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "interactableBasedEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers::getStaticF_interactableBasedEvaluator()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "interactableBasedEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::setStaticF_closestPointOnColliderEvaluator(::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "closestPointOnColliderEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers::getStaticF_closestPointOnColliderEvaluator()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*, "closestPointOnColliderEvaluator", ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>();
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::Sort(::System::Collections::Generic::IList_1<T>*  hits, ::System::Collections::Generic::IComparer_1<T>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                    {"Sort", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits, comparer);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::Sort(::System::Collections::Generic::IList_1<T>*  hits, ::System::Collections::Generic::IComparer_1<T>*  comparer, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                    {"Sort", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hits, comparer, count);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedTargets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, unsortedTargets, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  unsortedTargets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  distanceEvaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, unsortedTargets, results, distanceEvaluator);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactablesToSort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, interactablesToSort);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortByDistanceToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactablesToSort, ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*  distanceEvaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"SortByDistanceToInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactor, interactablesToSort, distanceEvaluator);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers::InteractableDistanceComparison(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  x, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers*>(),
                        {"InteractableDistanceComparison", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers::SortingHelpers()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator.EvaluateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::EvaluateDistance)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb41d0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator.SqDistanceToInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::SqDistanceToInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb41d0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"SqDistanceToInteractable", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator.SqDistanceToInteractable$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::SqDistanceToInteractable$BurstManaged)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb41d308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"SqDistanceToInteractable$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::SqDistanceToInteractable(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"SqDistanceToInteractable", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, attachPosition, interactablePosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::SqDistanceToInteractable$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>(),
                        {"SqDistanceToInteractable$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, attachPosition, interactablePosition);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr  UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::operator ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_SquareDistanceAttachPointEvaluator::SortingHelpers_SquareDistanceAttachPointEvaluator()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb41d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb41d5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb41d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, attachPosition, interactablePosition);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb41d334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb41d3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb41d3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb41d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, attachPosition, interactablePosition);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  attachPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactablePosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, attachPosition, interactablePosition, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate::SquareDistanceAttachPointEvaluator_SortingHelpers_SqDistanceToInteractable_000017C3$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator.EvaluateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::EvaluateDistance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb41cc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr  UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::operator ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_ClosestPointOnColliderEvaluator::SortingHelpers_ClosestPointOnColliderEvaluator()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator.EvaluateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::EvaluateDistance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb41cbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb41cba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*>(),
                        {"EvaluateDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr  UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::operator ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::i___UnityEngine__XR__Interaction__Toolkit__IInteractorDistanceEvaluator() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::SortingHelpers_InteractableBasedEvaluator::SortingHelpers_InteractableBasedEvaluator()   {
}
