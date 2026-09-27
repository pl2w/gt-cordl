#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ControllerButtonEvent.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ControllerButtonEvent_ButtonType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ControllerButtonEvent_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ControllerButtonEvent_ButtonType_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)(bool)>(&::GorillaTag::Cosmetics::ControllerButtonEvent::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::ControllerButtonEvent::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::ControllerButtonEvent::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d85d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d85d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d85e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::LateUpdate)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5d85e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ControllerButtonEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ControllerButtonEvent::*)()>(&::GorillaTag::Cosmetics::ControllerButtonEvent::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d861fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_gripValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripReleaseValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripReleaseValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripReleaseValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripReleaseValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_gripReleaseValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripReleaseValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_triggerValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerReleaseValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerReleaseValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerReleaseValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerReleaseValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_triggerReleaseValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerReleaseValue = value;
}
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_buttonType(::GlobalNamespace::ControllerButtonEvent_ButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_frameInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameInterval;
}
constexpr int32_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_frameInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameInterval;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_frameInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameInterval = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPressed;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPressed;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_onButtonPressed(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onButtonPressed = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonReleased;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonReleased;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_onButtonReleased(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onButtonReleased = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonPressStayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPressStayed;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_onButtonPressStayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onButtonPressStayed;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_onButtonPressStayed(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onButtonPressStayed = value;
}
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLastValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_triggerLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLastValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_triggerLastValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerLastValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripLastValue;
}
constexpr float_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_gripLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripLastValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_gripLastValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripLastValue = value;
}
constexpr bool& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_primaryLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryLastValue;
}
constexpr bool const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_primaryLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryLastValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_primaryLastValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryLastValue = value;
}
constexpr bool& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_secondaryLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryLastValue;
}
constexpr bool const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_secondaryLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryLastValue;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_secondaryLastValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryLastValue = value;
}
constexpr int32_t& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_frameCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr int32_t const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_frameCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_frameCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameCounter = value;
}
constexpr bool& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_inLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLeftHand;
}
constexpr bool const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_inLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inLeftHand;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_inLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inLeftHand = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ControllerButtonEvent::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::ControllerButtonEvent::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::ControllerButtonEvent::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ControllerButtonEvent::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ControllerButtonEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ControllerButtonEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ControllerButtonEvent* GorillaTag::Cosmetics::ControllerButtonEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ControllerButtonEvent*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::ControllerButtonEvent::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::ControllerButtonEvent::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ControllerButtonEvent::ControllerButtonEvent()   {
}
