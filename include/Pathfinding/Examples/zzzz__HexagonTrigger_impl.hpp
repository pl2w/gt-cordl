#pragma once
// IWYU pragma private; include "Pathfinding/Examples/HexagonTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__HexagonTrigger_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::HexagonTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::HexagonTrigger::*)()>(&::Pathfinding::Examples::HexagonTrigger::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ef4d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::HexagonTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::HexagonTrigger::*)(::UnityEngine::Collider*)>(&::Pathfinding::Examples::HexagonTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ef4dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::HexagonTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::HexagonTrigger::*)(::UnityEngine::Collider*)>(&::Pathfinding::Examples::HexagonTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ef4f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::HexagonTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::HexagonTrigger::*)()>(&::Pathfinding::Examples::HexagonTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef5014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void Pathfinding::Examples::HexagonTrigger::__cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void Pathfinding::Examples::HexagonTrigger::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr bool& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr bool const& Pathfinding::Examples::HexagonTrigger::__cordl_internal_get_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr void Pathfinding::Examples::HexagonTrigger::__cordl_internal_set_visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visible = value;
}
inline void Pathfinding::Examples::HexagonTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::HexagonTrigger::OnTriggerEnter(::UnityEngine::Collider*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline void Pathfinding::Examples::HexagonTrigger::OnTriggerExit(::UnityEngine::Collider*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline void Pathfinding::Examples::HexagonTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::HexagonTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::HexagonTrigger* Pathfinding::Examples::HexagonTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::HexagonTrigger*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::HexagonTrigger::HexagonTrigger()   {
}
