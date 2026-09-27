#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceDisableHoverboardTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ForceDisableHoverboardTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ForceDisableHoverboardTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceDisableHoverboardTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ForceDisableHoverboardTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x59c715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceDisableHoverboardTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceDisableHoverboardTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::ForceDisableHoverboardTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x59c729c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceDisableHoverboardTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceDisableHoverboardTrigger::*)()>(&::GlobalNamespace::ForceDisableHoverboardTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59c7484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceDisableHoverboardTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceDisableHoverboardTrigger::*)()>(&::GlobalNamespace::ForceDisableHoverboardTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59c75a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ForceDisableHoverboardTrigger::__cordl_internal_get_reEnableOnlyInVStump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reEnableOnlyInVStump;
}
constexpr bool const& GlobalNamespace::ForceDisableHoverboardTrigger::__cordl_internal_get_reEnableOnlyInVStump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reEnableOnlyInVStump;
}
constexpr void GlobalNamespace::ForceDisableHoverboardTrigger::__cordl_internal_set_reEnableOnlyInVStump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reEnableOnlyInVStump = value;
}
inline void GlobalNamespace::ForceDisableHoverboardTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ForceDisableHoverboardTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::ForceDisableHoverboardTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceDisableHoverboardTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceDisableHoverboardTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ForceDisableHoverboardTrigger* GlobalNamespace::ForceDisableHoverboardTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ForceDisableHoverboardTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ForceDisableHoverboardTrigger::ForceDisableHoverboardTrigger()   {
}
