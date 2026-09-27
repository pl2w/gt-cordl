#pragma once
// IWYU pragma private; include "GlobalNamespace/SIAutoPressButtonOnAwake.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIAutoPressButtonOnAwake_def.hpp"
#include "GlobalNamespace/zzzz__SICombinedTerminal_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIAutoPressButtonOnAwake.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIAutoPressButtonOnAwake::*)()>(&::GlobalNamespace::SIAutoPressButtonOnAwake::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59d9aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIAutoPressButtonOnAwake.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIAutoPressButtonOnAwake::*)()>(&::GlobalNamespace::SIAutoPressButtonOnAwake::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59d9b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIAutoPressButtonOnAwake.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIAutoPressButtonOnAwake::*)()>(&::GlobalNamespace::SIAutoPressButtonOnAwake::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59d9bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIAutoPressButtonOnAwake._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIAutoPressButtonOnAwake::*)()>(&::GlobalNamespace::SIAutoPressButtonOnAwake::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d9d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal>& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_terminalParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalParent;
}
constexpr ::UnityW<::GlobalNamespace::SICombinedTerminal> const& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_terminalParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminalParent;
}
constexpr void GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_set_terminalParent(::UnityW<::GlobalNamespace::SICombinedTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminalParent = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr float_t& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_awakeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeTime;
}
constexpr float_t const& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_awakeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeTime;
}
constexpr void GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_set_awakeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awakeTime = value;
}
constexpr bool& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_buttonPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressed;
}
constexpr bool const& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_buttonPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressed;
}
constexpr void GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_set_buttonPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressed = value;
}
constexpr float_t& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_delay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr float_t const& GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_get_delay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delay;
}
constexpr void GlobalNamespace::SIAutoPressButtonOnAwake::__cordl_internal_set_delay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delay = value;
}
inline void GlobalNamespace::SIAutoPressButtonOnAwake::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIAutoPressButtonOnAwake::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIAutoPressButtonOnAwake::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIAutoPressButtonOnAwake::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIAutoPressButtonOnAwake*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIAutoPressButtonOnAwake* GlobalNamespace::SIAutoPressButtonOnAwake::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIAutoPressButtonOnAwake*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIAutoPressButtonOnAwake::SIAutoPressButtonOnAwake()   {
}
