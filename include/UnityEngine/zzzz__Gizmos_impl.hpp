#pragma once
// IWYU pragma private; include "UnityEngine/Gizmos.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Gizmos_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawLine)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5782b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLineStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<::UnityEngine::Vector3>, bool)>(&::UnityEngine::Gizmos::DrawLineStrip)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb57834c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLineListInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawLineListInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb57844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineListInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLineList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawLineList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb57853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineList", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::Gizmos::DrawWireSphere)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5785cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::Gizmos::DrawSphere)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb57866c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawWireCube)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb57870c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawCube)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb5787a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawMesh)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb578834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawWireMesh)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb578964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::StringW, bool, ::UnityEngine::Color)>(&::UnityEngine::Gizmos::DrawIcon)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb578a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawIcon", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.get_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::Gizmos::get_color)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb578c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.set_color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::Gizmos::set_color)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb578cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.get_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::Gizmos::get_matrix)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb578d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_matrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.set_matrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Gizmos::set_matrix)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawRay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb578e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawMesh)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb578ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::UnityEngine::Gizmos::DrawWireMesh)> {
  constexpr static std::size_t size = 0x1110;
  constexpr static std::size_t addrs = 0xb578ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLine_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawLine_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb578308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLine_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLineStrip_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::UnityEngine::Gizmos::DrawLineStrip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb578408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineStrip_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawLineListInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Gizmos::DrawLineListInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineListInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireSphere_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::Gizmos::DrawWireSphere_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb578620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireSphere_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawSphere_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::Gizmos::DrawSphere_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5786c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawSphere_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireCube_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawWireCube_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb57875c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireCube_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawCube_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawCube_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5787f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawCube_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawMesh_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5788f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawWireMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Gizmos::DrawWireMesh_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb578a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.DrawIcon_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Gizmos::DrawIcon_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb578c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawIcon_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.get_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Gizmos::get_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.set_color_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::Gizmos::set_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.get_matrix_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Gizmos::get_matrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_matrix_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Gizmos.set_matrix_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Gizmos::set_matrix_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb578e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_matrix_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Gizmos::DrawLine(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void UnityEngine::Gizmos::DrawLineStrip(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points, bool  looped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, looped);
}
inline void UnityEngine::Gizmos::DrawLineListInternal(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineListInternal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points);
}
inline void UnityEngine::Gizmos::DrawLineList(::System::ReadOnlySpan_1<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineList", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points);
}
inline void UnityEngine::Gizmos::DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius);
}
inline void UnityEngine::Gizmos::DrawSphere(::UnityEngine::Vector3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius);
}
inline void UnityEngine::Gizmos::DrawWireCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void UnityEngine::Gizmos::DrawCube(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawCube", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void UnityEngine::Gizmos::DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawWireMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawIcon(::UnityEngine::Vector3  center, ::StringW  name, /* [DefaultValue("true")] */ bool  allowScaling, /* [DefaultValue("Color(255,255,255,255)")] */ ::UnityEngine::Color  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawIcon", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, name, allowScaling, tint);
}
inline ::UnityEngine::Color UnityEngine::Gizmos::get_color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::Gizmos::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_color", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Gizmos::get_matrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_matrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline void UnityEngine::Gizmos::set_matrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_matrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Gizmos::DrawRay(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawRay", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, direction);
}
inline void UnityEngine::Gizmos::DrawMesh(::UnityEngine::Mesh*  mesh, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawWireMesh(::UnityEngine::Mesh*  mesh, /* [DefaultValue("Vector3.zero")] */ ::UnityEngine::Vector3  position, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion  rotation, /* [DefaultValue("Vector3.one")] */ ::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawLine_Injected(::by_ref<::UnityEngine::Vector3>  from, ::by_ref<::UnityEngine::Vector3>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLine_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void UnityEngine::Gizmos::DrawLineStrip_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points, bool  looped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineStrip_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, looped);
}
inline void UnityEngine::Gizmos::DrawLineListInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawLineListInternal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points);
}
inline void UnityEngine::Gizmos::DrawWireSphere_Injected(::by_ref<::UnityEngine::Vector3>  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireSphere_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius);
}
inline void UnityEngine::Gizmos::DrawSphere_Injected(::by_ref<::UnityEngine::Vector3>  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawSphere_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius);
}
inline void UnityEngine::Gizmos::DrawWireCube_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireCube_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void UnityEngine::Gizmos::DrawCube_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawCube_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void UnityEngine::Gizmos::DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::by_ref<::UnityEngine::Vector3>  position, /* [DefaultValue("Quaternion.identity")] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [DefaultValue("Vector3.one")] */ ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawWireMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, /* [DefaultValue("Vector3.zero")] */ ::by_ref<::UnityEngine::Vector3>  position, /* [DefaultValue("Quaternion.identity")] */ ::by_ref<::UnityEngine::Quaternion>  rotation, /* [DefaultValue("Vector3.one")] */ ::by_ref<::UnityEngine::Vector3>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawWireMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, position, rotation, scale);
}
inline void UnityEngine::Gizmos::DrawIcon_Injected(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, /* [DefaultValue("true")] */ bool  allowScaling, /* [DefaultValue("Color(255,255,255,255)")] */ ::by_ref<::UnityEngine::Color>  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"DrawIcon_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, name, allowScaling, tint);
}
inline void UnityEngine::Gizmos::get_color_Injected(::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Gizmos::set_color_Injected(::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_color_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Gizmos::get_matrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"get_matrix_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Gizmos::set_matrix_Injected(::by_ref<::UnityEngine::Matrix4x4>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Gizmos*>(),
                        {"set_matrix_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Gizmos::Gizmos()   {
}
