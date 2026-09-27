#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRBaseTargetFilter_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.InteractableScoreDescendingComparison
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::InteractableScoreDescendingComparison)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4aafa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"InteractableScoreDescendingComparison", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.get_linkedInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_linkedInteractors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ab064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_linkedInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.get_evaluators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_evaluators)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ab06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_evaluators", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.get_evaluatorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_evaluatorCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4ab074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_evaluatorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.get_isProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_isProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ab0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_isProcessing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.set_isProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::set_isProcessing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ab0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"set_isProcessing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.add_interactorLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::add_interactorLinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ab0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"add_interactorLinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.remove_interactorLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::remove_interactorLinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ab17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"remove_interactorLinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.add_interactorUnlinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::add_interactorUnlinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ab22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"add_interactorUnlinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.remove_interactorUnlinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::remove_interactorUnlinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ab2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"remove_interactorUnlinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_canProcess)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4ab38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Awake)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb4ab3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnEnable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb4ab610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnDisable)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb4ab7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnDestroy)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xb4abbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4abdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.RegisterEvaluatorHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RegisterEvaluatorHandlers)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb4aa7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RegisterEvaluatorHandlers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.UnregisterEvaluatorHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::UnregisterEvaluatorHandlers)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb4aaa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"UnregisterEvaluatorHandlers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetLinkedInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetLinkedInteractors)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4abe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetLinkedInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetEvaluators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluators)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4ab544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluators", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4abf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4abfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetEvaluatorAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluatorAt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4ac04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluatorAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Type*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluator)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb4ac0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluator", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.GetEnabledEvaluators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEnabledEvaluators)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb4ab998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEnabledEvaluators", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.AddEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::System::Type*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::AddEvaluator)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb4ac278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"AddEvaluator", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.RemoveEvaluatorAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RemoveEvaluatorAt)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb4ac3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RemoveEvaluatorAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.RemoveEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RemoveEvaluator)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb4aae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RemoveEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.MoveEvaluatorTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::MoveEvaluatorTo)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb4ac530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"MoveEvaluatorTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.Link
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Link)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4ac604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.Unlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Unlink)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb4ac74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Process)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0xb4ac88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4acedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_LinkedInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkedInteractors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_LinkedInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinkedInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set_m_LinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinkedInteractors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_Evaluators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Evaluators;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_Evaluators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Evaluators;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set_m_Evaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Evaluators = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_IsAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAwake;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_m_IsAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAwake;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set_m_IsAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsAwake = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get__isProcessing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isProcessing_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get__isProcessing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isProcessing_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set__isProcessing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isProcessing_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_interactorLinked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorLinked;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_interactorLinked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorLinked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactorLinked = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_interactorUnlinked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorUnlinked;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_get_interactorUnlinked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorUnlinked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::__cordl_internal_set_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactorUnlinked = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::setStaticF_s_EvaluatorListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*, "s_EvaluatorListPool", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::getStaticF_s_EvaluatorListPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*, "s_EvaluatorListPool", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::setStaticF_s_InteractableFinalScoreMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*, "s_InteractableFinalScoreMap", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::getStaticF_s_InteractableFinalScoreMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*, "s_InteractableFinalScoreMap", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::setStaticF_s_InteractableScoreComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_InteractableScoreComparison", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(std::forward<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::getStaticF_s_InteractableScoreComparison()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_InteractableScoreComparison", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>();
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::InteractableScoreDescendingComparison(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  x, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"InteractableScoreDescendingComparison", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_linkedInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_linkedInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_evaluators()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_evaluators", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_evaluatorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_evaluatorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_isProcessing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"get_isProcessing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::set_isProcessing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"set_isProcessing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::add_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"add_interactorLinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::remove_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"remove_interactorLinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::add_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"add_interactorUnlinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::remove_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"remove_interactorUnlinked", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::get_canProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RegisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RegisterEvaluatorHandlers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evaluator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::UnregisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"UnregisterEvaluatorHandlers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evaluator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetLinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetLinkedInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluators", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluatorAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluatorAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(this, ___internal_method, index);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluator(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEvaluator", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(this, ___internal_method, type);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEvaluator()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {"GetEvaluator", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::GetEnabledEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"GetEnabledEvaluators", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::AddEvaluator(::System::Type*  evaluatorType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"AddEvaluator", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(this, ___internal_method, evaluatorType);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>)
inline T UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::AddEvaluator()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                    {"AddEvaluator", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RemoveEvaluatorAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RemoveEvaluatorAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::RemoveEvaluator(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"RemoveEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evaluator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::MoveEvaluatorTo(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {"MoveEvaluatorTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evaluator, newIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Link(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Unlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, targets, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::i___System__Collections__Generic__IEnumerable_1___UnityEngine__XR__Interaction__Toolkit__Filtering__XRTargetEvaluator__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter::XRTargetFilter()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ad254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c.__cctor_b__49_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::__cctor_b__49_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb4ad25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {"<.cctor>b__49_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c.__cctor_b__49_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::__cctor_b__49_1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4ad2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {"<.cctor>b__49_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::__cctor_b__49_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {"<.cctor>b__49_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::__cctor_b__49_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>(),
                        {"<.cctor>b__49_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c::XRTargetFilter___c()   {
}
