#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_SetupInstanceDataForMeshStatic_def.hpp"
#include "GlobalNamespace/zzzz__BuilderRenderer_SetupInstanceDataForMesh_def.hpp"
#include "GlobalNamespace/zzzz__BuilderTableDataRenderData_def.hpp"
#include "GlobalNamespace/zzzz__BuilderTableDataRenderIndirectBatch_def.hpp"
#include "GlobalNamespace/zzzz__BuilderTableSubMesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d17a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.InitIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::InitIfNeeded)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x57d17a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(bool)>(&::GlobalNamespace::BuilderRenderer::Show)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d1cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"Show", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.BuildRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*)>(&::GlobalNamespace::BuilderRenderer::BuildRenderer)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x57d1cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildRenderer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.LogDraws
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::LogDraws)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x57d30fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"LogDraws", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::PostTick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57d3364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.WriteSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::WriteSerializedData)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x57d33b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"WriteSerializedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.ApplySerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::ApplySerializedData)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x57d3d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"ApplySerializedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.AddPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderRenderer::AddPrefab)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x57d1eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddPrefab", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.AddMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderRenderer::*)(::UnityEngine::Material*, bool)>(&::GlobalNamespace::BuilderRenderer::AddMaterial)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x57d42e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.BuildSharedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::BuildSharedMaterial)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x57d2640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildSharedMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.BuildSharedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::BuildSharedMesh)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x57d2a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildSharedMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.BuildBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::BuildBuffer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x57d2fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.BuildBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*, int32_t, int32_t, ::UnityEngine::Material*)>(&::GlobalNamespace::BuilderRenderer::BuildBatch)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x57d4a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57d5118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.DestroyBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::DestroyBuffer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x57d5174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"DestroyBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.DestroyBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*)>(&::GlobalNamespace::BuilderRenderer::DestroyBatch)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x57d51e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"DestroyBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.PreRenderIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::PreRenderIndirect)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57d54d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"PreRenderIndirect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.RenderIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::RenderIndirect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57d337c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RenderIndirect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.SetupIndirectBatchArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*, ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>)>(&::GlobalNamespace::BuilderRenderer::SetupIndirectBatchArgs)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57d55d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"SetupIndirectBatchArgs", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.RenderIndirectBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*)>(&::GlobalNamespace::BuilderRenderer::RenderIndirectBatch)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57d571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RenderIndirectBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.AddPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderRenderer::AddPiece)> {
  constexpr static std::size_t size = 0xbbc;
  constexpr static std::size_t addrs = 0x57c477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.RemovePiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderRenderer::RemovePiece)> {
  constexpr static std::size_t size = 0x9c4;
  constexpr static std::size_t addrs = 0x57c00dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RemovePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.ChangePieceIndirectMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderPiece*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, ::UnityEngine::Material*)>(&::GlobalNamespace::BuilderRenderer::ChangePieceIndirectMaterial)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x57c10e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"ChangePieceIndirectMaterial", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Jobs::TransformAccessArray, int32_t)>(&::GlobalNamespace::BuilderRenderer::RemoveAt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57d584c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RemoveAt", {}, {::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer.SetPieceTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)(::GlobalNamespace::BuilderPiece*, float_t)>(&::GlobalNamespace::BuilderRenderer::SetPieceTint)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x57c1d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"SetPieceTint", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderRenderer::*)()>(&::GlobalNamespace::BuilderRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d58cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_sharedMaterialBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialBase;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_sharedMaterialBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialBase;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_sharedMaterialBase(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMaterialBase = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_sharedMaterialIndirectBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialIndirectBase;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_sharedMaterialIndirectBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedMaterialIndirectBase;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_sharedMaterialIndirectBase(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedMaterialIndirectBase = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_snapPieceShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPieceShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_snapPieceShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPieceShader;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_snapPieceShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPieceShader = value;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderData*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_renderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderData;
}
constexpr ::GlobalNamespace::BuilderTableDataRenderData* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_renderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderData;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_renderData(::GlobalNamespace::BuilderTableDataRenderData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshToIndexKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshToIndexKeys;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshToIndexKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshToIndexKeys;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeMeshToIndexKeys(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeMeshToIndexKeys = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshToIndexValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshToIndexValues;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshToIndexValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshToIndexValues;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeMeshToIndexValues(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeMeshToIndexValues = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshes;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeMeshes = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshInstanceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshInstanceCount;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeMeshInstanceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeMeshInstanceCount;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeMeshInstanceCount(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeMeshInstanceCount = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSubMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSubMeshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSubMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSubMeshes;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeSubMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTableSubMesh>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeSubMeshes = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMesh;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeSharedMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeSharedMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextureToIndexKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextureToIndexKeys;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextureToIndexKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextureToIndexKeys;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeTextureToIndexKeys(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeTextureToIndexKeys = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextureToIndexValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextureToIndexValues;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextureToIndexValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextureToIndexValues;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeTextureToIndexValues(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeTextureToIndexValues = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextures;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeTextures;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeTextures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeTextures = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializePerTextureMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializePerTextureMaterial;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializePerTextureMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializePerTextureMaterial;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializePerTextureMaterial(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializePerTextureMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializePerTexturePropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializePerTexturePropertyBlock;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializePerTexturePropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializePerTexturePropertyBlock;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializePerTexturePropertyBlock(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializePerTexturePropertyBlock = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedTexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedTexArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedTexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedTexArray;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeSharedTexArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeSharedTexArray = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMaterial;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeSharedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeSharedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMaterialIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMaterialIndirect;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_serializeSharedMaterialIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serializeSharedMaterialIndirect;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_serializeSharedMaterialIndirect(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serializeSharedMaterialIndirect = value;
}
constexpr bool& GlobalNamespace::BuilderRenderer::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr bool& GlobalNamespace::BuilderRenderer::__cordl_internal_get_built()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___built;
}
constexpr bool const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_built() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___built;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_built(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___built = value;
}
constexpr bool& GlobalNamespace::BuilderRenderer::__cordl_internal_get_showing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showing;
}
constexpr bool const& GlobalNamespace::BuilderRenderer::__cordl_internal_get_showing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showing;
}
constexpr void GlobalNamespace::BuilderRenderer::__cordl_internal_set_showing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showing = value;
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_meshRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "meshRenderers", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* GlobalNamespace::BuilderRenderer::getStaticF_meshRenderers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "meshRenderers", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_verticesAll(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "verticesAll", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::BuilderRenderer::getStaticF_verticesAll()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "verticesAll", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_normalsAll(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "normalsAll", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::BuilderRenderer::getStaticF_normalsAll()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "normalsAll", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_uv1All(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "uv1All", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GlobalNamespace::BuilderRenderer::getStaticF_uv1All()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "uv1All", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_trianglesAll(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "trianglesAll", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::BuilderRenderer::getStaticF_trianglesAll()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "trianglesAll", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "vertices", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::BuilderRenderer::getStaticF_vertices()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "vertices", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "normals", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::BuilderRenderer::getStaticF_normals()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "normals", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_uv1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "uv1", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GlobalNamespace::BuilderRenderer::getStaticF_uv1()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, "uv1", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::setStaticF_triangles(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "triangles", ::GlobalNamespace::BuilderRenderer*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::BuilderRenderer::getStaticF_triangles()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "triangles", ::GlobalNamespace::BuilderRenderer*>();
}
inline void GlobalNamespace::BuilderRenderer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::InitIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"InitIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::Show(bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"Show", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void GlobalNamespace::BuilderRenderer::BuildRenderer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  piecePrefabs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildRenderer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piecePrefabs);
}
inline void GlobalNamespace::BuilderRenderer::LogDraws()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"LogDraws", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::WriteSerializedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"WriteSerializedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::ApplySerializedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"ApplySerializedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::AddPrefab(::GlobalNamespace::BuilderPiece*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddPrefab", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefab);
}
inline bool GlobalNamespace::BuilderRenderer::AddMaterial(::UnityEngine::Material*  material, bool  suppressWarnings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, material, suppressWarnings);
}
inline void GlobalNamespace::BuilderRenderer::BuildSharedMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildSharedMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::BuildSharedMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildSharedMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::BuildBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::BuildBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch, int32_t  meshCount, int32_t  maxInstances, ::UnityEngine::Material*  sharedMaterialIndirect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"BuildBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indirectBatch, meshCount, maxInstances, sharedMaterialIndirect);
}
inline void GlobalNamespace::BuilderRenderer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::DestroyBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"DestroyBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::DestroyBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"DestroyBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indirectBatch);
}
inline void GlobalNamespace::BuilderRenderer::PreRenderIndirect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"PreRenderIndirect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::RenderIndirect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RenderIndirect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderRenderer::SetupIndirectBatchArgs(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch, ::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>  subMeshes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"SetupIndirectBatchArgs", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::GlobalNamespace::BuilderTableSubMesh>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indirectBatch, subMeshes);
}
inline void GlobalNamespace::BuilderRenderer::RenderIndirectBatch(::GlobalNamespace::BuilderTableDataRenderIndirectBatch*  indirectBatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RenderIndirectBatch", {}, {::i2c::type_of<::GlobalNamespace::BuilderTableDataRenderIndirectBatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indirectBatch);
}
inline void GlobalNamespace::BuilderRenderer::AddPiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"AddPiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderRenderer::RemovePiece(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RemovePiece", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderRenderer::ChangePieceIndirectMaterial(::GlobalNamespace::BuilderPiece*  piece, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  targetRenderers, ::UnityEngine::Material*  targetMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"ChangePieceIndirectMaterial", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, targetRenderers, targetMaterial);
}
inline void GlobalNamespace::BuilderRenderer::RemoveAt(::UnityEngine::Jobs::TransformAccessArray  a, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"RemoveAt", {}, {::i2c::type_of<::UnityEngine::Jobs::TransformAccessArray>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, i);
}
inline void GlobalNamespace::BuilderRenderer::SetPieceTint(::GlobalNamespace::BuilderPiece*  piece, float_t  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {"SetPieceTint", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, tint);
}
inline void GlobalNamespace::BuilderRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderRenderer* GlobalNamespace::BuilderRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderRenderer::BuilderRenderer()   {
}
