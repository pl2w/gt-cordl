#pragma once
// IWYU pragma private; include "GlobalNamespace/MetroBlimp.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetroBlimp_def.hpp"
#include "GlobalNamespace/zzzz__MetroSpotlight_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroBlimp::*)()>(&::GlobalNamespace::MetroBlimp::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d08c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroBlimp::*)()>(&::GlobalNamespace::MetroBlimp::Tick)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5d08c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp.IsPlayerHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MetroBlimp::IsPlayerHand)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d08f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"IsPlayerHand", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroBlimp::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MetroBlimp::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d08f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroBlimp::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MetroBlimp::OnTriggerExit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d08f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroBlimp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroBlimp::*)()>(&::GlobalNamespace::MetroBlimp::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d08f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MetroSpotlight>& GlobalNamespace::MetroBlimp::__cordl_internal_get_spotLightLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spotLightLeft;
}
constexpr ::UnityW<::GlobalNamespace::MetroSpotlight> const& GlobalNamespace::MetroBlimp::__cordl_internal_get_spotLightLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spotLightLeft;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_spotLightLeft(::UnityW<::GlobalNamespace::MetroSpotlight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spotLightLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::MetroSpotlight>& GlobalNamespace::MetroBlimp::__cordl_internal_get_spotLightRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spotLightRight;
}
constexpr ::UnityW<::GlobalNamespace::MetroSpotlight> const& GlobalNamespace::MetroBlimp::__cordl_internal_get_spotLightRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spotLightRight;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_spotLightRight(::UnityW<::GlobalNamespace::MetroSpotlight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spotLightRight = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::MetroBlimp::__cordl_internal_get_topCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::MetroBlimp::__cordl_internal_get_topCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topCollider;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_topCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topCollider = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MetroBlimp::__cordl_internal_get_blimpMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blimpMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MetroBlimp::__cordl_internal_get_blimpMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blimpMaterial;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_blimpMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blimpMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MetroBlimp::__cordl_internal_get_blimpRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blimpRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MetroBlimp::__cordl_internal_get_blimpRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blimpRenderer;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_blimpRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blimpRenderer = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get_ascendSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendSpeed;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get_ascendSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ascendSpeed;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_ascendSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ascendSpeed = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendSpeed;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendSpeed;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_descendSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descendSpeed = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendOffset;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendOffset;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_descendOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descendOffset = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendReactionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendReactionTime;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get_descendReactionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descendReactionTime;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set_descendReactionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descendReactionTime = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get__startLocalHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startLocalHeight;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get__startLocalHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startLocalHeight;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set__startLocalHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startLocalHeight = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get__topStayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topStayTime;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get__topStayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topStayTime;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set__topStayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topStayTime = value;
}
constexpr float_t& GlobalNamespace::MetroBlimp::__cordl_internal_get__numHandsOnBlimp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numHandsOnBlimp;
}
constexpr float_t const& GlobalNamespace::MetroBlimp::__cordl_internal_get__numHandsOnBlimp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numHandsOnBlimp;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set__numHandsOnBlimp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numHandsOnBlimp = value;
}
constexpr bool& GlobalNamespace::MetroBlimp::__cordl_internal_get__lowering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowering;
}
constexpr bool const& GlobalNamespace::MetroBlimp::__cordl_internal_get__lowering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lowering;
}
constexpr void GlobalNamespace::MetroBlimp::__cordl_internal_set__lowering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lowering = value;
}
inline void GlobalNamespace::MetroBlimp::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetroBlimp::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetroBlimp::IsPlayerHand(::UnityEngine::Collider*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"IsPlayerHand", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline void GlobalNamespace::MetroBlimp::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MetroBlimp::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MetroBlimp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroBlimp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetroBlimp* GlobalNamespace::MetroBlimp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetroBlimp*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetroBlimp::MetroBlimp()   {
}
