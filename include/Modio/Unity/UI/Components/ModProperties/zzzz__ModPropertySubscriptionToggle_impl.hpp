#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertySubscriptionToggle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertySubscriptionToggle_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::OnModUpdate)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x9fc7d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle.SubscribeButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::SubscribeButtonClicked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fc8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"SubscribeButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle.SubscribeToggleValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::SubscribeToggleValueChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fc8544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"SubscribeToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle.UpdateSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::UpdateSubscribed)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9fc8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"UpdateSubscribed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle.PurchaseButtonClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::PurchaseButtonClicked)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fc855c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"PurchaseButtonClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc85b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__subscribeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__subscribeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeButton;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__subscribeButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribeButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__subscribeToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__subscribeToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscribeToggle;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__subscribeToggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscribeToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__unsubscribeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsubscribeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__unsubscribeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsubscribeButton;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__unsubscribeButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unsubscribeButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__purchaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__purchaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____purchaseButton;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__purchaseButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____purchaseButton = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__localisedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisedText;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__localisedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisedText;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__localisedText(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localisedText = value;
}
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__dependenciesAreConfirmed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependenciesAreConfirmed;
}
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__dependenciesAreConfirmed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dependenciesAreConfirmed;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__dependenciesAreConfirmed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dependenciesAreConfirmed = value;
}
constexpr ::Modio::Mods::Mod*& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__mod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr ::Modio::Mods::Mod* const& Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_get__mod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mod;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::__cordl_internal_set__mod(::Modio::Mods::Mod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mod = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::SubscribeButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"SubscribeButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::SubscribeToggleValueChanged(bool  arg0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"SubscribeToggleValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::UpdateSubscribed(bool  shouldBeSubscribed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"UpdateSubscribed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldBeSubscribed);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::PurchaseButtonClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {"PurchaseButtonClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle* Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertySubscriptionToggle::ModPropertySubscriptionToggle()   {
}
