#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeedDrivenAnim.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpeedDrivenAnim_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpeedDrivenAnim.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeedDrivenAnim::*)()>(&::GlobalNamespace::SpeedDrivenAnim::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x565b374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeedDrivenAnim.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeedDrivenAnim::*)()>(&::GlobalNamespace::SpeedDrivenAnim::Update)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x565b418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpeedDrivenAnim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpeedDrivenAnim::*)()>(&::GlobalNamespace::SpeedDrivenAnim::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x565b524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_speed0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed0;
}
constexpr float_t const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_speed0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed0;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_speed0(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed0 = value;
}
constexpr float_t& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_speed1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed1;
}
constexpr float_t const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_speed1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed1;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_speed1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed1 = value;
}
constexpr float_t& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_maxChangePerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChangePerSecond;
}
constexpr float_t const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_maxChangePerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChangePerSecond;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_maxChangePerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChangePerSecond = value;
}
constexpr ::StringW& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_animKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animKey;
}
constexpr ::StringW const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_animKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animKey;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_animKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animKey = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr int32_t& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_keyHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyHash;
}
constexpr int32_t const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_keyHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyHash;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_keyHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyHash = value;
}
constexpr float_t& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_currentBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBlend;
}
constexpr float_t const& GlobalNamespace::SpeedDrivenAnim::__cordl_internal_get_currentBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBlend;
}
constexpr void GlobalNamespace::SpeedDrivenAnim::__cordl_internal_set_currentBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBlend = value;
}
inline void GlobalNamespace::SpeedDrivenAnim::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpeedDrivenAnim::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpeedDrivenAnim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpeedDrivenAnim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpeedDrivenAnim* GlobalNamespace::SpeedDrivenAnim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpeedDrivenAnim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpeedDrivenAnim::SpeedDrivenAnim()   {
}
