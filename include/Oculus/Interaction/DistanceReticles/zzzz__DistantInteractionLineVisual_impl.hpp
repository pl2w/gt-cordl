#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/DistantInteractionLineVisual.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__DistantInteractionLineVisual_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__DistantInteractionLineVisual_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "Oculus/Interaction/zzzz__IDistanceInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.get_DistanceInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IDistanceInteractor* (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_DistanceInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_DistanceInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.set_DistanceInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_DistanceInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"set_DistanceInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.get_VisualOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_VisualOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_VisualOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.set_VisualOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(float_t)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_VisualOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"set_VisualOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.get_NumLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_NumLinePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_NumLinePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.get_TargetlessLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_TargetlessLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_TargetlessLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4ef428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4ef1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnEnable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4ef480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnDisable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4ef644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandleStateChanged)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4ef808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.HandlePostProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandlePostProcessed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4ef93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"HandlePostProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.InteractableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IRelativeToRef*)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa4efca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.InteractableUnset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableUnset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4efe28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.UpdateLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::UpdateLine)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xa4ef954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"UpdateLine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.RenderLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::ArrayW<::UnityEngine::Vector3>)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::RenderLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.HideLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HideLine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.TargetHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::TargetHit)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa4efe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"TargetHit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.EvaluateBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::EvaluateBezier)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4f0058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"EvaluateBezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.InjectAllDistantInteractionLineVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4f00d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"InjectAllDistantInteractionLineVisual", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual.InjectDistanceInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)(::Oculus::Interaction::IDistanceInteractor*)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectDistanceInteractor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4ef298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"InjectDistanceInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4ef374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__distanceInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__distanceInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distanceInteractor;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__distanceInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distanceInteractor = value;
}
constexpr ::Oculus::Interaction::IDistanceInteractor*& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__DistanceInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceInteractor_k__BackingField;
}
constexpr ::Oculus::Interaction::IDistanceInteractor* const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__DistanceInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceInteractor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__DistanceInteractor_k__BackingField(::Oculus::Interaction::IDistanceInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceInteractor_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__visualOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualOffset;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__visualOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visualOffset;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__visualOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visualOffset = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__linePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__linePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linePoints;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__linePoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linePoints = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__visibleDuringNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleDuringNormal;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__visibleDuringNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleDuringNormal;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__visibleDuringNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visibleDuringNormal = value;
}
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData*& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__target(::Oculus::Interaction::DistanceReticles::IReticleData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr int32_t& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__numLinePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numLinePoints;
}
constexpr int32_t const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__numLinePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numLinePoints;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__numLinePoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numLinePoints = value;
}
constexpr float_t& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__targetlessLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetlessLength;
}
constexpr float_t const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__targetlessLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetlessLength;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__targetlessLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetlessLength = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__shouldDrawLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDrawLine;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__shouldDrawLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDrawLine;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__shouldDrawLine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldDrawLine = value;
}
constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__dummyTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTarget;
}
constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle* const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_get__dummyTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dummyTarget;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::__cordl_internal_set__dummyTarget(::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dummyTarget = value;
}
inline ::Oculus::Interaction::IDistanceInteractor* Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_DistanceInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_DistanceInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IDistanceInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_DistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"set_DistanceInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_VisualOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_VisualOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::set_VisualOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"set_VisualOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_NumLinePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_NumLinePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::get_TargetlessLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"get_TargetlessLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HandlePostProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"HandlePostProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableSet(::Oculus::Interaction::IRelativeToRef*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InteractableUnset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::UpdateLine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"UpdateLine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::RenderLine(::ArrayW<::UnityEngine::Vector3>  linePoints)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linePoints);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::HideLine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::TargetHit(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"TargetHit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::EvaluateBezier(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"EvaluateBezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start, middle, end, t);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectAllDistantInteractionLineVisual(::Oculus::Interaction::IDistanceInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"InjectAllDistantInteractionLineVisual", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::InjectDistanceInteractor(::Oculus::Interaction::IDistanceInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {"InjectDistanceInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IDistanceInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual* Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual::DistantInteractionLineVisual()   {
}
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f00dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle.set_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::set_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f00e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"set_Target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle.ProcessHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::ProcessHitPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4f00ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::*)()>(&::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f00d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::__cordl_internal_get__Target_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::__cordl_internal_get__Target_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Target_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::__cordl_internal_set__Target_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Target_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::set_Target(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"set_Target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::ProcessHitPoint(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
inline void Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle* Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle*>());
}
/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr  Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::operator ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::DistantInteractionLineVisual_DummyPointReticle::DistantInteractionLineVisual_DummyPointReticle()   {
}
