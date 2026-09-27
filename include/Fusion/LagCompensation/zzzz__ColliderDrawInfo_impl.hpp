#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/ColliderDrawInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/LagCompensation/zzzz__ColliderDrawInfo_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/zzzz__HitboxTypes_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::HitboxTypes (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_Type)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60178ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_BoxExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_BoxExtents)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6017960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_BoxExtents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_Offset)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6017a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_Radius)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6017ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_CapsuleExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleExtents)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6017b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleExtents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_CapsuleTopCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleTopCenter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6017c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleTopCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_CapsuleBottomCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleBottomCenter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6017d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleBottomCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.get_LocalToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::get_LocalToWorldMatrix)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6017eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_LocalToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.FromHitboxCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::ColliderDrawInfo* (::Fusion::LagCompensation::ColliderDrawInfo::*)(int32_t)>(&::Fusion::LagCompensation::ColliderDrawInfo::FromHitboxCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601807c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"FromHitboxCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo.SetContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ColliderDrawInfo::*)(::Fusion::LagCompensation::IHitboxColliderContainer*)>(&::Fusion::LagCompensation::ColliderDrawInfo::SetContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6018084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"SetContainer", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::ColliderDrawInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::ColliderDrawInfo::*)()>(&::Fusion::LagCompensation::ColliderDrawInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601808c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr int32_t const& Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_set_Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr ::Fusion::LagCompensation::IHitboxColliderContainer*& Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_get_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr ::Fusion::LagCompensation::IHitboxColliderContainer* const& Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_get_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr void Fusion::LagCompensation::ColliderDrawInfo::__cordl_internal_set_Container(::Fusion::LagCompensation::IHitboxColliderContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Container = value;
}
inline ::Fusion::HitboxTypes Fusion::LagCompensation::ColliderDrawInfo::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::HitboxTypes>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::ColliderDrawInfo::get_BoxExtents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_BoxExtents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::ColliderDrawInfo::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Fusion::LagCompensation::ColliderDrawInfo::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleExtents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleExtents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleTopCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleTopCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::LagCompensation::ColliderDrawInfo::get_CapsuleBottomCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_CapsuleBottomCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 Fusion::LagCompensation::ColliderDrawInfo::get_LocalToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"get_LocalToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::ColliderDrawInfo* Fusion::LagCompensation::ColliderDrawInfo::FromHitboxCollider(int32_t  colliderIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"FromHitboxCollider", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::ColliderDrawInfo*>(this, ___internal_method, colliderIndex);
}
inline void Fusion::LagCompensation::ColliderDrawInfo::SetContainer(::Fusion::LagCompensation::IHitboxColliderContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {"SetContainer", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void Fusion::LagCompensation::ColliderDrawInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::ColliderDrawInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::ColliderDrawInfo* Fusion::LagCompensation::ColliderDrawInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::ColliderDrawInfo*>());
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::ColliderDrawInfo::ColliderDrawInfo()   {
}
