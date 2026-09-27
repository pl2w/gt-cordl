#pragma once
// IWYU pragma private; include "Voxels/Voxel.hpp"
#include "Voxels/zzzz__Voxel_def.hpp"
//  Writing Method size for method: ::Voxels::Voxel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::Voxel::*)(uint8_t, uint8_t)>(&::Voxels::Voxel::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5dc41bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Voxel>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::Voxel::_ctor(uint8_t  material, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::Voxel>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, material, density);
}
// Ctor Parameters [CppParam { name: "Material", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Density", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::Voxel::Voxel(uint8_t  Material, uint8_t  Density) noexcept  {
this->Material = Material;
this->Density = Density;
}
// Ctor Parameters []
constexpr ::Voxels::Voxel::Voxel()   {
}
