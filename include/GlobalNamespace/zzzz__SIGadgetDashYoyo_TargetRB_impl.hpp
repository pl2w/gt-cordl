#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo_TargetRB.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDashYoyo_TargetRB_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDashYoyo_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDashYoyo_TargetRB.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDashYoyo_TargetRB::*)()>(&::GlobalNamespace::SIGadgetDashYoyo_TargetRB::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d4cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDashYoyo_TargetRB.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDashYoyo_TargetRB::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIGadgetDashYoyo_TargetRB::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58d4cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetDashYoyo_TargetRB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetDashYoyo_TargetRB::*)()>(&::GlobalNamespace::SIGadgetDashYoyo_TargetRB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetDashYoyo>& GlobalNamespace::SIGadgetDashYoyo_TargetRB::__cordl_internal_get_gadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadget;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetDashYoyo> const& GlobalNamespace::SIGadgetDashYoyo_TargetRB::__cordl_internal_get_gadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadget;
}
constexpr void GlobalNamespace::SIGadgetDashYoyo_TargetRB::__cordl_internal_set_gadget(::UnityW<::GlobalNamespace::SIGadgetDashYoyo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadget = value;
}
inline void GlobalNamespace::SIGadgetDashYoyo_TargetRB::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetDashYoyo_TargetRB::OnTriggerEnter(::UnityEngine::Collider*  otherCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherCollider);
}
inline void GlobalNamespace::SIGadgetDashYoyo_TargetRB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetDashYoyo_TargetRB* GlobalNamespace::SIGadgetDashYoyo_TargetRB::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetDashYoyo_TargetRB*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetDashYoyo_TargetRB::SIGadgetDashYoyo_TargetRB()   {
}
