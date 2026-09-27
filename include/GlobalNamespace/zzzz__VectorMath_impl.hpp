#pragma once
// IWYU pragma private; include "GlobalNamespace/VectorMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VectorMath_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Clamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3Int, int32_t, int32_t)>(&::GlobalNamespace::VectorMath::Clamped)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b1c4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Clamped", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.SetXYZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::VectorMath::SetXYZ)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b1c67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"SetXYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3Int)>(&::GlobalNamespace::VectorMath::Abs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b1c688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::Abs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b1c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::Min)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1c778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::Max)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b1c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Add)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1c8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Sub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Sub)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1c908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Sub", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Mul
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Mul)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b1c918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Mul", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Div
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Div)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b1c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Div", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::Max)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b1c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Max)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1c9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::GlobalNamespace::VectorMath::Max)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b1ca68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::IsFinite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b1caf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"IsFinite", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Clamped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::VectorMath::Clamped)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b1cb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Clamped", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Approx0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Approx0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b1cd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Approx1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Approx1)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b1cd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Approx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::VectorMath::Approx)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b1cd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VectorMath.Approx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, float_t)>(&::GlobalNamespace::VectorMath::Approx)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b1cd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3Int GlobalNamespace::VectorMath::Clamped(::UnityEngine::Vector3Int  v, int32_t  min, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Clamped", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v, min, max);
}
inline void GlobalNamespace::VectorMath::SetXYZ(::by_ref<::UnityEngine::Vector3>  v, float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"SetXYZ", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v, f);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::VectorMath::Abs(::UnityEngine::Vector3Int  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Abs(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Abs", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Min(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Min", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Max(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Add(::UnityEngine::Vector3  v, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, amount);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Sub(::UnityEngine::Vector3  v, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Sub", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, amount);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Mul(::UnityEngine::Vector3  v, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Mul", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, amount);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Div(::UnityEngine::Vector3  v, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Div", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, amount);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Max(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Max(::UnityEngine::Vector3  v, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, max);
}
inline ::Unity::Mathematics::float3 GlobalNamespace::VectorMath::Max(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Max", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, v);
}
inline bool GlobalNamespace::VectorMath::IsFinite(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"IsFinite", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VectorMath::Clamped(::UnityEngine::Vector3  v, ::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Clamped", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, min, max);
}
inline bool GlobalNamespace::VectorMath::Approx0(::UnityEngine::Vector3  v, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, epsilon);
}
inline bool GlobalNamespace::VectorMath::Approx1(::UnityEngine::Vector3  v, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, v, epsilon);
}
inline bool GlobalNamespace::VectorMath::Approx(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, epsilon);
}
inline bool GlobalNamespace::VectorMath::Approx(::UnityEngine::Vector4  a, ::UnityEngine::Vector4  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VectorMath*>(),
                        {"Approx", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, epsilon);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VectorMath::VectorMath()   {
}
