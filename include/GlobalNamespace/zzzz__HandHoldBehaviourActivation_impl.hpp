#pragma once
// IWYU pragma private; include "GlobalNamespace/HandHoldBehaviourActivation.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "GlobalNamespace/zzzz__HandHoldBehaviourActivation_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)()>(&::GlobalNamespace::HandHoldBehaviourActivation::OnEnable)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x56bf5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation.OnGrabLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::HandHoldBehaviourActivation::OnGrabLocal)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56bf738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation.OnReleaseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)(float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::HandHoldBehaviourActivation::OnReleaseLocal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x56bf83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                    {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::HandHoldBehaviourActivation::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56bf93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)()>(&::GlobalNamespace::HandHoldBehaviourActivation::OnLeftRoom)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x56bfa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandHoldBehaviourActivation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandHoldBehaviourActivation::*)()>(&::GlobalNamespace::HandHoldBehaviourActivation::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56bfb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_ActivationStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationStart;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_ActivationStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationStart;
}
constexpr void GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_set_ActivationStart(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActivationStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_ActivationStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationStop;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_ActivationStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActivationStop;
}
constexpr void GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_set_ActivationStop(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActivationStop = value;
}
constexpr int32_t& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_grabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabs;
}
constexpr int32_t const& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_grabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabs;
}
constexpr void GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_set_grabs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_m_playerGrabCounts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerGrabCounts;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>* const& GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_get_m_playerGrabCounts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_playerGrabCounts;
}
constexpr void GlobalNamespace::HandHoldBehaviourActivation::__cordl_internal_set_m_playerGrabCounts(::System::Collections::Generic::Dictionary_2<int32_t,uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_playerGrabCounts = value;
}
inline void GlobalNamespace::HandHoldBehaviourActivation::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandHoldBehaviourActivation::OnGrabLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::HandHoldBehaviourActivation::OnReleaseLocal(float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapTime, sender);
}
inline void GlobalNamespace::HandHoldBehaviourActivation::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::HandHoldBehaviourActivation::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandHoldBehaviourActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandHoldBehaviourActivation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandHoldBehaviourActivation* GlobalNamespace::HandHoldBehaviourActivation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandHoldBehaviourActivation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandHoldBehaviourActivation::HandHoldBehaviourActivation()   {
}
