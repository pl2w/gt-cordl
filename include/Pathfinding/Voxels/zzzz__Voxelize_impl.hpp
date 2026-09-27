#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/Voxelize.hpp"
#include "Pathfinding/zzzz__RecastGraph_RelevantGraphSurfaceMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/Voxels/zzzz__Voxelize_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "Pathfinding/Voxels/zzzz__RasterizationMesh_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelArea_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelContourSet_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelContour_def.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelMesh_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(float_t, int32_t, ::Pathfinding::Voxels::VoxelContourSet*, int32_t)>(&::Pathfinding::Voxels::Voxelize::BuildContours)> {
  constexpr static std::size_t size = 0xa4c;
  constexpr static std::size_t addrs = 0x5ebfa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildContours", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.GetClosestIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::ArrayW<int32_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::Voxels::Voxelize::GetClosestIndices)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ec1e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"GetClosestIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.ReleaseContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Voxels::VoxelContourSet*)>(&::Pathfinding::Voxels::Voxelize::ReleaseContours)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ec240c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ReleaseContours", {}, {::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.MergeContours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Pathfinding::Voxels::VoxelContour>, ::by_ref<::Pathfinding::Voxels::VoxelContour>, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::MergeContours)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5ec2054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"MergeContours", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelContour>>(), ::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelContour>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.SimplifyContour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*, float_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::SimplifyContour)> {
  constexpr static std::size_t size = 0x11cc;
  constexpr static std::size_t addrs = 0x5ec0ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"SimplifyContour", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.WalkContour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t, ::ArrayW<uint16_t>, ::System::Collections::Generic::List_1<int32_t>*)>(&::Pathfinding::Voxels::Voxelize::WalkContour)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x5ec04d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"WalkContour", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.GetCornerHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t, int32_t, ::by_ref<bool>)>(&::Pathfinding::Voxels::Voxelize::GetCornerHeight)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5ec2528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"GetCornerHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.RemoveDegenerateSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::System::Collections::Generic::List_1<int32_t>*)>(&::Pathfinding::Voxels::Voxelize::RemoveDegenerateSegments)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5ec1c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"RemoveDegenerateSegments", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.CalcAreaOfPolygon2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::Voxelize::*)(::ArrayW<int32_t>, int32_t)>(&::Pathfinding::Voxels::Voxelize::CalcAreaOfPolygon2D)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ec1db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CalcAreaOfPolygon2D", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Ileft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Ileft)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ec2354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Ileft", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Diagonal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Diagonal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ec2b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Diagonal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.InCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::InCone)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5ec2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"InCone", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Left)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ec2e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Left", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.LeftOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::LeftOn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ec2e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"LeftOn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Collinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Collinear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ec2f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Collinear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Area2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Area2)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ec2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Area2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Diagonalie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Diagonalie)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ec2cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Diagonalie", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Xorb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, bool)>(&::Pathfinding::Voxels::Voxelize::Xorb)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ec306c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Xorb", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.IntersectProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::IntersectProp)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ec3078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"IntersectProp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Between
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Between)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ec3174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Between", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Intersect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ec2fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Intersect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Vequal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::ArrayW<int32_t>)>(&::Pathfinding::Voxels::Voxelize::Vequal)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ec2f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Vequal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Prev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::Prev)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ec2e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Prev", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::Next)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ec2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Next", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildPolyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::Pathfinding::Voxels::VoxelContourSet*, int32_t, ::by_ref<::Pathfinding::Voxels::VoxelMesh>)>(&::Pathfinding::Voxels::Voxelize::BuildPolyMesh)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x5ec328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildPolyMesh", {}, {::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelMesh>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Voxels::Voxelize::*)(int32_t, ::ArrayW<int32_t>, ::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<int32_t>>)>(&::Pathfinding::Voxels::Voxelize::Triangulate)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5ec3880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Triangulate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.get_transformVoxel2Graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Util::GraphTransform* (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::get_transformVoxel2Graph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ec3cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"get_transformVoxel2Graph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.set_transformVoxel2Graph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::Voxels::Voxelize::set_transformVoxel2Graph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ec3d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"set_transformVoxel2Graph", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.CompactSpanToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::CompactSpanToVector)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ec3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CompactSpanToVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.VectorToIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::UnityEngine::Vector3, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Pathfinding::Voxels::Voxelize::VectorToIndex)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ec3d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VectorToIndex", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::Pathfinding::Voxels::Voxelize::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5ec3f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::Init)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ec410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.VoxelizeInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::Pathfinding::Util::GraphTransform*, ::UnityEngine::Bounds)>(&::Pathfinding::Voxels::Voxelize::VoxelizeInput)> {
  constexpr static std::size_t size = 0xd88;
  constexpr static std::size_t addrs = 0x5ec41c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelizeInput", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.DebugDrawSpans
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::DebugDrawSpans)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5ec4f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"DebugDrawSpans", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildCompactField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::BuildCompactField)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5ec51b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildCompactField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildVoxelConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::BuildVoxelConnections)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5ec5494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildVoxelConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::UnityEngine::Color)>(&::Pathfinding::Voxels::Voxelize::DrawLine)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5ec57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"DrawLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.VoxelToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::VoxelToWorld)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ec59b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelToWorld", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.VoxelToWorldInt3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::Voxels::Voxelize::*)(::Pathfinding::Int3)>(&::Pathfinding::Voxels::Voxelize::VoxelToWorldInt3)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5ec59f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelToWorldInt3", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.ConvertPosWithoutOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::ConvertPosWithoutOffset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ec5cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ConvertPosWithoutOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.ConvertPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::ConvertPosition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ec5d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ConvertPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.ErodeWalkableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(int32_t)>(&::Pathfinding::Voxels::Voxelize::ErodeWalkableArea)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ec5d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ErodeWalkableArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::BuildDistanceField)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ec65d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildDistanceField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.ErodeVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(int32_t)>(&::Pathfinding::Voxels::Voxelize::ErodeVoxels)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5ec6980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ErodeVoxels", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.FilterLowHeightSpans
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(uint32_t, float_t, float_t)>(&::Pathfinding::Voxels::Voxelize::FilterLowHeightSpans)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ec6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterLowHeightSpans", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.FilterLedges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(uint32_t, int32_t, float_t, float_t)>(&::Pathfinding::Voxels::Voxelize::FilterLedges)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5ec6c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterLedges", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.FloodRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t, uint32_t, uint16_t, ::ArrayW<uint16_t>, ::ArrayW<uint16_t>, ::ArrayW<::Pathfinding::Int3>, ::ArrayW<int32_t>, ::ArrayW<bool>)>(&::Pathfinding::Voxels::Voxelize::FloodRegion)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5ec7060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FloodRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.MarkRectWithRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(int32_t, int32_t, int32_t, int32_t, uint16_t, ::ArrayW<uint16_t>)>(&::Pathfinding::Voxels::Voxelize::MarkRectWithRegion)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ec7554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"MarkRectWithRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.CalculateDistanceField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Pathfinding::Voxels::Voxelize::*)(::ArrayW<uint16_t>)>(&::Pathfinding::Voxels::Voxelize::CalculateDistanceField)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x5ec5eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CalculateDistanceField", {}, {::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BoxBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint16_t> (::Pathfinding::Voxels::Voxelize::*)(::ArrayW<uint16_t>, ::ArrayW<uint16_t>)>(&::Pathfinding::Voxels::Voxelize::BoxBlur)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ec66e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BoxBlur", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.BuildRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)()>(&::Pathfinding::Voxels::Voxelize::BuildRegions)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x5ec7644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildRegions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.union_find_find
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int32_t>, int32_t)>(&::Pathfinding::Voxels::Voxelize::union_find_find)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ec8a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"union_find_find", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.union_find_union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::union_find_union)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ec8afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"union_find_union", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Voxels::Voxelize.FilterSmallRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Voxels::Voxelize::*)(::ArrayW<uint16_t>, int32_t, int32_t)>(&::Pathfinding::Voxels::Voxelize::FilterSmallRegions)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x5ec8360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterSmallRegions", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*& Pathfinding::Voxels::Voxelize::__cordl_internal_get_inputMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMeshes;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>* const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_inputMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMeshes;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_inputMeshes(::System::Collections::Generic::List_1<::Pathfinding::Voxels::RasterizationMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMeshes = value;
}
constexpr int32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelWalkableClimb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelWalkableClimb;
}
constexpr int32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelWalkableClimb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelWalkableClimb;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_voxelWalkableClimb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelWalkableClimb = value;
}
constexpr uint32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelWalkableHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelWalkableHeight;
}
constexpr uint32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelWalkableHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelWalkableHeight;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_voxelWalkableHeight(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelWalkableHeight = value;
}
constexpr float_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr float_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellSize;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_cellSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellSize = value;
}
constexpr float_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellHeight;
}
constexpr float_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellHeight;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_cellHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellHeight = value;
}
constexpr int32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_minRegionSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRegionSize;
}
constexpr int32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_minRegionSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minRegionSize;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_minRegionSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minRegionSize = value;
}
constexpr int32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_borderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderSize;
}
constexpr int32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_borderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderSize;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_borderSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___borderSize = value;
}
constexpr float_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_maxEdgeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEdgeLength;
}
constexpr float_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_maxEdgeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEdgeLength;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_maxEdgeLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEdgeLength = value;
}
constexpr float_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_maxSlope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr float_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_maxSlope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlope;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_maxSlope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSlope = value;
}
constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode& Pathfinding::Voxels::Voxelize::__cordl_internal_get_relevantGraphSurfaceMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantGraphSurfaceMode;
}
constexpr ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_relevantGraphSurfaceMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relevantGraphSurfaceMode;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_relevantGraphSurfaceMode(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relevantGraphSurfaceMode = value;
}
constexpr ::UnityEngine::Bounds& Pathfinding::Voxels::Voxelize::__cordl_internal_get_forcedBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBounds;
}
constexpr ::UnityEngine::Bounds const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_forcedBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedBounds;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_forcedBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedBounds = value;
}
constexpr ::Pathfinding::Voxels::VoxelArea*& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelArea;
}
constexpr ::Pathfinding::Voxels::VoxelArea* const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelArea;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_voxelArea(::Pathfinding::Voxels::VoxelArea*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelArea = value;
}
constexpr ::Pathfinding::Voxels::VoxelContourSet*& Pathfinding::Voxels::Voxelize::__cordl_internal_get_countourSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countourSet;
}
constexpr ::Pathfinding::Voxels::VoxelContourSet* const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_countourSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countourSet;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_countourSet(::Pathfinding::Voxels::VoxelContourSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countourSet = value;
}
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::Voxels::Voxelize::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_transform(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::Pathfinding::Util::GraphTransform*& Pathfinding::Voxels::Voxelize::__cordl_internal_get__transformVoxel2Graph_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformVoxel2Graph_k__BackingField;
}
constexpr ::Pathfinding::Util::GraphTransform* const& Pathfinding::Voxels::Voxelize::__cordl_internal_get__transformVoxel2Graph_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformVoxel2Graph_k__BackingField;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set__transformVoxel2Graph_k__BackingField(::Pathfinding::Util::GraphTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformVoxel2Graph_k__BackingField = value;
}
constexpr int32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Pathfinding::Voxels::Voxelize::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr int32_t const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_depth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelOffset;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_voxelOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelOffset;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_voxelOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelOffset = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellScale;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::Voxels::Voxelize::__cordl_internal_get_cellScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cellScale;
}
constexpr void Pathfinding::Voxels::Voxelize::__cordl_internal_set_cellScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cellScale = value;
}
inline void Pathfinding::Voxels::Voxelize::BuildContours(float_t  maxError, int32_t  maxEdgeLength, ::Pathfinding::Voxels::VoxelContourSet*  cset, int32_t  buildFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildContours", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxError, maxEdgeLength, cset, buildFlags);
}
inline void Pathfinding::Voxels::Voxelize::GetClosestIndices(::ArrayW<int32_t>  vertsa, int32_t  nvertsa, ::ArrayW<int32_t>  vertsb, int32_t  nvertsb, ::by_ref<int32_t>  ia, ::by_ref<int32_t>  ib)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"GetClosestIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertsa, nvertsa, vertsb, nvertsb, ia, ib);
}
inline void Pathfinding::Voxels::Voxelize::ReleaseContours(::Pathfinding::Voxels::VoxelContourSet*  cset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ReleaseContours", {}, {::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cset);
}
inline bool Pathfinding::Voxels::Voxelize::MergeContours(::by_ref<::Pathfinding::Voxels::VoxelContour>  ca, ::by_ref<::Pathfinding::Voxels::VoxelContour>  cb, int32_t  ia, int32_t  ib)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"MergeContours", {}, {::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelContour>>(), ::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelContour>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ca, cb, ia, ib);
}
inline void Pathfinding::Voxels::Voxelize::SimplifyContour(::System::Collections::Generic::List_1<int32_t>*  verts, ::System::Collections::Generic::List_1<int32_t>*  simplified, float_t  maxError, int32_t  maxEdgeLenght, int32_t  buildFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"SimplifyContour", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, simplified, maxError, maxEdgeLenght, buildFlags);
}
inline void Pathfinding::Voxels::Voxelize::WalkContour(int32_t  x, int32_t  z, int32_t  i, ::ArrayW<uint16_t>  flags, ::System::Collections::Generic::List_1<int32_t>*  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"WalkContour", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x, z, i, flags, verts);
}
inline int32_t Pathfinding::Voxels::Voxelize::GetCornerHeight(int32_t  x, int32_t  z, int32_t  i, int32_t  dir, ::by_ref<bool>  isBorderVertex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"GetCornerHeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, z, i, dir, isBorderVertex);
}
inline void Pathfinding::Voxels::Voxelize::RemoveDegenerateSegments(::System::Collections::Generic::List_1<int32_t>*  simplified)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"RemoveDegenerateSegments", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simplified);
}
inline int32_t Pathfinding::Voxels::Voxelize::CalcAreaOfPolygon2D(::ArrayW<int32_t>  verts, int32_t  nverts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CalcAreaOfPolygon2D", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, verts, nverts);
}
inline bool Pathfinding::Voxels::Voxelize::Ileft(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  va, ::ArrayW<int32_t>  vb, ::ArrayW<int32_t>  vc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Ileft", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, va, vb, vc);
}
inline bool Pathfinding::Voxels::Voxelize::Diagonal(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Diagonal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i, j, n, verts, indices);
}
inline bool Pathfinding::Voxels::Voxelize::InCone(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"InCone", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i, j, n, verts, indices);
}
inline bool Pathfinding::Voxels::Voxelize::Left(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Left", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, verts);
}
inline bool Pathfinding::Voxels::Voxelize::LeftOn(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"LeftOn", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, verts);
}
inline bool Pathfinding::Voxels::Voxelize::Collinear(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Collinear", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, verts);
}
inline int32_t Pathfinding::Voxels::Voxelize::Area2(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Area2", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b, c, verts);
}
inline bool Pathfinding::Voxels::Voxelize::Diagonalie(int32_t  i, int32_t  j, int32_t  n, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Diagonalie", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, i, j, n, verts, indices);
}
inline bool Pathfinding::Voxels::Voxelize::Xorb(bool  x, bool  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Xorb", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline bool Pathfinding::Voxels::Voxelize::IntersectProp(int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"IntersectProp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, d, verts);
}
inline bool Pathfinding::Voxels::Voxelize::Between(int32_t  a, int32_t  b, int32_t  c, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Between", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, verts);
}
inline bool Pathfinding::Voxels::Voxelize::Intersect(int32_t  a, int32_t  b, int32_t  c, int32_t  d, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Intersect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c, d, verts);
}
inline bool Pathfinding::Voxels::Voxelize::Vequal(int32_t  a, int32_t  b, ::ArrayW<int32_t>  verts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Vequal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, verts);
}
inline int32_t Pathfinding::Voxels::Voxelize::Prev(int32_t  i, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Prev", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, n);
}
inline int32_t Pathfinding::Voxels::Voxelize::Next(int32_t  i, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Next", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, n);
}
inline void Pathfinding::Voxels::Voxelize::BuildPolyMesh(::Pathfinding::Voxels::VoxelContourSet*  cset, int32_t  nvp, ::by_ref<::Pathfinding::Voxels::VoxelMesh>  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildPolyMesh", {}, {::i2c::type_of<::Pathfinding::Voxels::VoxelContourSet*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Pathfinding::Voxels::VoxelMesh>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cset, nvp, mesh);
}
inline int32_t Pathfinding::Voxels::Voxelize::Triangulate(int32_t  n, ::ArrayW<int32_t>  verts, ::by_ref<::ArrayW<int32_t>>  indices, ::by_ref<::ArrayW<int32_t>>  tris)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Triangulate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, n, verts, indices, tris);
}
inline ::Pathfinding::Util::GraphTransform* Pathfinding::Voxels::Voxelize::get_transformVoxel2Graph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"get_transformVoxel2Graph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Util::GraphTransform*>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::set_transformVoxel2Graph(::Pathfinding::Util::GraphTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"set_transformVoxel2Graph", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::Voxels::Voxelize::CompactSpanToVector(int32_t  x, int32_t  z, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CompactSpanToVector", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, z, i);
}
inline void Pathfinding::Voxels::Voxelize::VectorToIndex(::UnityEngine::Vector3  p, ::by_ref<int32_t>  x, ::by_ref<int32_t>  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VectorToIndex", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, x, z);
}
inline void Pathfinding::Voxels::Voxelize::_ctor(float_t  ch, float_t  cs, float_t  walkableClimb, float_t  walkableHeight, float_t  maxSlope, float_t  maxEdgeLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch, cs, walkableClimb, walkableHeight, maxSlope, maxEdgeLength);
}
inline void Pathfinding::Voxels::Voxelize::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::VoxelizeInput(::Pathfinding::Util::GraphTransform*  graphTransform, ::UnityEngine::Bounds  graphSpaceBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelizeInput", {}, {::i2c::type_of<::Pathfinding::Util::GraphTransform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graphTransform, graphSpaceBounds);
}
inline void Pathfinding::Voxels::Voxelize::DebugDrawSpans()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"DebugDrawSpans", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::BuildCompactField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildCompactField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::BuildVoxelConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildVoxelConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::DrawLine(int32_t  a, int32_t  b, ::ArrayW<int32_t>  indices, ::ArrayW<int32_t>  verts, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"DrawLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, b, indices, verts, color);
}
inline ::UnityEngine::Vector3 Pathfinding::Voxels::Voxelize::VoxelToWorld(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelToWorld", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, y, z);
}
inline ::Pathfinding::Int3 Pathfinding::Voxels::Voxelize::VoxelToWorldInt3(::Pathfinding::Int3  voxelPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"VoxelToWorldInt3", {}, {::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method, voxelPosition);
}
inline ::UnityEngine::Vector3 Pathfinding::Voxels::Voxelize::ConvertPosWithoutOffset(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ConvertPosWithoutOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, y, z);
}
inline ::UnityEngine::Vector3 Pathfinding::Voxels::Voxelize::ConvertPosition(int32_t  x, int32_t  z, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ConvertPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, z, i);
}
inline void Pathfinding::Voxels::Voxelize::ErodeWalkableArea(int32_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ErodeWalkableArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void Pathfinding::Voxels::Voxelize::BuildDistanceField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildDistanceField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Voxels::Voxelize::ErodeVoxels(int32_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"ErodeVoxels", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void Pathfinding::Voxels::Voxelize::FilterLowHeightSpans(uint32_t  voxelWalkableHeight, float_t  cs, float_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterLowHeightSpans", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWalkableHeight, cs, ch);
}
inline void Pathfinding::Voxels::Voxelize::FilterLedges(uint32_t  voxelWalkableHeight, int32_t  voxelWalkableClimb, float_t  cs, float_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterLedges", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWalkableHeight, voxelWalkableClimb, cs, ch);
}
inline bool Pathfinding::Voxels::Voxelize::FloodRegion(int32_t  x, int32_t  z, int32_t  i, uint32_t  level, uint16_t  r, ::ArrayW<uint16_t>  srcReg, ::ArrayW<uint16_t>  srcDist, ::ArrayW<::Pathfinding::Int3>  stack, ::ArrayW<int32_t>  flags, ::ArrayW<bool>  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FloodRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<::Pathfinding::Int3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, z, i, level, r, srcReg, srcDist, stack, flags, closed);
}
inline void Pathfinding::Voxels::Voxelize::MarkRectWithRegion(int32_t  minx, int32_t  maxx, int32_t  minz, int32_t  maxz, uint16_t  region, ::ArrayW<uint16_t>  srcReg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"MarkRectWithRegion", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minx, maxx, minz, maxz, region, srcReg);
}
inline uint16_t Pathfinding::Voxels::Voxelize::CalculateDistanceField(::ArrayW<uint16_t>  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"CalculateDistanceField", {}, {::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method, src);
}
inline ::ArrayW<uint16_t> Pathfinding::Voxels::Voxelize::BoxBlur(::ArrayW<uint16_t>  src, ::ArrayW<uint16_t>  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BoxBlur", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint16_t>>(this, ___internal_method, src, dst);
}
inline void Pathfinding::Voxels::Voxelize::BuildRegions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"BuildRegions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Voxels::Voxelize::union_find_find(::ArrayW<int32_t>  arr, int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"union_find_find", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, arr, x);
}
inline void Pathfinding::Voxels::Voxelize::union_find_union(::ArrayW<int32_t>  arr, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"union_find_union", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr, a, b);
}
inline void Pathfinding::Voxels::Voxelize::FilterSmallRegions(::ArrayW<uint16_t>  reg, int32_t  minRegionSize, int32_t  maxRegions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Voxels::Voxelize*>(),
                        {"FilterSmallRegions", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reg, minRegionSize, maxRegions);
}
inline ::Pathfinding::Voxels::Voxelize* Pathfinding::Voxels::Voxelize::New_ctor(float_t  ch, float_t  cs, float_t  walkableClimb, float_t  walkableHeight, float_t  maxSlope, float_t  maxEdgeLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Voxels::Voxelize*>(ch, cs, walkableClimb, walkableHeight, maxSlope, maxEdgeLength));
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::Voxelize::Voxelize()   {
}
