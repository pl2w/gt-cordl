#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelCell.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelCell_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelSpan_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelCell.AddSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelCell::*)(uint32_t, uint32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::VoxelCell::AddSpan)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ebf834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelCell>(),
                        {"AddSpan", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::VoxelCell::AddSpan(uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  voxelWalkableClimb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelCell>(),
                        {"AddSpan", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, top, area, voxelWalkableClimb);
}
// Ctor Parameters [CppParam { name: "firstSpan", ty: "::Pathfinding::Voxels::VoxelSpan*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::VoxelCell::VoxelCell(::Pathfinding::Voxels::VoxelSpan*  firstSpan) noexcept  {
this->firstSpan = firstSpan;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelCell::VoxelCell()   {
}
