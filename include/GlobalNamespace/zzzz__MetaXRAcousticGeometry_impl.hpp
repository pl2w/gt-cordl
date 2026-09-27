#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_LoadState_impl.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_LoadState_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_MeshMaterial_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_TerrainMaterial_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticGeometry_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterial_def.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.add_OnAnyGeometryEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::MetaXRAcousticGeometry::add_OnAnyGeometryEnabled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e9ff5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"add_OnAnyGeometryEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.remove_OnAnyGeometryEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::MetaXRAcousticGeometry::remove_OnAnyGeometryEnabled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ea0038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"remove_OnAnyGeometryEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_RelativeFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_RelativeFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_RelativeFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_AbsoluteFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_AbsoluteFilePath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ea011c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_AbsoluteFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_AbsoluteFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(::StringW)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_AbsoluteFilePath)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9ea01b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_AbsoluteFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_EnableSimplification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_EnableSimplification)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea0344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_EnableSimplification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_EnableSimplification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(bool)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_EnableSimplification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ea0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_EnableSimplification", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_EnableDiffraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_EnableDiffraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_EnableDiffraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_EnableDiffraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(bool)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_EnableDiffraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_EnableDiffraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_MaxSimplifyError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_MaxSimplifyError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea038c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MaxSimplifyError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_MaxSimplifyError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(float_t)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_MaxSimplifyError)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ea0394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MaxSimplifyError", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_MinDiffractionEdgeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_MinDiffractionEdgeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MinDiffractionEdgeAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_MinDiffractionEdgeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(float_t)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_MinDiffractionEdgeAngle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ea040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MinDiffractionEdgeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_MinDiffractionEdgeLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_MinDiffractionEdgeLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea04b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MinDiffractionEdgeLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_MinDiffractionEdgeLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(float_t)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_MinDiffractionEdgeLength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9ea04c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MinDiffractionEdgeLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_FlagLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_FlagLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_FlagLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_FlagLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(float_t)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_FlagLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_FlagLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_LodSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_LodSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_LodSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_LodSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(int32_t)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_LodSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_LodSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_UseColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_UseColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_UseColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_UseColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(bool)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_UseColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_UseColliders", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_OverrideExcludeTagsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_OverrideExcludeTagsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_OverrideExcludeTagsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_OverrideExcludeTagsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(bool)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_OverrideExcludeTagsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_OverrideExcludeTagsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_OverrideExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_OverrideExcludeTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_OverrideExcludeTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.set_OverrideExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(::ArrayW<::StringW>)>(&::GlobalNamespace::MetaXRAcousticGeometry::set_OverrideExcludeTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea0578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_OverrideExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_ExcludeTags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_ExcludeTags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9ea0580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_ExcludeTags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_IsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_IsLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ea05b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.get_VertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::get_VertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea05c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_VertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9ea05cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.StartInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::StartInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ea05f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"StartInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.CreatePropagationGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::CreatePropagationGeometry)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9ea0620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"CreatePropagationGeometry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.IncrementEnabledGeometryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::IncrementEnabledGeometryCount)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ea1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"IncrementEnabledGeometryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.DecrementEnabledGeometryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::DecrementEnabledGeometryCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9ea11ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DecrementEnabledGeometryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::OnEnable)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9ea120c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::OnDisable)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9ea1468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::LateUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ea16bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.ApplyTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::ApplyTransform)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9ea0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"ApplyTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea1718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.DestroyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::DestroyInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DestroyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.DestroyPropagationGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::DestroyPropagationGeometry)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9ea0a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DestroyPropagationGeometry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.isObjectUsedByLODGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::UnityEngine::LODGroup*)>(&::GlobalNamespace::MetaXRAcousticGeometry::isObjectUsedByLODGroup)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9ea1720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"isObjectUsedByLODGroup", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.traverseMeshHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, bool, ::ArrayW<::StringW>, bool, int32_t, ::UnityEngine::LODGroup*, ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*, ::System::Object*)>(&::GlobalNamespace::MetaXRAcousticGeometry::traverseMeshHierarchy)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x9ea184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"traverseMeshHierarchy", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::LODGroup*>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.GatherGeometryInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)(::System::IntPtr, ::UnityEngine::GameObject*, ::UnityEngine::Matrix4x4, bool, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticGeometry::GatherGeometryInternal)> {
  constexpr static std::size_t size = 0x1f68;
  constexpr static std::size_t addrs = 0x9ea1fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"GatherGeometryInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.uploadMeshFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int32_t>*, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::ArrayW<float_t>, ::ArrayW<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::UnityEngine::Mesh*, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>, ::UnityEngine::Matrix4x4)>(&::GlobalNamespace::MetaXRAcousticGeometry::uploadMeshFilter)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x9ea4218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"uploadMeshFilter", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.updateCountsForMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::UnityEngine::Mesh*)>(&::GlobalNamespace::MetaXRAcousticGeometry::updateCountsForMesh)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9ea4114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"updateCountsForMesh", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.GatherGeometryRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::GatherGeometryRuntime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9ea0f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"GatherGeometryRuntime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.ReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::ReadFile)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x9ea0be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"ReadFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.LoadGeometryAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MetaXRAcousticGeometry::*)(::StringW)>(&::GlobalNamespace::MetaXRAcousticGeometry::LoadGeometryAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ea4878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LoadGeometryAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry.LoadGeometryFromMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>)>(&::GlobalNamespace::MetaXRAcousticGeometry::LoadGeometryFromMemory)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ea4928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LoadGeometryFromMemory", {}, {::i2c::type_of<::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9ea49e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_relativeFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeFilePath;
}
constexpr ::StringW const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_relativeFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeFilePath;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_relativeFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relativeFilePath = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_FileEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileEnabled;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_FileEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileEnabled;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_FileEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileEnabled = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_IncludeChildMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeChildMeshes;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_IncludeChildMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncludeChildMeshes;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_IncludeChildMeshes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncludeChildMeshes = value;
}
constexpr ::Meta::XR::Acoustics::MeshFlags& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Meta::XR::Acoustics::MeshFlags const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_Flags(::Meta::XR::Acoustics::MeshFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_maxSimplifyError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimplifyError;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_maxSimplifyError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimplifyError;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_maxSimplifyError(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSimplifyError = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_minDiffractionEdgeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDiffractionEdgeAngle;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_minDiffractionEdgeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDiffractionEdgeAngle;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_minDiffractionEdgeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDiffractionEdgeAngle = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_minDiffractionEdgeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDiffractionEdgeLength;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_minDiffractionEdgeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDiffractionEdgeLength;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_minDiffractionEdgeLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDiffractionEdgeLength = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_flagLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagLength;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_flagLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flagLength;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_flagLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flagLength = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_lodSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lodSelection;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_lodSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lodSelection;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_lodSelection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lodSelection = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_useColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_useColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useColliders;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_useColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useColliders = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_overrideExcludeTagsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideExcludeTagsEnabled;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_overrideExcludeTagsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideExcludeTagsEnabled;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_overrideExcludeTagsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideExcludeTagsEnabled = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_overrideExcludeTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideExcludeTags;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_overrideExcludeTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideExcludeTags;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_overrideExcludeTags(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideExcludeTags = value;
}
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_geometryHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geometryHandle;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_geometryHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geometryHandle;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_geometryHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geometryHandle = value;
}
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_loadState_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadState_;
}
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_LoadState const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_loadState_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadState_;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_loadState_(::GlobalNamespace::MetaXRAcousticGeometry_LoadState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadState_ = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_vertexCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexCount;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_vertexCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexCount;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_vertexCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexCount = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_materialColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_materialColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialColors;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_materialColors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialColors = value;
}
constexpr ::UnityEngine::Hash128& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_HierarchyHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HierarchyHash;
}
constexpr ::UnityEngine::Hash128 const& GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_get_HierarchyHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HierarchyHash;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry::__cordl_internal_set_HierarchyHash(::UnityEngine::Hash128  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HierarchyHash = value;
}
inline void GlobalNamespace::MetaXRAcousticGeometry::setStaticF_AUTO_VALIDATE(bool  value)  {
::cordl_internals::setStaticField<bool, "AUTO_VALIDATE", ::GlobalNamespace::MetaXRAcousticGeometry*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::getStaticF_AUTO_VALIDATE()  {
return ::cordl_internals::getStaticField<bool, "AUTO_VALIDATE", ::GlobalNamespace::MetaXRAcousticGeometry*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry::setStaticF_EnabledGeometryCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EnabledGeometryCount", ::GlobalNamespace::MetaXRAcousticGeometry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MetaXRAcousticGeometry::getStaticF_EnabledGeometryCount()  {
return ::cordl_internals::getStaticField<int32_t, "EnabledGeometryCount", ::GlobalNamespace::MetaXRAcousticGeometry*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry::setStaticF_OnAnyGeometryEnabled(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnAnyGeometryEnabled", ::GlobalNamespace::MetaXRAcousticGeometry*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::MetaXRAcousticGeometry::getStaticF_OnAnyGeometryEnabled()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnAnyGeometryEnabled", ::GlobalNamespace::MetaXRAcousticGeometry*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry::setStaticF_terrainDecimation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "terrainDecimation", ::GlobalNamespace::MetaXRAcousticGeometry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MetaXRAcousticGeometry::getStaticF_terrainDecimation()  {
return ::cordl_internals::getStaticField<int32_t, "terrainDecimation", ::GlobalNamespace::MetaXRAcousticGeometry*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry::add_OnAnyGeometryEnabled(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"add_OnAnyGeometryEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::remove_OnAnyGeometryEnabled(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"remove_OnAnyGeometryEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MetaXRAcousticGeometry::get_RelativeFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_RelativeFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticGeometry::get_AbsoluteFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_AbsoluteFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_AbsoluteFilePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_AbsoluteFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::get_EnableSimplification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_EnableSimplification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_EnableSimplification(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_EnableSimplification", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::get_EnableDiffraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_EnableDiffraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_EnableDiffraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_EnableDiffraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MetaXRAcousticGeometry::get_MaxSimplifyError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MaxSimplifyError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_MaxSimplifyError(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MaxSimplifyError", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MetaXRAcousticGeometry::get_MinDiffractionEdgeAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MinDiffractionEdgeAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_MinDiffractionEdgeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MinDiffractionEdgeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MetaXRAcousticGeometry::get_MinDiffractionEdgeLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_MinDiffractionEdgeLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_MinDiffractionEdgeLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_MinDiffractionEdgeLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MetaXRAcousticGeometry::get_FlagLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_FlagLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_FlagLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_FlagLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticGeometry::get_LodSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_LodSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_LodSelection(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_LodSelection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::get_UseColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_UseColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_UseColliders(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_UseColliders", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::get_OverrideExcludeTagsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_OverrideExcludeTagsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_OverrideExcludeTagsEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_OverrideExcludeTagsEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> GlobalNamespace::MetaXRAcousticGeometry::get_OverrideExcludeTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_OverrideExcludeTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::set_OverrideExcludeTags(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"set_OverrideExcludeTags", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> GlobalNamespace::MetaXRAcousticGeometry::get_ExcludeTags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_ExcludeTags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::get_IsLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticGeometry::get_VertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"get_VertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::StartInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"StartInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::CreatePropagationGeometry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"CreatePropagationGeometry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::IncrementEnabledGeometryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"IncrementEnabledGeometryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::DecrementEnabledGeometryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DecrementEnabledGeometryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::ApplyTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"ApplyTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::DestroyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DestroyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::DestroyPropagationGeometry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"DestroyPropagationGeometry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::isObjectUsedByLODGroup(::UnityEngine::GameObject*  obj, ::UnityEngine::LODGroup*  lod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"isObjectUsedByLODGroup", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::LODGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, lod);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::traverseMeshHierarchy(::UnityEngine::GameObject*  obj, bool  includeChildren, ::ArrayW<::StringW>  excludeTags, bool  parentWasExcluded, int32_t  lodSelection, ::UnityEngine::LODGroup*  parentLOD, ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*  visitor, ::System::Object*  parentData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"traverseMeshHierarchy", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::LODGroup*>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, includeChildren, excludeTags, parentWasExcluded, lodSelection, parentLOD, visitor, parentData);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::GatherGeometryInternal(::System::IntPtr  geometryHandle, ::UnityEngine::GameObject*  meshObject, ::UnityEngine::Matrix4x4  worldToLocal, bool  ignoreStatic, ::by_ref<int32_t>  ignoredMeshCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"GatherGeometryInternal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, geometryHandle, meshObject, worldToLocal, ignoreStatic, ignoredMeshCount);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::uploadMeshFilter(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  tempVertices, ::System::Collections::Generic::List_1<int32_t>*  tempIndices, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::ArrayW<float_t>  vertices, ::ArrayW<int32_t>  indices, ::by_ref<int32_t>  vertexOffset, ::by_ref<int32_t>  indexOffset, ::by_ref<int32_t>  groupOffset, ::UnityEngine::Mesh*  mesh, ::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>  materials, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"uploadMeshFilter", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::IMaterialDataProvider*>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tempVertices, tempIndices, groups, vertices, indices, vertexOffset, indexOffset, groupOffset, mesh, materials, matrix);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::updateCountsForMesh(::by_ref<int32_t>  totalVertexCount, ::by_ref<uint32_t>  totalIndexCount, ::by_ref<int32_t>  totalFaceCount, ::by_ref<int32_t>  totalMaterialCount, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"updateCountsForMesh", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, totalVertexCount, totalIndexCount, totalFaceCount, totalMaterialCount, mesh);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::GatherGeometryRuntime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"GatherGeometryRuntime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry::ReadFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"ReadFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MetaXRAcousticGeometry::LoadGeometryAsync(::StringW  relativePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LoadGeometryAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, relativePath);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::LoadGeometryFromMemory(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {"LoadGeometryFromMemory", {}, {::i2c::type_of<::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticGeometry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticGeometry* GlobalNamespace::MetaXRAcousticGeometry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry::MetaXRAcousticGeometry()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)(int32_t)>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ea4900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x9ea62d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea6654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ea665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea6694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get_relativePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativePath;
}
constexpr ::StringW const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get_relativePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativePath;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set_relativePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relativePath = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry> const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get__unityWebRequest_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityWebRequest_5__3;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_get__unityWebRequest_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityWebRequest_5__3;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::__cordl_internal_set__unityWebRequest_5__3(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unityWebRequest_5__3 = value;
}
inline void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryAsync_d__92::MetaXRAcousticGeometry__LoadGeometryAsync_d__92()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea6080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0._LoadGeometryFromMemory_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::_LoadGeometryFromMemory_b__0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9ea6088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*>(),
                        {"<LoadGeometryFromMemory>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t> const& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_set_data(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry> const& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::__cordl_internal_set_result(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::_LoadGeometryFromMemory_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*>(),
                        {"<LoadGeometryFromMemory>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0* GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0::MetaXRAcousticGeometry___c__DisplayClass93_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry___c::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry___c._GatherGeometryInternal_b__87_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticGeometry___c::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::MetaXRAcousticGeometry___c::_GatherGeometryInternal_b__87_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ea6064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {"<GatherGeometryInternal>b__87_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry___c.__cctor_b__95_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry___c::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry___c::__cctor_b__95_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea607c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {"<.cctor>b__95_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAcousticGeometry___c::setStaticF___9(::GlobalNamespace::MetaXRAcousticGeometry___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::MetaXRAcousticGeometry___c*>(std::forward<::GlobalNamespace::MetaXRAcousticGeometry___c*>(value));
}
inline ::GlobalNamespace::MetaXRAcousticGeometry___c* GlobalNamespace::MetaXRAcousticGeometry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry___c::setStaticF___9__87_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*, "<>9__87_0", ::GlobalNamespace::MetaXRAcousticGeometry___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>* GlobalNamespace::MetaXRAcousticGeometry___c::getStaticF___9__87_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*, "<>9__87_0", ::GlobalNamespace::MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::MetaXRAcousticGeometry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticGeometry___c::_GatherGeometryInternal_b__87_0(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {"<GatherGeometryInternal>b__87_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, t);
}
inline void GlobalNamespace::MetaXRAcousticGeometry___c::__cctor_b__95_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry___c*>(),
                        {"<.cctor>b__95_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticGeometry___c* GlobalNamespace::MetaXRAcousticGeometry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry___c::MetaXRAcousticGeometry___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer.visit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::*)(::UnityEngine::Transform*, ::System::Object*)>(&::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::visit)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x9ea5324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"visit", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer.get_Meshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::get_Meshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea5f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"get_Meshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer.get_Terrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::get_Terrains)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea5f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"get_Terrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ea3f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*& GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* const& GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*& GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_get_terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* const& GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_get_terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::__cordl_internal_set_terrains(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrains = value;
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::visit(::UnityEngine::Transform*  transform, ::System::Object*  parentData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"visit", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, transform, parentData);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::get_Meshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"get_Meshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::get_Terrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {"get_Terrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr  GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::operator ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::i___GlobalNamespace__MetaXRAcousticGeometry_IGatherer() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr  GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::operator ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ColliderGatherer::MetaXRAcousticGeometry_ColliderGatherer()   {
}
//  Writing Method size for method: ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::*)()>(&::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea5fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c._visit_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::*)(::GlobalNamespace::MetaXRAcousticMaterial*)>(&::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_visit_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ea5fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__0_0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c._visit_b__0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> (::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::*)(::GlobalNamespace::MetaXRAcousticMaterial*)>(&::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_visit_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea5fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__0_1", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::setStaticF___9(::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(std::forward<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(value));
}
inline ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c* GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::setStaticF___9__0_0(::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*, "<>9__0_0", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>* GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*, "<>9__0_0", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::setStaticF___9__0_1(::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*, "<>9__0_1", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(std::forward<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*>(value));
}
inline ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>* GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::getStaticF___9__0_1()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*, "<>9__0_1", ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_visit_b__0_0(::GlobalNamespace::MetaXRAcousticMaterial*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__0_0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::_visit_b__0_1(::GlobalNamespace::MetaXRAcousticMaterial*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__0_1", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>(this, ___internal_method, x);
}
inline ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c* GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderGatherer_MetaXRAcousticGeometry___c::ColliderGatherer_MetaXRAcousticGeometry___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::*)(bool)>(&::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9ea4028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer.visit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::*)(::UnityEngine::Transform*, ::System::Object*)>(&::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::visit)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0x9ea4b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"visit", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer.get_Meshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::get_Meshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea5284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"get_Meshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer.get_Terrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::get_Terrains)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"get_Terrains", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_meshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* const& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_meshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshes;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_set_meshes(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* const& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrains;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_set_terrains(::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrains = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_ignoredMeshCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoredMeshCount;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_ignoredMeshCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoredMeshCount;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_set_ignoredMeshCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoredMeshCount = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_ignoreStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreStatic;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_get_ignoreStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreStatic;
}
constexpr void GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::__cordl_internal_set_ignoreStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreStatic = value;
}
inline void GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::_ctor(bool  ignoreStatic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreStatic);
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::visit(::UnityEngine::Transform*  transform, ::System::Object*  parentData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"visit", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, transform, parentData);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::get_Meshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"get_Meshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::get_Terrains()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(),
                        {"get_Terrains", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::New_ctor(bool  ignoreStatic)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer*>(ignoreStatic));
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr  GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::operator ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_IGatherer"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::i___GlobalNamespace__MetaXRAcousticGeometry_IGatherer() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr  GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::operator ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_MeshGatherer::MetaXRAcousticGeometry_MeshGatherer()   {
}
//  Writing Method size for method: ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::*)()>(&::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea52fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c._visit_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::*)(::GlobalNamespace::MetaXRAcousticMaterial*)>(&::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_visit_b__1_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ea5304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c._visit_b__1_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> (::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::*)(::GlobalNamespace::MetaXRAcousticMaterial*)>(&::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_visit_b__1_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__1_1", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::setStaticF___9(::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(std::forward<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(value));
}
inline ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c* GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*, "<>9", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::setStaticF___9__1_0(::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*, "<>9__1_0", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>* GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,bool>*, "<>9__1_0", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::setStaticF___9__1_1(::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*, "<>9__1_1", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(std::forward<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*>(value));
}
inline ::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>* GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::getStaticF___9__1_1()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>,::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>*, "<>9__1_1", ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>();
}
inline void GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_visit_b__1_0(::GlobalNamespace::MetaXRAcousticMaterial*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__1_0", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterial> GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::_visit_b__1_1(::GlobalNamespace::MetaXRAcousticMaterial*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>(),
                        {"<visit>b__1_1", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticMaterial>>(this, ___internal_method, x);
}
inline ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c* GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGatherer_MetaXRAcousticGeometry___c::MeshGatherer_MetaXRAcousticGeometry___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer.get_Meshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_IGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_IGatherer::get_Meshes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_IGatherer.get_Terrains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* (::GlobalNamespace::MetaXRAcousticGeometry_IGatherer::*)()>(&::GlobalNamespace::MetaXRAcousticGeometry_IGatherer::get_Terrains)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>* GlobalNamespace::MetaXRAcousticGeometry_IGatherer::get_Meshes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_MeshMaterial>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>* GlobalNamespace::MetaXRAcousticGeometry_IGatherer::get_Terrains()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_IGatherer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MetaXRAcousticGeometry_TerrainMaterial>*>(this, ___internal_method);
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr  GlobalNamespace::MetaXRAcousticGeometry_IGatherer::operator ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor"
constexpr ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor* GlobalNamespace::MetaXRAcousticGeometry_IGatherer::i___GlobalNamespace__MetaXRAcousticGeometry_ITransformVisitor() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor.visit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor::*)(::UnityEngine::Transform*, ::System::Object*)>(&::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor::visit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor::visit(::UnityEngine::Transform*  transform, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticGeometry_ITransformVisitor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, transform, userData);
}
