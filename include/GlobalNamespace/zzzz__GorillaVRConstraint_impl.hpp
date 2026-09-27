#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaVRConstraint.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaVRConstraint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaVRConstraint.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaVRConstraint::*)()>(&::GlobalNamespace::GorillaVRConstraint::Tick)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5947314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaVRConstraint*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaVRConstraint*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaVRConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaVRConstraint::*)()>(&::GlobalNamespace::GorillaVRConstraint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59473b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaVRConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GorillaVRConstraint::__cordl_internal_get_isConstrained()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConstrained;
}
constexpr bool const& GlobalNamespace::GorillaVRConstraint::__cordl_internal_get_isConstrained() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isConstrained;
}
constexpr void GlobalNamespace::GorillaVRConstraint::__cordl_internal_set_isConstrained(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isConstrained = value;
}
constexpr float_t& GlobalNamespace::GorillaVRConstraint::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GlobalNamespace::GorillaVRConstraint::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GlobalNamespace::GorillaVRConstraint::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
inline void GlobalNamespace::GorillaVRConstraint::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaVRConstraint*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaVRConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaVRConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaVRConstraint* GlobalNamespace::GorillaVRConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaVRConstraint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaVRConstraint::GorillaVRConstraint()   {
}
