#pragma once
// IWYU pragma private; include "Drawing/DrawingData.hpp"
#include "Drawing/Text/zzzz__SDFLookupData_impl.hpp"
#include "Drawing/zzzz__DrawingData_BuilderDataContainer_impl.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderDataContainer_impl.hpp"
#include "Drawing/zzzz__RedrawScope_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderDataContainer_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_def.hpp"
#include "Drawing/zzzz__DrawingData_CommandBufferWrapper_def.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__DrawingData_MeshType_def.hpp"
#include "Drawing/zzzz__DrawingData_MeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderDataContainer_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_def.hpp"
#include "Drawing/zzzz__DrawingData_Range_def.hpp"
#include "Drawing/zzzz__DrawingData_RenderedMeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_SubmittedMesh_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__DrawingSettings_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::Drawing::DrawingData.get_adjustedSceneModeVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::get_adjustedSceneModeVersion)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55cb904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_adjustedSceneModeVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetNextDrawOrderIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::GetNextDrawOrderIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55cb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetNextDrawOrderIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.PoolMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::UnityEngine::Mesh*)>(&::Drawing::DrawingData::PoolMesh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55cb984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"PoolMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.SortPooledMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::SortPooledMeshes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55cba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"SortPooledMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Drawing::DrawingData::*)(int32_t)>(&::Drawing::DrawingData::GetMesh)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x55cbb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.LoadFontDataIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::LoadFontDataIfNecessary)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55cbcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"LoadFontDataIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Drawing::DrawingData::get_CurrentTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55cbda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::DrawingData::UpdateTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55cbe0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"UpdateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (::Drawing::DrawingData::*)(bool)>(&::Drawing::DrawingData::GetBuilder)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55cbeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetBuiltInBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (::Drawing::DrawingData::*)(bool)>(&::Drawing::DrawingData::GetBuiltInBuilder)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55cbf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuiltInBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (::Drawing::DrawingData::*)(::Drawing::RedrawScope, bool)>(&::Drawing::DrawingData::GetBuilder)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55cc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.GetBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder (::Drawing::DrawingData::*)(::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope, bool)>(&::Drawing::DrawingData::GetBuilder)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55cc0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.get_settingsRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::DrawingSettings_Settings* (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::get_settingsRef)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55cc1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_settingsRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cc340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.set_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(int32_t)>(&::Drawing::DrawingData::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cc348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"set_version", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.DiscardData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::GlobalNamespace::DrawingData_Hasher)>(&::Drawing::DrawingData::DiscardData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55cc1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DiscardData", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.OnChangingPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::OnChangingPlayMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55cc3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"OnChangingPlayMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::DrawingData::*)(::GlobalNamespace::DrawingData_Hasher)>(&::Drawing::DrawingData::Draw)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x55cc3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::DrawingData::*)(::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope)>(&::Drawing::DrawingData::Draw)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55cc550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::Drawing::RedrawScope)>(&::Drawing::DrawingData::Draw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55cb4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.DrawUntilDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::Drawing::RedrawScope)>(&::Drawing::DrawingData::DrawUntilDisposed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55cb79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DrawUntilDisposed", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.DisposeRedrawScope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::Drawing::RedrawScope)>(&::Drawing::DrawingData::DisposeRedrawScope)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55cb82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DisposeRedrawScope", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.TickFramePreRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::TickFramePreRender)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x55cc73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"TickFramePreRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.PostRenderCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::PostRenderCleanup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x55ccc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"PostRenderCleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.get_totalMemoryUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::get_totalMemoryUsage)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55ccd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_totalMemoryUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.LoadMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::LoadMaterials)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x55cd084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"LoadMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::_ctor)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x55cd240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.CeilLog2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Drawing::DrawingData::CeilLog2)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55cd478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"CeilLog2", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)(::UnityEngine::Camera*, bool, ::GlobalNamespace::DrawingData_CommandBufferWrapper, bool)>(&::Drawing::DrawingData::Render)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x55cd538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.TransformBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds)>(&::Drawing::DrawingData::TransformBoundingBox)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x55cdfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"TransformBoundingBox", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData::*)()>(&::Drawing::DrawingData::ClearData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x55ce46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer& Drawing::DrawingData::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::DrawingData_BuilderDataContainer const& Drawing::DrawingData::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_data(::GlobalNamespace::DrawingData_BuilderDataContainer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer& Drawing::DrawingData::__cordl_internal_get_processedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processedData;
}
constexpr ::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer const& Drawing::DrawingData::__cordl_internal_get_processedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processedData;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_processedData(::GlobalNamespace::DrawingData_ProcessedBuilderDataContainer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processedData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*& Drawing::DrawingData::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>* const& Drawing::DrawingData::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& Drawing::DrawingData::__cordl_internal_get_cachedMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMeshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& Drawing::DrawingData::__cordl_internal_get_cachedMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedMeshes;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_cachedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedMeshes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& Drawing::DrawingData::__cordl_internal_get_stagingCachedMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingCachedMeshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& Drawing::DrawingData::__cordl_internal_get_stagingCachedMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stagingCachedMeshes;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_stagingCachedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stagingCachedMeshes = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get_lastTimeLargestCachedMeshWasUsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeLargestCachedMeshWasUsed;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get_lastTimeLargestCachedMeshWasUsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeLargestCachedMeshWasUsed;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_lastTimeLargestCachedMeshWasUsed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTimeLargestCachedMeshWasUsed = value;
}
constexpr ::Drawing::Text::SDFLookupData& Drawing::DrawingData::__cordl_internal_get_fontData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontData;
}
constexpr ::Drawing::Text::SDFLookupData const& Drawing::DrawingData::__cordl_internal_get_fontData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontData;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_fontData(::Drawing::Text::SDFLookupData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontData = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get_currentDrawOrderIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDrawOrderIndex;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get_currentDrawOrderIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentDrawOrderIndex;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_currentDrawOrderIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentDrawOrderIndex = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get_sceneModeVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneModeVersion;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get_sceneModeVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneModeVersion;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_sceneModeVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneModeVersion = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Drawing::DrawingData::__cordl_internal_get_surfaceMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Drawing::DrawingData::__cordl_internal_get_surfaceMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMaterial;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_surfaceMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Drawing::DrawingData::__cordl_internal_get_lineMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Drawing::DrawingData::__cordl_internal_get_lineMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineMaterial;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_lineMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Drawing::DrawingData::__cordl_internal_get_textMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Drawing::DrawingData::__cordl_internal_get_textMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textMaterial;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_textMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textMaterial = value;
}
constexpr ::UnityW<::Drawing::DrawingSettings>& Drawing::DrawingData::__cordl_internal_get_settingsAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsAsset;
}
constexpr ::UnityW<::Drawing::DrawingSettings> const& Drawing::DrawingData::__cordl_internal_get_settingsAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsAsset;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_settingsAsset(::UnityW<::Drawing::DrawingSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsAsset = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get__version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get__version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version_k__BackingField;
}
constexpr void Drawing::DrawingData::__cordl_internal_set__version_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version_k__BackingField = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get_lastTickVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickVersion;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get_lastTickVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickVersion;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_lastTickVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTickVersion = value;
}
constexpr int32_t& Drawing::DrawingData::__cordl_internal_get_lastTickVersion2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickVersion2;
}
constexpr int32_t const& Drawing::DrawingData::__cordl_internal_get_lastTickVersion2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTickVersion2;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_lastTickVersion2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTickVersion2 = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Drawing::DrawingData::__cordl_internal_get_persistentRedrawScopes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentRedrawScopes;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Drawing::DrawingData::__cordl_internal_get_persistentRedrawScopes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistentRedrawScopes;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_persistentRedrawScopes(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistentRedrawScopes = value;
}
constexpr ::System::Runtime::InteropServices::GCHandle& Drawing::DrawingData::__cordl_internal_get_gizmosHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmosHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Drawing::DrawingData::__cordl_internal_get_gizmosHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmosHandle;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_gizmosHandle(::System::Runtime::InteropServices::GCHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmosHandle = value;
}
constexpr ::Drawing::RedrawScope& Drawing::DrawingData::__cordl_internal_get_frameRedrawScope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameRedrawScope;
}
constexpr ::Drawing::RedrawScope const& Drawing::DrawingData::__cordl_internal_get_frameRedrawScope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameRedrawScope;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_frameRedrawScope(::Drawing::RedrawScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameRedrawScope = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*& Drawing::DrawingData::__cordl_internal_get_cameraVersions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraVersions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>* const& Drawing::DrawingData::__cordl_internal_get_cameraVersions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraVersions;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_cameraVersions(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::GlobalNamespace::DrawingData_Range>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraVersions = value;
}
constexpr ::ArrayW<::UnityEngine::Plane>& Drawing::DrawingData::__cordl_internal_get_frustrumPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frustrumPlanes;
}
constexpr ::ArrayW<::UnityEngine::Plane> const& Drawing::DrawingData::__cordl_internal_get_frustrumPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frustrumPlanes;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_frustrumPlanes(::ArrayW<::UnityEngine::Plane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frustrumPlanes = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Drawing::DrawingData::__cordl_internal_get_customMaterialProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMaterialProperties;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Drawing::DrawingData::__cordl_internal_get_customMaterialProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMaterialProperties;
}
constexpr void Drawing::DrawingData::__cordl_internal_set_customMaterialProperties(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMaterialProperties = value;
}
inline void Drawing::DrawingData::setStaticF_MarkerScheduleJobs(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerScheduleJobs", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerScheduleJobs()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerScheduleJobs", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerAwaitUserDependencies(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerAwaitUserDependencies", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerAwaitUserDependencies()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerAwaitUserDependencies", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerSchedule(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSchedule", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerSchedule()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSchedule", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerBuild(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerBuild", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerBuild()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerBuild", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerPool(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerPool", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerPool()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerPool", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerRelease(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerRelease", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerRelease()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerRelease", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerBuildMeshes(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerBuildMeshes", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerBuildMeshes()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerBuildMeshes", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerCollectMeshes(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerCollectMeshes", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerCollectMeshes()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerCollectMeshes", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_MarkerSortMeshes(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSortMeshes", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_MarkerSortMeshes()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MarkerSortMeshes", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_LeakTracking(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "LeakTracking", ::Drawing::DrawingData*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Drawing::DrawingData::getStaticF_LeakTracking()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "LeakTracking", ::Drawing::DrawingData*>();
}
inline void Drawing::DrawingData::setStaticF_meshSorter(::Drawing::DrawingData_MeshCompareByDrawingOrder*  value)  {
::cordl_internals::setStaticField<::Drawing::DrawingData_MeshCompareByDrawingOrder*, "meshSorter", ::Drawing::DrawingData*>(std::forward<::Drawing::DrawingData_MeshCompareByDrawingOrder*>(value));
}
inline ::Drawing::DrawingData_MeshCompareByDrawingOrder* Drawing::DrawingData::getStaticF_meshSorter()  {
return ::cordl_internals::getStaticField<::Drawing::DrawingData_MeshCompareByDrawingOrder*, "meshSorter", ::Drawing::DrawingData*>();
}
inline int32_t Drawing::DrawingData::get_adjustedSceneModeVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_adjustedSceneModeVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Drawing::DrawingData::GetNextDrawOrderIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetNextDrawOrderIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Drawing::DrawingData::PoolMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"PoolMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void Drawing::DrawingData::SortPooledMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"SortPooledMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> Drawing::DrawingData::GetMesh(int32_t  desiredVertexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, desiredVertexCount);
}
inline void Drawing::DrawingData::LoadFontDataIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"LoadFontDataIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Drawing::DrawingData::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void Drawing::DrawingData::UpdateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"UpdateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Drawing::CommandBuilder Drawing::DrawingData::GetBuilder(bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(this, ___internal_method, renderInGame);
}
inline ::Drawing::CommandBuilder Drawing::DrawingData::GetBuiltInBuilder(bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuiltInBuilder", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(this, ___internal_method, renderInGame);
}
inline ::Drawing::CommandBuilder Drawing::DrawingData::GetBuilder(::Drawing::RedrawScope  redrawScope, bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(this, ___internal_method, redrawScope, renderInGame);
}
inline ::Drawing::CommandBuilder Drawing::DrawingData::GetBuilder(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  redrawScope, bool  renderInGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"GetBuilder", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder>(this, ___internal_method, hasher, redrawScope, renderInGame);
}
inline ::Drawing::DrawingSettings_Settings* Drawing::DrawingData::get_settingsRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_settingsRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::DrawingSettings_Settings*>(this, ___internal_method);
}
inline int32_t Drawing::DrawingData::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Drawing::DrawingData::set_version(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"set_version", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Drawing::DrawingData::DiscardData(::GlobalNamespace::DrawingData_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DiscardData", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasher);
}
inline void Drawing::DrawingData::OnChangingPlayMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"OnChangingPlayMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Drawing::DrawingData::Draw(::GlobalNamespace::DrawingData_Hasher  hasher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasher);
}
inline bool Drawing::DrawingData::Draw(::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hasher, scope);
}
inline void Drawing::DrawingData::Draw(::Drawing::RedrawScope  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Draw", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scope);
}
inline void Drawing::DrawingData::DrawUntilDisposed(::Drawing::RedrawScope  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DrawUntilDisposed", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scope);
}
inline void Drawing::DrawingData::DisposeRedrawScope(::Drawing::RedrawScope  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"DisposeRedrawScope", {}, {::i2c::type_of<::Drawing::RedrawScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scope);
}
inline void Drawing::DrawingData::TickFramePreRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"TickFramePreRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingData::PostRenderCleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"PostRenderCleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Drawing::DrawingData::get_totalMemoryUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"get_totalMemoryUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Drawing::DrawingData::LoadMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"LoadMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::DrawingData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Drawing::DrawingData::CeilLog2(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"CeilLog2", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline void Drawing::DrawingData::Render(::UnityEngine::Camera*  cam, bool  allowGizmos, ::GlobalNamespace::DrawingData_CommandBufferWrapper  commandBuffer, bool  allowCameraDefault)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DrawingData_CommandBufferWrapper>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, allowGizmos, commandBuffer, allowCameraDefault);
}
inline ::UnityEngine::Bounds Drawing::DrawingData::TransformBoundingBox(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"TransformBoundingBox", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, matrix, bounds);
}
inline void Drawing::DrawingData::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData*>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::DrawingData* Drawing::DrawingData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingData*>());
}
// Ctor Parameters []
constexpr ::Drawing::DrawingData::DrawingData()   {
}
//  Writing Method size for method: ::Drawing::DrawingData___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData___c::*)()>(&::Drawing::DrawingData___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d24a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData___c._SortPooledMeshes_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData___c::*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*)>(&::Drawing::DrawingData___c::_SortPooledMeshes_b__22_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x55d24ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData___c*>(),
                        {"<SortPooledMeshes>b__22_0", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::DrawingData___c::setStaticF___9(::Drawing::DrawingData___c*  value)  {
::cordl_internals::setStaticField<::Drawing::DrawingData___c*, "<>9", ::Drawing::DrawingData___c*>(std::forward<::Drawing::DrawingData___c*>(value));
}
inline ::Drawing::DrawingData___c* Drawing::DrawingData___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Drawing::DrawingData___c*, "<>9", ::Drawing::DrawingData___c*>();
}
inline void Drawing::DrawingData___c::setStaticF___9__22_0(::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__22_0", ::Drawing::DrawingData___c*>(std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>* Drawing::DrawingData___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__22_0", ::Drawing::DrawingData___c*>();
}
inline void Drawing::DrawingData___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Drawing::DrawingData___c::_SortPooledMeshes_b__22_0(::UnityEngine::Mesh*  a, ::UnityEngine::Mesh*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData___c*>(),
                        {"<SortPooledMeshes>b__22_0", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Drawing::DrawingData___c* Drawing::DrawingData___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingData___c*>());
}
// Ctor Parameters []
constexpr ::Drawing::DrawingData___c::DrawingData___c()   {
}
//  Writing Method size for method: ::Drawing::DrawingData_MeshCompareByDrawingOrder.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::DrawingData_MeshCompareByDrawingOrder::*)(::GlobalNamespace::DrawingData_RenderedMeshWithType, ::GlobalNamespace::DrawingData_RenderedMeshWithType)>(&::Drawing::DrawingData_MeshCompareByDrawingOrder::Compare)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55d2414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData_MeshCompareByDrawingOrder*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_RenderedMeshWithType>(), ::i2c::type_of<::GlobalNamespace::DrawingData_RenderedMeshWithType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingData_MeshCompareByDrawingOrder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingData_MeshCompareByDrawingOrder::*)()>(&::Drawing::DrawingData_MeshCompareByDrawingOrder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55ce9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData_MeshCompareByDrawingOrder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Drawing::DrawingData_MeshCompareByDrawingOrder::Compare(::GlobalNamespace::DrawingData_RenderedMeshWithType  a, ::GlobalNamespace::DrawingData_RenderedMeshWithType  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData_MeshCompareByDrawingOrder*>(),
                        {"Compare", {}, {::i2c::type_of<::GlobalNamespace::DrawingData_RenderedMeshWithType>(), ::i2c::type_of<::GlobalNamespace::DrawingData_RenderedMeshWithType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Drawing::DrawingData_MeshCompareByDrawingOrder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingData_MeshCompareByDrawingOrder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::DrawingData_MeshCompareByDrawingOrder* Drawing::DrawingData_MeshCompareByDrawingOrder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingData_MeshCompareByDrawingOrder*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>"
constexpr  Drawing::DrawingData_MeshCompareByDrawingOrder::operator ::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>* Drawing::DrawingData_MeshCompareByDrawingOrder::i___System__Collections__Generic__IComparer_1___GlobalNamespace__DrawingData_RenderedMeshWithType_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::GlobalNamespace::DrawingData_RenderedMeshWithType>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Drawing::DrawingData_MeshCompareByDrawingOrder::DrawingData_MeshCompareByDrawingOrder()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55d1e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55d1f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55d05e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>();
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffers, numBuffers);
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall::BuilderData_DrawingData_ResetAllBuffers_000002FC$BurstDirectCall()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55d1ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55d1d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x55d1dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55d1e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers, numBuffers);
}
inline ::System::IAsyncResult* Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffers, numBuffers, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate* Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate::BuilderData_DrawingData_ResetAllBuffers_000002FC$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55d1bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55d1ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55d04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>();
}
inline void Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffers, numBuffers);
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$BurstDirectCall()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55d1a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55d1b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x55d1b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55d1bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffers, numBuffers);
}
inline ::System::IAsyncResult* Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffers, numBuffers, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate* Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate::BuilderData_DrawingData_AnyBuffersWrittenTo_000002FB$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55d177c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55d1a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x55d1a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::*)(::System::IAsyncResult*)>(&::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55d1a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers, numBuffers);
}
inline ::System::IAsyncResult* Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffers, numBuffers, callback, object);
}
inline void Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate* Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_ResetAllBuffersToDelegate::BuilderData_DrawingData_ResetAllBuffersToDelegate()   {
}
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55d16c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55d1970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x55d1984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::*)(::System::IAsyncResult*)>(&::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55d19e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(),
                    {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::Invoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffers, numBuffers);
}
inline ::System::IAsyncResult* Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::BeginInvoke(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffers, int32_t  numBuffers, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffers, numBuffers, callback, object);
}
inline bool Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate* Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Drawing::BuilderData_DrawingData_AnyBuffersWrittenToDelegate::BuilderData_DrawingData_AnyBuffersWrittenToDelegate()   {
}
