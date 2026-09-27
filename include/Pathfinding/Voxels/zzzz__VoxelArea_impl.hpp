#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelArea.hpp"
#include "Pathfinding/Voxels/zzzz__CompactVoxelCell_impl.hpp"
#include "Pathfinding/Voxels/zzzz__CompactVoxelSpan_impl.hpp"
#include "Pathfinding/Voxels/zzzz__LinkedVoxelSpan_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelArea_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelArea::*)()>(&::Pathfinding::Voxels::VoxelArea::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ebe888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.ResetLinkedVoxelSpans
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelArea::*)()>(&::Pathfinding::Voxels::VoxelArea::ResetLinkedVoxelSpans)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5ebe8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"ResetLinkedVoxelSpans", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelArea::*)(int32_t, int32_t)>(&::Pathfinding::Voxels::VoxelArea::_ctor)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5ebeb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.GetSpanCountAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::VoxelArea::*)()>(&::Pathfinding::Voxels::VoxelArea::GetSpanCountAll)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ebee54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"GetSpanCountAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.GetSpanCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::VoxelArea::*)()>(&::Pathfinding::Voxels::VoxelArea::GetSpanCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ebeedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"GetSpanCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.PushToSpanRemovedStack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelArea::*)(int32_t)>(&::Pathfinding::Voxels::VoxelArea::PushToSpanRemovedStack)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ebef68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"PushToSpanRemovedStack", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::VoxelArea.AddLinkedSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::VoxelArea::*)(int32_t, uint32_t, uint32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::VoxelArea::AddLinkedSpan)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5ebf048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"AddLinkedSpan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactSpans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactSpans;
}
constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactSpans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactSpans;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_compactSpans(::ArrayW<::Pathfinding::Voxels::CompactVoxelSpan>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compactSpans = value;
}
constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactCells()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactCells;
}
constexpr ::ArrayW<::Pathfinding::Voxels::CompactVoxelCell> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactCells() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactCells;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_compactCells(::ArrayW<::Pathfinding::Voxels::CompactVoxelCell>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compactCells = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactSpanCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactSpanCount;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_compactSpanCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compactSpanCount;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_compactSpanCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compactSpanCount = value;
}
constexpr ::ArrayW<uint16_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_tmpUShortArr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpUShortArr;
}
constexpr ::ArrayW<uint16_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_tmpUShortArr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpUShortArr;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_tmpUShortArr(::ArrayW<uint16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpUShortArr = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_areaTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTypes;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_areaTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areaTypes;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_areaTypes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areaTypes = value;
}
constexpr ::ArrayW<uint16_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_dist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dist;
}
constexpr ::ArrayW<uint16_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_dist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dist;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_dist(::ArrayW<uint16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dist = value;
}
constexpr uint16_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr uint16_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_maxDistance(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_maxRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRegions;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_maxRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRegions;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_maxRegions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRegions = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_DirectionX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionX;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_DirectionX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionX;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_DirectionX(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectionX = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_DirectionZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionZ;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_DirectionZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionZ;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_DirectionZ(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectionZ = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_VectorDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VectorDirection;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_VectorDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VectorDirection;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_VectorDirection(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VectorDirection = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_linkedSpanCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpanCount;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_linkedSpanCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpanCount;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_linkedSpanCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedSpanCount = value;
}
constexpr ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_linkedSpans()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpans;
}
constexpr ::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_linkedSpans() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpans;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_linkedSpans(::ArrayW<::Pathfinding::Voxels::LinkedVoxelSpan>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedSpans = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_removedStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedStack;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_removedStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedStack;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_removedStack(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removedStack = value;
}
constexpr int32_t& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_removedStackCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedStackCount;
}
constexpr int32_t const& Pathfinding::Voxels::VoxelArea::__cordl_internal_get_removedStackCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___removedStackCount;
}
constexpr void Pathfinding::Voxels::VoxelArea::__cordl_internal_set_removedStackCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___removedStackCount = value;
}
inline void Pathfinding::Voxels::VoxelArea::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::VoxelArea::ResetLinkedVoxelSpans()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"ResetLinkedVoxelSpans", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::VoxelArea::_ctor(int32_t  width, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, depth);
}
inline int32_t Pathfinding::Voxels::VoxelArea::GetSpanCountAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"GetSpanCountAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Voxels::VoxelArea::GetSpanCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"GetSpanCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Voxels::VoxelArea::PushToSpanRemovedStack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"PushToSpanRemovedStack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Pathfinding::Voxels::VoxelArea::AddLinkedSpan(int32_t  index, uint32_t  bottom, uint32_t  top, int32_t  area, int32_t  voxelWalkableClimb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::VoxelArea*>(),
                        {"AddLinkedSpan", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, bottom, top, area, voxelWalkableClimb);
}
inline ::Pathfinding::Voxels::VoxelArea* Pathfinding::Voxels::VoxelArea::New_ctor(int32_t  width, int32_t  depth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::VoxelArea*>(width, depth));
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelArea::VoxelArea()   {
}
