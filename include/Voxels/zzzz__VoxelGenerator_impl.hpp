#pragma once
// IWYU pragma private; include "Voxels/VoxelGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__NativeCounter_impl.hpp"
#include "Voxels/zzzz__VoxelGenerator_MeshingParameters_impl.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_MeshingParameters_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelGenerator.get_PostProcessMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelGenerator::*)()>(&::Voxels::VoxelGenerator::get_PostProcessMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db8028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"get_PostProcessMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator::*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelGenerator::DrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db8038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::VoxelGenerator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.GetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (::Voxels::VoxelGenerator::*)()>(&::Voxels::VoxelGenerator::GetWorldBounds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5db803c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::VoxelGenerator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.ShiftWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator::*)(::UnityEngine::Vector3Int)>(&::Voxels::VoxelGenerator::ShiftWorldBounds)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db8048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::VoxelGenerator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.InitWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator::*)(::Voxels::VoxelWorld*)>(&::Voxels::VoxelGenerator::InitWorld)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db804c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::VoxelGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.CreateVoxelDataJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::VoxelGenerator::*)(::Voxels::Chunk*)>(&::Voxels::VoxelGenerator::CreateVoxelDataJob)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::VoxelGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.CreateMeshDataJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::VoxelGenerator::*)(::Voxels::Chunk*)>(&::Voxels::VoxelGenerator::CreateMeshDataJob)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5db8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"CreateMeshDataJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator.CreateMeshPostProcessJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::VoxelGenerator::*)(::Voxels::Chunk*)>(&::Voxels::VoxelGenerator::CreateMeshPostProcessJob)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5db85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"CreateMeshPostProcessJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator::*)()>(&::Voxels::VoxelGenerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5db0054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Voxels::VoxelGenerator::__cordl_internal_get_Seed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Seed;
}
constexpr int32_t const& Voxels::VoxelGenerator::__cordl_internal_get_Seed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Seed;
}
constexpr void Voxels::VoxelGenerator::__cordl_internal_set_Seed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Seed = value;
}
constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters& Voxels::VoxelGenerator::__cordl_internal_get_meshParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshParameters;
}
constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters const& Voxels::VoxelGenerator::__cordl_internal_get_meshParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshParameters;
}
constexpr void Voxels::VoxelGenerator::__cordl_internal_set_meshParameters(::GlobalNamespace::VoxelGenerator_MeshingParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshParameters = value;
}
inline bool Voxels::VoxelGenerator::get_PostProcessMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"get_PostProcessMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::VoxelGenerator::DrawGizmos(::Voxels::VoxelWorld*  world)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelGenerator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world);
}
inline ::UnityEngine::BoundsInt Voxels::VoxelGenerator::GetWorldBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelGenerator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(this, ___internal_method);
}
inline void Voxels::VoxelGenerator::ShiftWorldBounds(::UnityEngine::Vector3Int  worldShift)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelGenerator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldShift);
}
inline void Voxels::VoxelGenerator::InitWorld(::Voxels::VoxelWorld*  world)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world);
}
inline ::Voxels::ChunkTask Voxels::VoxelGenerator::CreateVoxelDataJob(::Voxels::Chunk*  chunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::VoxelGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline ::Voxels::ChunkTask Voxels::VoxelGenerator::CreateMeshDataJob(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"CreateMeshDataJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline ::Voxels::ChunkTask Voxels::VoxelGenerator::CreateMeshPostProcessJob(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {"CreateMeshPostProcessJob", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelGenerator* Voxels::VoxelGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelGenerator*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelGenerator::VoxelGenerator()   {
}
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c__DisplayClass11_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass11_0._CreateMeshPostProcessJob_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c__DisplayClass11_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass11_0::_CreateMeshPostProcessJob_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5db8bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass11_0*>(),
                        {"<CreateMeshPostProcessJob>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Voxels::Chunk*& Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::Voxels::Chunk* const& Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_set_chunk(::Voxels::Chunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
constexpr ::Voxels::NativeCounter& Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_get_triangleCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangleCounter;
}
constexpr ::Voxels::NativeCounter const& Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_get_triangleCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangleCounter;
}
constexpr void Voxels::VoxelGenerator___c__DisplayClass11_0::__cordl_internal_set_triangleCounter(::Voxels::NativeCounter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangleCounter = value;
}
inline void Voxels::VoxelGenerator___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelGenerator___c__DisplayClass11_0::_CreateMeshPostProcessJob_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass11_0*>(),
                        {"<CreateMeshPostProcessJob>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelGenerator___c__DisplayClass11_0* Voxels::VoxelGenerator___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelGenerator___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelGenerator___c__DisplayClass11_0::VoxelGenerator___c__DisplayClass11_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db819c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass10_0._CreateMeshDataJob_g__CreateMarchingCubesMeshJob_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Voxels::VoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_g__CreateMarchingCubesMeshJob_0)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5db81a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>g__CreateMarchingCubesMeshJob|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass10_0._CreateMeshDataJob_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_b__2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5db8b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator___c__DisplayClass10_0._CreateMeshDataJob_g__CreateSurfaceNetsMeshJob_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Voxels::VoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_g__CreateSurfaceNetsMeshJob_1)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5db834c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>g__CreateSurfaceNetsMeshJob|1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Voxels::Chunk*& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::Voxels::Chunk* const& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_set_chunk(::Voxels::Chunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
constexpr ::System::Action*& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action* const& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
constexpr ::Voxels::NativeCounter& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_triangleCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangleCounter;
}
constexpr ::Voxels::NativeCounter const& Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_triangleCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triangleCounter;
}
constexpr void Voxels::VoxelGenerator___c__DisplayClass10_0::__cordl_internal_set_triangleCounter(::Voxels::NativeCounter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triangleCounter = value;
}
inline void Voxels::VoxelGenerator___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_g__CreateMarchingCubesMeshJob_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>g__CreateMarchingCubesMeshJob|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline void Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Voxels::VoxelGenerator___c__DisplayClass10_0::_CreateMeshDataJob_g__CreateSurfaceNetsMeshJob_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateMeshDataJob>g__CreateSurfaceNetsMeshJob|1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline ::Voxels::VoxelGenerator___c__DisplayClass10_0* Voxels::VoxelGenerator___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelGenerator___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelGenerator___c__DisplayClass10_0::VoxelGenerator___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelGenerator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c::*)()>(&::Voxels::VoxelGenerator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelGenerator___c._CreateMeshDataJob_b__10_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelGenerator___c::*)()>(&::Voxels::VoxelGenerator___c::_CreateMeshDataJob_b__10_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db8b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c*>(),
                        {"<CreateMeshDataJob>b__10_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::VoxelGenerator___c::setStaticF___9(::Voxels::VoxelGenerator___c*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelGenerator___c*, "<>9", ::Voxels::VoxelGenerator___c*>(std::forward<::Voxels::VoxelGenerator___c*>(value));
}
inline ::Voxels::VoxelGenerator___c* Voxels::VoxelGenerator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelGenerator___c*, "<>9", ::Voxels::VoxelGenerator___c*>();
}
inline void Voxels::VoxelGenerator___c::setStaticF___9__10_3(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__10_3", ::Voxels::VoxelGenerator___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Voxels::VoxelGenerator___c::getStaticF___9__10_3()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__10_3", ::Voxels::VoxelGenerator___c*>();
}
inline void Voxels::VoxelGenerator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelGenerator___c::_CreateMeshDataJob_b__10_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelGenerator___c*>(),
                        {"<CreateMeshDataJob>b__10_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelGenerator___c* Voxels::VoxelGenerator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelGenerator___c*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelGenerator___c::VoxelGenerator___c()   {
}
