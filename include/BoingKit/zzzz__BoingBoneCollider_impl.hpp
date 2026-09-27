#pragma once
// IWYU pragma private; include "BoingKit/BoingBoneCollider.hpp"
#include "BoingKit/zzzz__BoingBoneCollider_Type_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingBoneCollider_def.hpp"
#include "BoingKit/zzzz__BoingBoneCollider_Type_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingBoneCollider.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::BoingKit::BoingBoneCollider::*)()>(&::BoingKit::BoingBoneCollider::get_Bounds)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5e12428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBoneCollider.Collide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BoingKit::BoingBoneCollider::*)(::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::BoingKit::BoingBoneCollider::Collide)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5e1282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"Collide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBoneCollider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBoneCollider::*)()>(&::BoingKit::BoingBoneCollider::OnValidate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e12c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBoneCollider.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBoneCollider::*)()>(&::BoingKit::BoingBoneCollider::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e12c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBoneCollider.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBoneCollider::*)()>(&::BoingKit::BoingBoneCollider::DrawGizmos)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x5e12c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"DrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBoneCollider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBoneCollider::*)()>(&::BoingKit::BoingBoneCollider::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e13454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BoingBoneCollider_Type& BoingKit::BoingBoneCollider::__cordl_internal_get_Shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Shape;
}
constexpr ::GlobalNamespace::BoingBoneCollider_Type const& BoingKit::BoingBoneCollider::__cordl_internal_get_Shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Shape;
}
constexpr void BoingKit::BoingBoneCollider::__cordl_internal_set_Shape(::GlobalNamespace::BoingBoneCollider_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Shape = value;
}
constexpr float_t& BoingKit::BoingBoneCollider::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& BoingKit::BoingBoneCollider::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void BoingKit::BoingBoneCollider::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr float_t& BoingKit::BoingBoneCollider::__cordl_internal_get_Height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Height;
}
constexpr float_t const& BoingKit::BoingBoneCollider::__cordl_internal_get_Height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Height;
}
constexpr void BoingKit::BoingBoneCollider::__cordl_internal_set_Height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Height = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingBoneCollider::__cordl_internal_get_Dimensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dimensions;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingBoneCollider::__cordl_internal_get_Dimensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dimensions;
}
constexpr void BoingKit::BoingBoneCollider::__cordl_internal_set_Dimensions(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dimensions = value;
}
inline ::UnityEngine::Bounds BoingKit::BoingBoneCollider::get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool BoingKit::BoingBoneCollider::Collide(::UnityEngine::Vector3  boneCenter, float_t  boneRadius, ::by_ref<::UnityEngine::Vector3>  push)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"Collide", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, boneCenter, boneRadius, push);
}
inline void BoingKit::BoingBoneCollider::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBoneCollider::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBoneCollider::DrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {"DrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingBoneCollider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBoneCollider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingBoneCollider* BoingKit::BoingBoneCollider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBoneCollider*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBoneCollider::BoingBoneCollider()   {
}
