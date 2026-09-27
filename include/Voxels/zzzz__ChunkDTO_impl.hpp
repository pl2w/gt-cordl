#pragma once
// IWYU pragma private; include "Voxels/ChunkDTO.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__ChunkDTO_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
//  Writing Method size for method: ::Voxels::ChunkDTO.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::ChunkDTO::*)()>(&::Voxels::ChunkDTO::get_IsValid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5dac330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkDTO>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::ChunkDTO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::ChunkDTO::*)(::Voxels::Chunk*)>(&::Voxels::ChunkDTO::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5dac3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkDTO>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Voxels::ChunkDTO::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkDTO>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Voxels::ChunkDTO::_ctor(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::ChunkDTO>(),
                        {".ctor", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, chunk);
}
// Ctor Parameters [CppParam { name: "WorldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Id", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dimensions", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Density", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Material", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::ChunkDTO::ChunkDTO(int32_t  WorldId, ::Unity::Mathematics::int3  Id, ::Unity::Mathematics::int3  Size, ::Unity::Mathematics::int3  Dimensions, ::Unity::Collections::NativeArray_1<uint8_t>  Density, ::Unity::Collections::NativeArray_1<uint8_t>  Material) noexcept  {
this->WorldId = WorldId;
this->Id = Id;
this->Size = Size;
this->Dimensions = Dimensions;
this->Density = Density;
this->Material = Material;
}
// Ctor Parameters []
constexpr ::Voxels::ChunkDTO::ChunkDTO()   {
}
