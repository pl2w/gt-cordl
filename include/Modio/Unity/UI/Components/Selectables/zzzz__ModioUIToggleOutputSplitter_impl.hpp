#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIToggleOutputSplitter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIToggleOutputSplitter_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fc2b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fc2c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter.ToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::*)(bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::ToggleValueChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9fc2c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"ToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fc2d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get_onToggleOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggleOn;
}
constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get_onToggleOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggleOn;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_set_onToggleOn(::UnityEngine::UI::Toggle_ToggleEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggleOn = value;
}
constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get_onToggleOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggleOff;
}
constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get_onToggleOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggleOff;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_set_onToggleOff(::UnityEngine::UI::Toggle_ToggleEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggleOff = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
constexpr bool& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get__hasFiredEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasFiredEvent;
}
constexpr bool const& Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_get__hasFiredEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasFiredEvent;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::__cordl_internal_set__hasFiredEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasFiredEvent = value;
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::ToggleValueChanged(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {"ToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter* Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::ModioUIToggleOutputSplitter::ModioUIToggleOutputSplitter()   {
}
