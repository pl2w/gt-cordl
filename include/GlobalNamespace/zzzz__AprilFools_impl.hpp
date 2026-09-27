#pragma once
// IWYU pragma private; include "GlobalNamespace/AprilFools.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AprilFools_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AprilFools.mod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::AprilFools::mod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e06ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"mod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AprilFools.GenerateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, ::StringW, ::StringW, int32_t)>(&::GlobalNamespace::AprilFools::GenerateTarget)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5e06ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"GenerateTarget", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AprilFools.Slerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::AprilFools::Slerp)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5e07104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"Slerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AprilFools.SmoothSlerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::AprilFools::SmoothSlerp)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e07270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"SmoothSlerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AprilFools.GenerateSmoothTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::AprilFools::GenerateSmoothTarget)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e072fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"GenerateSmoothTarget", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::AprilFools::mod(int32_t  x, int32_t  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"mod", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, m);
}
inline float_t GlobalNamespace::AprilFools::GenerateTarget(::StringW  username, ::StringW  roomName, ::StringW  areaName, int32_t  startTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"GenerateTarget", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, username, roomName, areaName, startTime);
}
inline float_t GlobalNamespace::AprilFools::Slerp(float_t  a, float_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"Slerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, t);
}
inline float_t GlobalNamespace::AprilFools::SmoothSlerp(float_t  a, float_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"SmoothSlerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, t);
}
inline float_t GlobalNamespace::AprilFools::GenerateSmoothTarget(::StringW  username, ::StringW  roomName, ::StringW  areaName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AprilFools*>(),
                        {"GenerateSmoothTarget", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, username, roomName, areaName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AprilFools::AprilFools()   {
}
