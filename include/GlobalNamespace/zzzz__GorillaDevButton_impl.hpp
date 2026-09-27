#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaDevButton.hpp"
#include "GlobalNamespace/zzzz__DevButtonType_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "GlobalNamespace/zzzz__DevConsoleInstance_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaDevButton.get_on
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaDevButton::*)()>(&::GlobalNamespace::GorillaDevButton::get_on)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59978a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"get_on", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaDevButton.set_on
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaDevButton::*)(bool)>(&::GlobalNamespace::GorillaDevButton::set_on)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59978ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"set_on", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaDevButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaDevButton::*)()>(&::GlobalNamespace::GorillaDevButton::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59978d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaDevButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaDevButton::*)()>(&::GlobalNamespace::GorillaDevButton::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59978dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DevButtonType& GlobalNamespace::GorillaDevButton::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::GlobalNamespace::DevButtonType const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_Type(::GlobalNamespace::DevButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::UnityEngine::LogType& GlobalNamespace::GorillaDevButton::__cordl_internal_get_levelType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelType;
}
constexpr ::UnityEngine::LogType const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_levelType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelType;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_levelType(::UnityEngine::LogType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelType = value;
}
constexpr ::UnityW<::GlobalNamespace::DevConsoleInstance>& GlobalNamespace::GorillaDevButton::__cordl_internal_get_targetConsole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetConsole;
}
constexpr ::UnityW<::GlobalNamespace::DevConsoleInstance> const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_targetConsole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetConsole;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_targetConsole(::UnityW<::GlobalNamespace::DevConsoleInstance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetConsole = value;
}
constexpr int32_t& GlobalNamespace::GorillaDevButton::__cordl_internal_get_lineNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineNumber;
}
constexpr int32_t const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_lineNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineNumber;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_lineNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineNumber = value;
}
constexpr bool& GlobalNamespace::GorillaDevButton::__cordl_internal_get_repeatIfHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatIfHeld;
}
constexpr bool const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_repeatIfHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatIfHeld;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_repeatIfHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatIfHeld = value;
}
constexpr float_t& GlobalNamespace::GorillaDevButton::__cordl_internal_get_holdForSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdForSeconds;
}
constexpr float_t const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_holdForSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdForSeconds;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_holdForSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdForSeconds = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GorillaDevButton::__cordl_internal_get_pressCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GorillaDevButton::__cordl_internal_get_pressCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressCoroutine;
}
constexpr void GlobalNamespace::GorillaDevButton::__cordl_internal_set_pressCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressCoroutine = value;
}
inline bool GlobalNamespace::GorillaDevButton::get_on()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"get_on", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaDevButton::set_on(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"set_on", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaDevButton::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaDevButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaDevButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaDevButton* GlobalNamespace::GorillaDevButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaDevButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaDevButton::GorillaDevButton()   {
}
