#pragma once
// IWYU pragma private; include "GlobalNamespace/VoxelExtensions.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelOperation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VoxelExtensions_def.hpp"
#include "GlobalNamespace/zzzz__VoxelAction_def.hpp"
#include "GlobalNamespace/zzzz__VoxelExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelMineOperation_def.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Mine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Collision*, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelExtensions::Mine)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5df651c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Mine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::RaycastHit, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelExtensions::Mine)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5df65c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Mine_MarchingCubes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::RaycastHit, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelExtensions::Mine_MarchingCubes)> {
  constexpr static std::size_t size = 0xe90;
  constexpr static std::size_t addrs = 0x5df670c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine_MarchingCubes", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Mine_SurfaceNets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::RaycastHit, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelExtensions::Mine_SurfaceNets)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x5df759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine_SurfaceNets", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.AddMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t, int32_t)>(&::GlobalNamespace::VoxelExtensions::AddMined)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5df7d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"AddMined", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.PerformLocalMiningOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::Voxels::VoxelWorld*, ::GlobalNamespace::VoxelManager_VoxelMineOperation, bool)>(&::GlobalNamespace::VoxelExtensions::PerformLocalMiningOperation)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5df7e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformLocalMiningOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.PerformLocalOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction, bool)>(&::GlobalNamespace::VoxelExtensions::PerformLocalOperation)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5df8308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformLocalOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.MineAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint8_t,uint8_t> (*)(::Unity::Mathematics::int3, ::System::ValueTuple_2<uint8_t,uint8_t>)>(&::GlobalNamespace::VoxelExtensions::MineAt)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5df8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"MineAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.UnMineAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint8_t,uint8_t> (*)(::Unity::Mathematics::int3, ::System::ValueTuple_2<uint8_t,uint8_t>)>(&::GlobalNamespace::VoxelExtensions::UnMineAt)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5df8bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"UnMineAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.SubtractAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Unity::Mathematics::int3, uint8_t)>(&::GlobalNamespace::VoxelExtensions::SubtractAt)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5df915c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SubtractAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.AddAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Unity::Mathematics::int3, uint8_t)>(&::GlobalNamespace::VoxelExtensions::AddAt)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5df9300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"AddAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.SetVoxelAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint8_t,uint8_t> (*)(::Unity::Mathematics::int3, ::System::ValueTuple_2<uint8_t,uint8_t>)>(&::GlobalNamespace::VoxelExtensions::SetVoxelAt)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5df94a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxelAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.PerformAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::GlobalNamespace::VoxelAction)>(&::GlobalNamespace::VoxelExtensions::PerformAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5df9528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformAction", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Dig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::VoxelExtensions::Dig)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5df95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Dig", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::VoxelExtensions::Add)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5df965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Add", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.SetVoxel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, int32_t, int32_t, int32_t, uint8_t, uint8_t)>(&::GlobalNamespace::VoxelExtensions::SetVoxel)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5df96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxel", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.SetVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::UnityEngine::BoundsInt, uint8_t, uint8_t, bool)>(&::GlobalNamespace::VoxelExtensions::SetVoxels)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5df9854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.SetVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Voxels::VoxelWorld*, ::ArrayW<::Unity::Mathematics::int3>, uint8_t, uint8_t, bool)>(&::GlobalNamespace::VoxelExtensions::SetVoxels)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5df9968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetVoxelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::BoundsInt)>(&::GlobalNamespace::VoxelExtensions::GetVoxelCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5df9a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetVoxelCount", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::BoundsInt, ::UnityEngine::BoundsInt)>(&::GlobalNamespace::VoxelExtensions::Contains)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5df9ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (*)(::UnityEngine::BoundsInt, ::UnityEngine::BoundsInt)>(&::GlobalNamespace::VoxelExtensions::Union)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5df9b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Union", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (*)(::Voxels::VoxelWorld*, ::Unity::Mathematics::int3, int32_t)>(&::GlobalNamespace::VoxelExtensions::GetBounds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5df81c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (*)(::Voxels::VoxelWorld*, ::Unity::Mathematics::float3, float_t)>(&::GlobalNamespace::VoxelExtensions::GetBounds)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5df8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetTriangleCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::RaycastHit)>(&::GlobalNamespace::VoxelExtensions::GetTriangleCenter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5df7cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetTriangleCenter", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetWorldTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Vector3> (*)(::UnityEngine::RaycastHit)>(&::GlobalNamespace::VoxelExtensions::GetWorldTriangle)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x5df9c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetWorldTriangle", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Component*)>(&::GlobalNamespace::VoxelExtensions::GetFullPath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dfa1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::VoxelExtensions::GetFullPath)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5dfa2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GenerateHashcodeFromPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Component*)>(&::GlobalNamespace::VoxelExtensions::GenerateHashcodeFromPath)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dfa438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GenerateHashcodeFromPath", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.GenerateHashcodeFromPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::VoxelExtensions::GenerateHashcodeFromPath)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dfa4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GenerateHashcodeFromPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.FastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::GlobalNamespace::VoxelExtensions::FastDistance)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5df8b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"FastDistance", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.IntLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::VoxelExtensions::IntLerp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5dfa508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"IntLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions.IntLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::VoxelExtensions::IntLerp)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5dfa544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"IntLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions._GetBounds_g__Round_38_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::VoxelExtensions::_GetBounds_g__Round_38_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5df9c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"<GetBounds>g__Round|38_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions._GetBounds_g__Ceil_38_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::VoxelExtensions::_GetBounds_g__Ceil_38_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5df9c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"<GetBounds>g__Ceil|38_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoxelExtensions::setStaticF__lastBounds(::UnityEngine::BoundsInt  value)  {
::cordl_internals::setStaticField<::UnityEngine::BoundsInt, "_lastBounds", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityEngine::BoundsInt>(value));
}
inline ::UnityEngine::BoundsInt GlobalNamespace::VoxelExtensions::getStaticF__lastBounds()  {
return ::cordl_internals::getStaticField<::UnityEngine::BoundsInt, "_lastBounds", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__lastHitPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_lastHitPoint", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelExtensions::getStaticF__lastHitPoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_lastHitPoint", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__lastGridPoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_lastGridPoint", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelExtensions::getStaticF__lastGridPoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_lastGridPoint", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__lastVertex(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_lastVertex", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelExtensions::getStaticF__lastVertex()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_lastVertex", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__showDebug(bool  value)  {
::cordl_internals::setStaticField<bool, "_showDebug", ::GlobalNamespace::VoxelExtensions*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VoxelExtensions::getStaticF__showDebug()  {
return ::cordl_internals::getStaticField<bool, "_showDebug", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__centerOnly(bool  value)  {
::cordl_internals::setStaticField<bool, "_centerOnly", ::GlobalNamespace::VoxelExtensions*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VoxelExtensions::getStaticF__centerOnly()  {
return ::cordl_internals::getStaticField<bool, "_centerOnly", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__cascade(bool  value)  {
::cordl_internals::setStaticField<bool, "_cascade", ::GlobalNamespace::VoxelExtensions*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VoxelExtensions::getStaticF__cascade()  {
return ::cordl_internals::getStaticField<bool, "_cascade", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__tris(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "_tris", ::GlobalNamespace::VoxelExtensions*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::VoxelExtensions::getStaticF__tris()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "_tris", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__verts(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "_verts", ::GlobalNamespace::VoxelExtensions*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GlobalNamespace::VoxelExtensions::getStaticF__verts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "_verts", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opMaterialSet(::UnityW<::Voxels::VoxelMaterialSet>  value)  {
::cordl_internals::setStaticField<::UnityW<::Voxels::VoxelMaterialSet>, "_opMaterialSet", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityW<::Voxels::VoxelMaterialSet>>(value));
}
inline ::UnityW<::Voxels::VoxelMaterialSet> GlobalNamespace::VoxelExtensions::getStaticF__opMaterialSet()  {
return ::cordl_internals::getStaticField<::UnityW<::Voxels::VoxelMaterialSet>, "_opMaterialSet", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__op(::GlobalNamespace::VoxelOperation  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VoxelOperation, "_op", ::GlobalNamespace::VoxelExtensions*>(std::forward<::GlobalNamespace::VoxelOperation>(value));
}
inline ::GlobalNamespace::VoxelOperation GlobalNamespace::VoxelExtensions::getStaticF__op()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VoxelOperation, "_op", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opAction(::GlobalNamespace::VoxelAction  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::VoxelAction, "_opAction", ::GlobalNamespace::VoxelExtensions*>(std::forward<::GlobalNamespace::VoxelAction>(value));
}
inline ::GlobalNamespace::VoxelAction GlobalNamespace::VoxelExtensions::getStaticF__opAction()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::VoxelAction, "_opAction", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opOrigin(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_opOrigin", ::GlobalNamespace::VoxelExtensions*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelExtensions::getStaticF__opOrigin()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_opOrigin", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opTotalMined(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_opTotalMined", ::GlobalNamespace::VoxelExtensions*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::VoxelExtensions::getStaticF__opTotalMined()  {
return ::cordl_internals::getStaticField<int32_t, "_opTotalMined", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opMined(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_opMined", ::GlobalNamespace::VoxelExtensions*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::VoxelExtensions::getStaticF__opMined()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_opMined", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opDensity(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "_opDensity", ::GlobalNamespace::VoxelExtensions*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::VoxelExtensions::getStaticF__opDensity()  {
return ::cordl_internals::getStaticField<uint8_t, "_opDensity", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::setStaticF__opMaterialId(uint8_t  value)  {
::cordl_internals::setStaticField<uint8_t, "_opMaterialId", ::GlobalNamespace::VoxelExtensions*>(std::forward<uint8_t>(value));
}
inline uint8_t GlobalNamespace::VoxelExtensions::getStaticF__opMaterialId()  {
return ::cordl_internals::getStaticField<uint8_t, "_opMaterialId", ::GlobalNamespace::VoxelExtensions*>();
}
inline void GlobalNamespace::VoxelExtensions::Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::Collision*  collision, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Collision*>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, collision, action);
}
inline void GlobalNamespace::VoxelExtensions::Mine(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, hit, action);
}
inline void GlobalNamespace::VoxelExtensions::Mine_MarchingCubes(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine_MarchingCubes", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, hit, action);
}
inline void GlobalNamespace::VoxelExtensions::Mine_SurfaceNets(::Voxels::VoxelWorld*  world, ::UnityEngine::RaycastHit  hit, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Mine_SurfaceNets", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, hit, action);
}
inline void GlobalNamespace::VoxelExtensions::AddMined(uint8_t  material, int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"AddMined", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, amount);
}
inline ::ArrayW<int32_t> GlobalNamespace::VoxelExtensions::PerformLocalMiningOperation(::Voxels::VoxelWorld*  world, ::GlobalNamespace::VoxelManager_VoxelMineOperation  mineOp, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformLocalMiningOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::GlobalNamespace::VoxelManager_VoxelMineOperation>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, world, mineOp, immediate);
}
inline void GlobalNamespace::VoxelExtensions::PerformLocalOperation(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  localPosition, ::GlobalNamespace::VoxelAction  action, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformLocalOperation", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, localPosition, action, immediate);
}
inline ::System::ValueTuple_2<uint8_t,uint8_t> GlobalNamespace::VoxelExtensions::MineAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"MineAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint8_t,uint8_t>>(nullptr, ___internal_method, point, data);
}
inline ::System::ValueTuple_2<uint8_t,uint8_t> GlobalNamespace::VoxelExtensions::UnMineAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"UnMineAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint8_t,uint8_t>>(nullptr, ___internal_method, point, data);
}
inline uint8_t GlobalNamespace::VoxelExtensions::SubtractAt(::Unity::Mathematics::int3  point, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SubtractAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, point, density);
}
inline uint8_t GlobalNamespace::VoxelExtensions::AddAt(::Unity::Mathematics::int3  point, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"AddAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, point, density);
}
inline ::System::ValueTuple_2<uint8_t,uint8_t> GlobalNamespace::VoxelExtensions::SetVoxelAt(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "materialId" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxelAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint8_t,uint8_t>>(nullptr, ___internal_method, point, data);
}
inline void GlobalNamespace::VoxelExtensions::PerformAction(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, ::GlobalNamespace::VoxelAction  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"PerformAction", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::VoxelAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, position, action);
}
inline void GlobalNamespace::VoxelExtensions::Dig(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, float_t  radius, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Dig", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, position, radius, strength);
}
inline void GlobalNamespace::VoxelExtensions::Add(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  position, float_t  radius, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Add", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, position, radius, strength);
}
inline void GlobalNamespace::VoxelExtensions::SetVoxel(::Voxels::VoxelWorld*  world, int32_t  x, int32_t  y, int32_t  z, uint8_t  density, uint8_t  materialId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxel", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, x, y, z, density, materialId);
}
inline void GlobalNamespace::VoxelExtensions::SetVoxels(::Voxels::VoxelWorld*  world, ::UnityEngine::BoundsInt  worldBounds, uint8_t  density, uint8_t  materialId, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, worldBounds, density, materialId, immediate);
}
inline void GlobalNamespace::VoxelExtensions::SetVoxels(::Voxels::VoxelWorld*  world, ::ArrayW<::Unity::Mathematics::int3>  voxels, uint8_t  density, uint8_t  materialId, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, world, voxels, density, materialId, immediate);
}
inline int32_t GlobalNamespace::VoxelExtensions::GetVoxelCount(::UnityEngine::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetVoxelCount", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bounds);
}
inline bool GlobalNamespace::VoxelExtensions::Contains(::UnityEngine::BoundsInt  a, ::UnityEngine::BoundsInt  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::BoundsInt GlobalNamespace::VoxelExtensions::Union(::UnityEngine::BoundsInt  a, ::UnityEngine::BoundsInt  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"Union", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::BoundsInt GlobalNamespace::VoxelExtensions::GetBounds(::Voxels::VoxelWorld*  world, ::Unity::Mathematics::int3  point, int32_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(nullptr, ___internal_method, world, point, radius);
}
inline ::UnityEngine::BoundsInt GlobalNamespace::VoxelExtensions::GetBounds(::Voxels::VoxelWorld*  world, ::Unity::Mathematics::float3  point, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetBounds", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(nullptr, ___internal_method, world, point, radius);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoxelExtensions::GetTriangleCenter(::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetTriangleCenter", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, hit);
}
inline ::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Vector3> GlobalNamespace::VoxelExtensions::GetWorldTriangle(::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetWorldTriangle", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Vector3>>(nullptr, ___internal_method, hit);
}
inline ::StringW GlobalNamespace::VoxelExtensions::GetFullPath(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component);
}
inline ::StringW GlobalNamespace::VoxelExtensions::GetFullPath(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, go);
}
inline int32_t GlobalNamespace::VoxelExtensions::GenerateHashcodeFromPath(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GenerateHashcodeFromPath", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, component);
}
inline int32_t GlobalNamespace::VoxelExtensions::GenerateHashcodeFromPath(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"GenerateHashcodeFromPath", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, go);
}
inline int32_t GlobalNamespace::VoxelExtensions::FastDistance(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"FastDistance", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline int32_t GlobalNamespace::VoxelExtensions::IntLerp(int32_t  start, int32_t  end, int32_t  t, int32_t  tMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"IntLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, start, end, t, tMax);
}
inline int32_t GlobalNamespace::VoxelExtensions::IntLerp(int32_t  start, int32_t  end, int32_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"IntLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, start, end, t);
}
inline int32_t GlobalNamespace::VoxelExtensions::_GetBounds_g__Round_38_0(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"<GetBounds>g__Round|38_0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::VoxelExtensions::_GetBounds_g__Ceil_38_1(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions*>(),
                        {"<GetBounds>g__Ceil|38_1", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelExtensions::VoxelExtensions()   {
}
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::*)()>(&::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0._SetVoxel_g__SetVoxelAt_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint8_t,uint8_t> (::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::*)(::Unity::Mathematics::int3, ::System::ValueTuple_2<uint8_t,uint8_t>)>(&::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::_SetVoxel_g__SetVoxelAt_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5dfa5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*>(),
                        {"<SetVoxel>g__SetVoxelAt|0", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr uint8_t const& GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_set_density(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr uint8_t& GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_get_materialId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr uint8_t const& GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_get_materialId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialId;
}
constexpr void GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::__cordl_internal_set_materialId(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialId = value;
}
inline void GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<uint8_t,uint8_t> GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::_SetVoxel_g__SetVoxelAt_0(::Unity::Mathematics::int3  point, /* [TupleElementNames(new[] { "density", "material" })] */ ::System::ValueTuple_2<uint8_t,uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*>(),
                        {"<SetVoxel>g__SetVoxelAt|0", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::System::ValueTuple_2<uint8_t,uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint8_t,uint8_t>>(this, ___internal_method, point, data);
}
inline ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0* GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelExtensions___c__DisplayClass32_0::VoxelExtensions___c__DisplayClass32_0()   {
}
