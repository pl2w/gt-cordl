#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField.hpp"
#include "BoingKit/zzzz__Aabb_impl.hpp"
#include "BoingKit/zzzz__BoingBase_impl.hpp"
#include "BoingKit/zzzz__BoingEffector_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_CellMoveModeEnum_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffDimensionsEnum_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffModeEnum_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_FieldParams_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_HardwareModeEnum_impl.hpp"
#include "BoingKit/zzzz__BoingWork_Params_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_CellMoveModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffDimensionsEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FalloffModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_FieldParams_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_HardwareModeEnum_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_def.hpp"
#include "BoingKit/zzzz__SharedBoingParams_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingReactorField.get_ShaderPropertyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::BoingReactorField_ShaderPropertyIdSet* (*)()>(&::BoingKit::BoingReactorField::get_ShaderPropertyId)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e1b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"get_ShaderPropertyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.UpdateShaderConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::BoingReactorField::*)(::UnityEngine::MaterialPropertyBlock*, float_t, float_t)>(&::BoingKit::BoingReactorField::UpdateShaderConstants)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e1b874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateShaderConstants", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.UpdateShaderConstants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::BoingReactorField::*)(::UnityEngine::Material*, float_t, float_t)>(&::BoingKit::BoingReactorField::UpdateShaderConstants)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e1b978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateShaderConstants", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.get_GpuResourceSetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::get_GpuResourceSetId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e1ba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"get_GpuResourceSetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e1ba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.Reboot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::Reboot)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e1bbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Reboot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e1bedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e1bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e1bf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.DisposeCpuResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::DisposeCpuResources)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e1bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DisposeCpuResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.DisposeGpuResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::DisposeGpuResources)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e1bfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DisposeGpuResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.SampleCpuGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::BoingReactorField::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector4>)>(&::BoingKit::BoingReactorField::SampleCpuGrid)> {
  constexpr static std::size_t size = 0xea4;
  constexpr static std::size_t addrs = 0x5e1c0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"SampleCpuGrid", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.UpdateFieldParamsGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::UpdateFieldParamsGpu)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5e1d0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateFieldParamsGpu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.UpdateFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::UpdateFlags)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e1d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.UpdateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::UpdateBounds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5e1d4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.PrepareExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::PrepareExecute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e1d5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PrepareExecute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ValidateCpuResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::ValidateCpuResources)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5e1d730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ValidateCpuResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ValidateGpuResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::ValidateGpuResources)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x5e1d97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ValidateGpuResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.FinishPrepareExecuteCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::FinishPrepareExecuteCpu)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5e1e74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"FinishPrepareExecuteCpu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.FinishPrepareExecuteGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::FinishPrepareExecuteGpu)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e1e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"FinishPrepareExecuteGpu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e1d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.Sanitize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::Sanitize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e1e9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Sanitize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.HandleCellMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::HandleCellMove)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5e1e3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"HandleCellMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.InitPropagationCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>)>(&::BoingKit::BoingReactorField::InitPropagationCpu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e1f1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"InitPropagationCpu", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.PropagateSpringCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>, float_t)>(&::BoingKit::BoingReactorField::PropagateSpringCpu)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e1f228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PropagateSpringCpu", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ExtendPropagationBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>, float_t, int32_t, int32_t, int32_t)>(&::BoingKit::BoingReactorField::ExtendPropagationBorder)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e1f314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExtendPropagationBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.AccumulatePropagationWeightedNeighbor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>, ::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>, float_t)>(&::BoingKit::BoingReactorField::AccumulatePropagationWeightedNeighbor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e1f37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"AccumulatePropagationWeightedNeighbor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.GatherPropagation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>, float_t)>(&::BoingKit::BoingReactorField::GatherPropagation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e1f3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GatherPropagation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.AnchorPropagationBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>)>(&::BoingKit::BoingReactorField::AnchorPropagationBorder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e1f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"AnchorPropagationBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.PropagateCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(float_t)>(&::BoingKit::BoingReactorField::PropagateCpu)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x5e1f4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PropagateCpu", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.WrapCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(int32_t, int32_t, int32_t)>(&::BoingKit::BoingReactorField::WrapCpu)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x5e1eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"WrapCpu", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.WrapGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(int32_t, int32_t, int32_t)>(&::BoingKit::BoingReactorField::WrapGpu)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5e1efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"WrapGpu", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ExecuteCpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(float_t)>(&::BoingKit::BoingReactorField::ExecuteCpu)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5e1fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExecuteCpu", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ExecuteGpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(float_t, ::UnityEngine::ComputeBuffer*, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*)>(&::BoingKit::BoingReactorField::ExecuteGpu)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5e198b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExecuteGpu", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e1ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(bool)>(&::BoingKit::BoingReactorField::DrawGizmos)> {
  constexpr static std::size_t size = 0x910;
  constexpr static std::size_t addrs = 0x5e1ffd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.GetGridCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingReactorField::*)()>(&::BoingKit::BoingReactorField::GetGridCenter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e208e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GetGridCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.QuantizeNorm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingReactorField::*)(::UnityEngine::Vector3)>(&::BoingKit::BoingReactorField::QuantizeNorm)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e1bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"QuantizeNorm", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.GetCellCenterOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BoingKit::BoingReactorField::*)(int32_t, int32_t, int32_t)>(&::BoingKit::BoingReactorField::GetCellCenterOffset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e1cf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GetCellCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorField.ResolveCellIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField::*)(int32_t, int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::BoingKit::BoingReactorField::ResolveCellIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e1d010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ResolveCellIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoingReactorField_FieldParams& BoingKit::BoingReactorField::__cordl_internal_get_m_fieldParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldParams;
}
constexpr ::GlobalNamespace::BoingReactorField_FieldParams const& BoingKit::BoingReactorField::__cordl_internal_get_m_fieldParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldParams;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_fieldParams(::GlobalNamespace::BoingReactorField_FieldParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fieldParams = value;
}
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum& BoingKit::BoingReactorField::__cordl_internal_get_HardwareMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HardwareMode;
}
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum const& BoingKit::BoingReactorField::__cordl_internal_get_HardwareMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HardwareMode;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_HardwareMode(::GlobalNamespace::BoingReactorField_HardwareModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HardwareMode = value;
}
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum& BoingKit::BoingReactorField::__cordl_internal_get_m_hardwareMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hardwareMode;
}
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum const& BoingKit::BoingReactorField::__cordl_internal_get_m_hardwareMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hardwareMode;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_hardwareMode(::GlobalNamespace::BoingReactorField_HardwareModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hardwareMode = value;
}
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum& BoingKit::BoingReactorField::__cordl_internal_get_CellMoveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellMoveMode;
}
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const& BoingKit::BoingReactorField::__cordl_internal_get_CellMoveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellMoveMode;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_CellMoveMode(::GlobalNamespace::BoingReactorField_CellMoveModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CellMoveMode = value;
}
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum& BoingKit::BoingReactorField::__cordl_internal_get_m_cellMoveMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellMoveMode;
}
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellMoveMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellMoveMode;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellMoveMode(::GlobalNamespace::BoingReactorField_CellMoveModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellMoveMode = value;
}
constexpr float_t& BoingKit::BoingReactorField::__cordl_internal_get_CellSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellSize;
}
constexpr float_t const& BoingKit::BoingReactorField::__cordl_internal_get_CellSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellSize;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_CellSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CellSize = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_CellsX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsX;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_CellsX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsX;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_CellsX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CellsX = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_CellsY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsY;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_CellsY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsY;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_CellsY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CellsY = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_CellsZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsZ;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_CellsZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CellsZ;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_CellsZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CellsZ = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsX;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsX;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellsX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellsX = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsY;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsY;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellsY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellsY = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsZ;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsZ;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellsZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellsZ = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseX;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseX;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_iCellBaseX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_iCellBaseX = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseY;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseY;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_iCellBaseY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_iCellBaseY = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseZ;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_iCellBaseZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_iCellBaseZ;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_iCellBaseZ(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_iCellBaseZ = value;
}
constexpr ::GlobalNamespace::BoingReactorField_FalloffModeEnum& BoingKit::BoingReactorField::__cordl_internal_get_FalloffMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffMode;
}
constexpr ::GlobalNamespace::BoingReactorField_FalloffModeEnum const& BoingKit::BoingReactorField::__cordl_internal_get_FalloffMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffMode;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_FalloffMode(::GlobalNamespace::BoingReactorField_FalloffModeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FalloffMode = value;
}
constexpr float_t& BoingKit::BoingReactorField::__cordl_internal_get_FalloffRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffRatio;
}
constexpr float_t const& BoingKit::BoingReactorField::__cordl_internal_get_FalloffRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffRatio;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_FalloffRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FalloffRatio = value;
}
constexpr ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum& BoingKit::BoingReactorField::__cordl_internal_get_FalloffDimensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffDimensions;
}
constexpr ::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum const& BoingKit::BoingReactorField::__cordl_internal_get_FalloffDimensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FalloffDimensions;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_FalloffDimensions(::GlobalNamespace::BoingReactorField_FalloffDimensionsEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FalloffDimensions = value;
}
constexpr ::ArrayW<::UnityW<::BoingKit::BoingEffector>>& BoingKit::BoingReactorField::__cordl_internal_get_Effectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effectors;
}
constexpr ::ArrayW<::UnityW<::BoingKit::BoingEffector>> const& BoingKit::BoingReactorField::__cordl_internal_get_Effectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effectors;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_Effectors(::ArrayW<::UnityW<::BoingKit::BoingEffector>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effectors = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_numEffectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_numEffectors;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_numEffectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_numEffectors;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_numEffectors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_numEffectors = value;
}
constexpr ::BoingKit::Aabb& BoingKit::BoingReactorField::__cordl_internal_get_m_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bounds;
}
constexpr ::BoingKit::Aabb const& BoingKit::BoingReactorField::__cordl_internal_get_m_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bounds;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_bounds(::BoingKit::Aabb  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bounds = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_TwoDDistanceCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDDistanceCheck;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_TwoDDistanceCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDDistanceCheck;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_TwoDDistanceCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDDistanceCheck = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_TwoDPositionInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDPositionInfluence;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_TwoDPositionInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDPositionInfluence;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_TwoDPositionInfluence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDPositionInfluence = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_TwoDRotationInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDRotationInfluence;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_TwoDRotationInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwoDRotationInfluence;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_TwoDRotationInfluence(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwoDRotationInfluence = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_EnablePositionEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePositionEffect;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_EnablePositionEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePositionEffect;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_EnablePositionEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnablePositionEffect = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_EnableRotationEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRotationEffect;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_EnableRotationEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRotationEffect;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_EnableRotationEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableRotationEffect = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_GlobalReactionUpVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalReactionUpVector;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_GlobalReactionUpVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GlobalReactionUpVector;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_GlobalReactionUpVector(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GlobalReactionUpVector = value;
}
constexpr ::GlobalNamespace::BoingWork_Params& BoingKit::BoingReactorField::__cordl_internal_get_Params()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr ::GlobalNamespace::BoingWork_Params const& BoingKit::BoingReactorField::__cordl_internal_get_Params() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Params;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_Params(::GlobalNamespace::BoingWork_Params  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Params = value;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams>& BoingKit::BoingReactorField::__cordl_internal_get_SharedParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedParams;
}
constexpr ::UnityW<::BoingKit::SharedBoingParams> const& BoingKit::BoingReactorField::__cordl_internal_get_SharedParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedParams;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_SharedParams(::UnityW<::BoingKit::SharedBoingParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedParams = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_EnablePropagation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePropagation;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_EnablePropagation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnablePropagation;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_EnablePropagation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnablePropagation = value;
}
constexpr float_t& BoingKit::BoingReactorField::__cordl_internal_get_PositionPropagation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionPropagation;
}
constexpr float_t const& BoingKit::BoingReactorField::__cordl_internal_get_PositionPropagation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionPropagation;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_PositionPropagation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionPropagation = value;
}
constexpr float_t& BoingKit::BoingReactorField::__cordl_internal_get_RotationPropagation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationPropagation;
}
constexpr float_t const& BoingKit::BoingReactorField::__cordl_internal_get_RotationPropagation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationPropagation;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_RotationPropagation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationPropagation = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_PropagationDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationDepth;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_PropagationDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationDepth;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_PropagationDepth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropagationDepth = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_AnchorPropagationAtBorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorPropagationAtBorder;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_AnchorPropagationAtBorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnchorPropagationAtBorder;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_AnchorPropagationAtBorder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnchorPropagationAtBorder = value;
}
constexpr ::System::Object*& BoingKit::BoingReactorField::__cordl_internal_get_m_aCpuCell()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aCpuCell;
}
constexpr ::System::Object* const& BoingKit::BoingReactorField::__cordl_internal_get_m_aCpuCell() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_aCpuCell;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_aCpuCell(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_aCpuCell = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& BoingKit::BoingReactorField::__cordl_internal_get_m_shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& BoingKit::BoingReactorField::__cordl_internal_get_m_shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_shader;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_shader = value;
}
constexpr ::UnityEngine::ComputeBuffer*& BoingKit::BoingReactorField::__cordl_internal_get_m_effectorIndexBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_effectorIndexBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& BoingKit::BoingReactorField::__cordl_internal_get_m_effectorIndexBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_effectorIndexBuffer;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_effectorIndexBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_effectorIndexBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& BoingKit::BoingReactorField::__cordl_internal_get_m_reactorParamsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reactorParamsBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& BoingKit::BoingReactorField::__cordl_internal_get_m_reactorParamsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_reactorParamsBuffer;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_reactorParamsBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_reactorParamsBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& BoingKit::BoingReactorField::__cordl_internal_get_m_fieldParamsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldParamsBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& BoingKit::BoingReactorField::__cordl_internal_get_m_fieldParamsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldParamsBuffer;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_fieldParamsBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fieldParamsBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellsBuffer;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellsBuffer(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellsBuffer = value;
}
constexpr int32_t& BoingKit::BoingReactorField::__cordl_internal_get_m_gpuResourceSetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gpuResourceSetId;
}
constexpr int32_t const& BoingKit::BoingReactorField::__cordl_internal_get_m_gpuResourceSetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gpuResourceSetId;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_gpuResourceSetId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gpuResourceSetId = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_m_init()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_init;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_m_init() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_init;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_init(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_init = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingReactorField::__cordl_internal_get_m_gridCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gridCenter;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingReactorField::__cordl_internal_get_m_gridCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gridCenter;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_gridCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gridCenter = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingReactorField::__cordl_internal_get_m_qPrevGridCenterNorm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_qPrevGridCenterNorm;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingReactorField::__cordl_internal_get_m_qPrevGridCenterNorm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_qPrevGridCenterNorm;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_qPrevGridCenterNorm(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_qPrevGridCenterNorm = value;
}
constexpr bool& BoingKit::BoingReactorField::__cordl_internal_get_m_cellBufferNeedsReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellBufferNeedsReset;
}
constexpr bool const& BoingKit::BoingReactorField::__cordl_internal_get_m_cellBufferNeedsReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cellBufferNeedsReset;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_m_cellBufferNeedsReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cellBufferNeedsReset = value;
}
constexpr ::ArrayW<::GlobalNamespace::BoingWork_Params>& BoingKit::BoingReactorField::__cordl_internal_get_s_aReactorParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s_aReactorParams;
}
constexpr ::ArrayW<::GlobalNamespace::BoingWork_Params> const& BoingKit::BoingReactorField::__cordl_internal_get_s_aReactorParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___s_aReactorParams;
}
constexpr void BoingKit::BoingReactorField::__cordl_internal_set_s_aReactorParams(::ArrayW<::GlobalNamespace::BoingWork_Params>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___s_aReactorParams = value;
}
inline void BoingKit::BoingReactorField::setStaticF_s_shaderPropertyId(::BoingKit::BoingReactorField_ShaderPropertyIdSet*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingReactorField_ShaderPropertyIdSet*, "s_shaderPropertyId", ::BoingKit::BoingReactorField*>(std::forward<::BoingKit::BoingReactorField_ShaderPropertyIdSet*>(value));
}
inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* BoingKit::BoingReactorField::getStaticF_s_shaderPropertyId()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingReactorField_ShaderPropertyIdSet*, "s_shaderPropertyId", ::BoingKit::BoingReactorField*>();
}
inline void BoingKit::BoingReactorField::setStaticF_kPropagationFactor(float_t  value)  {
::cordl_internals::setStaticField<float_t, "kPropagationFactor", ::BoingKit::BoingReactorField*>(std::forward<float_t>(value));
}
inline float_t BoingKit::BoingReactorField::getStaticF_kPropagationFactor()  {
return ::cordl_internals::getStaticField<float_t, "kPropagationFactor", ::BoingKit::BoingReactorField*>();
}
inline void BoingKit::BoingReactorField::setStaticF_s_computeKernelId(::BoingKit::BoingReactorField_ComputeKernelId*  value)  {
::cordl_internals::setStaticField<::BoingKit::BoingReactorField_ComputeKernelId*, "s_computeKernelId", ::BoingKit::BoingReactorField*>(std::forward<::BoingKit::BoingReactorField_ComputeKernelId*>(value));
}
inline ::BoingKit::BoingReactorField_ComputeKernelId* BoingKit::BoingReactorField::getStaticF_s_computeKernelId()  {
return ::cordl_internals::getStaticField<::BoingKit::BoingReactorField_ComputeKernelId*, "s_computeKernelId", ::BoingKit::BoingReactorField*>();
}
inline void BoingKit::BoingReactorField::setStaticF_s_aCellOffset(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_aCellOffset", ::BoingKit::BoingReactorField*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> BoingKit::BoingReactorField::getStaticF_s_aCellOffset()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_aCellOffset", ::BoingKit::BoingReactorField*>();
}
inline void BoingKit::BoingReactorField::setStaticF_s_aSqrtInv(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_aSqrtInv", ::BoingKit::BoingReactorField*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> BoingKit::BoingReactorField::getStaticF_s_aSqrtInv()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_aSqrtInv", ::BoingKit::BoingReactorField*>();
}
inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* BoingKit::BoingReactorField::get_ShaderPropertyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"get_ShaderPropertyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::BoingReactorField_ShaderPropertyIdSet*>(nullptr, ___internal_method);
}
inline bool BoingKit::BoingReactorField::UpdateShaderConstants(::UnityEngine::MaterialPropertyBlock*  props, float_t  positionSampleMultiplier, float_t  rotationSampleMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateShaderConstants", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, props, positionSampleMultiplier, rotationSampleMultiplier);
}
inline bool BoingKit::BoingReactorField::UpdateShaderConstants(::UnityEngine::Material*  material, float_t  positionSampleMultiplier, float_t  rotationSampleMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateShaderConstants", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, material, positionSampleMultiplier, rotationSampleMultiplier);
}
inline int32_t BoingKit::BoingReactorField::get_GpuResourceSetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"get_GpuResourceSetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::Reboot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Reboot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::DisposeCpuResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DisposeCpuResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::DisposeGpuResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DisposeGpuResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BoingKit::BoingReactorField::SampleCpuGrid(::UnityEngine::Vector3  p, ::by_ref<::UnityEngine::Vector3>  positionOffset, ::by_ref<::UnityEngine::Vector4>  rotationOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"SampleCpuGrid", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p, positionOffset, rotationOffset);
}
inline void BoingKit::BoingReactorField::UpdateFieldParamsGpu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateFieldParamsGpu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::UpdateFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::UpdateBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"UpdateBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::PrepareExecute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PrepareExecute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::ValidateCpuResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ValidateCpuResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::ValidateGpuResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ValidateGpuResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::FinishPrepareExecuteCpu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"FinishPrepareExecuteCpu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::FinishPrepareExecuteGpu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"FinishPrepareExecuteGpu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::Sanitize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"Sanitize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::HandleCellMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"HandleCellMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::InitPropagationCpu(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"InitPropagationCpu", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void BoingKit::BoingReactorField::PropagateSpringCpu(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PropagateSpringCpu", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, dt);
}
inline void BoingKit::BoingReactorField::ExtendPropagationBorder(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  weight, int32_t  adjDeltaX, int32_t  adjDeltaY, int32_t  adjDeltaZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExtendPropagationBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, weight, adjDeltaX, adjDeltaY, adjDeltaZ);
}
inline void BoingKit::BoingReactorField::AccumulatePropagationWeightedNeighbor(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, ::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  neighbor, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"AccumulatePropagationWeightedNeighbor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, neighbor, weight);
}
inline void BoingKit::BoingReactorField::GatherPropagation(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data, float_t  weightSum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GatherPropagation", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, weightSum);
}
inline void BoingKit::BoingReactorField::AnchorPropagationBorder(::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"AnchorPropagationBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Params_BoingWork_InstanceData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void BoingKit::BoingReactorField::PropagateCpu(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"PropagateCpu", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void BoingKit::BoingReactorField::WrapCpu(int32_t  deltaX, int32_t  deltaY, int32_t  deltaZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"WrapCpu", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaX, deltaY, deltaZ);
}
inline void BoingKit::BoingReactorField::WrapGpu(int32_t  deltaX, int32_t  deltaY, int32_t  deltaZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"WrapGpu", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaX, deltaY, deltaZ);
}
inline void BoingKit::BoingReactorField::ExecuteCpu(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExecuteCpu", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void BoingKit::BoingReactorField::ExecuteGpu(float_t  dt, ::UnityEngine::ComputeBuffer*  effectorParamsBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  effectorParamsIndexMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ExecuteGpu", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt, effectorParamsBuffer, effectorParamsIndexMap);
}
inline void BoingKit::BoingReactorField::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorField::DrawGizmos(bool  drawEffectors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawEffectors);
}
inline ::UnityEngine::Vector3 BoingKit::BoingReactorField::GetGridCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GetGridCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BoingKit::BoingReactorField::QuantizeNorm(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"QuantizeNorm", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p);
}
inline ::UnityEngine::Vector3 BoingKit::BoingReactorField::GetCellCenterOffset(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"GetCellCenterOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, y, z);
}
inline void BoingKit::BoingReactorField::ResolveCellIndex(int32_t  x, int32_t  y, int32_t  z, int32_t  baseMult, ::by_ref<int32_t>  resX, ::by_ref<int32_t>  resY, ::by_ref<int32_t>  resZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField*>(),
                        {"ResolveCellIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, y, z, baseMult, resX, resY, resZ);
}
inline ::BoingKit::BoingReactorField* BoingKit::BoingReactorField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactorField*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactorField::BoingReactorField()   {
}
//  Writing Method size for method: ::BoingKit::BoingReactorField_ComputeKernelId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField_ComputeKernelId::*)()>(&::BoingKit::BoingReactorField_ComputeKernelId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e20cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField_ComputeKernelId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_InitKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_InitKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_InitKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitKernel = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_MoveKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_MoveKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_MoveKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoveKernel = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapXKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapXKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapXKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapXKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_WrapXKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WrapXKernel = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapYKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapYKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapYKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapYKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_WrapYKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WrapYKernel = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapZKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapZKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_WrapZKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapZKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_WrapZKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WrapZKernel = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_ExecuteKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecuteKernel;
}
constexpr int32_t const& BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_get_ExecuteKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExecuteKernel;
}
constexpr void BoingKit::BoingReactorField_ComputeKernelId::__cordl_internal_set_ExecuteKernel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExecuteKernel = value;
}
inline void BoingKit::BoingReactorField_ComputeKernelId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField_ComputeKernelId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingReactorField_ComputeKernelId* BoingKit::BoingReactorField_ComputeKernelId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactorField_ComputeKernelId*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactorField_ComputeKernelId::BoingReactorField_ComputeKernelId()   {
}
//  Writing Method size for method: ::BoingKit::BoingReactorField_ShaderPropertyIdSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorField_ShaderPropertyIdSet::*)()>(&::BoingKit::BoingReactorField_ShaderPropertyIdSet::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e20a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField_ShaderPropertyIdSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_MoveParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_MoveParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_MoveParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoveParams = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_WrapParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_WrapParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WrapParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_WrapParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WrapParams = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_Effectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effectors;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_Effectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effectors;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_Effectors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effectors = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_EffectorIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectorIndices;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_EffectorIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EffectorIndices;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_EffectorIndices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EffectorIndices = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ReactorParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ReactorParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_ReactorParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactorParams = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ComputeFieldParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputeFieldParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ComputeFieldParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputeFieldParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_ComputeFieldParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputeFieldParams = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ComputeCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputeCells;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_ComputeCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComputeCells;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_ComputeCells(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComputeCells = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RenderFieldParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderFieldParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RenderFieldParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderFieldParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_RenderFieldParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderFieldParams = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RenderCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderCells;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RenderCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RenderCells;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_RenderCells(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RenderCells = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_PositionSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_PositionSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_PositionSampleMultiplier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionSampleMultiplier = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RotationSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_RotationSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_RotationSampleMultiplier(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationSampleMultiplier = value;
}
constexpr int32_t& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_PropagationParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationParams;
}
constexpr int32_t const& BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_get_PropagationParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationParams;
}
constexpr void BoingKit::BoingReactorField_ShaderPropertyIdSet::__cordl_internal_set_PropagationParams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropagationParams = value;
}
inline void BoingKit::BoingReactorField_ShaderPropertyIdSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorField_ShaderPropertyIdSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingReactorField_ShaderPropertyIdSet* BoingKit::BoingReactorField_ShaderPropertyIdSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactorField_ShaderPropertyIdSet*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactorField_ShaderPropertyIdSet::BoingReactorField_ShaderPropertyIdSet()   {
}
