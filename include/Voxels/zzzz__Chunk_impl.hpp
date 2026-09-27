#pragma once
// IWYU pragma private; include "Voxels/Chunk.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__MeshVertexData_impl.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "Voxels/zzzz__ChunkComponent_def.hpp"
#include "Voxels/zzzz__ChunkDTO_def.hpp"
#include "Voxels/zzzz__ChunkState_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::Chunk.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::ChunkComponent> (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_Component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Voxels::ChunkComponent*)>(&::Voxels::Chunk::set_Component)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_Component", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_GameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_GameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::UnityEngine::GameObject*)>(&::Voxels::Chunk::set_GameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_GameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_MeshFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshFilter> (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_MeshFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_MeshFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::UnityEngine::MeshFilter*)>(&::Voxels::Chunk::set_MeshFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_MeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshRenderer> (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_MeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_MeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::UnityEngine::MeshRenderer*)>(&::Voxels::Chunk::set_MeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_MeshCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MeshCollider> (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_MeshCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_MeshCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::UnityEngine::MeshCollider*)>(&::Voxels::Chunk::set_MeshCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dab098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshCollider", {}, {::i2c::type_of<::UnityEngine::MeshCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_DefaultSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)()>(&::Voxels::Chunk::get_DefaultSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dab0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_DefaultSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_DefaultSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::int3)>(&::Voxels::Chunk::set_DefaultSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dab0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_DefaultSize", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_Pad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Voxels::Chunk::get_Pad)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dab168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_Pad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.set_Pad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Voxels::Chunk::set_Pad)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dab1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_Pad", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkState (::Voxels::Chunk::*)()>(&::Voxels::Chunk::get_State)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dab21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Voxels::ChunkDTO)>(&::Voxels::Chunk::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5dab270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t)>(&::Voxels::Chunk::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5dab360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.SetFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Voxels::ChunkDTO)>(&::Voxels::Chunk::SetFrom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5dab474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"SetFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.UpdateFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Voxels::ChunkDTO)>(&::Voxels::Chunk::UpdateFrom)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5dab678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"UpdateFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)()>(&::Voxels::Chunk::Clear)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5dab7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.SetComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(::Voxels::ChunkComponent*)>(&::Voxels::Chunk::SetComponent)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5dab9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"SetComponent", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)()>(&::Voxels::Chunk::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dab568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.DisposeAllExceptComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)()>(&::Voxels::Chunk::DisposeAllExceptComponent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5dab76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"DisposeAllExceptComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.AllocateVertexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(int32_t)>(&::Voxels::Chunk::AllocateVertexData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5dabc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"AllocateVertexData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.AllocateTriangleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)(int32_t)>(&::Voxels::Chunk::AllocateTriangleData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5dabd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"AllocateTriangleData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.DisposeMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Chunk::*)()>(&::Voxels::Chunk::DisposeMeshData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5dab828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"DisposeMeshData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.GetLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::Chunk::*)(::Unity::Mathematics::int3)>(&::Voxels::Chunk::GetLocalPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5dabe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"GetLocalPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Voxels::Chunk::*)()>(&::Voxels::Chunk::ToString)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5dabe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::Chunk*>(),
                    {::i2c::class_of<::Voxels::Chunk*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::Chunk.GetChunkName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Unity::Mathematics::int3)>(&::Voxels::Chunk::GetChunkName)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5dabb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"GetChunkName", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::Chunk::__cordl_internal_get_World()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___World;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::Chunk::__cordl_internal_get_World() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___World;
}
constexpr void Voxels::Chunk::__cordl_internal_set_World(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___World = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::Chunk::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::Chunk::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Id(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::Chunk::__cordl_internal_get_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::Chunk::__cordl_internal_get_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Size;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Size(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Size = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::Chunk::__cordl_internal_get_Dimensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dimensions;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::Chunk::__cordl_internal_get_Dimensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dimensions;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Dimensions(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dimensions = value;
}
constexpr int32_t& Voxels::Chunk::__cordl_internal_get_VoxelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoxelCount;
}
constexpr int32_t const& Voxels::Chunk::__cordl_internal_get_VoxelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoxelCount;
}
constexpr void Voxels::Chunk::__cordl_internal_set_VoxelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoxelCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& Voxels::Chunk::__cordl_internal_get_Density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& Voxels::Chunk::__cordl_internal_get_Density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Density;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Density(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Density = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& Voxels::Chunk::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& Voxels::Chunk::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Material(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>& Voxels::Chunk::__cordl_internal_get_VertexData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VertexData;
}
constexpr ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData> const& Voxels::Chunk::__cordl_internal_get_VertexData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VertexData;
}
constexpr void Voxels::Chunk::__cordl_internal_set_VertexData(::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VertexData = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& Voxels::Chunk::__cordl_internal_get_TriangleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriangleData;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& Voxels::Chunk::__cordl_internal_get_TriangleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriangleData;
}
constexpr void Voxels::Chunk::__cordl_internal_set_TriangleData(::Unity::Collections::NativeArray_1<uint16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriangleData = value;
}
constexpr ::System::Object*& Voxels::Chunk::__cordl_internal_get_GenericMeshData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericMeshData;
}
constexpr ::System::Object* const& Voxels::Chunk::__cordl_internal_get_GenericMeshData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenericMeshData;
}
constexpr void Voxels::Chunk::__cordl_internal_set_GenericMeshData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenericMeshData = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsDataGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataGenerated;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsDataGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataGenerated;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsDataGenerated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDataGenerated = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsDataChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataChanged;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsDataChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDataChanged;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsDataChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDataChanged = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsMeshGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshGenerated;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsMeshGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshGenerated;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsMeshGenerated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMeshGenerated = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsMeshCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshCreated;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsMeshCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshCreated;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsMeshCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMeshCreated = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsCollisionBaked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCollisionBaked;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsCollisionBaked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCollisionBaked;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsCollisionBaked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsCollisionBaked = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsMeshAssigned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshAssigned;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsMeshAssigned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsMeshAssigned;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsMeshAssigned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsMeshAssigned = value;
}
constexpr bool& Voxels::Chunk::__cordl_internal_get_IsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDirty;
}
constexpr bool const& Voxels::Chunk::__cordl_internal_get_IsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDirty;
}
constexpr void Voxels::Chunk::__cordl_internal_set_IsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDirty = value;
}
constexpr int32_t& Voxels::Chunk::__cordl_internal_get_VertexCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VertexCount;
}
constexpr int32_t const& Voxels::Chunk::__cordl_internal_get_VertexCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VertexCount;
}
constexpr void Voxels::Chunk::__cordl_internal_set_VertexCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VertexCount = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Voxels::Chunk::__cordl_internal_get_Mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Voxels::Chunk::__cordl_internal_get_Mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mesh;
}
constexpr void Voxels::Chunk::__cordl_internal_set_Mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mesh = value;
}
constexpr ::UnityW<::Voxels::ChunkComponent>& Voxels::Chunk::__cordl_internal_get__Component_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr ::UnityW<::Voxels::ChunkComponent> const& Voxels::Chunk::__cordl_internal_get__Component_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Component_k__BackingField;
}
constexpr void Voxels::Chunk::__cordl_internal_set__Component_k__BackingField(::UnityW<::Voxels::ChunkComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Component_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Voxels::Chunk::__cordl_internal_get__GameObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameObject_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Voxels::Chunk::__cordl_internal_get__GameObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GameObject_k__BackingField;
}
constexpr void Voxels::Chunk::__cordl_internal_set__GameObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GameObject_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& Voxels::Chunk::__cordl_internal_get__MeshFilter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshFilter_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Voxels::Chunk::__cordl_internal_get__MeshFilter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshFilter_k__BackingField;
}
constexpr void Voxels::Chunk::__cordl_internal_set__MeshFilter_k__BackingField(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MeshFilter_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Voxels::Chunk::__cordl_internal_get__MeshRenderer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshRenderer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Voxels::Chunk::__cordl_internal_get__MeshRenderer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshRenderer_k__BackingField;
}
constexpr void Voxels::Chunk::__cordl_internal_set__MeshRenderer_k__BackingField(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MeshRenderer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& Voxels::Chunk::__cordl_internal_get__MeshCollider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshCollider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& Voxels::Chunk::__cordl_internal_get__MeshCollider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MeshCollider_k__BackingField;
}
constexpr void Voxels::Chunk::__cordl_internal_set__MeshCollider_k__BackingField(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MeshCollider_k__BackingField = value;
}
inline void Voxels::Chunk::setStaticF__DefaultSize_k__BackingField(::Unity::Mathematics::int3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::int3, "<DefaultSize>k__BackingField", ::Voxels::Chunk*>(std::forward<::Unity::Mathematics::int3>(value));
}
inline ::Unity::Mathematics::int3 Voxels::Chunk::getStaticF__DefaultSize_k__BackingField()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::int3, "<DefaultSize>k__BackingField", ::Voxels::Chunk*>();
}
inline void Voxels::Chunk::setStaticF__Pad_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<Pad>k__BackingField", ::Voxels::Chunk*>(std::forward<int32_t>(value));
}
inline int32_t Voxels::Chunk::getStaticF__Pad_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<Pad>k__BackingField", ::Voxels::Chunk*>();
}
inline ::UnityW<::Voxels::ChunkComponent> Voxels::Chunk::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::ChunkComponent>>(this, ___internal_method);
}
inline void Voxels::Chunk::set_Component(::Voxels::ChunkComponent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_Component", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Voxels::Chunk::get_GameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_GameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Voxels::Chunk::set_GameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_GameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshFilter> Voxels::Chunk::get_MeshFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshFilter>>(this, ___internal_method);
}
inline void Voxels::Chunk::set_MeshFilter(::UnityEngine::MeshFilter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshRenderer> Voxels::Chunk::get_MeshRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshRenderer>>(this, ___internal_method);
}
inline void Voxels::Chunk::set_MeshRenderer(::UnityEngine::MeshRenderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::MeshCollider> Voxels::Chunk::get_MeshCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_MeshCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MeshCollider>>(this, ___internal_method);
}
inline void Voxels::Chunk::set_MeshCollider(::UnityEngine::MeshCollider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_MeshCollider", {}, {::i2c::type_of<::UnityEngine::MeshCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Voxels::Chunk::get_DefaultSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_DefaultSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method);
}
inline void Voxels::Chunk::set_DefaultSize(::Unity::Mathematics::int3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_DefaultSize", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t Voxels::Chunk::get_Pad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_Pad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Voxels::Chunk::set_Pad(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"set_Pad", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Voxels::ChunkState Voxels::Chunk::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkState>(this, ___internal_method);
}
inline void Voxels::Chunk::_ctor(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dto);
}
inline void Voxels::Chunk::_ctor(::Unity::Mathematics::int3  id, ::Unity::Mathematics::int3  size, int32_t  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, size, padding);
}
inline void Voxels::Chunk::SetFrom(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"SetFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dto);
}
inline void Voxels::Chunk::UpdateFrom(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"UpdateFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dto);
}
inline void Voxels::Chunk::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::Chunk::SetComponent(::Voxels::ChunkComponent*  chunkComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"SetComponent", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkComponent);
}
inline void Voxels::Chunk::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::Chunk::DisposeAllExceptComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"DisposeAllExceptComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::Chunk::AllocateVertexData(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"AllocateVertexData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void Voxels::Chunk::AllocateTriangleData(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"AllocateTriangleData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline void Voxels::Chunk::DisposeMeshData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"DisposeMeshData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Mathematics::int3 Voxels::Chunk::GetLocalPosition(::Unity::Mathematics::int3  voxelPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"GetLocalPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method, voxelPosition);
}
inline ::StringW Voxels::Chunk::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::Chunk*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Voxels::Chunk::GetChunkName(::Unity::Mathematics::int3  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Chunk*>(),
                        {"GetChunkName", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
inline ::Voxels::Chunk* Voxels::Chunk::New_ctor(::Voxels::ChunkDTO  dto)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::Chunk*>(dto));
}
inline ::Voxels::Chunk* Voxels::Chunk::New_ctor(::Unity::Mathematics::int3  id, ::Unity::Mathematics::int3  size, int32_t  padding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::Chunk*>(id, size, padding));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Voxels::Chunk::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Voxels::Chunk::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Voxels::Chunk::Chunk()   {
}
