#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyEnabled.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyEnabled_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::OnModUpdate)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9fc6260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled.OnToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::OnToggleValueChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fc66d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled.EnableButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::EnableButtonClicked)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fc66ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"EnableButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled.DisableButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::DisableButtonClicked)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fc6708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"DisableButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc6724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__enabledToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__enabledToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabledToggle;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_set__enabledToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabledToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__enableButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__enableButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableButton;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_set__enableButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__disableButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__disableButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableButton;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_set__disableButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__showIfInstalledWhenEnabledNotAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showIfInstalledWhenEnabledNotAvailable;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__showIfInstalledWhenEnabledNotAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showIfInstalledWhenEnabledNotAvailable;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_set__showIfInstalledWhenEnabledNotAvailable(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showIfInstalledWhenEnabledNotAvailable = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::OnToggleValueChanged(bool  isEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"OnToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::EnableButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"EnableButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::DisableButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {"DisableButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled* Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyEnabled::ModPropertyEnabled()   {
}
