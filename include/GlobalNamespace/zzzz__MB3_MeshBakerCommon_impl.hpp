#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerCommon.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerRoot_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "GlobalNamespace/zzzz__MB3_TextureBaker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.get_VERSION
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::get_VERSION)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d764f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"get_VERSION", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.get_meshCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_MeshCombiner* (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::get_meshCombiner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.get_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::get_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d764f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"get_clearBuffersAfterBake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.set_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)(bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::set_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d765b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"set_clearBuffersAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpgradeToCurrentVersionIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::UpgradeToCurrentVersionIfNecessary)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d762f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"UpgradeToCurrentVersionIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.get_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::get_textureBakeResults)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d76674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::GlobalNamespace::MB3_MeshBakerCommon::set_textureBakeResults)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d766a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.GetObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombine)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9d766d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.PurgeNullsFromObjectsToCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::PurgeNullsFromObjectsToCombine)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x9d76928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.EnableDisableSourceObjectRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)(bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::EnableDisableSourceObjectRenderers)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x9d76ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"EnableDisableSourceObjectRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::ClearMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d76f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::GlobalNamespace::MB3_MeshBakerCommon::ClearMesh)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d76f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.DestroyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::DestroyMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d76fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.DestroyMeshEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::GlobalNamespace::MB3_MeshBakerCommon::DestroyMeshEditor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d76ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.GetNumObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::GetNumObjectsInCombined)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d77034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.GetTextureBaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB3_TextureBaker> (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::GetTextureBaker)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9d77060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"GetTextureBaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::GlobalNamespace::MB3_MeshBakerCommon::Apply)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x9d771c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::GlobalNamespace::MB3_MeshBakerCommon::Apply)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9d77360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.CombinedMeshContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::MB3_MeshBakerCommon::CombinedMeshContains)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d77580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>)>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d775b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d776c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d777c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9d778f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateSkinnedMeshApproximateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBounds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d77a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateSkinnedMeshApproximateBoundsFromBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBones)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d77abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon.UpdateSkinnedMeshApproximateBoundsFromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBounds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d77b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon._ValidateForUpdateSkinnedMeshBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::_ValidateForUpdateSkinnedMeshBounds)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9d77b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                    {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d764e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_objsToMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_objsToMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objsToMesh;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_objsToMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objsToMesh = value;
}
constexpr bool& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_useObjsToMeshFromTexBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useObjsToMeshFromTexBaker;
}
constexpr bool const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_useObjsToMeshFromTexBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useObjsToMeshFromTexBaker;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_useObjsToMeshFromTexBaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useObjsToMeshFromTexBaker = value;
}
constexpr bool& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get__clearBuffersAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr bool const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get__clearBuffersAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set__clearBuffersAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearBuffersAfterBake = value;
}
constexpr ::StringW& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_bakeAssetsInPlaceFolderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeAssetsInPlaceFolderPath;
}
constexpr ::StringW const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_bakeAssetsInPlaceFolderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeAssetsInPlaceFolderPath;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_bakeAssetsInPlaceFolderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeAssetsInPlaceFolderPath = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_resultPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_resultPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefab;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_resultPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultPrefab = value;
}
constexpr bool& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_resultPrefabLeaveInstanceInSceneAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefabLeaveInstanceInSceneAfterBake;
}
constexpr bool const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_resultPrefabLeaveInstanceInSceneAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultPrefabLeaveInstanceInSceneAfterBake;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_resultPrefabLeaveInstanceInSceneAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultPrefabLeaveInstanceInSceneAfterBake = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_parentSceneObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSceneObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_get_parentSceneObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentSceneObject;
}
constexpr void GlobalNamespace::MB3_MeshBakerCommon::__cordl_internal_set_parentSceneObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentSceneObject = value;
}
inline int32_t GlobalNamespace::MB3_MeshBakerCommon::get_VERSION()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"get_VERSION", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* GlobalNamespace::MB3_MeshBakerCommon::get_meshCombiner()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::get_clearBuffersAfterBake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"get_clearBuffersAfterBake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::set_clearBuffersAfterBake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"set_clearBuffersAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::UpgradeToCurrentVersionIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"UpgradeToCurrentVersionIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> GlobalNamespace::MB3_MeshBakerCommon::get_textureBakeResults()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB3_MeshBakerCommon::GetObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::PurgeNullsFromObjectsToCombine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::EnableDisableSourceObjectRenderers(bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"EnableDisableSourceObjectRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::ClearMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::DestroyMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline int32_t GlobalNamespace::MB3_MeshBakerCommon::GetNumObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MB3_TextureBaker> GlobalNamespace::MB3_MeshBakerCommon::GetTextureBaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {"GetTextureBaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB3_TextureBaker>>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uv2GenerationMethod);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapesFlag, uv2GenerationMethod);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::CombinedMeshContains(::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  updateBounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, updateBounds);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV1, bool  updateUV2, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV1, updateUV2, updateColors, updateSkinningInfo);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBones()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::UpdateSkinnedMeshApproximateBoundsFromBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon::_ValidateForUpdateSkinnedMeshBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MB3_MeshBakerCommon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshBakerCommon* GlobalNamespace::MB3_MeshBakerCommon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBakerCommon*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerCommon::MB3_MeshBakerCommon()   {
}
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MB3_MeshBakerCommon___c::*)()>(&::GlobalNamespace::MB3_MeshBakerCommon___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d77da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MB3_MeshBakerCommon___c._PurgeNullsFromObjectsToCombine_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MB3_MeshBakerCommon___c::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::MB3_MeshBakerCommon___c::_PurgeNullsFromObjectsToCombine_b__20_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d77dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon___c*>(),
                        {"<PurgeNullsFromObjectsToCombine>b__20_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MB3_MeshBakerCommon___c::setStaticF___9(::GlobalNamespace::MB3_MeshBakerCommon___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MB3_MeshBakerCommon___c*, "<>9", ::GlobalNamespace::MB3_MeshBakerCommon___c*>(std::forward<::GlobalNamespace::MB3_MeshBakerCommon___c*>(value));
}
inline ::GlobalNamespace::MB3_MeshBakerCommon___c* GlobalNamespace::MB3_MeshBakerCommon___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MB3_MeshBakerCommon___c*, "<>9", ::GlobalNamespace::MB3_MeshBakerCommon___c*>();
}
inline void GlobalNamespace::MB3_MeshBakerCommon___c::setStaticF___9__20_0(::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__20_0", ::GlobalNamespace::MB3_MeshBakerCommon___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::MB3_MeshBakerCommon___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::GameObject>>*, "<>9__20_0", ::GlobalNamespace::MB3_MeshBakerCommon___c*>();
}
inline void GlobalNamespace::MB3_MeshBakerCommon___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MB3_MeshBakerCommon___c::_PurgeNullsFromObjectsToCombine_b__20_0(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MB3_MeshBakerCommon___c*>(),
                        {"<PurgeNullsFromObjectsToCombine>b__20_0", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::MB3_MeshBakerCommon___c* GlobalNamespace::MB3_MeshBakerCommon___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MB3_MeshBakerCommon___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MB3_MeshBakerCommon___c::MB3_MeshBakerCommon___c()   {
}
