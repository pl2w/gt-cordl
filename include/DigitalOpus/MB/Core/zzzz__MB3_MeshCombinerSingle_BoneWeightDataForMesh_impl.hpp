#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneWeightDataForMesh.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight1_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_BoneWeightDataForMesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::*)()>(&::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d9a1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::*)(bool)>(&::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d9a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, disposing);
}
// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weMustDispose", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bonesPerVertex", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UsedBoneIdxsInSrcMesh", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numUsedbones", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::MB3_MeshCombinerSingle_BoneWeightDataForMesh(bool  _disposed, bool  initialized, bool  weMustDispose, ::Unity::Collections::NativeArray_1<uint8_t>  bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  boneWeights, ::ArrayW<bool>  UsedBoneIdxsInSrcMesh, int32_t  numUsedbones) noexcept  {
this->_disposed = _disposed;
this->initialized = initialized;
this->weMustDispose = weMustDispose;
this->bonesPerVertex = bonesPerVertex;
this->boneWeights = boneWeights;
this->UsedBoneIdxsInSrcMesh = UsedBoneIdxsInSrcMesh;
this->numUsedbones = numUsedbones;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh::MB3_MeshCombinerSingle_BoneWeightDataForMesh()   {
}
