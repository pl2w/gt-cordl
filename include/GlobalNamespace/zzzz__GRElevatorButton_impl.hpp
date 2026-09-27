#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorButton.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ButtonType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevatorButton_def.hpp"
#include "GlobalNamespace/zzzz__DisableGameObjectDelayed_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRElevatorButton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorButton::*)()>(&::GlobalNamespace::GRElevatorButton::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5878fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorButton.Pressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorButton::*)()>(&::GlobalNamespace::GRElevatorButton::Pressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58784e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Pressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorButton.Depressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorButton::*)()>(&::GlobalNamespace::GRElevatorButton::Depressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58790a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Depressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorButton::*)()>(&::GlobalNamespace::GRElevatorButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58790c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRElevator_ButtonType& GlobalNamespace::GRElevatorButton::__cordl_internal_get_buttonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr ::GlobalNamespace::GRElevator_ButtonType const& GlobalNamespace::GRElevatorButton::__cordl_internal_get_buttonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonType;
}
constexpr void GlobalNamespace::GRElevatorButton::__cordl_internal_set_buttonType(::GlobalNamespace::GRElevator_ButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GRElevatorButton::__cordl_internal_get_buttonLit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonLit;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GRElevatorButton::__cordl_internal_get_buttonLit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonLit;
}
constexpr void GlobalNamespace::GRElevatorButton::__cordl_internal_set_buttonLit(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonLit = value;
}
constexpr float_t& GlobalNamespace::GRElevatorButton::__cordl_internal_get_litUpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litUpTime;
}
constexpr float_t const& GlobalNamespace::GRElevatorButton::__cordl_internal_get_litUpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litUpTime;
}
constexpr void GlobalNamespace::GRElevatorButton::__cordl_internal_set_litUpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___litUpTime = value;
}
constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>& GlobalNamespace::GRElevatorButton::__cordl_internal_get_disableDelayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDelayed;
}
constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed> const& GlobalNamespace::GRElevatorButton::__cordl_internal_get_disableDelayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableDelayed;
}
constexpr void GlobalNamespace::GRElevatorButton::__cordl_internal_set_disableDelayed(::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableDelayed = value;
}
constexpr bool& GlobalNamespace::GRElevatorButton::__cordl_internal_get_tempLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempLight;
}
constexpr bool const& GlobalNamespace::GRElevatorButton::__cordl_internal_get_tempLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempLight;
}
constexpr void GlobalNamespace::GRElevatorButton::__cordl_internal_set_tempLight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempLight = value;
}
inline void GlobalNamespace::GRElevatorButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorButton::Pressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Pressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorButton::Depressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {"Depressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRElevatorButton* GlobalNamespace::GRElevatorButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRElevatorButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorButton::GRElevatorButton()   {
}
