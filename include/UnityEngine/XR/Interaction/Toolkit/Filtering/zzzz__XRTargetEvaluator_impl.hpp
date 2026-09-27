#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.IsInstanceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::IsInstanceType)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4aa320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"IsInstanceType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* (*)(::System::Type*, ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::CreateInstance)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb4aa410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.get_filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_filter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4aa4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_filter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4aa4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::set_enabled)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb4aa4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.get_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4aa75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.set_weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::set_weight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4aa764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"set_weight", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.get_disposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_disposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4aa6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_disposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.RegisterHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::RegisterHandlers)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4aa76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"RegisterHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.UnregisterHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::UnregisterHandlers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4aaa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"UnregisterHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.AwakeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::AwakeInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4aad54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"AwakeInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.DisposeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::DisposeInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4aad98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"DisposeInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.EnableInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::EnableInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4aa704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"EnableInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.DisableInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::DisableInternal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4aa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"DisableInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4aadd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.OnDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnDispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4aaddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a97f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4aa1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.GetWeightedScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::GetWeightedScore)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4aade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"GetWeightedScore", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.CalculateNormalizedScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::CalculateNormalizedScore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4aae0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4a9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter>& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Filter;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Filter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_Filter(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Filter = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Enabled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Enabled = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Weight;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Weight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_Weight(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Weight = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAwake;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsAwake;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_IsAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsAwake = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsEnabled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsEnabled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_IsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsEnabled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_get_m_IsRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::__cordl_internal_set_m_IsRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsRegistered = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::IsInstanceType(::System::Type*  evaluatorType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"IsInstanceType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, evaluatorType);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::CreateInstance(::System::Type*  evaluatorType, ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(nullptr, ___internal_method, evaluatorType, filter);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_filter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_filter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::set_weight(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"set_weight", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::get_disposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"get_disposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::RegisterHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"RegisterHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::UnregisterHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"UnregisterHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::AwakeInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"AwakeInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::DisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"DisposeInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::EnableInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"EnableInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::DisableInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"DisableInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnDispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::GetWeightedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"GetWeightedScore", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, target);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, target);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator::XRTargetEvaluator()   {
}
