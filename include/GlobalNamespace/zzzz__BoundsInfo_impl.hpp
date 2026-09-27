#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsInfo.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BoundsInfo_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BoundsInfo.get_sizeComputed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BoundsInfo::*)()>(&::GlobalNamespace::BoundsInfo::get_sizeComputed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b41bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"get_sizeComputed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInfo.get_sizeComputedAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BoundsInfo::*)()>(&::GlobalNamespace::BoundsInfo::get_sizeComputedAA)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b41c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"get_sizeComputedAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInfo.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BoundsInfo (*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::BoundsInfo::ComputeBounds)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5b41870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInfo.CreateBoxCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::BoxCollider> (*)(::GlobalNamespace::BoundsInfo)>(&::GlobalNamespace::BoundsInfo::CreateBoxCollider)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5b41c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"CreateBoxCollider", {}, {::i2c::type_of<::GlobalNamespace::BoundsInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BoundsInfo.CreateBoxColliderAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::BoxCollider> (*)(::GlobalNamespace::BoundsInfo)>(&::GlobalNamespace::BoundsInfo::CreateBoxColliderAA)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5b41e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"CreateBoxColliderAA", {}, {::i2c::type_of<::GlobalNamespace::BoundsInfo>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::BoundsInfo::get_sizeComputed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"get_sizeComputed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BoundsInfo::get_sizeComputedAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"get_sizeComputedAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::GlobalNamespace::BoundsInfo GlobalNamespace::BoundsInfo::ComputeBounds(::ArrayW<::UnityEngine::Vector3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BoundsInfo>(nullptr, ___internal_method, vertices);
}
inline ::UnityW<::UnityEngine::BoxCollider> GlobalNamespace::BoundsInfo::CreateBoxCollider(::GlobalNamespace::BoundsInfo  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"CreateBoxCollider", {}, {::i2c::type_of<::GlobalNamespace::BoundsInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::BoxCollider>>(nullptr, ___internal_method, bounds);
}
inline ::UnityW<::UnityEngine::BoxCollider> GlobalNamespace::BoundsInfo::CreateBoxColliderAA(::GlobalNamespace::BoundsInfo  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BoundsInfo>(),
                        {"CreateBoxColliderAA", {}, {::i2c::type_of<::GlobalNamespace::BoundsInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::BoxCollider>>(nullptr, ___internal_method, bounds);
}
// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inflate", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "centerAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizeAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scaleAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inflateAA", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoundsInfo::BoundsInfo(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, float_t  inflate, ::UnityEngine::Vector3  centerAA, ::UnityEngine::Vector3  sizeAA, ::UnityEngine::Vector3  scaleAA, float_t  inflateAA) noexcept  {
this->center = center;
this->size = size;
this->rotation = rotation;
this->scale = scale;
this->inflate = inflate;
this->centerAA = centerAA;
this->sizeAA = sizeAA;
this->scaleAA = scaleAA;
this->inflateAA = inflateAA;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoundsInfo::BoundsInfo()   {
}
