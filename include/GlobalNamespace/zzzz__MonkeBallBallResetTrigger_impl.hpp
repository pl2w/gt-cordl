#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallBallResetTrigger.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallBallResetTrigger_def.hpp"
#include "GlobalNamespace/zzzz__GameBall_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallBallResetTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallBallResetTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBallBallResetTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x57aa894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallBallResetTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallBallResetTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBallBallResetTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x57aabe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallBallResetTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallBallResetTrigger::*)()>(&::GlobalNamespace::MonkeBallBallResetTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57aad4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
constexpr void GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_set_trigger(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_teamMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_teamMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamMaterials;
}
constexpr void GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_set_teamMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_neutralMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get_neutralMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neutralMaterial;
}
constexpr void GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_set_neutralMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neutralMaterial = value;
}
constexpr ::UnityW<::GlobalNamespace::GameBall>& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get__lastBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBall;
}
constexpr ::UnityW<::GlobalNamespace::GameBall> const& GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_get__lastBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastBall;
}
constexpr void GlobalNamespace::MonkeBallBallResetTrigger::__cordl_internal_set__lastBall(::UnityW<::GlobalNamespace::GameBall>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastBall = value;
}
inline void GlobalNamespace::MonkeBallBallResetTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MonkeBallBallResetTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MonkeBallBallResetTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallBallResetTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallBallResetTrigger* GlobalNamespace::MonkeBallBallResetTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallBallResetTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallBallResetTrigger::MonkeBallBallResetTrigger()   {
}
