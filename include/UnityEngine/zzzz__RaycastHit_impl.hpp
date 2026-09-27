#pragma once
// IWYU pragma private; include "UnityEngine/RaycastHit.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_collider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_collider)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb68f8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_collider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_colliderInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_colliderInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68f964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68f96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_point", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.set_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastHit::*)(::UnityEngine::Vector3)>(&::UnityEngine::RaycastHit::set_point)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68f978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68f984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.set_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastHit::*)(::UnityEngine::Vector3)>(&::UnityEngine::RaycastHit::set_normal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb68f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68f99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_distance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.set_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RaycastHit::*)(float_t)>(&::UnityEngine::RaycastHit::set_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68f9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_triangleIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_triangleIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb68f9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_triangleIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_transform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb68f9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RaycastHit.get_rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::UnityEngine::RaycastHit::*)()>(&::UnityEngine::RaycastHit::get_rigidbody)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb68fa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Collider> UnityEngine::RaycastHit::get_collider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_collider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(*this, ___internal_method);
}
inline int32_t UnityEngine::RaycastHit::get_colliderInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_colliderInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::RaycastHit::get_point()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_point", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::RaycastHit::set_point(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_point", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::RaycastHit::get_normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void UnityEngine::RaycastHit::set_normal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_normal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::RaycastHit::get_distance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_distance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::RaycastHit::set_distance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"set_distance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::RaycastHit::get_triangleIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_triangleIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::RaycastHit::get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> UnityEngine::RaycastHit::get_rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RaycastHit>(),
                        {"get_rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::RaycastHit::RaycastHit(::UnityEngine::Vector3  m_Point, ::UnityEngine::Vector3  m_Normal, uint32_t  m_FaceID, float_t  m_Distance, ::UnityEngine::Vector2  m_UV, int32_t  m_Collider) noexcept  {
this->m_Point = m_Point;
this->m_Normal = m_Normal;
this->m_FaceID = m_FaceID;
this->m_Distance = m_Distance;
this->m_UV = m_UV;
this->m_Collider = m_Collider;
}
// Ctor Parameters []
constexpr ::UnityEngine::RaycastHit::RaycastHit()   {
}
