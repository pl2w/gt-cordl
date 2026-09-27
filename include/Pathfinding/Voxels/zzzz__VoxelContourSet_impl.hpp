#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelContourSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelContourSet_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelContour_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelContourSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelContourSet::*)()>(&::Pathfinding::Voxels::VoxelContourSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebf82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelContourSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*& Pathfinding::Voxels::VoxelContourSet::__cordl_internal_get_conts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conts;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>* const& Pathfinding::Voxels::VoxelContourSet::__cordl_internal_get_conts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conts;
}
constexpr void Pathfinding::Voxels::VoxelContourSet::__cordl_internal_set_conts(::System::Collections::Generic::List_1<::Pathfinding::Voxels::VoxelContour>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conts = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Voxels::VoxelContourSet::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Voxels::VoxelContourSet::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void Pathfinding::Voxels::VoxelContourSet::__cordl_internal_set_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void Pathfinding::Voxels::VoxelContourSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelContourSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Voxels::VoxelContourSet* Pathfinding::Voxels::VoxelContourSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::VoxelContourSet*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelContourSet::VoxelContourSet()   {
}
