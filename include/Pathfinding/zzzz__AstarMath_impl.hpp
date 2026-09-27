#pragma once
// IWYU pragma private; include "Pathfinding/AstarMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__AstarMath_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarMath.MapTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t)>(&::Pathfinding::AstarMath::MapTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e4ee48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"MapTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarMath.FormatBytesBinary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Pathfinding::AstarMath::FormatBytesBinary)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e4ee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"FormatBytesBinary", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarMath.Bit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Pathfinding::AstarMath::Bit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e4f048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"Bit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarMath.IntToColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t, float_t)>(&::Pathfinding::AstarMath::IntToColor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5e47bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"IntToColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarMath.HSVToRGB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(float_t, float_t, float_t)>(&::Pathfinding::AstarMath::HSVToRGB)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e4f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"HSVToRGB", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Pathfinding::AstarMath::MapTo(float_t  startMin, float_t  startMax, float_t  targetMin, float_t  targetMax, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"MapTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, startMin, startMax, targetMin, targetMax, value);
}
inline ::StringW Pathfinding::AstarMath::FormatBytesBinary(int32_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"FormatBytesBinary", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline int32_t Pathfinding::AstarMath::Bit(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"Bit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Color Pathfinding::AstarMath::IntToColor(int32_t  i, float_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"IntToColor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, i, a);
}
inline ::UnityEngine::Color Pathfinding::AstarMath::HSVToRGB(float_t  h, float_t  s, float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarMath*>(),
                        {"HSVToRGB", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, h, s, v);
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarMath::AstarMath()   {
}
