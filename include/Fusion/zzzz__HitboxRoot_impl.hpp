#pragma once
// IWYU pragma private; include "Fusion/HitboxRoot.hpp"
#include "Fusion/zzzz__HitboxRoot_ConfigFlags_impl.hpp"
#include "Fusion/zzzz__Hitbox_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/zzzz__HitboxManager_def.hpp"
#include "Fusion/zzzz__HitboxRoot_ConfigFlags_def.hpp"
#include "Fusion/zzzz__HitboxRoot_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Fusion::HitboxRoot.get_HitboxRootActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::get_HitboxRootActive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f94ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_HitboxRootActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.set_HitboxRootActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(bool)>(&::Fusion::HitboxRoot::set_HitboxRootActive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f94f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"set_HitboxRootActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.get_Registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::get_Registered)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f94540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_Registered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.get_Manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::HitboxManager> (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::get_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f94fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_Manager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.set_Manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::HitboxManager*)>(&::Fusion::HitboxRoot::set_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f94fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"set_Manager", {}, {::i2c::type_of<::Fusion::HitboxManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.get_InInterest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::get_InInterest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f94560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_InInterest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f94fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f94fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::UnityEngine::Color, ::by_ref<::UnityEngine::Matrix4x4>)>(&::Fusion::HitboxRoot::DrawGizmos)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f950f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::HitboxRoot*>(),
                    {::i2c::class_of<::Fusion::HitboxRoot*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.InitHitboxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::InitHitboxes)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5f951d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"InitHitboxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.SetMinBoundingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::SetMinBoundingRadius)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5f953b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetMinBoundingRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.SetHitboxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::Hitbox*, bool)>(&::Fusion::HitboxRoot::SetHitboxActive)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5f915dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetHitboxActive", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.SetHitboxActiveFastUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::Hitbox*, bool)>(&::Fusion::HitboxRoot::SetHitboxActiveFastUnchecked)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f95624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetHitboxActiveFastUnchecked", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.IsHitboxActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxRoot::*)(::Fusion::Hitbox*)>(&::Fusion::HitboxRoot::IsHitboxActive)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x5f911b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"IsHitboxActive", {}, {::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.IsHitboxActiveFastUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::HitboxRoot::*)(::Fusion::Hitbox*)>(&::Fusion::HitboxRoot::IsHitboxActiveFastUnchecked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f956f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"IsHitboxActiveFastUnchecked", {}, {::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.Despawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::NetworkRunner*, bool)>(&::Fusion::HitboxRoot::Despawned)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f95788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::HitboxRoot*>(),
                    {::i2c::class_of<::Fusion::HitboxRoot*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.RegisterColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, int32_t)>(&::Fusion::HitboxRoot::RegisterColliders)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f957dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"RegisterColliders", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.DeregisterColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)(::Fusion::LagCompensation::IHitboxColliderContainer*)>(&::Fusion::HitboxRoot::DeregisterColliders)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f95934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"DeregisterColliders", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::GetBounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f95a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"GetBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot::*)()>(&::Fusion::HitboxRoot::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f95aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags& Fusion::HitboxRoot::__cordl_internal_get_Config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr ::GlobalNamespace::HitboxRoot_ConfigFlags const& Fusion::HitboxRoot::__cordl_internal_get_Config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Config;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_Config(::GlobalNamespace::HitboxRoot_ConfigFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Config = value;
}
constexpr float_t& Fusion::HitboxRoot::__cordl_internal_get_BroadRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadRadius;
}
constexpr float_t const& Fusion::HitboxRoot::__cordl_internal_get_BroadRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BroadRadius;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_BroadRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BroadRadius = value;
}
constexpr ::UnityEngine::Vector3& Fusion::HitboxRoot::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr ::UnityEngine::Vector3 const& Fusion::HitboxRoot::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_Offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
constexpr ::UnityEngine::Color& Fusion::HitboxRoot::__cordl_internal_get_GizmosColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GizmosColor;
}
constexpr ::UnityEngine::Color const& Fusion::HitboxRoot::__cordl_internal_get_GizmosColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GizmosColor;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_GizmosColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GizmosColor = value;
}
constexpr ::ArrayW<::UnityW<::Fusion::Hitbox>>& Fusion::HitboxRoot::__cordl_internal_get_Hitboxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hitboxes;
}
constexpr ::ArrayW<::UnityW<::Fusion::Hitbox>> const& Fusion::HitboxRoot::__cordl_internal_get_Hitboxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hitboxes;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_Hitboxes(::ArrayW<::UnityW<::Fusion::Hitbox>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hitboxes = value;
}
constexpr ::UnityW<::Fusion::HitboxManager>& Fusion::HitboxRoot::__cordl_internal_get__Manager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Manager_k__BackingField;
}
constexpr ::UnityW<::Fusion::HitboxManager> const& Fusion::HitboxRoot::__cordl_internal_get__Manager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Manager_k__BackingField;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set__Manager_k__BackingField(::UnityW<::Fusion::HitboxManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Manager_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Fusion::HitboxRoot::__cordl_internal_get_CachedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Fusion::HitboxRoot::__cordl_internal_get_CachedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CachedTransform;
}
constexpr void Fusion::HitboxRoot::__cordl_internal_set_CachedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CachedTransform = value;
}
inline bool Fusion::HitboxRoot::get_HitboxRootActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_HitboxRootActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::set_HitboxRootActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"set_HitboxRootActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::HitboxRoot::get_Registered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_Registered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::Fusion::HitboxManager> Fusion::HitboxRoot::get_Manager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_Manager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::HitboxManager>>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::set_Manager(::Fusion::HitboxManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"set_Manager", {}, {::i2c::type_of<::Fusion::HitboxManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::HitboxRoot::get_InInterest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"get_InInterest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::DrawGizmos(::UnityEngine::Color  color, ::by_ref<::UnityEngine::Matrix4x4>  localToWorldMatrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::HitboxRoot*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, localToWorldMatrix);
}
inline void Fusion::HitboxRoot::InitHitboxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"InitHitboxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::SetMinBoundingRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetMinBoundingRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::SetHitboxActive(::Fusion::Hitbox*  hitbox, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetHitboxActive", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitbox, setActive);
}
inline void Fusion::HitboxRoot::SetHitboxActiveFastUnchecked(::Fusion::Hitbox*  hitbox, bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"SetHitboxActiveFastUnchecked", {}, {::i2c::type_of<::Fusion::Hitbox*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitbox, setActive);
}
inline bool Fusion::HitboxRoot::IsHitboxActive(::Fusion::Hitbox*  hitbox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"IsHitboxActive", {}, {::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitbox);
}
inline bool Fusion::HitboxRoot::IsHitboxActiveFastUnchecked(::Fusion::Hitbox*  hitbox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"IsHitboxActiveFastUnchecked", {}, {::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitbox);
}
inline void Fusion::HitboxRoot::Despawned(::Fusion::NetworkRunner*  runner, bool  hasState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::HitboxRoot*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hasState);
}
inline void Fusion::HitboxRoot::RegisterColliders(::Fusion::LagCompensation::IHitboxColliderContainer*  container, int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"RegisterColliders", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, tick);
}
inline void Fusion::HitboxRoot::DeregisterColliders(::Fusion::LagCompensation::IHitboxColliderContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"DeregisterColliders", {}, {::i2c::type_of<::Fusion::LagCompensation::IHitboxColliderContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline ::UnityEngine::Bounds Fusion::HitboxRoot::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {"GetBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Fusion::HitboxRoot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HitboxRoot* Fusion::HitboxRoot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HitboxRoot*>());
}
// Ctor Parameters []
constexpr ::Fusion::HitboxRoot::HitboxRoot()   {
}
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerZ.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxRoot_HitboxComparerZ::*)(::Fusion::HitboxRoot*, ::Fusion::HitboxRoot*)>(&::Fusion::HitboxRoot_HitboxComparerZ::Compare)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f95c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerZ*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerZ._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot_HitboxComparerZ::*)()>(&::Fusion::HitboxRoot_HitboxComparerZ::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerZ*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::HitboxRoot_HitboxComparerZ::Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerZ*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Fusion::HitboxRoot_HitboxComparerZ::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerZ*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HitboxRoot_HitboxComparerZ* Fusion::HitboxRoot_HitboxComparerZ::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HitboxRoot_HitboxComparerZ*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr  Fusion::HitboxRoot_HitboxComparerZ::operator ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* Fusion::HitboxRoot_HitboxComparerZ::i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::HitboxRoot_HitboxComparerZ::HitboxRoot_HitboxComparerZ()   {
}
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerY.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxRoot_HitboxComparerY::*)(::Fusion::HitboxRoot*, ::Fusion::HitboxRoot*)>(&::Fusion::HitboxRoot_HitboxComparerY::Compare)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f95b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerY*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerY._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot_HitboxComparerY::*)()>(&::Fusion::HitboxRoot_HitboxComparerY::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerY*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::HitboxRoot_HitboxComparerY::Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerY*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Fusion::HitboxRoot_HitboxComparerY::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerY*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HitboxRoot_HitboxComparerY* Fusion::HitboxRoot_HitboxComparerY::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HitboxRoot_HitboxComparerY*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr  Fusion::HitboxRoot_HitboxComparerY::operator ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* Fusion::HitboxRoot_HitboxComparerY::i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::HitboxRoot_HitboxComparerY::HitboxRoot_HitboxComparerY()   {
}
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerX.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::HitboxRoot_HitboxComparerX::*)(::Fusion::HitboxRoot*, ::Fusion::HitboxRoot*)>(&::Fusion::HitboxRoot_HitboxComparerX::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f95b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerX*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::HitboxRoot_HitboxComparerX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::HitboxRoot_HitboxComparerX::*)()>(&::Fusion::HitboxRoot_HitboxComparerX::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f95b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::HitboxRoot_HitboxComparerX::Compare(::Fusion::HitboxRoot*  a, ::Fusion::HitboxRoot*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerX*>(),
                        {"Compare", {}, {::i2c::type_of<::Fusion::HitboxRoot*>(), ::i2c::type_of<::Fusion::HitboxRoot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Fusion::HitboxRoot_HitboxComparerX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::HitboxRoot_HitboxComparerX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::HitboxRoot_HitboxComparerX* Fusion::HitboxRoot_HitboxComparerX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::HitboxRoot_HitboxComparerX*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr  Fusion::HitboxRoot_HitboxComparerX::operator ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>* Fusion::HitboxRoot_HitboxComparerX::i___System__Collections__Generic__IComparer_1___UnityW___Fusion__HitboxRoot__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityW<::Fusion::HitboxRoot>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::HitboxRoot_HitboxComparerX::HitboxRoot_HitboxComparerX()   {
}
