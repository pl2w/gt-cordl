#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEngineUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityEngineUtils_def.hpp"
#include "GlobalNamespace/zzzz__Id128_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.EqualsColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Color32, ::UnityEngine::Color32)>(&::GlobalNamespace::UnityEngineUtils::EqualsColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1b134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"EqualsColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.IdToColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Object*, int32_t, bool)>(&::GlobalNamespace::UnityEngineUtils::IdToColor32)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b1b144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"IdToColor32", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.IdToColor32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(int32_t, int32_t, bool)>(&::GlobalNamespace::UnityEngineUtils::IdToColor32)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b1b1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"IdToColor32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.ToHighViz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Color32)>(&::GlobalNamespace::UnityEngineUtils::ToHighViz)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b1b2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"ToHighViz", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.Color32ToId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Color32, bool)>(&::GlobalNamespace::UnityEngineUtils::Color32ToId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b1b35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"Color32ToId", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedHash128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::UnityEngineUtils::QuantizedHash128)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b1b3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash128", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedHash128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::UnityEngineUtils::QuantizedHash128)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b1b3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash128", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedId128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::UnityEngineUtils::QuantizedId128)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b1b410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedId128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::UnityEngineUtils::QuantizedId128)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b1b44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedId128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::UnityEngineUtils::QuantizedId128)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedHash64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Vector4)>(&::GlobalNamespace::UnityEngineUtils::QuantizedHash64)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b1b550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash64", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.QuantizedHash64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::UnityEngineUtils::QuantizedHash64)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5b1b600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash64", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.MergeTo64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int32_t, int32_t)>(&::GlobalNamespace::UnityEngineUtils::MergeTo64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1b8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"MergeTo64", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.ToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::UnityEngineUtils::ToVector)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1b904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"ToVector", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityEngineUtils.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector4>)>(&::GlobalNamespace::UnityEngineUtils::CopyTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1b908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"CopyTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::UnityEngineUtils::EqualsColor(::UnityEngine::Color32  c, ::UnityEngine::Color32  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"EqualsColor", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c, other);
}
inline ::UnityEngine::Color32 GlobalNamespace::UnityEngineUtils::IdToColor32(::UnityEngine::Object*  obj, int32_t  alpha, bool  distinct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"IdToColor32", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, obj, alpha, distinct);
}
inline ::UnityEngine::Color32 GlobalNamespace::UnityEngineUtils::IdToColor32(int32_t  id, int32_t  alpha, bool  distinct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"IdToColor32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, id, alpha, distinct);
}
inline ::UnityEngine::Color32 GlobalNamespace::UnityEngineUtils::ToHighViz(::UnityEngine::Color32  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"ToHighViz", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, c);
}
inline int32_t GlobalNamespace::UnityEngineUtils::Color32ToId(::UnityEngine::Color32  c, bool  distinct)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"Color32ToId", {}, {::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c, distinct);
}
inline ::UnityEngine::Hash128 GlobalNamespace::UnityEngineUtils::QuantizedHash128(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash128", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, m);
}
inline ::UnityEngine::Hash128 GlobalNamespace::UnityEngineUtils::QuantizedHash128(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash128", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::UnityEngineUtils::QuantizedId128(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::UnityEngineUtils::QuantizedId128(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, m);
}
inline ::GlobalNamespace::Id128 GlobalNamespace::UnityEngineUtils::QuantizedId128(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedId128", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Id128>(nullptr, ___internal_method, q);
}
inline int64_t GlobalNamespace::UnityEngineUtils::QuantizedHash64(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash64", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, v);
}
inline int64_t GlobalNamespace::UnityEngineUtils::QuantizedHash64(::UnityEngine::Matrix4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"QuantizedHash64", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, m);
}
inline uint64_t GlobalNamespace::UnityEngineUtils::MergeTo64(int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"MergeTo64", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector4 GlobalNamespace::UnityEngineUtils::ToVector(::UnityEngine::Quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"ToVector", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, q);
}
inline void GlobalNamespace::UnityEngineUtils::CopyTo(::by_ref<::UnityEngine::Quaternion>  q, ::by_ref<::UnityEngine::Vector4>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityEngineUtils*>(),
                        {"CopyTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, q, v);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityEngineUtils::UnityEngineUtils()   {
}
