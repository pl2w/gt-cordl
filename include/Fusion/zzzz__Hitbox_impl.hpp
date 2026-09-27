#pragma once
// IWYU pragma private; include "Fusion/Hitbox.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__HitboxTypes_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::Hitbox.get_AbsSphereRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_AbsSphereRadius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f91000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsSphereRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_AbsCapsuleRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_AbsCapsuleRadius)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsCapsuleRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_CapsuleTopCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_CapsuleTopCenter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f91018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_CapsuleTopCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_CapsuleBottomCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_CapsuleBottomCenter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f910ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_CapsuleBottomCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_AbsBoxExtents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_AbsBoxExtents)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f91140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsBoxExtents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_HitboxIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_HitboxIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f91158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_HitboxMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_HitboxMask)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f91160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_HitboxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_HitboxActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f91194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.set_HitboxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)(bool)>(&::Fusion::Hitbox::set_HitboxActive)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f915b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"set_HitboxActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_ColliderIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_ColliderIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f91a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_ColliderIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.set_ColliderIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)(int32_t)>(&::Fusion::Hitbox::set_ColliderIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f91a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"set_ColliderIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::get_Position)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f91a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f91a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.CacheInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::CacheInfo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f91aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"CacheInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.SetColliderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)(::by_ref<::Fusion::LagCompensation::HitboxCollider>, int32_t)>(&::Fusion::Hitbox::SetColliderData)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f91aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"SetColliderData", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.SetLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)(int32_t)>(&::Fusion::Hitbox::SetLayer)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f91c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f91c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)(::UnityEngine::Color, ::by_ref<::UnityEngine::Matrix4x4>)>(&::Fusion::Hitbox::DrawGizmos)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f91ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Hitbox*>(),
                    {::i2c::class_of<::Fusion::Hitbox*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Hitbox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Hitbox::*)()>(&::Fusion::Hitbox::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f92020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::HitboxTypes& Fusion::Hitbox::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Fusion::HitboxTypes const& Fusion::Hitbox::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_Type(::Fusion::HitboxTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr float_t& Fusion::Hitbox::__cordl_internal_get_SphereRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SphereRadius;
}
constexpr float_t const& Fusion::Hitbox::__cordl_internal_get_SphereRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SphereRadius;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_SphereRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SphereRadius = value;
}
constexpr float_t& Fusion::Hitbox::__cordl_internal_get_CapsuleRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CapsuleRadius;
}
constexpr float_t const& Fusion::Hitbox::__cordl_internal_get_CapsuleRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CapsuleRadius;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_CapsuleRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CapsuleRadius = value;
}
constexpr ::UnityEngine::Vector3& Fusion::Hitbox::__cordl_internal_get_BoxExtents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoxExtents;
}
constexpr ::UnityEngine::Vector3 const& Fusion::Hitbox::__cordl_internal_get_BoxExtents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoxExtents;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_BoxExtents(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoxExtents = value;
}
constexpr float_t& Fusion::Hitbox::__cordl_internal_get_CapsuleExtents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CapsuleExtents;
}
constexpr float_t const& Fusion::Hitbox::__cordl_internal_get_CapsuleExtents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CapsuleExtents;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_CapsuleExtents(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CapsuleExtents = value;
}
constexpr ::UnityEngine::Vector3& Fusion::Hitbox::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr ::UnityEngine::Vector3 const& Fusion::Hitbox::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_Offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr ::UnityW<::Fusion::HitboxRoot>& Fusion::Hitbox::__cordl_internal_get_Root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr ::UnityW<::Fusion::HitboxRoot> const& Fusion::Hitbox::__cordl_internal_get_Root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Root;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_Root(::UnityW<::Fusion::HitboxRoot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Root = value;
}
constexpr int32_t& Fusion::Hitbox::__cordl_internal_get__hitboxIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitboxIndex;
}
constexpr int32_t const& Fusion::Hitbox::__cordl_internal_get__hitboxIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitboxIndex;
}
constexpr void Fusion::Hitbox::__cordl_internal_set__hitboxIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitboxIndex = value;
}
constexpr int32_t& Fusion::Hitbox::__cordl_internal_get__ColliderIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColliderIndex_k__BackingField;
}
constexpr int32_t const& Fusion::Hitbox::__cordl_internal_get__ColliderIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ColliderIndex_k__BackingField;
}
constexpr void Fusion::Hitbox::__cordl_internal_set__ColliderIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ColliderIndex_k__BackingField = value;
}
constexpr ::UnityEngine::Color& Fusion::Hitbox::__cordl_internal_get_GizmosColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GizmosColor;
}
constexpr ::UnityEngine::Color const& Fusion::Hitbox::__cordl_internal_get_GizmosColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GizmosColor;
}
constexpr void Fusion::Hitbox::__cordl_internal_set_GizmosColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GizmosColor = value;
}
constexpr int32_t& Fusion::Hitbox::__cordl_internal_get__cachedLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedLayerMask;
}
constexpr int32_t const& Fusion::Hitbox::__cordl_internal_get__cachedLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedLayerMask;
}
constexpr void Fusion::Hitbox::__cordl_internal_set__cachedLayerMask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::Hitbox::__cordl_internal_get__cachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::Hitbox::__cordl_internal_get__cachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedTransform;
}
constexpr void Fusion::Hitbox::__cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedTransform = value;
}
inline float_t Fusion::Hitbox::get_AbsSphereRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsSphereRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Fusion::Hitbox::get_AbsCapsuleRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsCapsuleRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::Hitbox::get_CapsuleTopCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_CapsuleTopCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::Hitbox::get_CapsuleBottomCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_CapsuleBottomCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::Hitbox::get_AbsBoxExtents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_AbsBoxExtents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t Fusion::Hitbox::get_HitboxIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t Fusion::Hitbox::get_HitboxMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline bool Fusion::Hitbox::get_HitboxActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_HitboxActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Hitbox::set_HitboxActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"set_HitboxActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Hitbox::get_ColliderIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_ColliderIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Hitbox::set_ColliderIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"set_ColliderIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Fusion::Hitbox::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Fusion::Hitbox::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Hitbox::CacheInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"CacheInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Hitbox::SetColliderData(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"SetColliderData", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c, tick);
}
inline void Fusion::Hitbox::SetLayer(int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"SetLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer);
}
inline void Fusion::Hitbox::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Hitbox::DrawGizmos(::UnityEngine::Color  color, ::by_ref<::UnityEngine::Matrix4x4>  localToWorldMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Hitbox*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, localToWorldMatrix);
}
inline void Fusion::Hitbox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Hitbox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Hitbox* Fusion::Hitbox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Hitbox*>());
}
// Ctor Parameters []
constexpr ::Fusion::Hitbox::Hitbox()   {
}
