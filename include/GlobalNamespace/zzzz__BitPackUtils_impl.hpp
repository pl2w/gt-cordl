#pragma once
// IWYU pragma private; include "GlobalNamespace/BitPackUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BitPackUtils_def.hpp"
#include "GlobalNamespace/zzzz__BitPackUtils_QAxis_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackRelativePos16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::BitPackUtils::PackRelativePos16)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5ae1fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRelativePos16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackRelativePos16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(uint16_t, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::BitPackUtils::UnpackRelativePos16)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ae23cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRelativePos16", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackRelativePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BitPackUtils::PackRelativePos)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ae2540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRelativePos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackRelativePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(uint32_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BitPackUtils::UnpackRelativePos)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ae2600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRelativePos", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::BitPackUtils::PackRotation)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5ae2668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(uint32_t)>(&::GlobalNamespace::BitPackUtils::UnpackRotation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ae287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRotation", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackQuaternionForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::BitPackUtils::PackQuaternionForNetwork)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x5ae2aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackQuaternionForNetwork", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackQuaternionFromNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(int32_t)>(&::GlobalNamespace::BitPackUtils::UnpackQuaternionFromNetwork)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ae2e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackQuaternionFromNetwork", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackHandPosRotForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BitPackUtils::PackHandPosRotForNetwork)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5ae2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackHandPosRotForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackHandPosRotFromNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::BitPackUtils::UnpackHandPosRotFromNetwork)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ae3234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackHandPosRotFromNetwork", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackAnchoredPosRotForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BitPackUtils::PackAnchoredPosRotForNetwork)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x5ae32ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackAnchoredPosRotForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackAnchoredPosRotForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::BitPackUtils::UnpackAnchoredPosRotForNetwork)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5ae3714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackAnchoredPosRotForNetwork", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.GetParityForWorldPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BitPackUtils::GetParityForWorldPos)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ae367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityForWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.GetParityForAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::GlobalNamespace::BitPackUtils::GetParityForAxis)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ae3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityForAxis", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.GetParityOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t, int32_t)>(&::GlobalNamespace::BitPackUtils::GetParityOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ae39b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackWorldPosForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BitPackUtils::PackWorldPosForNetwork)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5ae3adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackWorldPosForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackWorldPosFromNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int64_t)>(&::GlobalNamespace::BitPackUtils::UnpackWorldPosFromNetwork)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ae3d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackWorldPosFromNetwork", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackColorForNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::UnityEngine::Color)>(&::GlobalNamespace::BitPackUtils::PackColorForNetwork)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5ae3dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackColorForNetwork", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackColorFromNetwork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int16_t)>(&::GlobalNamespace::BitPackUtils::UnpackColorFromNetwork)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ae401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackColorFromNetwork", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.PackIntsIntoLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t)>(&::GlobalNamespace::BitPackUtils::PackIntsIntoLong)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae4084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackIntsIntoLong", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackValue1FromLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::GlobalNamespace::BitPackUtils::UnpackValue1FromLong)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae4090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackValue1FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackValue2FromLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::GlobalNamespace::BitPackUtils::UnpackValue2FromLong)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae4094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackValue2FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitPackUtils.UnpackIntsFromLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::BitPackUtils::UnpackIntsFromLong)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ae409c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackIntsFromLong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitPackUtils::setStaticF_kRadialLogLUT(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "kRadialLogLUT", ::GlobalNamespace::BitPackUtils*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> GlobalNamespace::BitPackUtils::getStaticF_kRadialLogLUT()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "kRadialLogLUT", ::GlobalNamespace::BitPackUtils*>();
}
inline uint16_t GlobalNamespace::BitPackUtils::PackRelativePos16(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRelativePos16", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, pos, center, radius);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BitPackUtils::UnpackRelativePos16(uint16_t  data, ::UnityEngine::Vector3  center, float_t  radius, bool  snapToRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRelativePos16", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, data, center, radius, snapToRadius);
}
inline uint32_t GlobalNamespace::BitPackUtils::PackRelativePos(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRelativePos", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pos, min, max);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BitPackUtils::UnpackRelativePos(uint32_t  data, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRelativePos", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, data, min, max);
}
inline uint32_t GlobalNamespace::BitPackUtils::PackRotation(::UnityEngine::Quaternion  q, bool  normalize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, q, normalize);
}
inline ::UnityEngine::Quaternion GlobalNamespace::BitPackUtils::UnpackRotation(uint32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackRotation", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, data);
}
inline int32_t GlobalNamespace::BitPackUtils::PackQuaternionForNetwork(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackQuaternionForNetwork", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, q);
}
inline ::UnityEngine::Quaternion GlobalNamespace::BitPackUtils::UnpackQuaternionFromNetwork(int32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackQuaternionFromNetwork", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, data);
}
inline int64_t GlobalNamespace::BitPackUtils::PackHandPosRotForNetwork(::UnityEngine::Vector3  localPos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackHandPosRotForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, localPos, rot);
}
inline void GlobalNamespace::BitPackUtils::UnpackHandPosRotFromNetwork(int64_t  data, ::by_ref<::UnityEngine::Vector3>  localPos, ::by_ref<::UnityEngine::Quaternion>  handRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackHandPosRotFromNetwork", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, localPos, handRot);
}
inline int64_t GlobalNamespace::BitPackUtils::PackAnchoredPosRotForNetwork(::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackAnchoredPosRotForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, worldPos, rot);
}
inline void GlobalNamespace::BitPackUtils::UnpackAnchoredPosRotForNetwork(int64_t  packed, ::UnityEngine::Vector3  anchorPos, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackAnchoredPosRotForNetwork", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, packed, anchorPos, pos, rot);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::BitPackUtils::GetParityForWorldPos(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityForWorldPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, worldPos);
}
inline int32_t GlobalNamespace::BitPackUtils::GetParityForAxis(float_t  axisPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityForAxis", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, axisPos);
}
inline float_t GlobalNamespace::BitPackUtils::GetParityOffset(float_t  anchorAxisPos, int32_t  anchorParity, int32_t  incomingParity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"GetParityOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, anchorAxisPos, anchorParity, incomingParity);
}
inline int64_t GlobalNamespace::BitPackUtils::PackWorldPosForNetwork(::UnityEngine::Vector3  worldPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackWorldPosForNetwork", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, worldPos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BitPackUtils::UnpackWorldPosFromNetwork(int64_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackWorldPosFromNetwork", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, data);
}
inline int16_t GlobalNamespace::BitPackUtils::PackColorForNetwork(::UnityEngine::Color  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackColorForNetwork", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, col);
}
inline ::UnityEngine::Color GlobalNamespace::BitPackUtils::UnpackColorFromNetwork(int16_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackColorFromNetwork", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, data);
}
inline int64_t GlobalNamespace::BitPackUtils::PackIntsIntoLong(int32_t  value1, int32_t  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"PackIntsIntoLong", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value1, value2);
}
inline int32_t GlobalNamespace::BitPackUtils::UnpackValue1FromLong(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackValue1FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::BitPackUtils::UnpackValue2FromLong(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackValue2FromLong", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::BitPackUtils::UnpackIntsFromLong(int64_t  value, ::by_ref<int32_t>  value1, ::by_ref<int32_t>  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitPackUtils*>(),
                        {"UnpackIntsFromLong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, value1, value2);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitPackUtils::BitPackUtils()   {
}
