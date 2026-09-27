#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWing.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWing_EState_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWing_def.hpp"
#include "GlobalNamespace/zzzz__GTAnimator_def.hpp"
#include "GlobalNamespace/zzzz__GameButtonActivatable_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::Awake)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x58d6590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::OnGrabbed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58d686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnSnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::OnSnapped)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58d68a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnSnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::OnReleased)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d68dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnUnsnapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::OnUnsnapped)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)(float_t)>(&::GlobalNamespace::SIGadgetWing::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x58d68e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)(float_t)>(&::GlobalNamespace::SIGadgetWing::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58d6b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)(int64_t, int64_t)>(&::GlobalNamespace::SIGadgetWing::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58d6b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetWing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetWing::*)()>(&::GlobalNamespace::SIGadgetWing::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58d6ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_buttonActivatable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_buttonActivatable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_buttonActivatable;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_buttonActivatable = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_flapStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flapStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_flapStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flapStrength;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_flapStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_flapStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_flapDecayedStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flapDecayedStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_flapDecayedStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_flapDecayedStrength;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_flapDecayedStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_flapDecayedStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_decayDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_decayDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_decayDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_decayDuration;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_decayDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_decayDuration = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_liftStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_liftStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_liftStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_liftStrength;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_liftStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_liftStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_liftCap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_liftCap;
}
constexpr float_t const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_liftCap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_liftCap;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_liftCap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_liftCap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_wingCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_wingCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_wingCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_wingCenter;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_wingCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_wingCenter = value;
}
constexpr ::UnityW<::GlobalNamespace::GTAnimator>& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_gtAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtAnimator;
}
constexpr ::UnityW<::GlobalNamespace::GTAnimator> const& GlobalNamespace::SIGadgetWing::__cordl_internal_get_m_gtAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtAnimator;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set_m_gtAnimator(::UnityW<::GlobalNamespace::GTAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gtAnimator = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetWing::__cordl_internal_get__lastWingPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWingPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetWing::__cordl_internal_get__lastWingPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWingPos;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set__lastWingPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWingPos = value;
}
constexpr ::GlobalNamespace::SIGadgetWing_EState& GlobalNamespace::SIGadgetWing::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::GlobalNamespace::SIGadgetWing_EState const& GlobalNamespace::SIGadgetWing::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void GlobalNamespace::SIGadgetWing::__cordl_internal_set__state(::GlobalNamespace::SIGadgetWing_EState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void GlobalNamespace::SIGadgetWing::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWing::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWing::OnSnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnSnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWing::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWing::OnUnsnapped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {"OnUnsnapped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetWing::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetWing::OnUpdateRemote(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetWing::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void GlobalNamespace::SIGadgetWing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetWing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetWing* GlobalNamespace::SIGadgetWing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetWing*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetWing::SIGadgetWing()   {
}
