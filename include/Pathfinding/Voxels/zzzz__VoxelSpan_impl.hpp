#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelSpan.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelSpan_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelSpan._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelSpan::*)(uint32_t, uint32_t, int32_t)>(&::Pathfinding::Voxels::VoxelSpan::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ebf9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelSpan*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_bottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottom;
}
constexpr uint32_t const& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_bottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottom;
}
constexpr void Pathfinding::Voxels::VoxelSpan::__cordl_internal_set_bottom(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottom = value;
}
constexpr uint32_t& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr uint32_t const& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___top;
}
constexpr void Pathfinding::Voxels::VoxelSpan::__cordl_internal_set_top(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___top = value;
}
constexpr ::Pathfinding::Voxels::VoxelSpan*& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Pathfinding::Voxels::VoxelSpan* const& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Pathfinding::Voxels::VoxelSpan::__cordl_internal_set_next(::Pathfinding::Voxels::VoxelSpan*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelSpan::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Pathfinding::Voxels::VoxelSpan::__cordl_internal_set_area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
inline void Pathfinding::Voxels::VoxelSpan::_ctor(uint32_t  b, uint32_t  t, int32_t  area)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelSpan*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, t, area);
}
inline ::Pathfinding::Voxels::VoxelSpan* Pathfinding::Voxels::VoxelSpan::New_ctor(uint32_t  b, uint32_t  t, int32_t  area)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::VoxelSpan*>(b, t, area));
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelSpan::VoxelSpan()   {
}
