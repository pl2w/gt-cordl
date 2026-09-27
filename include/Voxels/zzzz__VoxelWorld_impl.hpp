#pragma once
// IWYU pragma private; include "Voxels/VoxelWorld.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Voxels/zzzz__VoxelWorld_WorldType_impl.hpp"
#include "Voxels/zzzz__Voxel_impl.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__Action_5_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__ChunkComponent_def.hpp"
#include "Voxels/zzzz__ChunkDTO_def.hpp"
#include "Voxels/zzzz__ChunkTaskSet_def.hpp"
#include "Voxels/zzzz__Chunk_def.hpp"
#include "Voxels/zzzz__MeshGenerationMode_def.hpp"
#include "Voxels/zzzz__VoxelGenerator_def.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "Voxels/zzzz__VoxelWorld_WorldType_def.hpp"
#include "Voxels/zzzz__VoxelWorld___c__DisplayClass120_1_def.hpp"
#include "Voxels/zzzz__VoxelWorld___c__DisplayClass121_1_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
#include "Voxels/zzzz__Voxel_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelWorld.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_Root)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5db0870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_Chunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Voxels::Chunk*>* (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_Chunks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5db8c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Chunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(bool)>(&::Voxels::VoxelWorld::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_IsInfinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_IsInfinite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db8c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_IsInfinite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_WorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_WorldBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db8c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_WorldBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_Id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(int32_t)>(&::Voxels::VoxelWorld::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_Id", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_UpdateWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_UpdateWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_UpdateWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_UpdateWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(bool)>(&::Voxels::VoxelWorld::set_UpdateWorld)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_UpdateWorld", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_ChunkSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_ChunkSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db8cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_ChunkSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_ChunkSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::set_ChunkSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5db8cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_ChunkSize", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_VoxelDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_VoxelDimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_VoxelDimension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_VoxelDimension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(int32_t)>(&::Voxels::VoxelWorld::set_VoxelDimension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_VoxelDimension", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_VoxelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_VoxelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_VoxelCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.set_VoxelCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(int32_t)>(&::Voxels::VoxelWorld::set_VoxelCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db8ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_VoxelCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_MeshGenerationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::MeshGenerationMode (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_MeshGenerationMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5db8cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_MeshGenerationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_WorldGenerationComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_WorldGenerationComplete)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5db8d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_WorldGenerationComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ExistsFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SceneManagement::Scene)>(&::Voxels::VoxelWorld::ExistsFor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5db8d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ExistsFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::Voxels::VoxelWorld::ExistsFor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5db8e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ExistsFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Component*)>(&::Voxels::VoxelWorld::ExistsFor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5db8e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene, ::Voxels::VoxelWorld*)>(&::Voxels::VoxelWorld::SetFor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5db8f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Voxels::VoxelWorld*)>(&::Voxels::VoxelWorld::SetFor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5db902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::Voxels::VoxelWorld*)>(&::Voxels::VoxelWorld::SetFor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5db90a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::VoxelWorld> (*)(::UnityEngine::SceneManagement::Scene)>(&::Voxels::VoxelWorld::GetFor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5db9128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::VoxelWorld> (*)(::UnityEngine::GameObject*)>(&::Voxels::VoxelWorld::GetFor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5db1b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::VoxelWorld> (*)(::UnityEngine::Component*)>(&::Voxels::VoxelWorld::GetFor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5db9258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::Awake)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5db92d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::Start)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5db9544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dba20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dba264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OnDestroy)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5dba300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::Update)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x5dba700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SaveChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::SaveChunks)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5dba504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SaveChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ConfigurePools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::ConfigurePools)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5db9c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ConfigurePools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.TryGetChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, ::by_ref<::Voxels::Chunk*>)>(&::Voxels::VoxelWorld::TryGetChunk)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5dbbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"TryGetChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::by_ref<::Voxels::Chunk*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetPooledChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetPooledChunk)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5dbbc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetPooledChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.CreateOrLoadChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::CreateOrLoadChunk)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5dbbc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateOrLoadChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetChunkFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkDTO)>(&::Voxels::VoxelWorld::SetChunkFrom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5dbbd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetChunkFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.UpdateChunkFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkDTO)>(&::Voxels::VoxelWorld::UpdateChunkFrom)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dbbe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"UpdateChunkFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::Save)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5dbbf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Save", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.Unload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::Unload)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dbc004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Unload", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.UpdateVisibleChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(bool)>(&::Voxels::VoxelWorld::UpdateVisibleChunks)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x5dbb398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"UpdateVisibleChunks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunkIdForWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetChunkIdForWorldPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dbc278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkIdForWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunkIdForLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetChunkIdForLocalPosition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dbc2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkIdForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetWorldType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::GlobalNamespace::VoxelWorld_WorldType, bool)>(&::Voxels::VoxelWorld::SetWorldType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dbc30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetWorldType", {}, {::i2c::type_of<::GlobalNamespace::VoxelWorld_WorldType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt)>(&::Voxels::VoxelWorld::SetWorldBounds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db0d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetWorldBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SaveWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Voxels::VoxelWorld::SaveWorld)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5dbc648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SaveWorld", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ResetWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::SceneManagement::Scene)>(&::Voxels::VoxelWorld::ResetWorld)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5dbc7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ResetWorld", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.RegenerateAllChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::RegenerateAllChunks)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5dbc328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"RegenerateAllChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OptimizeWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OptimizeWorld)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x5db974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OptimizeWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OptimizeChunkSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OptimizeChunkSize)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5dbc890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OptimizeChunkSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ResetChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::ResetChunk)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5dbc9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ResetChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ProcessChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::ProcessChunk)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5dbaeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ProcessChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.MeshChunkImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::MeshChunkImmediately)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5dbcdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"MeshChunkImmediately", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.MeshChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::System::Collections::Generic::List_1<::Voxels::Chunk*>*)>(&::Voxels::VoxelWorld::MeshChunks)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5dbd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"MeshChunks", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.AddChunkTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkTaskSet*)>(&::Voxels::VoxelWorld::AddChunkTask)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5dbcc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"AddChunkTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.RemoveChunkTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkTaskSet*)>(&::Voxels::VoxelWorld::RemoveChunkTask)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5dbcaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"RemoveChunkTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.CreateChunkMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::CreateChunkMesh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dbd764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateChunkMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.CreateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::CreateMesh)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5dbcf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.AssignMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::AssignMesh)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5dbd1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"AssignMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.PrepForOperationOnChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt)>(&::Voxels::VoxelWorld::PrepForOperationOnChunks)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5dbd78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"PrepForOperationOnChunks", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.FinalizeOperationOnChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(bool)>(&::Voxels::VoxelWorld::FinalizeOperationOnChunks)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5dbdf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"FinalizeOperationOnChunks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelDensityCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*, bool)>(&::Voxels::VoxelWorld::SetVoxelDensityCustom)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5dbe3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensityCustom", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelDataCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*, bool)>(&::Voxels::VoxelWorld::SetVoxelDataCustom)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dbe68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDataCustom", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelDataCustom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::ArrayW<::Unity::Mathematics::int3>, ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*, bool)>(&::Voxels::VoxelWorld::SetVoxelDataCustom)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5dbe794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDataCustom", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::ArrayW<::Voxels::Voxel>, bool)>(&::Voxels::VoxelWorld::SetVoxels)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5dbee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<::Voxels::Voxel>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::ArrayW<uint8_t>, bool)>(&::Voxels::VoxelWorld::SetVoxelDensity)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5dbefc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensity", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetVoxelMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetVoxelMaterial)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5dbf0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelMaterial", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetVoxelDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetVoxelDensity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5dbf1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelDensity", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetVoxelData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Voxel (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetVoxelData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5dbf2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelData", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, uint8_t)>(&::Voxels::VoxelWorld::SetVoxelMaterial)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dbf3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelMaterial", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelDensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, uint8_t)>(&::Voxels::VoxelWorld::SetVoxelDensity)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dbf4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensity", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetVoxelData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, ::Voxels::Voxel)>(&::Voxels::VoxelWorld::SetVoxelData)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dbf5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelData", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Voxels::Voxel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetBoundsFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundsInt (*)(::ArrayW<::Unity::Mathematics::int3>)>(&::Voxels::VoxelWorld::GetBoundsFor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5dbe8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetBoundsFor", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunkBoundsForLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Unity::Mathematics::int3,::Unity::Mathematics::int3> (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, bool)>(&::Voxels::VoxelWorld::GetChunkBoundsForLocalBounds)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5dbc06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkBoundsForLocalBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.BoundsChunksLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, bool)>(&::Voxels::VoxelWorld::BoundsChunksLoaded)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5dbf700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"BoundsChunksLoaded", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ClampToWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3Int)>(&::Voxels::VoxelWorld::ClampToWorldBounds)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5dbf858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ClampToWorldBounds", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ForEachChunkInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::System::Action*)>(&::Voxels::VoxelWorld::ForEachChunkInBounds)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5dbe9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ForEachChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::System::Collections::Generic::List_1<::Voxels::Chunk*>*, ::System::Action*)>(&::Voxels::VoxelWorld::ForEachChunk)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5dbe50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachChunk", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ChunksHaveJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt)>(&::Voxels::VoxelWorld::ChunksHaveJobs)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dbf8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ChunksHaveJobs", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ChunksHaveJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Voxels::VoxelWorld::*)(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*)>(&::Voxels::VoxelWorld::ChunksHaveJobs)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5dbf920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ChunksHaveJobs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Voxels::Chunk*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunksForBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::by_ref<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>)>(&::Voxels::VoxelWorld::GetChunksForBounds)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5dbdb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunksForBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunkForLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetChunkForLocalPosition)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dbfc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkForLocalPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetChunkForLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetChunkForLocalPosition)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5dbfcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ForEachVoxelInChunkInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::Voxels::Chunk*, ::System::Action_4<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t>*)>(&::Voxels::VoxelWorld::ForEachVoxelInChunkInBounds)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5dbfd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachVoxelInChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_4<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ForEachVoxelInChunkInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::BoundsInt, ::Voxels::Chunk*, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*)>(&::Voxels::VoxelWorld::ForEachVoxelInChunkInBounds)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5dc004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachVoxelInChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.ForEachSpecifiedVoxelInChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::ArrayW<::Unity::Mathematics::int3>, ::Voxels::Chunk*, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*)>(&::Voxels::VoxelWorld::ForEachSpecifiedVoxelInChunk)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5dc0344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachSpecifiedVoxelInChunk", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.HandleJobCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkTaskSet*)>(&::Voxels::VoxelWorld::HandleJobCompletion)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5dbac8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"HandleJobCompletion", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetDensityAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetDensityAt)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dc04cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetDensityAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetDensityAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, uint8_t)>(&::Voxels::VoxelWorld::GetDensityAt)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5db2a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetDensityAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetDensityAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3, uint8_t)>(&::Voxels::VoxelWorld::SetDensityAt)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dc0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetDensityAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.SetDensityAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3, uint8_t)>(&::Voxels::VoxelWorld::SetDensityAt)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5dc0554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetDensityAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetLocalPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5dc0708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetWorldPosition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5dc0858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Voxels::VoxelWorld::*)(::Unity::Mathematics::int3)>(&::Voxels::VoxelWorld::GetWorldPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dc0988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetVoxelForWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetVoxelForWorldPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dc09a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelForWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.GetVoxelForLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (::Voxels::VoxelWorld::*)(::UnityEngine::Vector3)>(&::Voxels::VoxelWorld::GetVoxelForLocalPosition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dc0a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc0a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5dc0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5dc0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ConfigurePools_b__81_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Voxels::Chunk* (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::_ConfigurePools_b__81_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5dc0fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ConfigurePools_b__81_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld::_ConfigurePools_b__81_2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5dc1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_2", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ConfigurePools_b__81_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Voxels::ChunkComponent> (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::_ConfigurePools_b__81_4)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5dc1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ConfigurePools_b__81_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkComponent*)>(&::Voxels::VoxelWorld::_ConfigurePools_b__81_5)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5dc1190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_5", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._ConfigurePools_b__81_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)(::Voxels::ChunkComponent*)>(&::Voxels::VoxelWorld::_ConfigurePools_b__81_6)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5dc1200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_6", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._SetVoxelDataCustom_g__SetVoxelDataInChunk_118_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld::*)()>(&::Voxels::VoxelWorld::_SetVoxelDataCustom_g__SetVoxelDataInChunk_118_0)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5dc1304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelDataInChunk|118_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld._SetVoxelDataCustom_g__SetVoxelData_118_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, uint8_t, uint8_t)>(&::Voxels::VoxelWorld::_SetVoxelDataCustom_g__SetVoxelData_118_1)> {
  constexpr static std::size_t size = 0x1130;
  constexpr static std::size_t addrs = 0x5dc1494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelData|118_1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelMaterialSet>& Voxels::VoxelWorld::__cordl_internal_get_MaterialSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialSet;
}
constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& Voxels::VoxelWorld::__cordl_internal_get_MaterialSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaterialSet;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_MaterialSet(::UnityW<::Voxels::VoxelMaterialSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaterialSet = value;
}
constexpr ::Voxels::VoxelGenerator*& Voxels::VoxelWorld::__cordl_internal_get_generator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generator;
}
constexpr ::Voxels::VoxelGenerator* const& Voxels::VoxelWorld::__cordl_internal_get_generator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generator;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_generator(::Voxels::VoxelGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generator = value;
}
constexpr ::GlobalNamespace::VoxelWorld_WorldType& Voxels::VoxelWorld::__cordl_internal_get_worldType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldType;
}
constexpr ::GlobalNamespace::VoxelWorld_WorldType const& Voxels::VoxelWorld::__cordl_internal_get_worldType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldType;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_worldType(::GlobalNamespace::VoxelWorld_WorldType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldType = value;
}
constexpr ::UnityEngine::BoundsInt& Voxels::VoxelWorld::__cordl_internal_get_worldBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldBounds;
}
constexpr ::UnityEngine::BoundsInt const& Voxels::VoxelWorld::__cordl_internal_get_worldBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldBounds;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_worldBounds(::UnityEngine::BoundsInt  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldBounds = value;
}
constexpr float_t& Voxels::VoxelWorld::__cordl_internal_get_worldScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScale;
}
constexpr float_t const& Voxels::VoxelWorld::__cordl_internal_get_worldScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldScale;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_worldScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldScale = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get_chunkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get_chunkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunkSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkSize = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get_viewDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewDistance;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get_viewDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewDistance;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_viewDistance(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewDistance = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get_maxJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJobs;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get_maxJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJobs;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_maxJobs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxJobs = value;
}
constexpr bool& Voxels::VoxelWorld::__cordl_internal_get_registerAsSceneWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registerAsSceneWorld;
}
constexpr bool const& Voxels::VoxelWorld::__cordl_internal_get_registerAsSceneWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registerAsSceneWorld;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_registerAsSceneWorld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registerAsSceneWorld = value;
}
constexpr bool& Voxels::VoxelWorld::__cordl_internal_get_persistChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistChanges;
}
constexpr bool const& Voxels::VoxelWorld::__cordl_internal_get_persistChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistChanges;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_persistChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistChanges = value;
}
constexpr ::UnityW<::Voxels::ChunkComponent>& Voxels::VoxelWorld::__cordl_internal_get_chunkPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPrefab;
}
constexpr ::UnityW<::Voxels::ChunkComponent> const& Voxels::VoxelWorld::__cordl_internal_get_chunkPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkPrefab;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunkPrefab(::UnityW<::Voxels::ChunkComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Voxels::VoxelWorld::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Voxels::VoxelWorld::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Voxels::VoxelWorld::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Voxels::VoxelWorld::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*& Voxels::VoxelWorld::__cordl_internal_get_chunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>* const& Voxels::VoxelWorld::__cordl_internal_get_chunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunks(::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::Chunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*& Voxels::VoxelWorld::__cordl_internal_get_chunkJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkJobs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>* const& Voxels::VoxelWorld::__cordl_internal_get_chunkJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkJobs;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunkJobs(::System::Collections::Generic::Dictionary_2<::Unity::Mathematics::int3,::Voxels::ChunkTaskSet*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkJobs = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& Voxels::VoxelWorld::__cordl_internal_get_completedJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedJobs;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& Voxels::VoxelWorld::__cordl_internal_get_completedJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completedJobs;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_completedJobs(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completedJobs = value;
}
constexpr ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>& Voxels::VoxelWorld::__cordl_internal_get_chunksToGenerate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunksToGenerate;
}
constexpr ::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3> const& Voxels::VoxelWorld::__cordl_internal_get_chunksToGenerate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunksToGenerate;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunksToGenerate(::Unity::Collections::NativeHashSet_1<::Unity::Mathematics::int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunksToGenerate = value;
}
constexpr ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>& Voxels::VoxelWorld::__cordl_internal_get_sortedChunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedChunks;
}
constexpr ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3> const& Voxels::VoxelWorld::__cordl_internal_get_sortedChunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedChunks;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_sortedChunks(::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortedChunks = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get_chunkSortIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSortIndex;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get_chunkSortIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSortIndex;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunkSortIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkSortIndex = value;
}
constexpr ::Unity::Jobs::JobHandle& Voxels::VoxelWorld::__cordl_internal_get_sortJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& Voxels::VoxelWorld::__cordl_internal_get_sortJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortJobHandle;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_sortJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortJobHandle = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get_sortedChunkCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedChunkCount;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get_sortedChunkCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedChunkCount;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_sortedChunkCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortedChunkCount = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::VoxelWorld::__cordl_internal_get_playerChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChunk;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::VoxelWorld::__cordl_internal_get_playerChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerChunk;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_playerChunk(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerChunk = value;
}
constexpr bool& Voxels::VoxelWorld::__cordl_internal_get_generationQueueChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationQueueChanged;
}
constexpr bool const& Voxels::VoxelWorld::__cordl_internal_get_generationQueueChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generationQueueChanged;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_generationQueueChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generationQueueChanged = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& Voxels::VoxelWorld::__cordl_internal_get_chunksToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunksToRemove;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& Voxels::VoxelWorld::__cordl_internal_get_chunksToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunksToRemove;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set_chunksToRemove(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunksToRemove = value;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*& Voxels::VoxelWorld::__cordl_internal_get__chunkPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkPool;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>* const& Voxels::VoxelWorld::__cordl_internal_get__chunkPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkPool;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__chunkPool(::UnityEngine::Pool::ObjectPool_1<::Voxels::Chunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chunkPool = value;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*& Voxels::VoxelWorld::__cordl_internal_get__chunkComponentPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkComponentPool;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>* const& Voxels::VoxelWorld::__cordl_internal_get__chunkComponentPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkComponentPool;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__chunkComponentPool(::UnityEngine::Pool::ObjectPool_1<::UnityW<::Voxels::ChunkComponent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chunkComponentPool = value;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*& Voxels::VoxelWorld::__cordl_internal_get__meshPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshPool;
}
constexpr ::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>* const& Voxels::VoxelWorld::__cordl_internal_get__meshPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshPool;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__meshPool(::UnityEngine::Pool::ObjectPool_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshPool = value;
}
constexpr bool& Voxels::VoxelWorld::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& Voxels::VoxelWorld::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get__Id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get__Id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Id_k__BackingField;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__Id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Id_k__BackingField = value;
}
constexpr bool& Voxels::VoxelWorld::__cordl_internal_get__updateWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateWorld;
}
constexpr bool const& Voxels::VoxelWorld::__cordl_internal_get__updateWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateWorld;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__updateWorld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateWorld = value;
}
constexpr ::Unity::Mathematics::int3& Voxels::VoxelWorld::__cordl_internal_get__ChunkSize_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkSize_k__BackingField;
}
constexpr ::Unity::Mathematics::int3 const& Voxels::VoxelWorld::__cordl_internal_get__ChunkSize_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChunkSize_k__BackingField;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__ChunkSize_k__BackingField(::Unity::Mathematics::int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChunkSize_k__BackingField = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get__VoxelDimension_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoxelDimension_k__BackingField;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get__VoxelDimension_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoxelDimension_k__BackingField;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__VoxelDimension_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoxelDimension_k__BackingField = value;
}
constexpr int32_t& Voxels::VoxelWorld::__cordl_internal_get__VoxelCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoxelCount_k__BackingField;
}
constexpr int32_t const& Voxels::VoxelWorld::__cordl_internal_get__VoxelCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoxelCount_k__BackingField;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__VoxelCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoxelCount_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>*& Voxels::VoxelWorld::__cordl_internal_get__tempChunkList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempChunkList;
}
constexpr ::System::Collections::Generic::List_1<::Voxels::Chunk*>* const& Voxels::VoxelWorld::__cordl_internal_get__tempChunkList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempChunkList;
}
constexpr void Voxels::VoxelWorld::__cordl_internal_set__tempChunkList(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempChunkList = value;
}
inline void Voxels::VoxelWorld::setStaticF_WorldLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*, "WorldLookup", ::Voxels::VoxelWorld*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>* Voxels::VoxelWorld::getStaticF_WorldLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::Voxels::VoxelWorld>>*, "WorldLookup", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opBounds(::UnityEngine::BoundsInt  value)  {
::cordl_internals::setStaticField<::UnityEngine::BoundsInt, "_opBounds", ::Voxels::VoxelWorld*>(std::forward<::UnityEngine::BoundsInt>(value));
}
inline ::UnityEngine::BoundsInt Voxels::VoxelWorld::getStaticF__opBounds()  {
return ::cordl_internals::getStaticField<::UnityEngine::BoundsInt, "_opBounds", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Voxels::Chunk*>*, "_opChunks", ::Voxels::VoxelWorld*>(std::forward<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Voxels::Chunk*>* Voxels::VoxelWorld::getStaticF__opChunks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Voxels::Chunk*>*, "_opChunks", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opChangedChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Voxels::Chunk*>*, "_opChangedChunks", ::Voxels::VoxelWorld*>(std::forward<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Voxels::Chunk*>* Voxels::VoxelWorld::getStaticF__opChangedChunks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Voxels::Chunk*>*, "_opChangedChunks", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opChunkJobs(::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*, "_opChunkJobs", ::Voxels::VoxelWorld*>(std::forward<::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>* Voxels::VoxelWorld::getStaticF__opChunkJobs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Voxels::ChunkTaskSet*>*, "_opChunkJobs", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opChunk(::Voxels::Chunk*  value)  {
::cordl_internals::setStaticField<::Voxels::Chunk*, "_opChunk", ::Voxels::VoxelWorld*>(std::forward<::Voxels::Chunk*>(value));
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::getStaticF__opChunk()  {
return ::cordl_internals::getStaticField<::Voxels::Chunk*, "_opChunk", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opAnyChanged(bool  value)  {
::cordl_internals::setStaticField<bool, "_opAnyChanged", ::Voxels::VoxelWorld*>(std::forward<bool>(value));
}
inline bool Voxels::VoxelWorld::getStaticF__opAnyChanged()  {
return ::cordl_internals::getStaticField<bool, "_opAnyChanged", ::Voxels::VoxelWorld*>();
}
inline void Voxels::VoxelWorld::setStaticF__opSetDataFunction(::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*, "_opSetDataFunction", ::Voxels::VoxelWorld*>(std::forward<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*>(value));
}
inline ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>* Voxels::VoxelWorld::getStaticF__opSetDataFunction()  {
return ::cordl_internals::getStaticField<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*, "_opSetDataFunction", ::Voxels::VoxelWorld*>();
}
inline ::UnityW<::UnityEngine::Transform> Voxels::VoxelWorld::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Voxels::Chunk*>* Voxels::VoxelWorld::get_Chunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Chunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Voxels::Chunk*>*>(this, ___internal_method);
}
inline bool Voxels::VoxelWorld::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Voxels::VoxelWorld::get_IsInfinite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_IsInfinite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::BoundsInt Voxels::VoxelWorld::get_WorldBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_WorldBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(this, ___internal_method);
}
inline int32_t Voxels::VoxelWorld::get_Id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_Id(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_Id", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Voxels::VoxelWorld::get_UpdateWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_UpdateWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_UpdateWorld(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_UpdateWorld", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Mathematics::int3 Voxels::VoxelWorld::get_ChunkSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_ChunkSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_ChunkSize(::Unity::Mathematics::int3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_ChunkSize", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Voxels::VoxelWorld::get_VoxelDimension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_VoxelDimension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_VoxelDimension(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_VoxelDimension", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Voxels::VoxelWorld::get_VoxelCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_VoxelCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::set_VoxelCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"set_VoxelCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Voxels::MeshGenerationMode Voxels::VoxelWorld::get_MeshGenerationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_MeshGenerationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::MeshGenerationMode>(this, ___internal_method);
}
inline bool Voxels::VoxelWorld::get_WorldGenerationComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_WorldGenerationComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Voxels::VoxelWorld::ExistsFor(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, scene);
}
inline bool Voxels::VoxelWorld::ExistsFor(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject);
}
inline bool Voxels::VoxelWorld::ExistsFor(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ExistsFor", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, component);
}
inline void Voxels::VoxelWorld::SetFor(::UnityEngine::SceneManagement::Scene  scene, ::Voxels::VoxelWorld*  voxelWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene, voxelWorld);
}
inline void Voxels::VoxelWorld::SetFor(::UnityEngine::GameObject*  gameObject, ::Voxels::VoxelWorld*  voxelWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, voxelWorld);
}
inline void Voxels::VoxelWorld::SetFor(::UnityEngine::Component*  component, ::Voxels::VoxelWorld*  voxelWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetFor", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::Voxels::VoxelWorld*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, voxelWorld);
}
inline ::UnityW<::Voxels::VoxelWorld> Voxels::VoxelWorld::GetFor(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::VoxelWorld>>(nullptr, ___internal_method, scene);
}
inline ::UnityW<::Voxels::VoxelWorld> Voxels::VoxelWorld::GetFor(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::VoxelWorld>>(nullptr, ___internal_method, gameObject);
}
inline ::UnityW<::Voxels::VoxelWorld> Voxels::VoxelWorld::GetFor(::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetFor", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::VoxelWorld>>(nullptr, ___internal_method, component);
}
inline void Voxels::VoxelWorld::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::SaveChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SaveChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::ConfigurePools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ConfigurePools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Voxels::VoxelWorld::TryGetChunk(::Unity::Mathematics::int3  chunkId, ::by_ref<::Voxels::Chunk*>  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"TryGetChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::by_ref<::Voxels::Chunk*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chunkId, chunk);
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::GetPooledChunk(::Unity::Mathematics::int3  chunkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetPooledChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method, chunkId);
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::CreateOrLoadChunk(::Unity::Mathematics::int3  chunkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateOrLoadChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method, chunkId);
}
inline void Voxels::VoxelWorld::SetChunkFrom(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetChunkFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dto);
}
inline void Voxels::VoxelWorld::UpdateChunkFrom(::Voxels::ChunkDTO  dto)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"UpdateChunkFrom", {}, {::i2c::type_of<::Voxels::ChunkDTO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dto);
}
inline void Voxels::VoxelWorld::Save(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Save", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld::Unload(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"Unload", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld::UpdateVisibleChunks(bool  isFirstTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"UpdateVisibleChunks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFirstTime);
}
inline ::Unity::Mathematics::int3 Voxels::VoxelWorld::GetChunkIdForWorldPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkIdForWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method, worldPosition);
}
inline ::Unity::Mathematics::int3 Voxels::VoxelWorld::GetChunkIdForLocalPosition(::UnityEngine::Vector3  voxelWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkIdForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method, voxelWorldPosition);
}
inline void Voxels::VoxelWorld::SetWorldType(::GlobalNamespace::VoxelWorld_WorldType  newWorldType, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetWorldType", {}, {::i2c::type_of<::GlobalNamespace::VoxelWorld_WorldType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newWorldType, force);
}
inline void Voxels::VoxelWorld::SetWorldBounds(::UnityEngine::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetWorldBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void Voxels::VoxelWorld::SaveWorld(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SaveWorld", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Voxels::VoxelWorld::ResetWorld(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ResetWorld", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
inline void Voxels::VoxelWorld::RegenerateAllChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"RegenerateAllChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OptimizeWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OptimizeWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OptimizeChunkSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OptimizeChunkSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::ResetChunk(::Unity::Mathematics::int3  chunkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ResetChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkId);
}
inline void Voxels::VoxelWorld::ProcessChunk(::Unity::Mathematics::int3  chunkId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ProcessChunk", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkId);
}
inline void Voxels::VoxelWorld::MeshChunkImmediately(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"MeshChunkImmediately", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld::MeshChunks(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  chunks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"MeshChunks", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunks);
}
inline void Voxels::VoxelWorld::AddChunkTask(::Voxels::ChunkTaskSet*  chunkTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"AddChunkTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkTask);
}
inline void Voxels::VoxelWorld::RemoveChunkTask(::Voxels::ChunkTaskSet*  chunkTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"RemoveChunkTask", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkTask);
}
inline void Voxels::VoxelWorld::CreateChunkMesh(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateChunkMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline ::UnityW<::UnityEngine::Mesh> Voxels::VoxelWorld::CreateMesh(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"CreateMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld::AssignMesh(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"AssignMesh", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld::PrepForOperationOnChunks(::UnityEngine::BoundsInt  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"PrepForOperationOnChunks", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds);
}
inline void Voxels::VoxelWorld::FinalizeOperationOnChunks(bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"FinalizeOperationOnChunks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, immediate);
}
inline void Voxels::VoxelWorld::SetVoxelDensityCustom(::UnityEngine::BoundsInt  worldBounds, ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  setDensityFunction, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensityCustom", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, setDensityFunction, immediate);
}
inline void Voxels::VoxelWorld::SetVoxelDataCustom(::UnityEngine::BoundsInt  worldBounds, /* [TupleElementNames(new[] { "density", "material", "density", "material" })] */ ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  setDataFunction, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDataCustom", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, setDataFunction, immediate);
}
inline void Voxels::VoxelWorld::SetVoxelDataCustom(::ArrayW<::Unity::Mathematics::int3>  voxels, /* [TupleElementNames(new[] { "density", "material", "density", "material" })] */ ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  setDataFunction, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDataCustom", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxels, setDataFunction, immediate);
}
inline void Voxels::VoxelWorld::SetVoxels(::UnityEngine::BoundsInt  bounds, ::ArrayW<::Voxels::Voxel>  voxels, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxels", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<::Voxels::Voxel>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, voxels, immediate);
}
inline void Voxels::VoxelWorld::SetVoxelDensity(::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data, bool  immediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensity", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, data, immediate);
}
inline uint8_t Voxels::VoxelWorld::GetVoxelMaterial(::Unity::Mathematics::int3  voxelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelMaterial", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, voxelId);
}
inline uint8_t Voxels::VoxelWorld::GetVoxelDensity(::Unity::Mathematics::int3  voxelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelDensity", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, voxelId);
}
inline ::Voxels::Voxel Voxels::VoxelWorld::GetVoxelData(::Unity::Mathematics::int3  voxelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelData", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Voxel>(this, ___internal_method, voxelId);
}
inline void Voxels::VoxelWorld::SetVoxelMaterial(::Unity::Mathematics::int3  voxelId, uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelMaterial", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelId, material);
}
inline void Voxels::VoxelWorld::SetVoxelDensity(::Unity::Mathematics::int3  voxelId, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelDensity", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelId, density);
}
inline void Voxels::VoxelWorld::SetVoxelData(::Unity::Mathematics::int3  voxelId, ::Voxels::Voxel  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetVoxelData", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Voxels::Voxel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelId, data);
}
inline ::UnityEngine::BoundsInt Voxels::VoxelWorld::GetBoundsFor(::ArrayW<::Unity::Mathematics::int3>  voxels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetBoundsFor", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundsInt>(nullptr, ___internal_method, voxels);
}
inline ::System::ValueTuple_2<::Unity::Mathematics::int3,::Unity::Mathematics::int3> Voxels::VoxelWorld::GetChunkBoundsForLocalBounds(::UnityEngine::BoundsInt  worldBounds, bool  includeLLC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkBoundsForLocalBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Mathematics::int3,::Unity::Mathematics::int3>>(this, ___internal_method, worldBounds, includeLLC);
}
inline bool Voxels::VoxelWorld::BoundsChunksLoaded(::UnityEngine::BoundsInt  localWorldBounds, bool  includeLLC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"BoundsChunksLoaded", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localWorldBounds, includeLLC);
}
inline ::UnityEngine::Vector3Int Voxels::VoxelWorld::ClampToWorldBounds(::UnityEngine::Vector3Int  coord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ClampToWorldBounds", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(this, ___internal_method, coord);
}
inline void Voxels::VoxelWorld::ForEachChunkInBounds(::UnityEngine::BoundsInt  bounds, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, action);
}
inline void Voxels::VoxelWorld::ForEachChunk(::System::Collections::Generic::List_1<::Voxels::Chunk*>*  opChunks, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachChunk", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opChunks, action);
}
inline bool Voxels::VoxelWorld::ChunksHaveJobs(::UnityEngine::BoundsInt  worldBounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ChunksHaveJobs", {}, {::i2c::type_of<::UnityEngine::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldBounds);
}
inline bool Voxels::VoxelWorld::ChunksHaveJobs(::System::Collections::Generic::IList_1<::Voxels::Chunk*>*  chunks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ChunksHaveJobs", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Voxels::Chunk*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, chunks);
}
inline void Voxels::VoxelWorld::GetChunksForBounds(::UnityEngine::BoundsInt  worldBounds, ::by_ref<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunksForBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Voxels::Chunk*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, list);
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::GetChunkForLocalPosition(::Unity::Mathematics::int3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkForLocalPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method, worldPosition);
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::GetChunkForLocalPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetChunkForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method, worldPosition);
}
inline void Voxels::VoxelWorld::ForEachVoxelInChunkInBounds(::UnityEngine::BoundsInt  worldBounds, ::Voxels::Chunk*  chunk, ::System::Action_4<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachVoxelInChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_4<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, chunk, action);
}
inline void Voxels::VoxelWorld::ForEachVoxelInChunkInBounds(::UnityEngine::BoundsInt  worldBounds, ::Voxels::Chunk*  chunk, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachVoxelInChunkInBounds", {}, {::i2c::type_of<::UnityEngine::BoundsInt>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldBounds, chunk, action);
}
inline void Voxels::VoxelWorld::ForEachSpecifiedVoxelInChunk(::ArrayW<::Unity::Mathematics::int3>  voxels, ::Voxels::Chunk*  chunk, ::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"ForEachSpecifiedVoxelInChunk", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::int3>>(), ::i2c::type_of<::Voxels::Chunk*>(), ::i2c::type_of<::System::Action_5<::Unity::Mathematics::int3,::Unity::Mathematics::int3,int32_t,uint8_t,uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxels, chunk, action);
}
inline void Voxels::VoxelWorld::HandleJobCompletion(::Voxels::ChunkTaskSet*  chunkTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"HandleJobCompletion", {}, {::i2c::type_of<::Voxels::ChunkTaskSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkTask);
}
inline uint8_t Voxels::VoxelWorld::GetDensityAt(::UnityEngine::Vector3  voxelWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetDensityAt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, voxelWorldPosition);
}
inline uint8_t Voxels::VoxelWorld::GetDensityAt(::Unity::Mathematics::int3  voxelWorldPosition, uint8_t  defaultDensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetDensityAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, voxelWorldPosition, defaultDensity);
}
inline void Voxels::VoxelWorld::SetDensityAt(::UnityEngine::Vector3  voxelWorldPosition, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetDensityAt", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWorldPosition, density);
}
inline void Voxels::VoxelWorld::SetDensityAt(::Unity::Mathematics::int3  voxelWorldPosition, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"SetDensityAt", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWorldPosition, density);
}
inline ::UnityEngine::Vector3 Voxels::VoxelWorld::GetLocalPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition);
}
inline ::UnityEngine::Vector3 Voxels::VoxelWorld::GetWorldPosition(::UnityEngine::Vector3  localPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localPosition);
}
inline ::UnityEngine::Vector3 Voxels::VoxelWorld::GetWorldPosition(::Unity::Mathematics::int3  localPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localPosition);
}
inline ::Unity::Mathematics::int3 Voxels::VoxelWorld::GetVoxelForWorldPosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelForWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method, worldPosition);
}
inline ::Unity::Mathematics::int3 Voxels::VoxelWorld::GetVoxelForLocalPosition(::UnityEngine::Vector3  localPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"GetVoxelForLocalPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(this, ___internal_method, localPosition);
}
inline float_t Voxels::VoxelWorld::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::Chunk* Voxels::VoxelWorld::_ConfigurePools_b__81_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Voxels::Chunk*>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::_ConfigurePools_b__81_2(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_2", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline ::UnityW<::Voxels::ChunkComponent> Voxels::VoxelWorld::_ConfigurePools_b__81_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Voxels::ChunkComponent>>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::_ConfigurePools_b__81_5(::Voxels::ChunkComponent*  chunkComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_5", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkComponent);
}
inline void Voxels::VoxelWorld::_ConfigurePools_b__81_6(::Voxels::ChunkComponent*  chunkComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<ConfigurePools>b__81_6", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkComponent);
}
inline void Voxels::VoxelWorld::_SetVoxelDataCustom_g__SetVoxelDataInChunk_118_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelDataInChunk|118_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld::_SetVoxelDataCustom_g__SetVoxelData_118_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density, uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelData|118_1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, voxelWorldPosition, voxelLocalPosition, voxelIndex, density, material);
}
inline ::Voxels::VoxelWorld* Voxels::VoxelWorld::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld::VoxelWorld()   {
}
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass121_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass121_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass121_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass121_0._SetVoxelDensity_g__SetVoxelDensityInChunk_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass121_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass121_0::_SetVoxelDensity_g__SetVoxelDensityInChunk_0)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5dc3294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {"<SetVoxelDensity>g__SetVoxelDensityInChunk|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass121_0._SetVoxelDensity_g__SetVoxelDensity_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass121_0::*)(int32_t, uint8_t, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass121_1>)>(&::Voxels::VoxelWorld___c__DisplayClass121_0::_SetVoxelDensity_g__SetVoxelDensity_1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5dc36e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {"<SetVoxelDensity>g__SetVoxelDensity|1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass121_1>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get_immediate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr bool const& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get_immediate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_set_immediate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___immediate = value;
}
constexpr ::ArrayW<uint8_t>& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass121_0::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void Voxels::VoxelWorld___c__DisplayClass121_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass121_0::_SetVoxelDensity_g__SetVoxelDensityInChunk_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {"<SetVoxelDensity>g__SetVoxelDensityInChunk|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass121_0::_SetVoxelDensity_g__SetVoxelDensity_1(int32_t  voxelIndex, uint8_t  density, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass121_1>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass121_0*>(),
                        {"<SetVoxelDensity>g__SetVoxelDensity|1", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass121_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelIndex, density, _cordl_fixed_empty_name_whitespace);
}
inline ::Voxels::VoxelWorld___c__DisplayClass121_0* Voxels::VoxelWorld___c__DisplayClass121_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld___c__DisplayClass121_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld___c__DisplayClass121_0::VoxelWorld___c__DisplayClass121_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass120_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass120_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass120_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc2d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass120_0._SetVoxels_g__SetVoxelDataInChunk_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass120_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass120_0::_SetVoxels_g__SetVoxelDataInChunk_0)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x5dc2d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {"<SetVoxels>g__SetVoxelDataInChunk|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass120_0._SetVoxels_g__SetVoxelData_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass120_0::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, uint8_t, uint8_t, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass120_1>)>(&::Voxels::VoxelWorld___c__DisplayClass120_0::_SetVoxels_g__SetVoxelData_1)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5dc31a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {"<SetVoxels>g__SetVoxelData|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass120_1>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get_immediate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr bool const& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get_immediate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_set_immediate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___immediate = value;
}
constexpr ::ArrayW<::Voxels::Voxel>& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get_voxels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxels;
}
constexpr ::ArrayW<::Voxels::Voxel> const& Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_get_voxels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxels;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass120_0::__cordl_internal_set_voxels(::ArrayW<::Voxels::Voxel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxels = value;
}
inline void Voxels::VoxelWorld___c__DisplayClass120_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass120_0::_SetVoxels_g__SetVoxelDataInChunk_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {"<SetVoxels>g__SetVoxelDataInChunk|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass120_0::_SetVoxels_g__SetVoxelData_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  material, uint8_t  density, ::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass120_1>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass120_0*>(),
                        {"<SetVoxels>g__SetVoxelData|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VoxelWorld___c__DisplayClass120_1>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWorldPosition, voxelLocalPosition, voxelIndex, material, density, _cordl_fixed_empty_name_whitespace);
}
inline ::Voxels::VoxelWorld___c__DisplayClass120_0* Voxels::VoxelWorld___c__DisplayClass120_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld___c__DisplayClass120_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld___c__DisplayClass120_0::VoxelWorld___c__DisplayClass120_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass119_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass119_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass119_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc29d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass119_0._SetVoxelDataCustom_g__SetVoxelDataInChunk_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass119_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass119_0::_SetVoxelDataCustom_g__SetVoxelDataInChunk_0)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5dc29dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelDataInChunk|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass119_0._SetVoxelDataCustom_g__SetVoxelData_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass119_0::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, uint8_t, uint8_t)>(&::Voxels::VoxelWorld___c__DisplayClass119_0::_SetVoxelDataCustom_g__SetVoxelData_1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5dc2be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelData|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::Unity::Mathematics::int3>& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_voxels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxels;
}
constexpr ::ArrayW<::Unity::Mathematics::int3> const& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_voxels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxels;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_set_voxels(::ArrayW<::Unity::Mathematics::int3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxels = value;
}
constexpr bool& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_immediate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr bool const& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_immediate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediate;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_set_immediate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___immediate = value;
}
constexpr ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_setDataFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDataFunction;
}
constexpr ::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>* const& Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_get_setDataFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDataFunction;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass119_0::__cordl_internal_set_setDataFunction(::System::Func_3<::Unity::Mathematics::int3,::System::ValueTuple_2<uint8_t,uint8_t>,::System::ValueTuple_2<uint8_t,uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setDataFunction = value;
}
inline void Voxels::VoxelWorld___c__DisplayClass119_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass119_0::_SetVoxelDataCustom_g__SetVoxelDataInChunk_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelDataInChunk|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass119_0::_SetVoxelDataCustom_g__SetVoxelData_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density, uint8_t  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass119_0*>(),
                        {"<SetVoxelDataCustom>g__SetVoxelData|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWorldPosition, voxelLocalPosition, voxelIndex, density, material);
}
inline ::Voxels::VoxelWorld___c__DisplayClass119_0* Voxels::VoxelWorld___c__DisplayClass119_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld___c__DisplayClass119_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld___c__DisplayClass119_0::VoxelWorld___c__DisplayClass119_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass117_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass117_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass117_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass117_0._SetVoxelDensityCustom_g__SetVoxelDensityInChunk_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass117_0::*)()>(&::Voxels::VoxelWorld___c__DisplayClass117_0::_SetVoxelDensityCustom_g__SetVoxelDensityInChunk_0)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5dc2768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {"<SetVoxelDensityCustom>g__SetVoxelDensityInChunk|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c__DisplayClass117_0._SetVoxelDensityCustom_g__SetDensity_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c__DisplayClass117_0::*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, int32_t, uint8_t)>(&::Voxels::VoxelWorld___c__DisplayClass117_0::_SetVoxelDensityCustom_g__SetDensity_1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5dc2904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {"<SetVoxelDensityCustom>g__SetDensity|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Voxels::VoxelWorld>& Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Voxels::VoxelWorld> const& Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_set___4__this(::UnityW<::Voxels::VoxelWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*& Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_get_setDensityFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDensityFunction;
}
constexpr ::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>* const& Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_get_setDensityFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setDensityFunction;
}
constexpr void Voxels::VoxelWorld___c__DisplayClass117_0::__cordl_internal_set_setDensityFunction(::System::Func_3<::Unity::Mathematics::int3,uint8_t,uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setDensityFunction = value;
}
inline void Voxels::VoxelWorld___c__DisplayClass117_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass117_0::_SetVoxelDensityCustom_g__SetVoxelDensityInChunk_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {"<SetVoxelDensityCustom>g__SetVoxelDensityInChunk|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c__DisplayClass117_0::_SetVoxelDensityCustom_g__SetDensity_1(::Unity::Mathematics::int3  voxelWorldPosition, ::Unity::Mathematics::int3  voxelLocalPosition, int32_t  voxelIndex, uint8_t  density)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c__DisplayClass117_0*>(),
                        {"<SetVoxelDensityCustom>g__SetDensity|1", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voxelWorldPosition, voxelLocalPosition, voxelIndex, density);
}
inline ::Voxels::VoxelWorld___c__DisplayClass117_0* Voxels::VoxelWorld___c__DisplayClass117_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld___c__DisplayClass117_0*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld___c__DisplayClass117_0::VoxelWorld___c__DisplayClass117_0()   {
}
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c::*)()>(&::Voxels::VoxelWorld___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dc262c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ConfigurePools_b__81_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld___c::_ConfigurePools_b__81_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dc2634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_1", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ConfigurePools_b__81_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c::*)(::Voxels::Chunk*)>(&::Voxels::VoxelWorld___c::_ConfigurePools_b__81_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dc2638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_3", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ConfigurePools_b__81_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c::*)(::Voxels::ChunkComponent*)>(&::Voxels::VoxelWorld___c::_ConfigurePools_b__81_7)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5dc2650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_7", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ConfigurePools_b__81_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::Voxels::VoxelWorld___c::*)()>(&::Voxels::VoxelWorld___c::_ConfigurePools_b__81_8)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dc26f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelWorld___c._ConfigurePools_b__81_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelWorld___c::*)(::UnityEngine::Mesh*)>(&::Voxels::VoxelWorld___c::_ConfigurePools_b__81_9)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dc2744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_9", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::VoxelWorld___c::setStaticF___9(::Voxels::VoxelWorld___c*  value)  {
::cordl_internals::setStaticField<::Voxels::VoxelWorld___c*, "<>9", ::Voxels::VoxelWorld___c*>(std::forward<::Voxels::VoxelWorld___c*>(value));
}
inline ::Voxels::VoxelWorld___c* Voxels::VoxelWorld___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Voxels::VoxelWorld___c*, "<>9", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::setStaticF___9__81_1(::System::Action_1<::Voxels::Chunk*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Voxels::Chunk*>*, "<>9__81_1", ::Voxels::VoxelWorld___c*>(std::forward<::System::Action_1<::Voxels::Chunk*>*>(value));
}
inline ::System::Action_1<::Voxels::Chunk*>* Voxels::VoxelWorld___c::getStaticF___9__81_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Voxels::Chunk*>*, "<>9__81_1", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::setStaticF___9__81_3(::System::Action_1<::Voxels::Chunk*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Voxels::Chunk*>*, "<>9__81_3", ::Voxels::VoxelWorld___c*>(std::forward<::System::Action_1<::Voxels::Chunk*>*>(value));
}
inline ::System::Action_1<::Voxels::Chunk*>* Voxels::VoxelWorld___c::getStaticF___9__81_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Voxels::Chunk*>*, "<>9__81_3", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::setStaticF___9__81_7(::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*, "<>9__81_7", ::Voxels::VoxelWorld___c*>(std::forward<::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*>(value));
}
inline ::System::Action_1<::UnityW<::Voxels::ChunkComponent>>* Voxels::VoxelWorld___c::getStaticF___9__81_7()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Voxels::ChunkComponent>>*, "<>9__81_7", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::setStaticF___9__81_8(::System::Func_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__81_8", ::Voxels::VoxelWorld___c*>(std::forward<::System::Func_1<::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Func_1<::UnityW<::UnityEngine::Mesh>>* Voxels::VoxelWorld___c::getStaticF___9__81_8()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__81_8", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::setStaticF___9__81_9(::System::Action_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__81_9", ::Voxels::VoxelWorld___c*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Mesh>>* Voxels::VoxelWorld___c::getStaticF___9__81_9()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Mesh>>*, "<>9__81_9", ::Voxels::VoxelWorld___c*>();
}
inline void Voxels::VoxelWorld___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c::_ConfigurePools_b__81_1(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_1", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld___c::_ConfigurePools_b__81_3(::Voxels::Chunk*  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_3", {}, {::i2c::type_of<::Voxels::Chunk*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Voxels::VoxelWorld___c::_ConfigurePools_b__81_7(::Voxels::ChunkComponent*  chunkComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_7", {}, {::i2c::type_of<::Voxels::ChunkComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunkComponent);
}
inline ::UnityW<::UnityEngine::Mesh> Voxels::VoxelWorld___c::_ConfigurePools_b__81_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void Voxels::VoxelWorld___c::_ConfigurePools_b__81_9(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelWorld___c*>(),
                        {"<ConfigurePools>b__81_9", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline ::Voxels::VoxelWorld___c* Voxels::VoxelWorld___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelWorld___c*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelWorld___c::VoxelWorld___c()   {
}
