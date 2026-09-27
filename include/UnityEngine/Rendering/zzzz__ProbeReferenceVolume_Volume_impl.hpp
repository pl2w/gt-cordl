#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_Volume.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_Volume_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4, float_t, float_t)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb15f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb15f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::GlobalNamespace::ProbeReferenceVolume_Volume)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb15fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ProbeReferenceVolume_Volume>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::UnityEngine::Bounds)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb15faa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume.CalculateAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::ProbeReferenceVolume_Volume::*)()>(&::GlobalNamespace::ProbeReferenceVolume_Volume::CalculateAABB)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb15fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"CalculateAABB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume.CalculateCenterAndSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::CalculateCenterAndSize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb15fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"CalculateCenterAndSize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::UnityEngine::Matrix4x4)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::Transform)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb15fdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProbeReferenceVolume_Volume::*)()>(&::GlobalNamespace::ProbeReferenceVolume_Volume::ToString)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb15fe58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                    {::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProbeReferenceVolume_Volume.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProbeReferenceVolume_Volume::*)(::GlobalNamespace::ProbeReferenceVolume_Volume)>(&::GlobalNamespace::ProbeReferenceVolume_Volume::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb1600a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ProbeReferenceVolume_Volume>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Matrix4x4  trs, float_t  maxSubdivision, float_t  minSubdivision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trs, maxSubdivision, minSubdivision);
}
inline void GlobalNamespace::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Vector3  corner, ::UnityEngine::Vector3  X, ::UnityEngine::Vector3  Y, ::UnityEngine::Vector3  Z, float_t  maxSubdivision, float_t  minSubdivision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, corner, X, Y, Z, maxSubdivision, minSubdivision);
}
inline void GlobalNamespace::ProbeReferenceVolume_Volume::_ctor(::GlobalNamespace::ProbeReferenceVolume_Volume  copy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ProbeReferenceVolume_Volume>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, copy);
}
inline void GlobalNamespace::ProbeReferenceVolume_Volume::_ctor(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bounds);
}
inline ::UnityEngine::Bounds GlobalNamespace::ProbeReferenceVolume_Volume::CalculateAABB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"CalculateAABB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(*this, ___internal_method);
}
inline void GlobalNamespace::ProbeReferenceVolume_Volume::CalculateCenterAndSize(::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"CalculateCenterAndSize", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void GlobalNamespace::ProbeReferenceVolume_Volume::Transform(::UnityEngine::Matrix4x4  trs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trs);
}
inline ::StringW GlobalNamespace::ProbeReferenceVolume_Volume::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::ProbeReferenceVolume_Volume::Equals(::GlobalNamespace::ProbeReferenceVolume_Volume  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeReferenceVolume_Volume>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::ProbeReferenceVolume_Volume>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>"
constexpr  GlobalNamespace::ProbeReferenceVolume_Volume::operator ::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>"
constexpr ::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>* GlobalNamespace::ProbeReferenceVolume_Volume::i___System__IEquatable_1___GlobalNamespace__ProbeReferenceVolume_Volume_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::ProbeReferenceVolume_Volume>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeReferenceVolume_Volume::ProbeReferenceVolume_Volume(::UnityEngine::Vector3  corner, ::UnityEngine::Vector3  X, ::UnityEngine::Vector3  Y, ::UnityEngine::Vector3  Z, float_t  maxSubdivisionMultiplier, float_t  minSubdivisionMultiplier) noexcept  {
this->corner = corner;
this->X = X;
this->Y = Y;
this->Z = Z;
this->maxSubdivisionMultiplier = maxSubdivisionMultiplier;
this->minSubdivisionMultiplier = minSubdivisionMultiplier;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeReferenceVolume_Volume::ProbeReferenceVolume_Volume()   {
}
