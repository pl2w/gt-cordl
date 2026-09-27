#pragma once
// IWYU pragma private; include "GlobalNamespace/TriggerOnJump.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerOnJump_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)()>(&::GlobalNamespace::TriggerOnJump::OnEnable)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x565d324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)()>(&::GlobalNamespace::TriggerOnJump::OnDisable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x565d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::TriggerOnJump::OnActivate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x565d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnActivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)()>(&::GlobalNamespace::TriggerOnJump::Tick)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x565da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TriggerOnJump::*)()>(&::GlobalNamespace::TriggerOnJump::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565dcc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)(bool)>(&::GlobalNamespace::TriggerOnJump::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x565dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TriggerOnJump._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TriggerOnJump::*)()>(&::GlobalNamespace::TriggerOnJump::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x565dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpStrength;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpStrength;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_minJumpStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minJumpStrength = value;
}
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpVertical;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpVertical;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_minJumpVertical(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minJumpVertical = value;
}
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_cooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_cooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_cooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TriggerOnJump::__cordl_internal_get_onJumping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onJumping;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_onJumping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onJumping;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_onJumping(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onJumping = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GlobalNamespace::TriggerOnJump::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GlobalNamespace::TriggerOnJump::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr bool& GlobalNamespace::TriggerOnJump::__cordl_internal_get_playerOnGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerOnGround;
}
constexpr bool const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_playerOnGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerOnGround;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_playerOnGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerOnGround = value;
}
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpTime;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_minJumpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minJumpTime;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_minJumpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minJumpTime = value;
}
constexpr bool& GlobalNamespace::TriggerOnJump::__cordl_internal_get_waitingForGrounding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForGrounding;
}
constexpr bool const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_waitingForGrounding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForGrounding;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_waitingForGrounding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForGrounding = value;
}
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_jumpStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartTime;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_jumpStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpStartTime;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_jumpStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpStartTime = value;
}
constexpr float_t& GlobalNamespace::TriggerOnJump::__cordl_internal_get_lastActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastActivationTime;
}
constexpr float_t const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_lastActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastActivationTime;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_lastActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastActivationTime = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TriggerOnJump::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TriggerOnJump::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::TriggerOnJump::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::TriggerOnJump::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::TriggerOnJump::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::TriggerOnJump::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnJump::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnJump::OnActivate(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"OnActivate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GlobalNamespace::TriggerOnJump::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TriggerOnJump::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TriggerOnJump::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TriggerOnJump::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TriggerOnJump*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TriggerOnJump* GlobalNamespace::TriggerOnJump::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TriggerOnJump*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::TriggerOnJump::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::TriggerOnJump::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerOnJump::TriggerOnJump()   {
}
