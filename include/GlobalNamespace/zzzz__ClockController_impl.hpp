#pragma once
// IWYU pragma private; include "GlobalNamespace/ClockController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ClockController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClockController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClockController::*)()>(&::GlobalNamespace::ClockController::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bffcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClockController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ClockController::__cordl_internal_get_Pendulum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pendulum;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ClockController::__cordl_internal_get_Pendulum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pendulum;
}
constexpr void GlobalNamespace::ClockController::__cordl_internal_set_Pendulum(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pendulum = value;
}
constexpr float_t& GlobalNamespace::ClockController::__cordl_internal_get_MaxAngleDeflection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngleDeflection;
}
constexpr float_t const& GlobalNamespace::ClockController::__cordl_internal_get_MaxAngleDeflection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxAngleDeflection;
}
constexpr void GlobalNamespace::ClockController::__cordl_internal_set_MaxAngleDeflection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxAngleDeflection = value;
}
constexpr float_t& GlobalNamespace::ClockController::__cordl_internal_get_SpeedOfPendulum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedOfPendulum;
}
constexpr float_t const& GlobalNamespace::ClockController::__cordl_internal_get_SpeedOfPendulum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeedOfPendulum;
}
constexpr void GlobalNamespace::ClockController::__cordl_internal_set_SpeedOfPendulum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeedOfPendulum = value;
}
inline void GlobalNamespace::ClockController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClockController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClockController* GlobalNamespace::ClockController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClockController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClockController::ClockController()   {
}
