#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_impl.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__AllowedDelay_def.hpp"
#include "Drawing/zzzz__CommandBuilder2D_def.hpp"
#include "Drawing/zzzz__CommandBuilder_BoxData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleXZData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_Command_def.hpp"
#include "Drawing/zzzz__CommandBuilder_LineDataV3_def.hpp"
#include "Drawing/zzzz__CommandBuilder_LineData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_LineWidthData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_PersistData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_PlaneData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_PolylineWithSymbol_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeColor_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeEmpty_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeLineWidth_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeMatrix_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopePersist_def.hpp"
#include "Drawing/zzzz__CommandBuilder_SphereData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_SymbolDecoration_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData3D_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TriangleData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_BitPackedMeta_def.hpp"
#include "Drawing/zzzz__DrawingData_Hasher_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "Drawing/zzzz__RedrawScope_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_MeshData_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Drawing::CommandBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, ::System::Runtime::InteropServices::GCHandle, int32_t, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta)>(&::Drawing::CommandBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55a8510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Drawing::DrawingData*, ::GlobalNamespace::DrawingData_Hasher, ::Drawing::RedrawScope, ::Drawing::RedrawScope, bool, bool, int32_t)>(&::Drawing::CommandBuilder::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x55a851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::get_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55a865c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.set_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(int32_t)>(&::Drawing::CommandBuilder::set_BufferSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55a8674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.get_xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder2D (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::get_xy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55a868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_xy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.get_xz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder2D (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::get_xz)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55a86c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_xz", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.get_cameraTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Camera>> (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::get_cameraTargets)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x55a86d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_cameraTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.set_cameraTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::UnityEngine::Camera*>)>(&::Drawing::CommandBuilder::set_cameraTargets)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x55a8840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"set_cameraTargets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55a89ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DisposeAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Jobs::JobHandle, ::Drawing::AllowedDelay)>(&::Drawing::CommandBuilder::DisposeAfter)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x55a8de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DisposeAfter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Drawing::AllowedDelay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DisposeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::DisposeInternal)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x55a8a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DisposeInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DiscardAndDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::DiscardAndDispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55a9078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DiscardAndDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DiscardAndDisposeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::DiscardAndDisposeInternal)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x55a9124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DiscardAndDisposeInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Preallocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(int32_t)>(&::Drawing::CommandBuilder::Preallocate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55a933c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Preallocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(int32_t)>(&::Drawing::CommandBuilder::Reserve)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55a9408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Reserve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.AssertBufferExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::AssertBufferExists)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55a9490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"AssertBufferExists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.AssertNotRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::CommandBuilder::AssertNotRendering)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x55a95e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"AssertNotRendering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ConvertColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::Drawing::CommandBuilder::ConvertColor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x55a9700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ConvertColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder::WithMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55a98a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3x3)>(&::Drawing::CommandBuilder::WithMatrix)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55a9a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WithColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeColor (::Drawing::CommandBuilder::*)(::UnityEngine::Color)>(&::Drawing::CommandBuilder::WithColor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55a9bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WithDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopePersist (::Drawing::CommandBuilder::*)(float_t)>(&::Drawing::CommandBuilder::WithDuration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55a9d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WithLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeLineWidth (::Drawing::CommandBuilder::*)(float_t, bool)>(&::Drawing::CommandBuilder::WithLineWidth)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55a9f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.InLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder::*)(::UnityEngine::Transform*)>(&::Drawing::CommandBuilder::InLocalSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55aa0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.InScreenSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder::*)(::UnityEngine::Camera*)>(&::Drawing::CommandBuilder::InScreenSpace)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x55aa190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder::PushMatrix)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55a9938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float4x4)>(&::Drawing::CommandBuilder::PushMatrix)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55a9b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder::PushSetMatrix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55aa398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float4x4)>(&::Drawing::CommandBuilder::PushSetMatrix)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55aa494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PopMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::PopMatrix)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55aa570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Color)>(&::Drawing::CommandBuilder::PushColor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a9c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PopColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::PopColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55aa644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(float_t)>(&::Drawing::CommandBuilder::PushDuration)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55a9df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PopDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::PopDuration)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55aa718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(float_t)>(&::Drawing::CommandBuilder::PushPersist)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55aa7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PopPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::PopPersist)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55aa850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopPersist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PushLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(float_t, bool)>(&::Drawing::CommandBuilder::PushLineWidth)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x55a9fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PopLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)()>(&::Drawing::CommandBuilder::PopLineWidth)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55aa8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopLineWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::Line)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55aa978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Drawing::CommandBuilder::Line)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x55aaa7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Line)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55aab5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::Ray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55aac54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Ray, float_t)>(&::Drawing::CommandBuilder::Ray)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55aacf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::Arc)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x55aada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::CircleXZ)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55ab25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXZInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::CircleXZInternal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55ab158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXZInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CircleXZInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55ab2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::CircleXY)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55ab448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::Circle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55ab520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::SolidArc)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x55ab634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::SolidCircleXZ)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55abaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXZInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::SolidCircleXZInternal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55ab9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXZInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircleXZInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55abb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder::SolidCircleXY)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55abc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::SolidCircle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55abd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SphereOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::SphereOutline)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55abe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::WireCylinder)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55abf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder::WireCylinder)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x55ac064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.OrthonormalBasis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::Drawing::CommandBuilder::OrthonormalBasis)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55ac3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"OrthonormalBasis", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::WireCapsule)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x55ac524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder::WireCapsule)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x55ac7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::WireSphere)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55ac6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x55accec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::UnityEngine::Vector3>, bool)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x55acea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::Unity::Mathematics::float3>, bool)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x55ad01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55ad198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder::DashedLine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55ad2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::Drawing::CommandBuilder::DashedPolyline)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55ada3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55adb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x55adc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Bounds)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55addbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*)>(&::Drawing::CommandBuilder::WireMesh)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x55ade94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::Drawing::CommandBuilder::WireMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x55adfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*)>(&::Drawing::CommandBuilder::SolidMesh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x55ae0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMeshInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidMeshInternal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55ae358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMeshInternal", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMeshInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*, bool)>(&::Drawing::CommandBuilder::SolidMeshInternal)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x55ae118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMeshInternal", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::Drawing::CommandBuilder::SolidMesh)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x55ae404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(&::Drawing::CommandBuilder::SolidMesh)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x55ae5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::Cross)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55ae804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::CrossXZ)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55ae8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::CrossXY)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55ae9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.EvaluateCubicBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::EvaluateCubicBezier)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55aea80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"EvaluateCubicBezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::Bezier)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x55aeb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Drawing::CommandBuilder::CatmullRom)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x55aec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::CatmullRom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55af040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::Arrow)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55af184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::Arrow)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x55af54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x55af250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::Arrowhead)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55af6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder::Arrowhead)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x55af788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder::ArrowheadArc)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x55afa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::WireGrid)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x55afe04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::WireTriangle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b0040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::WireRectangleXZ)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55b013c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::WireRectangle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55b024c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Rect)>(&::Drawing::CommandBuilder::WireRectangle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55b0470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder::WireTriangle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55b0648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePentagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder::WirePentagon)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55b095c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireHexagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder::WireHexagon)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x55b0a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, int32_t, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder::WirePolygon)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x55b0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Rect)>(&::Drawing::CommandBuilder::SolidRectangle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55b0acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::SolidPlane)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55b0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::SolidPlane)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x55b0e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.calculateTangent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::calculateTangent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55b0e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"calculateTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::WirePlane)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55b106c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::WirePlane)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x55b0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x55b11c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x55b131c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::SolidTriangle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x55b1518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55b1638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Bounds)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55b173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55b1814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b19f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x55b1af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::StringW, float_t)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55b1dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x55b1ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55b21bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55b2370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55b2524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55b26d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55b22a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55b2458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55b260c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55b27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, uint8_t*, int32_t, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x55b288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b2aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b2cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b2ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b30d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55b2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55b2db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55b2fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55b31d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, uint8_t*, int32_t, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x55b32e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Line)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55b3504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Ray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55b3654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Ray, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Ray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Arc)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x55b3820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CircleXZ)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b3c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CircleXZ)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55b3d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CircleXY)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b3dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CircleXY)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55b3efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Circle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55b3fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidArc)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x55b411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircleXZ)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b44cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircleXZ)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55b45c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircleXY)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircleXY)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55b478c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidCircle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55b4850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SphereOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SphereOutline)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55b49ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireCylinder)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x55b4af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireCylinder)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x55b4c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireCapsule)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x55b4fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireCapsule)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x55b5178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireSphere)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x55b56f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55b5828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55b5a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::UnityEngine::Vector3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x55b5aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55b5c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x55b5ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::ArrayW<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55b5e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x55b5f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Polyline)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55b60b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::DashedLine)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55b6150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::DashedPolyline)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x55b6258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55b63ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x55b64fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Bounds, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55b66c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireMesh)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x55b67c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireMesh)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55b6964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Mesh*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidMesh)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55b6aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Cross)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55b6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Cross)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55b6c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CrossXZ)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b6d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CrossXZ)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55b6e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CrossXY)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55b6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CrossXY)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55b6fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Bezier)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x55b706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CatmullRom)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x55b71dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::CatmullRom)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x55b75ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Arrow)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55b7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Arrow)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x55b7c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x55b789c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Arrowhead)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55b7da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Arrowhead)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x55b7eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::ArrowheadArc)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x55b8184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::ArrowheadArc)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55b859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireGrid)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x55b86c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireTriangle)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55b8924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireRectangleXZ)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55b8a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireRectangle)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55b8b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireRectangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b8e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireTriangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b9070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePentagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WirePentagon)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b93fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WireHexagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WireHexagon)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b94fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, int32_t, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WirePolygon)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x55b9170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidRectangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55b95fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidPlane)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55b9848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidPlane)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x55b99d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WirePlane)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55b9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::WirePlane)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x55b8ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x55b9d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x55b9f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidTriangle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x55ba148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55ba2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::UnityEngine::Bounds, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55ba3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::SolidBox)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x55ba500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55ba714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x55ba810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55bab6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::StringW, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55bafbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x55bac74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55bb07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55bb26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55bb32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55bb51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55bb5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55bb7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55bb88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55bba7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bb434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bb6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label2D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bb994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bbb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bbf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bc0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bbc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bbe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder::Label3D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55bc1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::CommandBuilder::setStaticF_DEFAULT_UP(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "DEFAULT_UP", ::Drawing::CommandBuilder>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 Drawing::CommandBuilder::getStaticF_DEFAULT_UP()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "DEFAULT_UP", ::Drawing::CommandBuilder>();
}
inline void Drawing::CommandBuilder::setStaticF_XZtoXYPlaneMatrix(::Unity::Mathematics::float4x4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "XZtoXYPlaneMatrix", ::Drawing::CommandBuilder>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Drawing::CommandBuilder::getStaticF_XZtoXYPlaneMatrix()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "XZtoXYPlaneMatrix", ::Drawing::CommandBuilder>();
}
inline void Drawing::CommandBuilder::setStaticF_XZtoYZPlaneMatrix(::Unity::Mathematics::float4x4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "XZtoYZPlaneMatrix", ::Drawing::CommandBuilder>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Drawing::CommandBuilder::getStaticF_XZtoYZPlaneMatrix()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "XZtoYZPlaneMatrix", ::Drawing::CommandBuilder>();
}
inline void Drawing::CommandBuilder::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, ::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  threadIndex, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  uniqueID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<::System::Runtime::InteropServices::GCHandle>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, gizmos, threadIndex, uniqueID);
}
inline void Drawing::CommandBuilder::_ctor(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::DrawingData_Hasher  hasher, ::Drawing::RedrawScope  frameRedrawScope, ::Drawing::RedrawScope  customRedrawScope, bool  isGizmos, bool  isBuiltInCommandBuilder, int32_t  sceneModeVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::DrawingData_Hasher>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<::Drawing::RedrawScope>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, gizmos, hasher, frameRedrawScope, customRedrawScope, isGizmos, isBuiltInCommandBuilder, sceneModeVersion);
}
inline int32_t Drawing::CommandBuilder::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::set_BufferSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"set_BufferSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Drawing::CommandBuilder2D Drawing::CommandBuilder::get_xy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_xy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder2D>(*this, ___internal_method);
}
inline ::Drawing::CommandBuilder2D Drawing::CommandBuilder::get_xz()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_xz", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder2D>(*this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Camera>> Drawing::CommandBuilder::get_cameraTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"get_cameraTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Camera>>>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::set_cameraTargets(::ArrayW<::UnityEngine::Camera*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"set_cameraTargets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Camera*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Drawing::CommandBuilder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::DisposeAfter(::Unity::Jobs::JobHandle  dependency, ::Drawing::AllowedDelay  allowedDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DisposeAfter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Drawing::AllowedDelay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dependency, allowedDelay);
}
inline void Drawing::CommandBuilder::DisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DisposeInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::DiscardAndDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DiscardAndDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::DiscardAndDisposeInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DiscardAndDisposeInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::Preallocate(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Preallocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
inline void Drawing::CommandBuilder::Reserve(int32_t  additionalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Reserve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, additionalSpace);
}
inline void Drawing::CommandBuilder::AssertBufferExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"AssertBufferExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::AssertNotRendering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"AssertNotRendering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename A>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A>)
inline void Drawing::CommandBuilder::Reserve()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::CommandBuilder>(),
                    {"Reserve", {::i2c::class_of<A>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<A>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename A,typename B>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A> && ::cordl_internals::value_type_constraint<B> && ::cordl_internals::default_constructor_constraint<B>)
inline void Drawing::CommandBuilder::Reserve()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::CommandBuilder>(),
                    {"Reserve", {::i2c::class_of<A>(), ::i2c::class_of<B>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<A>(), ::i2c::class_of<B>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename A,typename B,typename C>
requires(::cordl_internals::value_type_constraint<A> && ::cordl_internals::default_constructor_constraint<A> && ::cordl_internals::value_type_constraint<B> && ::cordl_internals::default_constructor_constraint<B> && ::cordl_internals::value_type_constraint<C> && ::cordl_internals::default_constructor_constraint<C>)
inline void Drawing::CommandBuilder::Reserve()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::CommandBuilder>(),
                    {"Reserve", {::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<A>(), ::i2c::class_of<B>(), ::i2c::class_of<C>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint32_t Drawing::CommandBuilder::ConvertColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ConvertColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, color);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Drawing::CommandBuilder::Add(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::CommandBuilder>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder::WithMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder::WithMatrix(::Unity::Mathematics::float3x3  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeColor Drawing::CommandBuilder::WithColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeColor>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::CommandBuilder_ScopePersist Drawing::CommandBuilder::WithDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopePersist>(*this, ___internal_method, duration);
}
inline ::GlobalNamespace::CommandBuilder_ScopeLineWidth Drawing::CommandBuilder::WithLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeLineWidth>(*this, ___internal_method, pixels, automaticJoins);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder::InLocalSpace(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, transform);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder::InScreenSpace(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, camera);
}
inline void Drawing::CommandBuilder::PushMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder::PushMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder::PushSetMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder::PushSetMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder::PopMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::PushColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void Drawing::CommandBuilder::PopColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::PushDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, duration);
}
inline void Drawing::CommandBuilder::PopDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::PushPersist(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, duration);
}
inline void Drawing::CommandBuilder::PopPersist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopPersist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::PushLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pixels, automaticJoins);
}
inline void Drawing::CommandBuilder::PopLineWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PopLineWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction);
}
inline void Drawing::CommandBuilder::Ray(::UnityEngine::Ray  ray, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray, length);
}
inline void Drawing::CommandBuilder::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::CircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::CircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, radius);
}
inline void Drawing::CommandBuilder::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::SolidCircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::SolidCircleXZInternal(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZInternal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder::SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, radius);
}
inline void Drawing::CommandBuilder::SphereOutline(::Unity::Mathematics::float3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius);
}
inline void Drawing::CommandBuilder::WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, top, radius);
}
inline void Drawing::CommandBuilder::WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, up, height, radius);
}
inline void Drawing::CommandBuilder::OrthonormalBasis(::Unity::Mathematics::float3  normal, ::by_ref<::Unity::Mathematics::float3>  basis1, ::by_ref<::Unity::Mathematics::float3>  basis2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"OrthonormalBasis", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, normal, basis1, basis2);
}
inline void Drawing::CommandBuilder::WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end, radius);
}
inline void Drawing::CommandBuilder::WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, direction, length, radius);
}
inline void Drawing::CommandBuilder::WireSphere(::Unity::Mathematics::float3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, radius);
}
inline void Drawing::CommandBuilder::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Collections::Generic::IReadOnlyList_1<::Unity::Mathematics::float3>*>)
inline void Drawing::CommandBuilder::Polyline(T  points, bool  cycle)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::CommandBuilder>(),
                    {"Polyline", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap);
}
inline void Drawing::CommandBuilder::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, dash, gap);
}
inline void Drawing::CommandBuilder::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void Drawing::CommandBuilder::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder::WireBox(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline void Drawing::CommandBuilder::WireMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh);
}
inline void Drawing::CommandBuilder::WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, triangles);
}
inline void Drawing::CommandBuilder::SolidMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh);
}
inline void Drawing::CommandBuilder::SolidMeshInternal(::UnityEngine::Mesh*  mesh, bool  temporary, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMeshInternal", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, temporary, color);
}
inline void Drawing::CommandBuilder::SolidMeshInternal(::UnityEngine::Mesh*  mesh, bool  temporary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMeshInternal", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, temporary);
}
inline void Drawing::CommandBuilder::SolidMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, triangles, colors);
}
inline void Drawing::CommandBuilder::SolidMesh(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Color>  colors, int32_t  vertexCount, int32_t  indexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, triangles, colors, vertexCount, indexCount);
}
inline void Drawing::CommandBuilder::Cross(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline void Drawing::CommandBuilder::CrossXZ(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline void Drawing::CommandBuilder::CrossXY(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline ::Unity::Mathematics::float3 Drawing::CommandBuilder::EvaluateCubicBezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"EvaluateCubicBezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, p0, p1, p2, p3, t);
}
inline void Drawing::CommandBuilder::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points);
}
inline void Drawing::CommandBuilder::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to);
}
inline void Drawing::CommandBuilder::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize);
}
inline void Drawing::CommandBuilder::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction);
}
inline void Drawing::CommandBuilder::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius);
}
inline void Drawing::CommandBuilder::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius);
}
inline void Drawing::CommandBuilder::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width);
}
inline void Drawing::CommandBuilder::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, cells, totalSize);
}
inline void Drawing::CommandBuilder::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder::WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void Drawing::CommandBuilder::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder::WireRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect);
}
inline void Drawing::CommandBuilder::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius);
}
inline void Drawing::CommandBuilder::WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius);
}
inline void Drawing::CommandBuilder::WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius);
}
inline void Drawing::CommandBuilder::WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, vertices, rotation, radius);
}
inline void Drawing::CommandBuilder::SolidRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect);
}
inline void Drawing::CommandBuilder::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size);
}
inline void Drawing::CommandBuilder::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline ::Unity::Mathematics::float3 Drawing::CommandBuilder::calculateTangent(::Unity::Mathematics::float3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"calculateTangent", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, normal);
}
inline void Drawing::CommandBuilder::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size);
}
inline void Drawing::CommandBuilder::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size);
}
inline void Drawing::CommandBuilder::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void Drawing::CommandBuilder::SolidBox(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline void Drawing::CommandBuilder::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, uint8_t*  text, int32_t  byteCount, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, byteCount, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, uint8_t*  text, int32_t  byteCount, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, byteCount, size, alignment);
}
inline void Drawing::CommandBuilder::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, color);
}
inline void Drawing::CommandBuilder::Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray, length, color);
}
inline void Drawing::CommandBuilder::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder::Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, radius, color);
}
inline void Drawing::CommandBuilder::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder::SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, radius, color);
}
inline void Drawing::CommandBuilder::SphereOutline(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder::WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, top, radius, color);
}
inline void Drawing::CommandBuilder::WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, up, height, radius, color);
}
inline void Drawing::CommandBuilder::WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, end, radius, color);
}
inline void Drawing::CommandBuilder::WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, direction, length, radius, color);
}
inline void Drawing::CommandBuilder::WireSphere(::Unity::Mathematics::float3  position, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, radius, color);
}
inline void Drawing::CommandBuilder::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap, color);
}
inline void Drawing::CommandBuilder::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, dash, gap, color);
}
inline void Drawing::CommandBuilder::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size, color);
}
inline void Drawing::CommandBuilder::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::WireBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds, color);
}
inline void Drawing::CommandBuilder::WireMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, color);
}
inline void Drawing::CommandBuilder::WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vertices, triangles, color);
}
inline void Drawing::CommandBuilder::SolidMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mesh, color);
}
inline void Drawing::CommandBuilder::Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size, color);
}
inline void Drawing::CommandBuilder::Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, color);
}
inline void Drawing::CommandBuilder::CrossXZ(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size, color);
}
inline void Drawing::CommandBuilder::CrossXZ(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, color);
}
inline void Drawing::CommandBuilder::CrossXY(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size, color);
}
inline void Drawing::CommandBuilder::CrossXY(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, color);
}
inline void Drawing::CommandBuilder::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, color);
}
inline void Drawing::CommandBuilder::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize, color);
}
inline void Drawing::CommandBuilder::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction, color);
}
inline void Drawing::CommandBuilder::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius, color);
}
inline void Drawing::CommandBuilder::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius, color);
}
inline void Drawing::CommandBuilder::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width, color);
}
inline void Drawing::CommandBuilder::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, color);
}
inline void Drawing::CommandBuilder::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, cells, totalSize, color);
}
inline void Drawing::CommandBuilder::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder::WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size, color);
}
inline void Drawing::CommandBuilder::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect, color);
}
inline void Drawing::CommandBuilder::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::CommandBuilder::WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::CommandBuilder::WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::CommandBuilder::WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, vertices, rotation, radius, color);
}
inline void Drawing::CommandBuilder::SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect, color);
}
inline void Drawing::CommandBuilder::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size, color);
}
inline void Drawing::CommandBuilder::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size, color);
}
inline void Drawing::CommandBuilder::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, normal, size, color);
}
inline void Drawing::CommandBuilder::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size, color);
}
inline void Drawing::CommandBuilder::SolidBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds, color);
}
inline void Drawing::CommandBuilder::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::CommandBuilder::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, rotation, text, size, alignment, color);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Drawing::CommandBuilder::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Drawing::CommandBuilder::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buffer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gizmos", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "threadIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uniqueID", ty: "::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::CommandBuilder::CommandBuilder(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, ::System::Runtime::InteropServices::GCHandle  gizmos, int32_t  threadIndex, ::GlobalNamespace::BuilderData_DrawingData_BitPackedMeta  uniqueID) noexcept  {
this->buffer = buffer;
this->gizmos = gizmos;
this->threadIndex = threadIndex;
this->uniqueID = uniqueID;
}
// Ctor Parameters []
constexpr ::Drawing::CommandBuilder::CommandBuilder()   {
}
//  Writing Method size for method: ::Drawing::CommandBuilder_JobWireMesh.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3*, int32_t*, int32_t, int32_t, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::CommandBuilder_JobWireMesh::WireMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55ae0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder_JobWireMesh.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::CommandBuilder_JobWireMesh::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55bc5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder_JobWireMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder_JobWireMesh::*)()>(&::Drawing::CommandBuilder_JobWireMesh::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55bc790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder_JobWireMesh.WireMesh$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3*, int32_t*, int32_t, int32_t, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::CommandBuilder_JobWireMesh::WireMesh$BurstManaged)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x55bc960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"WireMesh$BurstManaged", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder_JobWireMesh.Execute$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::CommandBuilder_JobWireMesh::Execute$BurstManaged)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x55bccb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"Execute$BurstManaged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::CommandBuilder_JobWireMesh::setStaticF_JobWireMeshFunctionPointer(::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*  value)  {
::cordl_internals::setStaticField<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*, "JobWireMeshFunctionPointer", ::Drawing::CommandBuilder_JobWireMesh*>(std::forward<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(value));
}
inline ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate* Drawing::CommandBuilder_JobWireMesh::getStaticF_JobWireMeshFunctionPointer()  {
return ::cordl_internals::getStaticField<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*, "JobWireMeshFunctionPointer", ::Drawing::CommandBuilder_JobWireMesh*>();
}
inline void Drawing::CommandBuilder_JobWireMesh::WireMesh(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, indices, vertexCount, indexCount, draw);
}
inline void Drawing::CommandBuilder_JobWireMesh::Execute(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawMeshData, draw);
}
inline void Drawing::CommandBuilder_JobWireMesh::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Drawing::CommandBuilder_JobWireMesh::WireMesh$BurstManaged(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"WireMesh$BurstManaged", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, indices, vertexCount, indexCount, draw);
}
inline void Drawing::CommandBuilder_JobWireMesh::Execute$BurstManaged(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder_JobWireMesh*>(),
                        {"Execute$BurstManaged", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawMeshData, draw);
}
inline ::Drawing::CommandBuilder_JobWireMesh* Drawing::CommandBuilder_JobWireMesh::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::CommandBuilder_JobWireMesh*>());
}
// Ctor Parameters []
constexpr ::Drawing::CommandBuilder_JobWireMesh::CommandBuilder_JobWireMesh()   {
}
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55bd424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55bd514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55bc6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>();
}
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Mesh_MeshData>>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rawMeshData, draw);
}
// Ctor Parameters []
constexpr ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall::JobWireMesh_CommandBuilder_Execute_0000010A$BurstDirectCall()   {
}
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55bd28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55bd340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55bd354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55bd418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawMeshData, draw);
}
inline ::System::IAsyncResult* Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::BeginInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rawMeshData, draw, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline void Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate* Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Drawing::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate::JobWireMesh_CommandBuilder_Execute_0000010A$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55bd184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55bd274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3*, int32_t*, int32_t, int32_t, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x55bc5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>();
}
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::Invoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::Unity::Mathematics::float3*>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Drawing::CommandBuilder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, indices, vertexCount, indexCount, draw);
}
// Ctor Parameters []
constexpr ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall::JobWireMesh_CommandBuilder_WireMesh_00000109$BurstDirectCall()   {
}
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55bcfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::*)(::Unity::Mathematics::float3*, int32_t*, int32_t, int32_t, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55bd084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::*)(::Unity::Mathematics::float3*, int32_t*, int32_t, int32_t, ::by_ref<::Drawing::CommandBuilder>, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x55bd098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x55bd178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::Invoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, indices, vertexCount, indexCount, draw);
}
inline ::System::IAsyncResult* Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::BeginInvoke(::Unity::Mathematics::float3*  verts, int32_t*  indices, int32_t  vertexCount, int32_t  indexCount, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, verts, indices, vertexCount, indexCount, draw, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate* Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Drawing::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate::JobWireMesh_CommandBuilder_WireMesh_00000109$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55bc8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>)>(&::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55bced4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>, ::System::AsyncCallback*, ::System::Object*)>(&::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55bcee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::*)(::by_ref<::GlobalNamespace::Mesh_MeshData>, ::by_ref<::Drawing::CommandBuilder>, ::System::IAsyncResult*)>(&::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x55bcfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(),
                    {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::Invoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawMeshData, draw);
}
inline ::System::IAsyncResult* Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::BeginInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rawMeshData, draw, callback, object);
}
inline void Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::EndInvoke(::by_ref<::GlobalNamespace::Mesh_MeshData>  rawMeshData, ::by_ref<::Drawing::CommandBuilder>  draw, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawMeshData, draw, result);
}
inline ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate* Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Drawing::JobWireMesh_CommandBuilder_JobWireMeshDelegate::JobWireMesh_CommandBuilder_JobWireMeshDelegate()   {
}
