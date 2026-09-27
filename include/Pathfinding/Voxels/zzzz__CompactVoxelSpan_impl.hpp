#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/CompactVoxelSpan.hpp"
#include "Pathfinding/Voxels/zzzz__CompactVoxelSpan_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::CompactVoxelSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::CompactVoxelSpan::*)(uint16_t, uint32_t)>(&::Pathfinding::Voxels::CompactVoxelSpan::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ebfa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::CompactVoxelSpan.SetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::CompactVoxelSpan::*)(int32_t, uint32_t)>(&::Pathfinding::Voxels::CompactVoxelSpan::SetConnection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ebfa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {"SetConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::CompactVoxelSpan.GetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::CompactVoxelSpan::*)(int32_t)>(&::Pathfinding::Voxels::CompactVoxelSpan::GetConnection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ebfa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Voxels::CompactVoxelSpan::_ctor(uint16_t  bottom, uint32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bottom, height);
}
inline void Pathfinding::Voxels::CompactVoxelSpan::SetConnection(int32_t  dir, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {"SetConnection", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dir, value);
}
inline int32_t Pathfinding::Voxels::CompactVoxelSpan::GetConnection(int32_t  dir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::CompactVoxelSpan>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, dir);
}
// Ctor Parameters [CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "con", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "h", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reg", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::CompactVoxelSpan::CompactVoxelSpan(uint16_t  y, uint32_t  con, uint32_t  h, int32_t  reg) noexcept  {
this->y = y;
this->con = con;
this->h = h;
this->reg = reg;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::CompactVoxelSpan::CompactVoxelSpan()   {
}
