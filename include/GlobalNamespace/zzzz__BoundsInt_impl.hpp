#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsInt.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GlobalNamespace/zzzz__BoundsInt_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoundsInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::GlobalNamespace::BoundsInt::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BoundsInt::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b42190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::get_center)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b42468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::get_size)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b424b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.get_centerFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::get_centerFloat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b424e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_centerFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.get_sizeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::get_sizeFloat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b42578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_sizeFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.FloatToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BoundsInt::FloatToInt)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5b42204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"FloatToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.IntToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3Int)>(&::GlobalNamespace::BoundsInt::IntToFloat)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b42550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"IntToFloat", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.FromBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BoundsInt (*)(::UnityEngine::Bounds)>(&::GlobalNamespace::BoundsInt::FromBounds)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b425c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"FromBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.ToBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::ToBounds)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b425ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"ToBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.SetMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int)>(&::GlobalNamespace::BoundsInt::SetMinMax)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b426b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"SetMinMax", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.SetMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BoundsInt::SetMinMax)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b426c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"SetMinMax", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Encapsulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::Encapsulate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b42714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Encapsulate", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Expand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BoundsInt::*)(float_t)>(&::GlobalNamespace::BoundsInt::Expand)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b42760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Intersects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoundsInt::*)(::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::Intersects)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b42894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Intersects", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoundsInt::*)(::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::Contains)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b42900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoundsInt::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BoundsInt::Contains)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b4296c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.GetIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BoundsInt (::GlobalNamespace::BoundsInt::*)(::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::GetIntersection)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b429d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"GetIntersection", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::Volume)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b42ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.VolumeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::VolumeFloat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b42ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"VolumeFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BoundsInt, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b42b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BoundsInt, ::GlobalNamespace::BoundsInt)>(&::GlobalNamespace::BoundsInt::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b42b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BoundsInt::*)(::System::Object*)>(&::GlobalNamespace::BoundsInt::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b42c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                    {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::GetHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b42cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                    {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInt.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BoundsInt::*)()>(&::GlobalNamespace::BoundsInt::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b42d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                    {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BoundsInt::_ctor(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void GlobalNamespace::BoundsInt::_ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::BoundsInt::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::BoundsInt::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BoundsInt::get_centerFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_centerFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BoundsInt::get_sizeFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"get_sizeFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3Int GlobalNamespace::BoundsInt::FloatToInt(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"FloatToInt", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BoundsInt::IntToFloat(::UnityEngine::Vector3Int  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"IntToFloat", {}, {::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v);
}
inline ::GlobalNamespace::BoundsInt GlobalNamespace::BoundsInt::FromBounds(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"FromBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BoundsInt>(nullptr, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds GlobalNamespace::BoundsInt::ToBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"ToBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline void GlobalNamespace::BoundsInt::SetMinMax(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"SetMinMax", {}, {::i2c::type_of<::UnityEngine::Vector3Int>(), ::i2c::type_of<::UnityEngine::Vector3Int>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void GlobalNamespace::BoundsInt::SetMinMax(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"SetMinMax", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, min, max);
}
inline void GlobalNamespace::BoundsInt::Encapsulate(::GlobalNamespace::BoundsInt  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Encapsulate", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void GlobalNamespace::BoundsInt::Expand(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Expand", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, amount);
}
inline bool GlobalNamespace::BoundsInt::Intersects(::GlobalNamespace::BoundsInt  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Intersects", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BoundsInt::Contains(::GlobalNamespace::BoundsInt  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::BoundsInt::Contains(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, point);
}
inline ::GlobalNamespace::BoundsInt GlobalNamespace::BoundsInt::GetIntersection(::GlobalNamespace::BoundsInt  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"GetIntersection", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BoundsInt>(*this, ___internal_method, other);
}
inline int64_t GlobalNamespace::BoundsInt::Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::BoundsInt::VolumeFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"VolumeFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::BoundsInt::op_Equality(::GlobalNamespace::BoundsInt  a, ::GlobalNamespace::BoundsInt  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"op_Equality", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::BoundsInt::op_Inequality(::GlobalNamespace::BoundsInt  a, ::GlobalNamespace::BoundsInt  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInt>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::BoundsInt>(), ::i2c::type_of<::GlobalNamespace::BoundsInt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::BoundsInt::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::BoundsInt::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::BoundsInt::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BoundsInt>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoundsInt::BoundsInt(::UnityEngine::Vector3Int  min, ::UnityEngine::Vector3Int  max) noexcept  {
this->min = min;
this->max = max;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoundsInt::BoundsInt()   {
}
