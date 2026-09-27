#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DebugExtension_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugPoint)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x56fdb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugPoint)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56fdda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, ::UnityEngine::Color, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugBounds)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x56fddd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugBounds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56fe16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugLocalCube)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x56fe1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugLocalCube)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x56fe5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugLocalCube)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x56fe630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugLocalCube)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x56feacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCircle)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x56feb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCircle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x56fef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCircle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56ff050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCircle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x56ff078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugWireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugWireSphere)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x56ff120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugWireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugWireSphere)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x56ff2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCylinder)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x56ff31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCylinder)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56ff8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCone)> {
  constexpr static std::size_t size = 0xb2c;
  constexpr static std::size_t addrs = 0x56ff910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCone)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x570043c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCone)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5700464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCone)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x570052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugArrow)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x57005d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugArrow)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57006fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCapsule)> {
  constexpr static std::size_t size = 0xcf0;
  constexpr static std::size_t addrs = 0x5700720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DebugCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::GlobalNamespace::DebugExtension::DebugCapsule)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5701410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawPoint)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5701438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57015ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, ::UnityEngine::Color)>(&::GlobalNamespace::DebugExtension::DrawBounds)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5701604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds)>(&::GlobalNamespace::DebugExtension::DrawBounds)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5701818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3)>(&::GlobalNamespace::DebugExtension::DrawLocalCube)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5701854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::DebugExtension::DrawLocalCube)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5701bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3)>(&::GlobalNamespace::DebugExtension::DrawLocalCube)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5701bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawLocalCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::DebugExtension::DrawLocalCube)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5701f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCircle)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5701fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCircle)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5702468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCircle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5702510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCircle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5702540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCylinder)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x57025c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCylinder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5702a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCone)> {
  constexpr static std::size_t size = 0xa88;
  constexpr static std::size_t addrs = 0x5702a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCone)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5703508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCone)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x570352c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCone)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57035d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::GlobalNamespace::DebugExtension::DrawArrow)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x570365c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::DebugExtension::DrawArrow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5703754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float_t)>(&::GlobalNamespace::DebugExtension::DrawCapsule)> {
  constexpr static std::size_t size = 0xaa4;
  constexpr static std::size_t addrs = 0x5703774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::DebugExtension::DrawCapsule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5704218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.MethodsOfObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, bool)>(&::GlobalNamespace::DebugExtension::MethodsOfObject)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x570423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"MethodsOfObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DebugExtension.MethodsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*, bool)>(&::GlobalNamespace::DebugExtension::MethodsOfType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5704360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"MethodsOfType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DebugExtension::DebugPoint(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  scale, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, scale, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugPoint(::UnityEngine::Vector3  position, float_t  scale, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, scale, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds, color, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugBounds(::UnityEngine::Bounds  bounds, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, size, color, center, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, size, center, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, space, size, color, center, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, space, size, center, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, color, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCircle(::UnityEngine::Vector3  position, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugWireSphere(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugWireSphere(::UnityEngine::Vector3  position, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  angle, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, color, angle, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  angle, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, angle, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCone(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  angle, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, angle, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCone(::UnityEngine::Vector3  position, float_t  angle, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, angle, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, color, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DebugCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, float_t  duration, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DebugCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius, duration, depthTest);
}
inline void GlobalNamespace::DebugExtension::DrawPoint(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, scale);
}
inline void GlobalNamespace::DebugExtension::DrawPoint(::UnityEngine::Vector3  position, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, scale);
}
inline void GlobalNamespace::DebugExtension::DrawBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds, color);
}
inline void GlobalNamespace::DebugExtension::DrawBounds(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds);
}
inline void GlobalNamespace::DebugExtension::DrawLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, size, color, center);
}
inline void GlobalNamespace::DebugExtension::DrawLocalCube(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, size, center);
}
inline void GlobalNamespace::DebugExtension::DrawLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Color  color, ::UnityEngine::Vector3  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, space, size, color, center);
}
inline void GlobalNamespace::DebugExtension::DrawLocalCube(::UnityEngine::Matrix4x4  space, ::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawLocalCube", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, space, size, center);
}
inline void GlobalNamespace::DebugExtension::DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, ::UnityEngine::Color  color, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, color, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCircle(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCircle(::UnityEngine::Vector3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCylinder(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, color, angle);
}
inline void GlobalNamespace::DebugExtension::DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, angle);
}
inline void GlobalNamespace::DebugExtension::DrawCone(::UnityEngine::Vector3  position, ::UnityEngine::Color  color, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color, angle);
}
inline void GlobalNamespace::DebugExtension::DrawCone(::UnityEngine::Vector3  position, float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, angle);
}
inline void GlobalNamespace::DebugExtension::DrawArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, color);
}
inline void GlobalNamespace::DebugExtension::DrawArrow(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction);
}
inline void GlobalNamespace::DebugExtension::DrawCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, color, radius);
}
inline void GlobalNamespace::DebugExtension::DrawCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius);
}
inline ::StringW GlobalNamespace::DebugExtension::MethodsOfObject(::System::Object*  obj, bool  includeInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"MethodsOfObject", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, includeInfo);
}
inline ::StringW GlobalNamespace::DebugExtension::MethodsOfType(::System::Type*  type, bool  includeInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DebugExtension*>(),
                        {"MethodsOfType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type, includeInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugExtension::DebugExtension()   {
}
