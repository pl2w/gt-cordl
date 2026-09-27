#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Params.hpp"
#include "BoingKit/zzzz__Bits32_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_impl.hpp"
#include "BoingKit/zzzz__ParameterMode_impl.hpp"
#include "BoingKit/zzzz__TwoDPlaneEnum_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BoingWork_Params>, ::by_ref<::GlobalNamespace::BoingWork_Params>)>(&::GlobalNamespace::BoingWork_Params::Copy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e21854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Copy", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)()>(&::GlobalNamespace::BoingWork_Params::Init)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e21880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.AccumulateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)(::by_ref<::GlobalNamespace::BoingEffector_Params>, float_t)>(&::GlobalNamespace::BoingWork_Params::AccumulateTarget)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e21a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.EndAccumulateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)()>(&::GlobalNamespace::BoingWork_Params::EndAccumulateTargets)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e224fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"EndAccumulateTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)(float_t)>(&::GlobalNamespace::BoingWork_Params::Execute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2269c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Execute", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)(::BoingKit::BoingBones*, float_t)>(&::GlobalNamespace::BoingWork_Params::Execute)> {
  constexpr static std::size_t size = 0x1550;
  constexpr static std::size_t addrs = 0x5e22f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Execute", {}, {::i2c::type_of<::BoingKit::BoingBones*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.PullResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)(::BoingKit::BoingBones*)>(&::GlobalNamespace::BoingWork_Params::PullResults)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e24c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"PullResults", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoingWork_Params.SuppressWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoingWork_Params::*)()>(&::GlobalNamespace::BoingWork_Params::SuppressWarnings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e256f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"SuppressWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoingWork_Params::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::GlobalNamespace::BoingWork_Params>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BoingWork_Params::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::GlobalNamespace::BoingWork_Params>();
}
inline void GlobalNamespace::BoingWork_Params::Copy(::by_ref<::GlobalNamespace::BoingWork_Params>  from, ::by_ref<::GlobalNamespace::BoingWork_Params>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Copy", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void GlobalNamespace::BoingWork_Params::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BoingWork_Params::AccumulateTarget(::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, effector, dt);
}
inline void GlobalNamespace::BoingWork_Params::EndAccumulateTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"EndAccumulateTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BoingWork_Params::Execute(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Execute", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dt);
}
inline void GlobalNamespace::BoingWork_Params::Execute(::BoingKit::BoingBones*  bones, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"Execute", {}, {::i2c::type_of<::BoingKit::BoingBones*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bones, dt);
}
inline void GlobalNamespace::BoingWork_Params::PullResults(::BoingKit::BoingBones*  bones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"PullResults", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bones);
}
inline void GlobalNamespace::BoingWork_Params::SuppressWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoingWork_Params>(),
                        {"SuppressWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "InstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bits", ty: "::BoingKit::Bits32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TwoDPlane", ty: "::BoingKit::TwoDPlaneEnum", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleParameterMode", ty: "::BoingKit::ParameterMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionExponentialHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionOscillationHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionOscillationFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MoveReactionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LinearImpulseMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationExponentialHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationOscillationHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationOscillationFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationReactionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularImpulseMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleExponentialHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleOscillationHalfLife", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleOscillationFrequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleOscillationDampingRatio", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationReactionUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Instance", ty: "::GlobalNamespace::Params_BoingWork_InstanceData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingWork_Params::BoingWork_Params(int32_t  InstanceID, ::BoingKit::Bits32  Bits, ::BoingKit::TwoDPlaneEnum  TwoDPlane, int32_t  m_padding0, ::BoingKit::ParameterMode  PositionParameterMode, ::BoingKit::ParameterMode  RotationParameterMode, ::BoingKit::ParameterMode  ScaleParameterMode, int32_t  m_padding1, float_t  PositionExponentialHalfLife, float_t  PositionOscillationHalfLife, float_t  PositionOscillationFrequency, float_t  PositionOscillationDampingRatio, float_t  MoveReactionMultiplier, float_t  LinearImpulseMultiplier, float_t  RotationExponentialHalfLife, float_t  RotationOscillationHalfLife, float_t  RotationOscillationFrequency, float_t  RotationOscillationDampingRatio, float_t  RotationReactionMultiplier, float_t  AngularImpulseMultiplier, float_t  ScaleExponentialHalfLife, float_t  ScaleOscillationHalfLife, float_t  ScaleOscillationFrequency, float_t  ScaleOscillationDampingRatio, ::UnityEngine::Vector3  RotationReactionUp, float_t  m_padding2, ::GlobalNamespace::Params_BoingWork_InstanceData  Instance) noexcept  {
this->InstanceID = InstanceID;
this->Bits = Bits;
this->TwoDPlane = TwoDPlane;
this->m_padding0 = m_padding0;
this->PositionParameterMode = PositionParameterMode;
this->RotationParameterMode = RotationParameterMode;
this->ScaleParameterMode = ScaleParameterMode;
this->m_padding1 = m_padding1;
this->PositionExponentialHalfLife = PositionExponentialHalfLife;
this->PositionOscillationHalfLife = PositionOscillationHalfLife;
this->PositionOscillationFrequency = PositionOscillationFrequency;
this->PositionOscillationDampingRatio = PositionOscillationDampingRatio;
this->MoveReactionMultiplier = MoveReactionMultiplier;
this->LinearImpulseMultiplier = LinearImpulseMultiplier;
this->RotationExponentialHalfLife = RotationExponentialHalfLife;
this->RotationOscillationHalfLife = RotationOscillationHalfLife;
this->RotationOscillationFrequency = RotationOscillationFrequency;
this->RotationOscillationDampingRatio = RotationOscillationDampingRatio;
this->RotationReactionMultiplier = RotationReactionMultiplier;
this->AngularImpulseMultiplier = AngularImpulseMultiplier;
this->ScaleExponentialHalfLife = ScaleExponentialHalfLife;
this->ScaleOscillationHalfLife = ScaleOscillationHalfLife;
this->ScaleOscillationFrequency = ScaleOscillationFrequency;
this->ScaleOscillationDampingRatio = ScaleOscillationDampingRatio;
this->RotationReactionUp = RotationReactionUp;
this->m_padding2 = m_padding2;
this->Instance = Instance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingWork_Params::BoingWork_Params()   {
}
