#pragma once
// IWYU pragma private; include "Voxels/SurfaceNets.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__SurfaceNets_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_def.hpp"
//  Writing Method size for method: ::Voxels::SurfaceNets.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::Voxels::SurfaceNetsBuffer, ::Unity::Jobs::JobHandle)>(&::Voxels::SurfaceNets::Generate)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5db6868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNets*>(),
                        {"Generate", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Voxels::SurfaceNetsBuffer>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle Voxels::SurfaceNets::Generate(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, ::Voxels::SurfaceNetsBuffer  buffer, ::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::SurfaceNets*>(),
                        {"Generate", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Voxels::SurfaceNetsBuffer>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, sdf, shape, min, max, buffer, dependency);
}
// Ctor Parameters []
constexpr ::Voxels::SurfaceNets::SurfaceNets()   {
}
