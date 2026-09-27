#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDistilleryDeposit.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRDistilleryDeposit_def.hpp"
#include "GlobalNamespace/zzzz__GRDistillery_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRDistilleryDeposit.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDistilleryDeposit::*)()>(&::GlobalNamespace::GRDistilleryDeposit::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5877514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDistilleryDeposit.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDistilleryDeposit::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GRDistilleryDeposit::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRDistilleryDeposit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRDistilleryDeposit::*)()>(&::GlobalNamespace::GRDistilleryDeposit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5877570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::GRDistilleryDeposit::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::GRDistilleryDeposit::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDistillery>& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get__distillery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distillery;
}
constexpr ::UnityW<::GlobalNamespace::GRDistillery> const& GlobalNamespace::GRDistilleryDeposit::__cordl_internal_get__distillery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distillery;
}
constexpr void GlobalNamespace::GRDistilleryDeposit::__cordl_internal_set__distillery(::UnityW<::GlobalNamespace::GRDistillery>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distillery = value;
}
inline void GlobalNamespace::GRDistilleryDeposit::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRDistilleryDeposit::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GRDistilleryDeposit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRDistilleryDeposit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRDistilleryDeposit* GlobalNamespace::GRDistilleryDeposit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRDistilleryDeposit*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDistilleryDeposit::GRDistilleryDeposit()   {
}
