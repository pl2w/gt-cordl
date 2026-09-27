#pragma once
// IWYU pragma private; include "BoingKit/Codec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BoingKit/zzzz__Codec_def.hpp"
#include "BoingKit/zzzz__Codec_IntFloat_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::BoingKit::Codec.PackSaturated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::BoingKit::Codec::PackSaturated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e293f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackSaturated", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.PackSaturated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2)>(&::BoingKit::Codec::PackSaturated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e29424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackSaturated", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.UnpackSaturated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t)>(&::BoingKit::Codec::UnpackSaturated)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e294a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackSaturated", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.OctWrap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::BoingKit::Codec::OctWrap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e294f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"OctWrap", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.PackNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::BoingKit::Codec::PackNormal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e29568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.UnpackNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t)>(&::BoingKit::Codec::UnpackNormal)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5e2966c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.PackRgb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::BoingKit::Codec::PackRgb)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e2984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackRgb", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.UnpackRgb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::BoingKit::Codec::UnpackRgb)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e298a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackRgb", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.PackRgba
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Color)>(&::BoingKit::Codec::PackRgba)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e298e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackRgba", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.UnpackRgba
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(uint32_t)>(&::BoingKit::Codec::UnpackRgba)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e29958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackRgba", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Pack8888
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t, uint32_t, uint32_t)>(&::BoingKit::Codec::Pack8888)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e299a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Pack8888", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Unpack8888
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::BoingKit::Codec::Unpack8888)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e299b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Unpack8888", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.IntReinterpret
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::BoingKit::Codec::IntReinterpret)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e299dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"IntReinterpret", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e299e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int64_t)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e29a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, float_t)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e29ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e29b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t>)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e29b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::ArrayW<float_t>)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e29c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Vector2)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e29cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Vector3)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e29da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Vector4)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e29e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Quaternion)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e29f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Color)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e2a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashConcat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Transform*)>(&::BoingKit::Codec::HashConcat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e2a0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e2a234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int32_t>)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<float_t>)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e2a3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector3)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e2a42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector4)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2a4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Quaternion)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Color)>(&::BoingKit::Codec::Hash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e2a5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashTransformHierarchyRecurvsive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Transform*)>(&::BoingKit::Codec::HashTransformHierarchyRecurvsive)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e2a644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashTransformHierarchyRecurvsive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec.HashTransformHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Transform*)>(&::BoingKit::Codec::HashTransformHierarchy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashTransformHierarchy", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::Codec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::Codec::*)()>(&::BoingKit::Codec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2a7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void BoingKit::Codec::setStaticF_FnvDefaultBasis(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FnvDefaultBasis", ::BoingKit::Codec*>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::Codec::getStaticF_FnvDefaultBasis()  {
return ::cordl_internals::getStaticField<int32_t, "FnvDefaultBasis", ::BoingKit::Codec*>();
}
inline void BoingKit::Codec::setStaticF_FnvPrime(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FnvPrime", ::BoingKit::Codec*>(std::forward<int32_t>(value));
}
inline int32_t BoingKit::Codec::getStaticF_FnvPrime()  {
return ::cordl_internals::getStaticField<int32_t, "FnvPrime", ::BoingKit::Codec*>();
}
inline float_t BoingKit::Codec::PackSaturated(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackSaturated", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline float_t BoingKit::Codec::PackSaturated(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackSaturated", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 BoingKit::Codec::UnpackSaturated(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackSaturated", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, f);
}
inline ::UnityEngine::Vector2 BoingKit::Codec::OctWrap(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"OctWrap", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v);
}
inline float_t BoingKit::Codec::PackNormal(::UnityEngine::Vector3  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, n);
}
inline ::UnityEngine::Vector3 BoingKit::Codec::UnpackNormal(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackNormal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, f);
}
inline uint32_t BoingKit::Codec::PackRgb(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackRgb", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color BoingKit::Codec::UnpackRgb(uint32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackRgb", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, i);
}
inline uint32_t BoingKit::Codec::PackRgba(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"PackRgba", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color BoingKit::Codec::UnpackRgba(uint32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"UnpackRgba", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, i);
}
inline uint32_t BoingKit::Codec::Pack8888(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Pack8888", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x, y, z, w);
}
inline void BoingKit::Codec::Unpack8888(uint32_t  i, ::by_ref<uint32_t>  x, ::by_ref<uint32_t>  y, ::by_ref<uint32_t>  z, ::by_ref<uint32_t>  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Unpack8888", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, i, x, y, z, w);
}
inline int32_t BoingKit::Codec::IntReinterpret(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"IntReinterpret", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, i);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, i);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, f);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, b);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, /* [ParamArray] */ ::ArrayW<int32_t>  ints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, ints);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, /* [ParamArray] */ ::ArrayW<float_t>  floats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, floats);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, v);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, v);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, v);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, q);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, c);
}
inline int32_t BoingKit::Codec::HashConcat(int32_t  hash, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashConcat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, t);
}
inline int32_t BoingKit::Codec::Hash(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t BoingKit::Codec::Hash(int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t BoingKit::Codec::Hash(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f);
}
inline int32_t BoingKit::Codec::Hash(bool  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, b);
}
inline int32_t BoingKit::Codec::Hash(/* [ParamArray] */ ::ArrayW<int32_t>  ints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ints);
}
inline int32_t BoingKit::Codec::Hash(/* [ParamArray] */ ::ArrayW<float_t>  floats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, floats);
}
inline int32_t BoingKit::Codec::Hash(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline int32_t BoingKit::Codec::Hash(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline int32_t BoingKit::Codec::Hash(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline int32_t BoingKit::Codec::Hash(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, q);
}
inline int32_t BoingKit::Codec::Hash(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"Hash", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline int32_t BoingKit::Codec::HashTransformHierarchyRecurvsive(int32_t  hash, ::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashTransformHierarchyRecurvsive", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hash, t);
}
inline int32_t BoingKit::Codec::HashTransformHierarchy(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {"HashTransformHierarchy", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline void BoingKit::Codec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::Codec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::Codec* BoingKit::Codec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::Codec*>());
}
// Ctor Parameters []
constexpr ::BoingKit::Codec::Codec()   {
}
