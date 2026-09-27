#pragma once
// IWYU pragma private; include "BoingKit/BoingEffector_Params.hpp"
#include "BoingKit/zzzz__Bits32_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingEffector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoingEffector_Params._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingEffector_Params::*)(::BoingKit::BoingEffector*)>(&::GlobalNamespace::BoingEffector_Params::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5e16308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {".ctor", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingEffector_Params.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingEffector_Params::*)(::BoingKit::BoingEffector*)>(&::GlobalNamespace::BoingEffector_Params::Fill)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e164f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {"Fill", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingEffector_Params.SuppressWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingEffector_Params::*)()>(&::GlobalNamespace::BoingEffector_Params::SuppressWarnings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e16530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {"SuppressWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoingEffector_Params::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::GlobalNamespace::BoingEffector_Params>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BoingEffector_Params::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::GlobalNamespace::BoingEffector_Params>();
}
inline void GlobalNamespace::BoingEffector_Params::_ctor(::BoingKit::BoingEffector*  effector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {".ctor", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, effector);
}
inline void GlobalNamespace::BoingEffector_Params::Fill(::BoingKit::BoingEffector*  effector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {"Fill", {}, {::i2c::type_of<::BoingKit::BoingEffector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, effector);
}
inline void GlobalNamespace::BoingEffector_Params::SuppressWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingEffector_Params>(),
                        {"SuppressWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PrevPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CurrPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LinearVelocityDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FullEffectRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MoveDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LinearImpulse", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotateAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularImpulse", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bits", ty: "::BoingKit::Bits32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingEffector_Params::BoingEffector_Params(::UnityEngine::Vector3  PrevPosition, float_t  m_padding0, ::UnityEngine::Vector3  CurrPosition, float_t  m_padding1, ::UnityEngine::Vector3  LinearVelocityDir, float_t  m_padding2, float_t  Radius, float_t  FullEffectRadius, float_t  MoveDistance, float_t  LinearImpulse, float_t  RotateAngle, float_t  AngularImpulse, ::BoingKit::Bits32  Bits, int32_t  m_padding3) noexcept  {
this->PrevPosition = PrevPosition;
this->m_padding0 = m_padding0;
this->CurrPosition = CurrPosition;
this->m_padding1 = m_padding1;
this->LinearVelocityDir = LinearVelocityDir;
this->m_padding2 = m_padding2;
this->Radius = Radius;
this->FullEffectRadius = FullEffectRadius;
this->MoveDistance = MoveDistance;
this->LinearImpulse = LinearImpulse;
this->RotateAngle = RotateAngle;
this->AngularImpulse = AngularImpulse;
this->Bits = Bits;
this->m_padding3 = m_padding3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingEffector_Params::BoingEffector_Params()   {
}
