#pragma once
// IWYU pragma private; include "GlobalNamespace/CrankableToyCarHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CrankableToyCarHoldable_def.hpp"
#include "GlobalNamespace/zzzz__CrankableToyCarDeployed_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Crank_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::Start)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5648d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5648dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5649090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5649120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnCranked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)(float_t)>(&::GlobalNamespace::CrankableToyCarHoldable::OnCranked)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5649180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrankableToyCarHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::CrankableToyCarHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x56493ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.DeployCarLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, bool)>(&::GlobalNamespace::CrankableToyCarHoldable::DeployCarLocal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5649930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"DeployCarLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnDeployRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::CrankableToyCarHoldable::OnDeployRPC)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x5649a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnDeployRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnCarDeployed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::OnCarDeployed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5648ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCarDeployed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable.OnCarReturned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::OnCarReturned)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5648cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCarReturned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrankableToyCarHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrankableToyCarHoldable::*)()>(&::GlobalNamespace::CrankableToyCarHoldable::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5649ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crank;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crank;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_crank(::UnityW<::GlobalNamespace::TransferrableObjectHoldablePart_Crank>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crank = value;
}
constexpr ::UnityW<::GlobalNamespace::CrankableToyCarDeployed>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_deployedCar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployedCar;
}
constexpr ::UnityW<::GlobalNamespace::CrankableToyCarDeployed> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_deployedCar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployedCar;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_deployedCar(::UnityW<::GlobalNamespace::CrankableToyCarDeployed>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deployedCar = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_deployablePart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployablePart;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_deployablePart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deployablePart;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_deployablePart(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deployablePart = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_disabledWhileDeployed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledWhileDeployed;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_disabledWhileDeployed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disabledWhileDeployed;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_disabledWhileDeployed(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disabledWhileDeployed = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankAnglePerClick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAnglePerClick;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankAnglePerClick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankAnglePerClick;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_crankAnglePerClick(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankAnglePerClick = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxCrankStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCrankStrength;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxCrankStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCrankStrength;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_maxCrankStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCrankStrength = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_minClickPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minClickPitch;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_minClickPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minClickPitch;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_minClickPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minClickPitch = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxClickPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxClickPitch;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxClickPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxClickPitch;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_maxClickPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxClickPitch = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_minLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLifetime;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_minLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLifetime;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_minLifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLifetime = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLifetime;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_maxLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLifetime;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_maxLifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLifetime = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_clickSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clickSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_clickSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clickSound;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_clickSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clickSound = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overCrankedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overCrankedSound;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overCrankedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overCrankedSound;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_overCrankedSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overCrankedSound = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHapticStrength;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHapticStrength;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_crankHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHapticStrength = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHapticDuration;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_crankHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crankHapticDuration;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_crankHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crankHapticDuration = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overcrankHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overcrankHapticStrength;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overcrankHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overcrankHapticStrength;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_overcrankHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overcrankHapticStrength = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overcrankHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overcrankHapticDuration;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_overcrankHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overcrankHapticDuration;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_overcrankHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overcrankHapticDuration = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_currentCrankStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCrankStrength;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_currentCrankStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCrankStrength;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_currentCrankStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCrankStrength = value;
}
constexpr float_t& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_currentCrankClickAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCrankClickAmount;
}
constexpr float_t const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get_currentCrankClickAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCrankClickAmount;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set_currentCrankClickAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCrankClickAmount = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GlobalNamespace::CrankableToyCarHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GlobalNamespace::CrankableToyCarHoldable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnCranked(float_t  deltaAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCranked", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaAngle);
}
inline bool GlobalNamespace::CrankableToyCarHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::CrankableToyCarHoldable::DeployCarLocal(::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, float_t  lifetime, bool  isRemote)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"DeployCarLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launchPos, launchRot, releaseVel, lifetime, isRemote);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnDeployRPC(int32_t  sender, int32_t  receiver, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnDeployRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, receiver, args, info);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnCarDeployed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCarDeployed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::OnCarReturned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {"OnCarReturned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrankableToyCarHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrankableToyCarHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrankableToyCarHoldable* GlobalNamespace::CrankableToyCarHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrankableToyCarHoldable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrankableToyCarHoldable::CrankableToyCarHoldable()   {
}
