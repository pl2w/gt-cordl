#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoonColliderHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonColliderHelper_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonColliderHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonColliderHelper::*)()>(&::GlobalNamespace::GREnemyBossMoonColliderHelper::Awake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5885d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonColliderHelper.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonColliderHelper::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyBossMoonColliderHelper::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5885d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonColliderHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonColliderHelper::*)()>(&::GlobalNamespace::GREnemyBossMoonColliderHelper::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5885fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_ResizeOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResizeOnAwake;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_ResizeOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResizeOnAwake;
}
constexpr void GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_set_ResizeOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResizeOnAwake = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_ResizeCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResizeCollider;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_ResizeCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResizeCollider;
}
constexpr void GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_set_ResizeCollider(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResizeCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_boss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boss;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_boss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boss;
}
constexpr void GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_set_boss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boss = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_localPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_localPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayer;
}
constexpr void GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_set_localPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayer = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_lastTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggered;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_get_lastTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggered;
}
constexpr void GlobalNamespace::GREnemyBossMoonColliderHelper::__cordl_internal_set_lastTriggered(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggered = value;
}
inline void GlobalNamespace::GREnemyBossMoonColliderHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonColliderHelper::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GREnemyBossMoonColliderHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonColliderHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoonColliderHelper* GlobalNamespace::GREnemyBossMoonColliderHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoonColliderHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoonColliderHelper::GREnemyBossMoonColliderHelper()   {
}
