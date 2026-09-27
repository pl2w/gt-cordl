#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSpringMovement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRSpringMovement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpringMovement::*)(float_t, float_t)>(&::GlobalNamespace::GRSpringMovement::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58b7568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpringMovement::*)()>(&::GlobalNamespace::GRSpringMovement::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b75a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement.SetHardStopAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpringMovement::*)(bool)>(&::GlobalNamespace::GRSpringMovement::SetHardStopAtTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58b75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"SetHardStopAtTarget", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSpringMovement::*)()>(&::GlobalNamespace::GRSpringMovement::Update)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58b75d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement.HitTargetLastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSpringMovement::*)()>(&::GlobalNamespace::GRSpringMovement::HitTargetLastUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b76d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"HitTargetLastUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSpringMovement.IsAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSpringMovement::*)()>(&::GlobalNamespace::GRSpringMovement::IsAtTarget)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58b7708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"IsAtTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRSpringMovement::__cordl_internal_get_tension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr float_t const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_tension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_tension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tension = value;
}
constexpr float_t& GlobalNamespace::GRSpringMovement::__cordl_internal_get_dampening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampening;
}
constexpr float_t const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_dampening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampening;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_dampening(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampening = value;
}
constexpr float_t& GlobalNamespace::GRSpringMovement::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr float_t const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_target(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr bool& GlobalNamespace::GRSpringMovement::__cordl_internal_get_hardStopAtTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardStopAtTarget;
}
constexpr bool const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_hardStopAtTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardStopAtTarget;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_hardStopAtTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardStopAtTarget = value;
}
constexpr float_t& GlobalNamespace::GRSpringMovement::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr float_t const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_pos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr float_t& GlobalNamespace::GRSpringMovement::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr bool& GlobalNamespace::GRSpringMovement::__cordl_internal_get_wasAlreadyAtTargetLastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAlreadyAtTargetLastUpdate;
}
constexpr bool const& GlobalNamespace::GRSpringMovement::__cordl_internal_get_wasAlreadyAtTargetLastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAlreadyAtTargetLastUpdate;
}
constexpr void GlobalNamespace::GRSpringMovement::__cordl_internal_set_wasAlreadyAtTargetLastUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasAlreadyAtTargetLastUpdate = value;
}
inline void GlobalNamespace::GRSpringMovement::_ctor(float_t  _tension, float_t  _dampening)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _tension, _dampening);
}
inline void GlobalNamespace::GRSpringMovement::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSpringMovement::SetHardStopAtTarget(bool  _hardStopAtTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"SetHardStopAtTarget", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _hardStopAtTarget);
}
inline void GlobalNamespace::GRSpringMovement::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSpringMovement::HitTargetLastUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"HitTargetLastUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRSpringMovement::IsAtTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSpringMovement*>(),
                        {"IsAtTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSpringMovement* GlobalNamespace::GRSpringMovement::New_ctor(float_t  _tension, float_t  _dampening)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSpringMovement*>(_tension, _dampening));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSpringMovement::GRSpringMovement()   {
}
