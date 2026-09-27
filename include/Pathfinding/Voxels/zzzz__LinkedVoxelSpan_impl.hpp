#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/LinkedVoxelSpan.hpp"
#include "Pathfinding/Voxels/zzzz__LinkedVoxelSpan_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::LinkedVoxelSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::LinkedVoxelSpan::*)(uint32_t, uint32_t, int32_t)>(&::Pathfinding::Voxels::LinkedVoxelSpan::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ebf448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::LinkedVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::LinkedVoxelSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::LinkedVoxelSpan::*)(uint32_t, uint32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::LinkedVoxelSpan::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ebeb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::LinkedVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::LinkedVoxelSpan::_ctor(uint32_t  bottom, uint32_t  top, int32_t  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::LinkedVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, top, area);
}
inline void Pathfinding::Voxels::LinkedVoxelSpan::_ctor(uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::LinkedVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, top, area, next);
}
// Ctor Parameters [CppParam { name: "bottom", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "top", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "area", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::LinkedVoxelSpan::LinkedVoxelSpan(uint32_t  bottom, uint32_t  top, int32_t  next, int32_t  area) noexcept  {
this->bottom = bottom;
this->top = top;
this->next = next;
this->area = area;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::LinkedVoxelSpan::LinkedVoxelSpan()   {
}
