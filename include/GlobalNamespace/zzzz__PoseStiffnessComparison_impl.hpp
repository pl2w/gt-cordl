#pragma once
// IWYU pragma private; include "GlobalNamespace/PoseStiffnessComparison.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PoseStiffnessComparison_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PoseStiffnessComparison.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseStiffnessComparison::*)()>(&::GlobalNamespace::PoseStiffnessComparison::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x55e6a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseStiffnessComparison.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseStiffnessComparison::*)()>(&::GlobalNamespace::PoseStiffnessComparison::FixedUpdate)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x55e6a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PoseStiffnessComparison._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PoseStiffnessComparison::*)()>(&::GlobalNamespace::PoseStiffnessComparison::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x55e70a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Run()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Run;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Run() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Run;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_Run(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Run = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Tilt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Tilt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tilt;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_Tilt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tilt = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Period()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Period;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Period() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Period;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_Period(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Period = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Rest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rest;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_Rest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rest;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_Rest(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rest = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_BonesA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonesA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_BonesA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonesA;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_BonesA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BonesA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_BonesB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonesB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_BonesB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BonesB;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_BonesB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BonesB = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_yA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yA;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_yA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yA;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_m_yA(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yA = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_yB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yB;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_yB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_yB;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_m_yB(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_yB = value;
}
constexpr float_t& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr float_t const& GlobalNamespace::PoseStiffnessComparison::__cordl_internal_get_m_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_timer;
}
constexpr void GlobalNamespace::PoseStiffnessComparison::__cordl_internal_set_m_timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_timer = value;
}
inline void GlobalNamespace::PoseStiffnessComparison::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PoseStiffnessComparison::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PoseStiffnessComparison::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PoseStiffnessComparison*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PoseStiffnessComparison* GlobalNamespace::PoseStiffnessComparison::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PoseStiffnessComparison*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PoseStiffnessComparison::PoseStiffnessComparison()   {
}
