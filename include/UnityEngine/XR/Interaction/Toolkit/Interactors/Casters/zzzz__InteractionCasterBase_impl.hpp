#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/InteractionCasterBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__InteractionCasterBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__IInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRRayProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49030c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_castOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_castOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49031c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_castOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_castOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_castOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_castOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_effectiveCastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_effectiveCastOrigin)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb48e348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_effectiveCastOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_enableStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_enableStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_enableStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_enableStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_enableStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_enableStabilization", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49033c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb490354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.get_aimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_aimTarget)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb49035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_aimTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.set_aimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_aimTarget)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4903b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_aimTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::OnValidate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb49040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb48dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48dce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.TryGetColliderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::TryGetColliderTargets)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb48df34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.InitializeCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::InitializeCaster)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.UpdateInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::UpdateInternalData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb48e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase.InitializeStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::InitializeStabilization)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xb49049c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb490164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get__isInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get__isInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInitialized_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set__isInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInitialized_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_CastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CastOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_CastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CastOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_CastOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CastOrigin = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_EnableStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStabilization;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_EnableStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_EnableStabilization(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableStabilization = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_PositionStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_PositionStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_PositionStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionStabilization = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AngleStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AngleStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_AngleStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngleStabilization = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AimTargetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AimTargetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_AimTargetObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimTargetObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AimTargetObjectRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObjectRef;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_AimTargetObjectRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObjectRef;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_AimTargetObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimTargetObjectRef = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_InitializedStabilizationOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializedStabilizationOrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_InitializedStabilizationOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializedStabilizationOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_InitializedStabilizationOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitializedStabilizationOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_StabilizationAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StabilizationAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_StabilizationAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StabilizationAnchor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_StabilizationAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StabilizationAnchor = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_LastStabilizationUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastStabilizationUpdateTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_get_m_LastStabilizationUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastStabilizationUpdateTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::__cordl_internal_set_m_LastStabilizationUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastStabilizationUpdateTime = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_castOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_castOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_castOrigin(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_castOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_effectiveCastOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_effectiveCastOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_enableStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_enableStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_enableStabilization(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_enableStabilization", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_positionStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_positionStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_angleStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_angleStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::get_aimTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"get_aimTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::set_aimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {"set_aimTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::InitializeCaster()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::UpdateInternalData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::InitializeStabilization()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase::InteractionCasterBase()   {
}
