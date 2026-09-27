#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallTeam.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallTeam_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallTeam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallTeam::*)()>(&::GlobalNamespace::MonkeBallTeam::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57aad54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeam*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr int32_t& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_score()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr int32_t const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_score() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___score;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_score(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___score = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballStartLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballStartLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballStartLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballStartLocation;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_ballStartLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballStartLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchPosition;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_ballLaunchPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchPosition = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchVelocityRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchVelocityRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchVelocityRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchVelocityRange;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_ballLaunchVelocityRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchVelocityRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchAngleXRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleXRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchAngleXRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleXRange;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_ballLaunchAngleXRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchAngleXRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchAngleYRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleYRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallTeam::__cordl_internal_get_ballLaunchAngleYRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleYRange;
}
constexpr void GlobalNamespace::MonkeBallTeam::__cordl_internal_set_ballLaunchAngleYRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchAngleYRange = value;
}
inline void GlobalNamespace::MonkeBallTeam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallTeam*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallTeam* GlobalNamespace::MonkeBallTeam::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallTeam*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallTeam::MonkeBallTeam()   {
}
