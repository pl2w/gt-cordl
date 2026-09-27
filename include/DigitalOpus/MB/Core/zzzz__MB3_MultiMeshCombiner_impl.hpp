#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MultiMeshCombiner.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MultiMeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSingle_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MultiMeshCombiner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.get_LOG_LEVEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_LogLevel (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_LOG_LEVEL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db76e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.set_LOG_LEVEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_LOG_LEVEL)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9db76e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.set_validationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB2_ValidationLevel)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_validationLevel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9db7798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.get_validationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_ValidationLevel (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_validationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db7840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.get_maxVertsInMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_maxVertsInMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9db7848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"get_maxVertsInMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.set_maxVertsInMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(int32_t)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_maxVertsInMesh)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9db7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"set_maxVertsInMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.GetNumObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetNumObjectsInCombined)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9db79cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 111}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.GetObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetObjectsInCombined)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9db7a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.GetLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetLightmapIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9db7b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.CombinedMeshContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::CombinedMeshContains)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9db7bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._validateTextureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_validateTextureBakeResults)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9db7c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_validateTextureBakeResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9db7d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 113}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9db7f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x9db7fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 114}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.UpdateSkinnedMeshApproximateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBounds)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9db824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 123}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBones)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9db82e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBounds)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9db8384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9db8420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 118}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x9db847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 119}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9db8948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x9db8b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_validate)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x9db90e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_validate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._distributeAmongBakers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_distributeAmongBakers)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x9db98c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_distributeAmongBakers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._bakeStep1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_bakeStep1)> {
  constexpr static std::size_t size = 0xd98;
  constexpr static std::size_t addrs = 0x9dba21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_bakeStep1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.ClearBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearBuffers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9dbb5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearMesh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dbb6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearMesh)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dbb6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._DisposeRuntimeCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_DisposeRuntimeCreated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9dbb704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.DestroyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::DestroyMesh)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9dbb7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.DestroyMeshEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::DestroyMeshEditor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9dbb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 109}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._setMBValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_setMBValues)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x9dbb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_setMBValues", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.GetMaterialsOnTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetMaterialsOnTargetRenderer)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9dbbb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner.CheckIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::CheckIntegrity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9dbbc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9dbbd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get_obj2MeshCombinerMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj2MeshCombinerMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get_obj2MeshCombinerMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obj2MeshCombinerMap;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_set_obj2MeshCombinerMap(::System::Collections::Generic::Dictionary_2<int32_t,::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obj2MeshCombinerMap = value;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get_meshCombiners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCombiners;
}
constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get_meshCombiners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCombiners;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_set_meshCombiners(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshCombiners = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get__maxVertsInMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVertsInMesh;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_get__maxVertsInMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxVertsInMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::__cordl_internal_set__maxVertsInMesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxVertsInMesh = value;
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::setStaticF_empty(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::GameObject>>, "empty", ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(std::forward<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> DigitalOpus::MB::Core::MB3_MultiMeshCombiner::getStaticF_empty()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::GameObject>>, "empty", ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>();
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::setStaticF_emptyIDs(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "emptyIDs", ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> DigitalOpus::MB::Core::MB3_MultiMeshCombiner::getStaticF_emptyIDs()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "emptyIDs", ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>();
}
inline ::DigitalOpus::MB::Core::MB2_LogLevel DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_LOG_LEVEL()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_LogLevel>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_ValidationLevel DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_validationLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_ValidationLevel>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MultiMeshCombiner::get_maxVertsInMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"get_maxVertsInMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::set_maxVertsInMesh(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"set_maxVertsInMesh", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetNumObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 111}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetLightmapIndex()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::CombinedMeshContains(::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_validateTextureBakeResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_validateTextureBakeResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 113}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapeFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapesFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 114}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapesFlag, uv2GenerationMethod);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 123}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBones()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 118}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 119}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_validate(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_validate", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_distributeAmongBakers(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_distributeAmongBakers", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gos, deleteGOinstanceIDs);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_bakeStep1(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_bakeStep1", {}, {::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearBuffers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_DisposeRuntimeCreated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::DestroyMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 109}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_setMBValues(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  targ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {"_setMBValues", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targ);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* DigitalOpus::MB::Core::MB3_MultiMeshCombiner::GetMaterialsOnTargetRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::CheckIntegrity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner* DigitalOpus::MB::Core::MB3_MultiMeshCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner::MB3_MultiMeshCombiner()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::*)(int32_t, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9dbb0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh.isEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::*)()>(&::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::isEmpty)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9dbbeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>(),
                        {"isEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_combinedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMesh;
}
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_combinedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMesh;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_combinedMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMesh = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_extraSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraSpace;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_extraSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraSpace;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_extraSpace(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraSpace = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_numVertsInListToDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertsInListToDelete;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_numVertsInListToDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertsInListToDelete;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_numVertsInListToDelete(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVertsInListToDelete = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_numVertsInListToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertsInListToAdd;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_numVertsInListToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertsInListToAdd;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_numVertsInListToAdd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVertsInListToAdd = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToAdd;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToAdd;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_gosToAdd(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gosToAdd = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToDelete;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToDelete;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_gosToDelete(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gosToDelete = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToUpdate;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_gosToUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gosToUpdate;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_gosToUpdate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gosToUpdate = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_get_isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::__cordl_internal_set_isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDirty = value;
}
inline void DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::_ctor(int32_t  maxNumVertsInMesh, ::UnityEngine::GameObject*  resultSceneObject, ::DigitalOpus::MB::Core::MB2_LogLevel  ll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNumVertsInMesh, resultSceneObject, ll);
}
inline bool DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::isEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>(),
                        {"isEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh* DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::New_ctor(int32_t  maxNumVertsInMesh, ::UnityEngine::GameObject*  resultSceneObject, ::DigitalOpus::MB::Core::MB2_LogLevel  ll)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh*>(maxNumVertsInMesh, resultSceneObject, ll));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner_CombinedMesh::MB3_MultiMeshCombiner_CombinedMesh()   {
}
