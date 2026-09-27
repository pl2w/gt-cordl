#pragma once
// IWYU pragma private; include "GlobalNamespace/BlinkingText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlinkingText_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlinkingText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlinkingText::*)()>(&::GlobalNamespace::BlinkingText::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d09b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlinkingText.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlinkingText::*)()>(&::GlobalNamespace::BlinkingText::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d09b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlinkingText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BlinkingText::*)()>(&::GlobalNamespace::BlinkingText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d09c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BlinkingText::__cordl_internal_get_cycleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleTime;
}
constexpr float_t const& GlobalNamespace::BlinkingText::__cordl_internal_get_cycleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleTime;
}
constexpr void GlobalNamespace::BlinkingText::__cordl_internal_set_cycleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleTime = value;
}
constexpr float_t& GlobalNamespace::BlinkingText::__cordl_internal_get_dutyCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dutyCycle;
}
constexpr float_t const& GlobalNamespace::BlinkingText::__cordl_internal_get_dutyCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dutyCycle;
}
constexpr void GlobalNamespace::BlinkingText::__cordl_internal_set_dutyCycle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dutyCycle = value;
}
constexpr bool& GlobalNamespace::BlinkingText::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::BlinkingText::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::BlinkingText::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr float_t& GlobalNamespace::BlinkingText::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::BlinkingText::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::BlinkingText::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::BlinkingText::__cordl_internal_get_textComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textComponent;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::BlinkingText::__cordl_internal_get_textComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textComponent;
}
constexpr void GlobalNamespace::BlinkingText::__cordl_internal_set_textComponent(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textComponent = value;
}
inline void GlobalNamespace::BlinkingText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlinkingText::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BlinkingText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BlinkingText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BlinkingText* GlobalNamespace::BlinkingText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BlinkingText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlinkingText::BlinkingText()   {
}
