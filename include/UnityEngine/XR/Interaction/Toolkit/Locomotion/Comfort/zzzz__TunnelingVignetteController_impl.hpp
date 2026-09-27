#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/TunnelingVignetteController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__EaseState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__TunnelingVignetteController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__EaseState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__ITunnelingVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__LocomotionVignetteProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__TunnelingVignetteController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__VignetteParameters_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.get_defaultParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_defaultParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4551cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_defaultParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.set_defaultParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::set_defaultParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4551d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"set_defaultParameters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.get_currentParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_currentParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4551dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_currentParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.get_locomotionVignetteProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_locomotionVignetteProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4551e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_locomotionVignetteProviders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.set_locomotionVignetteProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::set_locomotionVignetteProviders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4551ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"set_locomotionVignetteProviders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.add_vignetteProviderQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::add_vignetteProviderQueued)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4551f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"add_vignetteProviderQueued", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.remove_vignetteProviderQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::remove_vignetteProviderQueued)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4552c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"remove_vignetteProviderQueued", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.BeginTunnelingVignette
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::BeginTunnelingVignette)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb45538c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"BeginTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.EndTunnelingVignette
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::EndTunnelingVignette)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xb45561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"EndTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.PreviewInEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::PreviewInEditor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb45592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"PreviewInEditor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb455bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb455c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Update)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0xb455ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.UpdateTunnelingVignette
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::UpdateTunnelingVignette)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb4559cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"UpdateTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController.TrySetUpMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::TrySetUpMaterial)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xb45640c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"TrySetUpMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb456830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_DefaultParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultParameters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_DefaultParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultParameters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_DefaultParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultParameters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_CurrentParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentParameters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_CurrentParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentParameters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_CurrentParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentParameters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_LocomotionVignetteProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocomotionVignetteProviders;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_LocomotionVignetteProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocomotionVignetteProviders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_LocomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocomotionVignetteProviders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_ProviderRecords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderRecords;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_ProviderRecords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderRecords;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_ProviderRecords(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProviderRecords = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_MeshRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshRender;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_MeshRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshRender;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_MeshRender(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshRender = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_MeshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_MeshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_MeshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_SharedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_SharedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_SharedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SharedMaterial = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_VignettePropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VignettePropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_get_m_VignettePropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VignettePropertyBlock;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::__cordl_internal_set_m_VignettePropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VignettePropertyBlock = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::setStaticF_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*, "vignetteProviderQueued", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(std::forward<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::getStaticF_vignetteProviderQueued()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*, "vignetteProviderQueued", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_defaultParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_defaultParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::set_defaultParameters(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"set_defaultParameters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_currentParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_currentParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::get_locomotionVignetteProviders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"get_locomotionVignetteProviders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::set_locomotionVignetteProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"set_locomotionVignetteProviders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::LocomotionVignetteProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::add_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"add_vignetteProviderQueued", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::remove_vignetteProviderQueued(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"remove_vignetteProviderQueued", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::BeginTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"BeginTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::EndTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"EndTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::PreviewInEditor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  previewParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"PreviewInEditor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previewParameters);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::UpdateTunnelingVignette(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"UpdateTunnelingVignette", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::TrySetUpMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {"TrySetUpMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController::TunnelingVignetteController()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.get_provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.get_easeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_easeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_easeState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.set_easeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_easeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_easeState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.get_dynamicApertureSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_dynamicApertureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_dynamicApertureSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.set_dynamicApertureSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_dynamicApertureSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_dynamicApertureSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.get_easeInLockEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_easeInLockEnded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_easeInLockEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.set_easeInLockEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_easeInLockEnded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_easeInLockEnded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.get_dynamicEaseOutDelayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_dynamicEaseOutDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_dynamicEaseOutDelayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord.set_dynamicEaseOutDelayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_dynamicEaseOutDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb456aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_dynamicEaseOutDelayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4555e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__provider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__provider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____provider_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_set__provider_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____provider_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__easeState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeState_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__easeState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeState_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_set__easeState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____easeState_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__dynamicApertureSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicApertureSize_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__dynamicApertureSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicApertureSize_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_set__dynamicApertureSize_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicApertureSize_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__easeInLockEnded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeInLockEnded_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__easeInLockEnded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeInLockEnded_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_set__easeInLockEnded_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____easeInLockEnded_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicEaseOutDelayTime_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_get__dynamicEaseOutDelayTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicEaseOutDelayTime_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::__cordl_internal_set__dynamicEaseOutDelayTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicEaseOutDelayTime_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_easeState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_easeState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_easeState(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_easeState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_dynamicApertureSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_dynamicApertureSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_dynamicApertureSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_dynamicApertureSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_easeInLockEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_easeInLockEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_easeInLockEnded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_easeInLockEnded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::get_dynamicEaseOutDelayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"get_dynamicEaseOutDelayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::set_dynamicEaseOutDelayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {"set_dynamicEaseOutDelayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord* UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::New_ctor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::ITunnelingVignetteProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord*>(provider));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ProviderRecord::TunnelingVignetteController_ProviderRecord()   {
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::setStaticF_apertureSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "apertureSize", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::getStaticF_apertureSize()  {
return ::cordl_internals::getStaticField<int32_t, "apertureSize", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::setStaticF_featheringEffect(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "featheringEffect", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::getStaticF_featheringEffect()  {
return ::cordl_internals::getStaticField<int32_t, "featheringEffect", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::setStaticF_vignetteColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "vignetteColor", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::getStaticF_vignetteColor()  {
return ::cordl_internals::getStaticField<int32_t, "vignetteColor", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::setStaticF_vignetteColorBlend(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "vignetteColorBlend", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::getStaticF_vignetteColorBlend()  {
return ::cordl_internals::getStaticField<int32_t, "vignetteColorBlend", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::TunnelingVignetteController_ShaderPropertyLookup::TunnelingVignetteController_ShaderPropertyLookup()   {
}
