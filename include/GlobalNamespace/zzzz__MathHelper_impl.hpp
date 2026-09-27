#pragma once
// IWYU pragma private; include "GlobalNamespace/MathHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MathHelper_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MathHelper.RoundTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::MathHelper::RoundTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d17044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathHelper.RoundTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::MathHelper::RoundTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d1705c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathHelper.SnapToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MathHelper::SnapToInt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d17094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"SnapToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathHelper.RoundTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float_t)>(&::GlobalNamespace::MathHelper::RoundTo)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d170b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathHelper.SnapToCardinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::MathHelper::SnapToCardinal)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d17148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"SnapToCardinal", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MathHelper.IsInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::int3, ::Unity::Mathematics::int3, ::Unity::Mathematics::int3)>(&::GlobalNamespace::MathHelper::IsInBounds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d171ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::MathHelper::RoundTo(float_t  value, float_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, increment);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MathHelper::RoundTo(::UnityEngine::Vector3  value, float_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value, increment);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MathHelper::SnapToInt(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"SnapToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MathHelper::RoundTo(::UnityEngine::Quaternion  value, float_t  increment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"RoundTo", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, value, increment);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MathHelper::SnapToCardinal(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"SnapToCardinal", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::MathHelper::IsInBounds(::Unity::Mathematics::int3  a, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MathHelper*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>(), ::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, min, max);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MathHelper::MathHelper()   {
}
