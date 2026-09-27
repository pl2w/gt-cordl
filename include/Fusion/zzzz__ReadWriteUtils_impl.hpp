#pragma once
// IWYU pragma private; include "Fusion/ReadWriteUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ReadWriteUtils_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Fusion::ReadWriteUtils.WriteFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, float_t)>(&::Fusion::ReadWriteUtils::WriteFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa19c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteFloat", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.ReadFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t*)>(&::Fusion::ReadWriteUtils::ReadFloat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadFloat", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.WriteVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, ::UnityEngine::Vector2)>(&::Fusion::ReadWriteUtils::WriteVector2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa19d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector2", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.ReadVector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(int32_t*)>(&::Fusion::ReadWriteUtils::ReadVector2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector2", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.WriteVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, ::UnityEngine::Vector3)>(&::Fusion::ReadWriteUtils::WriteVector3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa19e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector3", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.ReadVector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t*)>(&::Fusion::ReadWriteUtils::ReadVector3)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa19f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector3", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.WriteVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, ::UnityEngine::Vector4)>(&::Fusion::ReadWriteUtils::WriteVector4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector4", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.ReadVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(int32_t*)>(&::Fusion::ReadWriteUtils::ReadVector4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector4", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.WriteQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, ::UnityEngine::Quaternion)>(&::Fusion::ReadWriteUtils::WriteQuaternion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtils.ReadQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(int32_t*)>(&::Fusion::ReadWriteUtils::ReadQuaternion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::ReadWriteUtils::WriteFloat(int32_t*  data, float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteFloat", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, f);
}
inline float_t Fusion::ReadWriteUtils::ReadFloat(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadFloat", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, data);
}
inline void Fusion::ReadWriteUtils::WriteVector2(int32_t*  data, ::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector2", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, value);
}
inline ::UnityEngine::Vector2 Fusion::ReadWriteUtils::ReadVector2(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector2", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, data);
}
inline void Fusion::ReadWriteUtils::WriteVector3(int32_t*  data, ::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector3", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, value);
}
inline ::UnityEngine::Vector3 Fusion::ReadWriteUtils::ReadVector3(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector3", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, data);
}
inline void Fusion::ReadWriteUtils::WriteVector4(int32_t*  data, ::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteVector4", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, value);
}
inline ::UnityEngine::Vector4 Fusion::ReadWriteUtils::ReadVector4(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadVector4", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, data);
}
inline void Fusion::ReadWriteUtils::WriteQuaternion(int32_t*  data, ::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"WriteQuaternion", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, value);
}
inline ::UnityEngine::Quaternion Fusion::ReadWriteUtils::ReadQuaternion(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtils*>(),
                        {"ReadQuaternion", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Fusion::ReadWriteUtils::ReadWriteUtils()   {
}
