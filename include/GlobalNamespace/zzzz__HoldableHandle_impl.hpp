#pragma once
// IWYU pragma private; include "GlobalNamespace/HoldableHandle.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableHandle_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoldableHandle.get_Holdable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::HoldableObject> (::GlobalNamespace::HoldableHandle::*)()>(&::GlobalNamespace::HoldableHandle::get_Holdable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5759d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {"get_Holdable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableHandle.get_Capsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::GlobalNamespace::HoldableHandle::*)()>(&::GlobalNamespace::HoldableHandle::get_Capsule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5759d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {"get_Capsule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HoldableHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoldableHandle::*)()>(&::GlobalNamespace::HoldableHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5759d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HoldableObject>& GlobalNamespace::HoldableHandle::__cordl_internal_get_holdable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdable;
}
constexpr ::UnityW<::GlobalNamespace::HoldableObject> const& GlobalNamespace::HoldableHandle::__cordl_internal_get_holdable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdable;
}
constexpr void GlobalNamespace::HoldableHandle::__cordl_internal_set_holdable(::UnityW<::GlobalNamespace::HoldableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdable = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::HoldableHandle::__cordl_internal_get_handleCapsuleTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleCapsuleTrigger;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::HoldableHandle::__cordl_internal_get_handleCapsuleTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleCapsuleTrigger;
}
constexpr void GlobalNamespace::HoldableHandle::__cordl_internal_set_handleCapsuleTrigger(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleCapsuleTrigger = value;
}
inline ::UnityW<::GlobalNamespace::HoldableObject> GlobalNamespace::HoldableHandle::get_Holdable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {"get_Holdable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::HoldableObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> GlobalNamespace::HoldableHandle::get_Capsule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {"get_Capsule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method);
}
inline void GlobalNamespace::HoldableHandle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoldableHandle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoldableHandle* GlobalNamespace::HoldableHandle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoldableHandle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoldableHandle::HoldableHandle()   {
}
