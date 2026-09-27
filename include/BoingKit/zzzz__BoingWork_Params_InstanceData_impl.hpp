#pragma once
// IWYU pragma private; include "BoingKit/BoingWork_Params_InstanceData.hpp"
#include "BoingKit/zzzz__QuaternionSpring_impl.hpp"
#include "BoingKit/zzzz__Vector3Spring_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_def.hpp"
#include "BoingKit/zzzz__BoingBones_def.hpp"
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)()>(&::GlobalNamespace::Params_BoingWork_InstanceData::Reset)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5e21918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::UnityEngine::Vector3, bool)>(&::GlobalNamespace::Params_BoingWork_InstanceData::Reset)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e2588c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::by_ref<::GlobalNamespace::BoingWork_Params>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::Params_BoingWork_InstanceData::PrepareExecute)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5e25a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PrepareExecute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::by_ref<::GlobalNamespace::BoingWork_Params>, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::Params_BoingWork_InstanceData::PrepareExecute)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e25cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PrepareExecute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.AccumulateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::by_ref<::GlobalNamespace::BoingWork_Params>, ::by_ref<::GlobalNamespace::BoingEffector_Params>, float_t)>(&::GlobalNamespace::Params_BoingWork_InstanceData::AccumulateTarget)> {
  constexpr static std::size_t size = 0xa40;
  constexpr static std::size_t addrs = 0x5e21abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.EndAccumulateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::by_ref<::GlobalNamespace::BoingWork_Params>)>(&::GlobalNamespace::Params_BoingWork_InstanceData::EndAccumulateTargets)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e22550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"EndAccumulateTargets", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::by_ref<::GlobalNamespace::BoingWork_Params>, float_t)>(&::GlobalNamespace::Params_BoingWork_InstanceData::Execute)> {
  constexpr static std::size_t size = 0x7fc;
  constexpr static std::size_t addrs = 0x5e22704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.PullResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)(::BoingKit::BoingBones*)>(&::GlobalNamespace::Params_BoingWork_InstanceData::PullResults)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x5e24c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PullResults", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Params_BoingWork_InstanceData.SuppressWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Params_BoingWork_InstanceData::*)()>(&::GlobalNamespace::Params_BoingWork_InstanceData::SuppressWarnings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e26e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"SuppressWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Params_BoingWork_InstanceData::setStaticF_Stride(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Stride", ::GlobalNamespace::Params_BoingWork_InstanceData>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::Params_BoingWork_InstanceData::getStaticF_Stride()  {
return ::cordl_internals::getStaticField<int32_t, "Stride", ::GlobalNamespace::Params_BoingWork_InstanceData>();
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::Reset(::UnityEngine::Vector3  position, bool  instantAccumulation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, instantAccumulation);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::PrepareExecute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, bool  accumulateEffectors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PrepareExecute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p, position, rotation, scale, accumulateEffectors);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::PrepareExecute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::UnityEngine::Vector3  gridCenter, ::UnityEngine::Quaternion  gridRotation, ::UnityEngine::Vector3  cellOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PrepareExecute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p, gridCenter, gridRotation, cellOffset);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::AccumulateTarget(::by_ref<::GlobalNamespace::BoingWork_Params>  p, ::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"AccumulateTarget", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BoingEffector_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p, effector, dt);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::EndAccumulateTargets(::by_ref<::GlobalNamespace::BoingWork_Params>  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"EndAccumulateTargets", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::Execute(::by_ref<::GlobalNamespace::BoingWork_Params>  p, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BoingWork_Params>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p, dt);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::PullResults(::BoingKit::BoingBones*  bones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"PullResults", {}, {::i2c::type_of<::BoingKit::BoingBones*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bones);
}
inline void GlobalNamespace::Params_BoingWork_InstanceData::SuppressWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Params_BoingWork_InstanceData>(),
                        {"SuppressWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "PositionTarget", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding0", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding1", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationTarget", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationOrigin", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleTarget", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding2", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_numEffectors", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_instantAccumulation", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_upWs", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_minScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationSpring", ty: "::BoingKit::QuaternionSpring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleSpring", ty: "::BoingKit::Vector3Spring", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PositionPropagationWorkData", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_padding5", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RotationPropagationWorkData", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Params_BoingWork_InstanceData::Params_BoingWork_InstanceData(::UnityEngine::Vector3  PositionTarget, float_t  m_padding0, ::UnityEngine::Vector3  PositionOrigin, float_t  m_padding1, ::UnityEngine::Vector4  RotationTarget, ::UnityEngine::Vector4  RotationOrigin, ::UnityEngine::Vector3  ScaleTarget, float_t  m_padding2, int32_t  m_numEffectors, int32_t  m_instantAccumulation, int32_t  m_padding3, int32_t  m_padding4, ::UnityEngine::Vector3  m_upWs, float_t  m_minScale, ::BoingKit::Vector3Spring  PositionSpring, ::BoingKit::QuaternionSpring  RotationSpring, ::BoingKit::Vector3Spring  ScaleSpring, ::UnityEngine::Vector3  PositionPropagationWorkData, float_t  m_padding5, ::UnityEngine::Vector4  RotationPropagationWorkData) noexcept  {
this->PositionTarget = PositionTarget;
this->m_padding0 = m_padding0;
this->PositionOrigin = PositionOrigin;
this->m_padding1 = m_padding1;
this->RotationTarget = RotationTarget;
this->RotationOrigin = RotationOrigin;
this->ScaleTarget = ScaleTarget;
this->m_padding2 = m_padding2;
this->m_numEffectors = m_numEffectors;
this->m_instantAccumulation = m_instantAccumulation;
this->m_padding3 = m_padding3;
this->m_padding4 = m_padding4;
this->m_upWs = m_upWs;
this->m_minScale = m_minScale;
this->PositionSpring = PositionSpring;
this->RotationSpring = RotationSpring;
this->ScaleSpring = ScaleSpring;
this->PositionPropagationWorkData = PositionPropagationWorkData;
this->m_padding5 = m_padding5;
this->RotationPropagationWorkData = RotationPropagationWorkData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Params_BoingWork_InstanceData::Params_BoingWork_InstanceData()   {
}
