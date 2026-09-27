#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/CompactVoxelCell.hpp"
#include "Pathfinding/Voxels/zzzz__CompactVoxelCell_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::CompactVoxelCell._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::CompactVoxelCell::*)(uint32_t, uint32_t)>(&::Pathfinding::Voxels::CompactVoxelCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelCell>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::CompactVoxelCell::_ctor(uint32_t  i, uint32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelCell>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i, c);
}
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::CompactVoxelCell::CompactVoxelCell(uint32_t  index, uint32_t  count) noexcept  {
this->index = index;
this->count = count;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::CompactVoxelCell::CompactVoxelCell()   {
}
