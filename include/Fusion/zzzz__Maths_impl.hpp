#pragma once
// IWYU pragma private; include "Fusion/Maths.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Maths_def.hpp"
#include "Fusion/zzzz__Maths_FastAbs2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Fusion::Maths.QuaternionCompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Quaternion)>(&::Fusion::Maths::QuaternionCompress)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f3e8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"QuaternionCompress", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.QuaternionDecompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(uint32_t)>(&::Fusion::Maths::QuaternionDecompress)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f3e9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"QuaternionDecompress", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.BytesRequiredForBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Maths::BytesRequiredForBits)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BytesRequiredForBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.PrintBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t)>(&::Fusion::Maths::PrintBits)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f3eacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"PrintBits", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.CountSetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Fusion::Maths::CountSetBits)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"CountSetBits", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.ZigZagEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Maths::ZigZagEncode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagEncode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.ZigZagDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Fusion::Maths::ZigZagDecode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagDecode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.ZigZagEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::Fusion::Maths::ZigZagEncode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f3ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagEncode", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.ZigZagDecode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::Fusion::Maths::ZigZagDecode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f3ec4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagDecode", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::Fusion::Maths::Clamp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3ec5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Fusion::Maths::Clamp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Clamp01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::Fusion::Maths::Clamp01)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f3ec84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp01", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Clamp01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Fusion::Maths::Clamp01)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f3eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp01", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Fusion::Maths::Lerp)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f3ecbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t, double_t, double_t)>(&::Fusion::Maths::Lerp)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f3ed48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Lerp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.BitScanReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::Fusion::Maths::BitScanReverse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f3edd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.BitScanReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::Fusion::Maths::BitScanReverse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f3ee74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Maths.BitScanReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::Fusion::Maths::BitScanReverse)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f3ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Maths::setStaticF__debruijnTable32(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_debruijnTable32", ::Fusion::Maths*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::Maths::getStaticF__debruijnTable32()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_debruijnTable32", ::Fusion::Maths*>();
}
inline void Fusion::Maths::setStaticF__debruijnTable64(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_debruijnTable64", ::Fusion::Maths*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Fusion::Maths::getStaticF__debruijnTable64()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_debruijnTable64", ::Fusion::Maths*>();
}
inline void Fusion::Maths::setStaticF_DeBruijnLookupLong(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DeBruijnLookupLong", ::Fusion::Maths*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Fusion::Maths::getStaticF_DeBruijnLookupLong()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DeBruijnLookupLong", ::Fusion::Maths*>();
}
inline uint32_t Fusion::Maths::QuaternionCompress(::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"QuaternionCompress", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, rot);
}
inline ::UnityEngine::Quaternion Fusion::Maths::QuaternionDecompress(uint32_t  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"QuaternionDecompress", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, buffer);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline int32_t Fusion::Maths::SizeOfBits()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::Maths*>(),
                    {"SizeOfBits", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Fusion::Maths::BytesRequiredForBits(int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BytesRequiredForBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, b);
}
inline ::StringW Fusion::Maths::PrintBits(uint8_t*  data, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"PrintBits", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, count);
}
inline int32_t Fusion::Maths::CountSetBits(uint64_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"CountSetBits", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x);
}
inline int32_t Fusion::Maths::ZigZagEncode(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagEncode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int32_t Fusion::Maths::ZigZagDecode(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagDecode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i);
}
inline int64_t Fusion::Maths::ZigZagEncode(int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagEncode", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, i);
}
inline int64_t Fusion::Maths::ZigZagDecode(int64_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"ZigZagDecode", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, i);
}
inline int32_t Fusion::Maths::Clamp(int32_t  v, int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v, min, max);
}
inline double_t Fusion::Maths::Clamp(double_t  v, double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, v, min, max);
}
inline double_t Fusion::Maths::Clamp01(double_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp01", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, v);
}
inline float_t Fusion::Maths::Clamp01(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Clamp01", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline float_t Fusion::Maths::Lerp(float_t  a, float_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Lerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, t);
}
inline double_t Fusion::Maths::Lerp(double_t  a, double_t  b, double_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"Lerp", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, a, b, t);
}
inline int32_t Fusion::Maths::BitScanReverse(uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline int32_t Fusion::Maths::BitScanReverse(int64_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
inline int32_t Fusion::Maths::BitScanReverse(uint64_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Maths*>(),
                        {"BitScanReverse", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Fusion::Maths::Maths()   {
}
