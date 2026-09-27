#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_NoiseParameters_impl.hpp"
#include "Voxels/zzzz__VoxelGenerator_impl.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_def.hpp"
#include "Voxels/zzzz__ChunkTask_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_NoiseParameters_def.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_VoxelDataJob_def.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_def.hpp"
//  Writing Method size for method: ::Voxels::PerlinVoxelGenerator.CreateVoxelDataJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::ChunkTask (::Voxels::PerlinVoxelGenerator::*)(::Voxels::Chunk*)>(&::Voxels::PerlinVoxelGenerator::CreateVoxelDataJob)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5dafdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Voxels::PerlinVoxelGenerator*>(),
                    {::i2c::class_of<::Voxels::PerlinVoxelGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::PerlinVoxelGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::PerlinVoxelGenerator::*)()>(&::Voxels::PerlinVoxelGenerator::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5db0010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters& Voxels::PerlinVoxelGenerator::__cordl_internal_get_noiseParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseParameters;
}
constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters const& Voxels::PerlinVoxelGenerator::__cordl_internal_get_noiseParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseParameters;
}
constexpr void Voxels::PerlinVoxelGenerator::__cordl_internal_set_noiseParameters(::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseParameters = value;
}
inline ::Voxels::ChunkTask Voxels::PerlinVoxelGenerator::CreateVoxelDataJob(::Voxels::Chunk*  chunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Voxels::PerlinVoxelGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Voxels::ChunkTask>(this, ___internal_method, chunk);
}
inline void Voxels::PerlinVoxelGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::PerlinVoxelGenerator* Voxels::PerlinVoxelGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::PerlinVoxelGenerator*>());
}
// Ctor Parameters []
constexpr ::Voxels::PerlinVoxelGenerator::PerlinVoxelGenerator()   {
}
//  Writing Method size for method: ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::*)()>(&::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db0008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0._CreateVoxelDataJob_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::*)()>(&::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::_CreateVoxelDataJob_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5db0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*>(),
                        {"<CreateVoxelDataJob>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Voxels::Chunk*& Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::__cordl_internal_get_chunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr ::Voxels::Chunk* const& Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::__cordl_internal_get_chunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunk;
}
constexpr void Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::__cordl_internal_set_chunk(::Voxels::Chunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunk = value;
}
inline void Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::_CreateVoxelDataJob_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*>(),
                        {"<CreateVoxelDataJob>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0* Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::PerlinVoxelGenerator___c__DisplayClass2_0::PerlinVoxelGenerator___c__DisplayClass2_0()   {
}
