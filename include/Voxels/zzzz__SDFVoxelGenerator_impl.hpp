#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_impl.hpp"
#include "Voxels/zzzz__VoxelGenerator_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Operation_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Shape_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_VoxelDataJob_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.CreateVoxelDataJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::SDFVoxelGenerator::*)(::Voxels::Chunk*)>(&::Voxels::SDFVoxelGenerator::CreateVoxelDataJob)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5db02b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator::*)(::Voxels::VoxelWorld*)>(&::Voxels::SDFVoxelGenerator::DrawGizmos)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5db05a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.GetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (::Voxels::SDFVoxelGenerator::*)()>(&::Voxels::SDFVoxelGenerator::GetWorldBounds)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5db08ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.ShiftWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator::*)(::UnityEngine::Vector3Int)>(&::Voxels::SDFVoxelGenerator::ShiftWorldBounds)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5db0c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.InitWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator::*)(::Voxels::VoxelWorld*)>(&::Voxels::SDFVoxelGenerator::InitWorld)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5db0cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator.SetPrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator::*)(::UnityEngine::BoundsInt, uint8_t)>(&::Voxels::SDFVoxelGenerator::SetPrimitive)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5db0d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                        {"SetPrimitive", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator::*)()>(&::Voxels::SDFVoxelGenerator::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db0e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Voxels::SDFVoxelGenerator::__cordl_internal_get_fill()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fill;
}
constexpr uint8_t const& Voxels::SDFVoxelGenerator::__cordl_internal_get_fill() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fill;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_fill(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fill = value;
}
constexpr bool& Voxels::SDFVoxelGenerator::__cordl_internal_get_Blocky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Blocky;
}
constexpr bool const& Voxels::SDFVoxelGenerator::__cordl_internal_get_Blocky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Blocky;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_Blocky(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Blocky = value;
}
constexpr float_t& Voxels::SDFVoxelGenerator::__cordl_internal_get_NoiseScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseScale;
}
constexpr float_t const& Voxels::SDFVoxelGenerator::__cordl_internal_get_NoiseScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoiseScale;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_NoiseScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoiseScale = value;
}
constexpr float_t& Voxels::SDFVoxelGenerator::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr float_t const& Voxels::SDFVoxelGenerator::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_Frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
constexpr int32_t& Voxels::SDFVoxelGenerator::__cordl_internal_get_Octaves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Octaves;
}
constexpr int32_t const& Voxels::SDFVoxelGenerator::__cordl_internal_get_Octaves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Octaves;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_Octaves(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Octaves = value;
}
constexpr float_t& Voxels::SDFVoxelGenerator::__cordl_internal_get_Persistence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Persistence;
}
constexpr float_t const& Voxels::SDFVoxelGenerator::__cordl_internal_get_Persistence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Persistence;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_Persistence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Persistence = value;
}
constexpr ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>& Voxels::SDFVoxelGenerator::__cordl_internal_get_Primitives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Primitives;
}
constexpr ::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive> const& Voxels::SDFVoxelGenerator::__cordl_internal_get_Primitives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Primitives;
}
constexpr void Voxels::SDFVoxelGenerator::__cordl_internal_set_Primitives(::ArrayW<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Primitives = value;
}
inline ::Voxels::ChunkTask Voxels::SDFVoxelGenerator::CreateVoxelDataJob(::Voxels::Chunk*  chunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline void Voxels::SDFVoxelGenerator::DrawGizmos(::Voxels::VoxelWorld*  world)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world);
}
inline ::UnityEngine::BoundsInt Voxels::SDFVoxelGenerator::GetWorldBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(this, ___internal_method);
}
inline void Voxels::SDFVoxelGenerator::ShiftWorldBounds(::UnityEngine::Vector3Int  worldShift)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldShift);
}
inline void Voxels::SDFVoxelGenerator::InitWorld(::Voxels::VoxelWorld*  world)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::SDFVoxelGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world);
}
inline void Voxels::SDFVoxelGenerator::SetPrimitive(::UnityEngine::BoundsInt  worldBounds, uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                        {"SetPrimitive", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, material);
}
inline void Voxels::SDFVoxelGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::SDFVoxelGenerator* Voxels::SDFVoxelGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::SDFVoxelGenerator*>());
}
// Ctor Parameters []
constexpr ::Voxels::SDFVoxelGenerator::SDFVoxelGenerator()   {
}
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::SDFVoxelGenerator___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db059c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0._CreateVoxelDataJob_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::SDFVoxelGenerator___c__DisplayClass10_0::*)()>(&::Voxels::SDFVoxelGenerator___c__DisplayClass10_0::_CreateVoxelDataJob_b__0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5db1534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateVoxelDataJob>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Voxels::Chunk*& Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::Voxels::Chunk* const& Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_set_chunk(::Voxels::Chunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>& Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_opBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive> const& Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_get_opBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opBuffer;
}
constexpr void Voxels::SDFVoxelGenerator___c__DisplayClass10_0::__cordl_internal_set_opBuffer(::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opBuffer = value;
}
inline void Voxels::SDFVoxelGenerator___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::SDFVoxelGenerator___c__DisplayClass10_0::_CreateVoxelDataJob_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*>(),
                        {"<CreateVoxelDataJob>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0* Voxels::SDFVoxelGenerator___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::SDFVoxelGenerator___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::SDFVoxelGenerator___c__DisplayClass10_0::SDFVoxelGenerator___c__DisplayClass10_0()   {
}
