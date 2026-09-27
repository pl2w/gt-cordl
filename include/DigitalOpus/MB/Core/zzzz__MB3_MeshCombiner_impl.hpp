#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombiner.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_MeshCombiningStatus_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_ValidationLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_MeshCombiningStatus_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombiner_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettingsHolder_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_EVAL_VERSION
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_EVAL_VERSION)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_EVAL_VERSION", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_bakeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_bakeStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_validationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_ValidationLevel (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_validationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_validationLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_ValidationLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_validationLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MB2_TextureBakeResults> (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_textureBakeResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_textureBakeResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_resultSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_resultSceneObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_resultSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_resultSceneObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_targetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_targetRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d854f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_targetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::UnityEngine::Renderer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_targetRenderer)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9d854fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_LOG_LEVEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_LogLevel (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_LOG_LEVEL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d856b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_LOG_LEVEL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_LOG_LEVEL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d856c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings* (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_settings)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d760e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_settingsHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_settingsHolder)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d856c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_settingsHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_settingsHolder)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d85798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_outputOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_OutputOptions (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_outputOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_outputOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_OutputOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_outputOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_renderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_RenderType (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_renderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB_RenderType)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_lightmapOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_LightmapOptions (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_lightmapOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_lightmapOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_LightmapOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_lightmapOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doNorm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doNorm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doNorm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doNorm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doTan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doTan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doTan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doTan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doCol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doCol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doCol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doCol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d858f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d85908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.doUV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::doUV2)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9d8590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doUV8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doUV8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_doBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_doBlendShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_doBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_doBlendShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_pivotLocationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshPivotLocation (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_pivotLocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_pivotLocationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB_MeshPivotLocation)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_pivotLocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_pivotLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_pivotLocation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d85b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_pivotLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::UnityEngine::Vector3)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_pivotLocation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d85b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_optimizeAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_optimizeAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_optimizeAfterBake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_optimizeAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_optimizeAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_optimizeAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_uv2UnwrappingParamsHardAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_uv2UnwrappingParamsHardAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_uv2UnwrappingParamsHardAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_uv2UnwrappingParamsHardAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_uv2UnwrappingParamsHardAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_uv2UnwrappingParamsHardAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_uv2UnwrappingParamsPackMargin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_uv2UnwrappingParamsPackMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_uv2UnwrappingParamsPackMargin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_uv2UnwrappingParamsPackMargin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_uv2UnwrappingParamsPackMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_uv2UnwrappingParamsPackMargin", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_smrNoExtraBonesWhenCombiningMeshRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_smrNoExtraBonesWhenCombiningMeshRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_smrNoExtraBonesWhenCombiningMeshRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_smrNoExtraBonesWhenCombiningMeshRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_smrMergeBlendShapesWithSameNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_smrMergeBlendShapesWithSameNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_smrMergeBlendShapesWithSameNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_smrMergeBlendShapesWithSameNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_smrMergeBlendShapesWithSameNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_smrMergeBlendShapesWithSameNames", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_assignToMeshCustomizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer* (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_assignToMeshCustomizer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d85ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_assignToMeshCustomizer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_assignToMeshCustomizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_assignToMeshCustomizer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d85c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_assignToMeshCustomizer", {}, {::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.get_meshAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshCombineAPIType (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::get_meshAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_meshAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.set_meshAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB_MeshCombineAPIType)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::set_meshAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_meshAPI", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.DisposeRuntimeCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::DisposeRuntimeCreated)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d85cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d76458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d85d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d85d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.GetLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::GetLightmapIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.ClearBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::ClearBuffers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::ClearMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.ClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::ClearMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner._DisposeRuntimeCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::_DisposeRuntimeCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.DestroyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::DestroyMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.DestroyMeshEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::DestroyMeshEditor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 109}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.GetObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::GetObjectsInCombined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.GetNumObjectsInCombined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::GetNumObjectsInCombined)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 111}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Apply)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d85d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 112}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 113}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 114}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::Apply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d85d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 116}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d85dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 117}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 118}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 119}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.AddDeleteGameObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<::UnityEngine::GameObject*>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::AddDeleteGameObjects)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.AddDeleteGameObjectsByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::ArrayW<int32_t>, bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::AddDeleteGameObjectsByID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.CombinedMeshContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::CombinedMeshContains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateSkinnedMeshApproximateBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 123}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBones)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.CheckIntegrity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::CheckIntegrity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBonesStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::SkinnedMeshRenderer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBonesStatic)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9d74c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"UpdateSkinnedMeshApproximateBoundsFromBonesStatic", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.UpdateSkinnedMeshApproximateBoundsFromBoundsStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, ::UnityEngine::SkinnedMeshRenderer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBoundsStatic)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9d75230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"UpdateSkinnedMeshApproximateBoundsFromBoundsStatic", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner._CreateTemporaryTextrueBakeResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)(::ArrayW<::UnityEngine::GameObject*>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::_CreateTemporaryTextrueBakeResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d85e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 127}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner.GetMaterialsOnTargetRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::GetMaterialsOnTargetRenderer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9d85eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__bakeStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bakeStatus;
}
constexpr ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__bakeStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bakeStatus;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__bakeStatus(::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bakeStatus = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__validationLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validationLevel;
}
constexpr ::DigitalOpus::MB::Core::MB2_ValidationLevel const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__validationLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validationLevel;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validationLevel = value;
}
constexpr ::StringW& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__textureBakeResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__textureBakeResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureBakeResults;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__textureBakeResults(::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureBakeResults = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__resultSceneObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultSceneObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__resultSceneObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resultSceneObject;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__resultSceneObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resultSceneObject = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRenderer;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__targetRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetRenderer = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LOG_LEVEL = value;
}
constexpr ::UnityW<::UnityEngine::Object>& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__settingsHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsHolder;
}
constexpr ::UnityW<::UnityEngine::Object> const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__settingsHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsHolder;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__settingsHolder(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsHolder = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__outputOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__outputOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputOption = value;
}
constexpr ::DigitalOpus::MB::Core::MB_RenderType& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__renderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderType;
}
constexpr ::DigitalOpus::MB::Core::MB_RenderType const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__renderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderType;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__renderType(::DigitalOpus::MB::Core::MB_RenderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderType = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__lightmapOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightmapOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__lightmapOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightmapOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lightmapOption = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doNorm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doNorm;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doNorm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doNorm;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doNorm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doNorm = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doTan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doTan;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doTan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doTan;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doTan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doTan = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doCol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doCol;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doCol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doCol;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doCol(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doCol = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV3;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV3;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV3 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV4;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV4;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV4(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV4 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV5;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV5;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV5 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV6;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV6;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV6(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV6 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV7;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV7;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV7(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV7 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV8;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doUV8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV8;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doUV8(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV8 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doBlendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doBlendShapes;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__doBlendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doBlendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__doBlendShapes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doBlendShapes = value;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__pivotLocationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocationType;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__pivotLocationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocationType;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotLocationType = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__pivotLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocation;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__pivotLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocation;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__pivotLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotLocation = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__clearBuffersAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__clearBuffersAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__clearBuffersAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearBuffersAfterBake = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__optimizeAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizeAfterBake;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__optimizeAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizeAfterBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__optimizeAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimizeAfterBake = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__uv2UnwrappingParamsHardAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsHardAngle;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__uv2UnwrappingParamsHardAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsHardAngle;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__uv2UnwrappingParamsHardAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uv2UnwrappingParamsHardAngle = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__uv2UnwrappingParamsPackMargin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsPackMargin;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__uv2UnwrappingParamsPackMargin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsPackMargin;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__uv2UnwrappingParamsPackMargin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uv2UnwrappingParamsPackMargin = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrNoExtraBonesWhenCombiningMeshRenderers;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrNoExtraBonesWhenCombiningMeshRenderers;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smrNoExtraBonesWhenCombiningMeshRenderers = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__smrMergeBlendShapesWithSameNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrMergeBlendShapesWithSameNames;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__smrMergeBlendShapesWithSameNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrMergeBlendShapesWithSameNames;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__smrMergeBlendShapesWithSameNames(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smrMergeBlendShapesWithSameNames = value;
}
constexpr ::UnityW<::UnityEngine::Object>& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__assignToMeshCustomizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignToMeshCustomizer;
}
constexpr ::UnityW<::UnityEngine::Object> const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__assignToMeshCustomizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignToMeshCustomizer;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__assignToMeshCustomizer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assignToMeshCustomizer = value;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__meshAPItoUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAPItoUse;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__meshAPItoUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAPItoUse;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__meshAPItoUse(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshAPItoUse = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__usingTemporaryTextureBakeResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usingTemporaryTextureBakeResult;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__usingTemporaryTextureBakeResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usingTemporaryTextureBakeResult;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__usingTemporaryTextureBakeResult(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usingTemporaryTextureBakeResult = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_EVAL_VERSION()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_EVAL_VERSION", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus DigitalOpus::MB::Core::MB3_MeshCombiner::get_bakeStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MB3_MeshCombiner_MeshCombiningStatus>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_ValidationLevel DigitalOpus::MB::Core::MB3_MeshCombiner::get_validationLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_ValidationLevel>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_validationLevel(::DigitalOpus::MB::Core::MB2_ValidationLevel  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW DigitalOpus::MB::Core::MB3_MeshCombiner::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> DigitalOpus::MB::Core::MB3_MeshCombiner::get_textureBakeResults()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MB2_TextureBakeResults>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> DigitalOpus::MB::Core::MB3_MeshCombiner::get_resultSceneObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_resultSceneObject(::UnityEngine::GameObject*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Renderer> DigitalOpus::MB::Core::MB3_MeshCombiner::get_targetRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_targetRenderer(::UnityEngine::Renderer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_LogLevel DigitalOpus::MB::Core::MB3_MeshCombiner::get_LOG_LEVEL()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_LogLevel>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* DigitalOpus::MB::Core::MB3_MeshCombiner::get_settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* DigitalOpus::MB::Core::MB3_MeshCombiner::get_settingsHolder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_settingsHolder(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_OutputOptions DigitalOpus::MB::Core::MB3_MeshCombiner::get_outputOption()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_OutputOptions>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_RenderType DigitalOpus::MB::Core::MB3_MeshCombiner::get_renderType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_RenderType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_LightmapOptions DigitalOpus::MB::Core::MB3_MeshCombiner::get_lightmapOption()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_LightmapOptions>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doNorm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doNorm(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doTan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doTan(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doCol()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doCol(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV1()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV1(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::doUV2()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV3()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV3(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV4()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV4(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV5()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV5(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV6()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV6(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV7()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV7(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doUV8()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doUV8(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_doBlendShapes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_doBlendShapes(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_MeshPivotLocation DigitalOpus::MB::Core::MB3_MeshCombiner::get_pivotLocationType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 DigitalOpus::MB::Core::MB3_MeshCombiner::get_pivotLocation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_pivotLocation(::UnityEngine::Vector3  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_clearBuffersAfterBake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_clearBuffersAfterBake(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_optimizeAfterBake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_optimizeAfterBake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_optimizeAfterBake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_optimizeAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t DigitalOpus::MB::Core::MB3_MeshCombiner::get_uv2UnwrappingParamsHardAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_uv2UnwrappingParamsHardAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_uv2UnwrappingParamsHardAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_uv2UnwrappingParamsHardAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t DigitalOpus::MB::Core::MB3_MeshCombiner::get_uv2UnwrappingParamsPackMargin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_uv2UnwrappingParamsPackMargin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_uv2UnwrappingParamsPackMargin(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_uv2UnwrappingParamsPackMargin", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_smrNoExtraBonesWhenCombiningMeshRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_smrNoExtraBonesWhenCombiningMeshRenderers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::get_smrMergeBlendShapesWithSameNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_smrMergeBlendShapesWithSameNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_smrMergeBlendShapesWithSameNames(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_smrMergeBlendShapesWithSameNames", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* DigitalOpus::MB::Core::MB3_MeshCombiner::get_assignToMeshCustomizer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_assignToMeshCustomizer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_assignToMeshCustomizer", {}, {::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_MeshCombineAPIType DigitalOpus::MB::Core::MB3_MeshCombiner::get_meshAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"get_meshAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"set_meshAPI", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::DisposeRuntimeCreated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombiner::GetLightmapIndex()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::ClearBuffers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::ClearMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::ClearMesh(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::_DisposeRuntimeCreated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::DestroyMesh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::DestroyMeshEditor(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 109}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editorMethods);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* DigitalOpus::MB::Core::MB3_MeshCombiner::GetObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombiner::GetNumObjectsInCombined()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 111}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::Apply()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 112}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::Apply(::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 113}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  uv5, bool  uv6, bool  uv7, bool  uv8, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 114}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, uv5, uv6, uv7, uv8, colors, bones, blendShapeFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::Apply(bool  triangles, bool  vertices, bool  normals, bool  tangents, bool  uvs, bool  uv2, bool  uv3, bool  uv4, bool  colors, bool  bones, bool  blendShapeFlag, ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*  uv2GenerationMethod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, triangles, vertices, normals, tangents, uvs, uv2, uv3, uv4, colors, bones, blendShapeFlag, uv2GenerationMethod);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 116}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  updateBounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 117}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, updateBounds);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 118}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, bool  recalcBounds, bool  updateVertices, bool  updateNormals, bool  updateTangents, bool  updateUV, bool  updateUV2, bool  updateUV3, bool  updateUV4, bool  updateUV5, bool  updateUV6, bool  updateUV7, bool  updateUV8, bool  updateColors, bool  updateSkinningInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 119}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, recalcBounds, updateVertices, updateNormals, updateTangents, updateUV, updateUV2, updateUV3, updateUV4, updateUV5, updateUV6, updateUV7, updateUV8, updateColors, updateSkinningInfo);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, deleteGOinstanceIDs, disableRendererInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::CombinedMeshContains(::UnityEngine::GameObject*  go)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 123}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBones()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::CheckIntegrity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBonesStatic(::ArrayW<::UnityEngine::Transform*>  bs, ::UnityEngine::SkinnedMeshRenderer*  smr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"UpdateSkinnedMeshApproximateBoundsFromBonesStatic", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bs, smr);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::UpdateSkinnedMeshApproximateBoundsFromBoundsStatic(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsInCombined, ::UnityEngine::SkinnedMeshRenderer*  smr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {"UpdateSkinnedMeshApproximateBoundsFromBoundsStatic", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectsInCombined, smr);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner::_CreateTemporaryTextrueBakeResult(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  matsOnTargetRenderer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 127}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gos, matsOnTargetRenderer);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* DigitalOpus::MB::Core::MB3_MeshCombiner::GetMaterialsOnTargetRenderer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* DigitalOpus::MB::Core::MB3_MeshCombiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombiner*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombiner::operator ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* DigitalOpus::MB::Core::MB3_MeshCombiner::i___DigitalOpus__MB__Core__MB_IMeshBakerSettings() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombiner::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MB3_MeshCombiner::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombiner::MB3_MeshCombiner()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d863e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_get_combinedMeshGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMeshGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_get_combinedMeshGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___combinedMeshGameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_set_combinedMeshGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___combinedMeshGameObject = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_get_blendShapeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndex;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_get_blendShapeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndex;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::__cordl_internal_set_blendShapeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeIndex = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue* DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeValue::MB3_MeshCombiner_MBBlendShapeValue()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::*)(::UnityEngine::GameObject*, int32_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d86298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::*)(::System::Object*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9d862d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::GetHashCode)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d863a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_get_blendShapeIndexInSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndexInSrc;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_get_blendShapeIndexInSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendShapeIndexInSrc;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::__cordl_internal_set_blendShapeIndexInSrc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendShapeIndexInSrc = value;
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::_ctor(::UnityEngine::GameObject*  srcSkinnedMeshRenderGameObject, int32_t  blendShapeIndexInSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcSkinnedMeshRenderGameObject, blendShapeIndexInSource);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey* DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::New_ctor(::UnityEngine::GameObject*  srcSkinnedMeshRenderGameObject, int32_t  blendShapeIndexInSource)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey*>(srcSkinnedMeshRenderGameObject, blendShapeIndexInSource));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombiner_MBBlendShapeKey::MB3_MeshCombiner_MBBlendShapeKey()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::*)(::System::Object*, ::System::IntPtr)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d86140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::*)(::UnityEngine::Mesh*, float_t, float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d861f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::*)(::UnityEngine::Mesh*, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d86208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::*)(::System::IAsyncResult*)>(&::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d8628c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::Invoke(::UnityEngine::Mesh*  m, float_t  hardAngle, float_t  packMargin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, hardAngle, packMargin);
}
inline ::System::IAsyncResult* DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::BeginInvoke(::UnityEngine::Mesh*  m, float_t  hardAngle, float_t  packMargin, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, m, hardAngle, packMargin, callback, object);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate* DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombiner_GenerateUV2Delegate::MB3_MeshCombiner_GenerateUV2Delegate()   {
}
