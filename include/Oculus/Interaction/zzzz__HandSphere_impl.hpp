#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandSphere.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__HandSphere_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandSphere.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::HandSphere::*)()>(&::Oculus::Interaction::HandSphere::get_Position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa465808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphere.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandSphere::*)()>(&::Oculus::Interaction::HandSphere::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa465814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphere.get_Joint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (::Oculus::Interaction::HandSphere::*)()>(&::Oculus::Interaction::HandSphere::get_Joint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46581c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Joint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandSphere._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandSphere::*)(::UnityEngine::Vector3, float_t, ::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::HandSphere::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa46556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::HandSphere::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::HandSphere::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::HandSphere::get_Joint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {"get_Joint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(*this, ___internal_method);
}
inline void Oculus::Interaction::HandSphere::_ctor(::UnityEngine::Vector3  position, float_t  radius, ::Oculus::Interaction::Input::HandJointId  joint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandSphere>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, radius, joint);
}
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Radius_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Joint_k__BackingField", ty: "::Oculus::Interaction::Input::HandJointId", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::HandSphere::HandSphere(::UnityEngine::Vector3  _Position_k__BackingField, float_t  _Radius_k__BackingField, ::Oculus::Interaction::Input::HandJointId  _Joint_k__BackingField) noexcept  {
this->_Position_k__BackingField = _Position_k__BackingField;
this->_Radius_k__BackingField = _Radius_k__BackingField;
this->_Joint_k__BackingField = _Joint_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandSphere::HandSphere()   {
}
