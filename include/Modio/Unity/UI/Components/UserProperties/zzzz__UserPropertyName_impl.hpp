#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyName.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyName_def.hpp"
#include "Modio/Unity/UI/Components/Localization/zzzz__ModioUILocalizedText_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyName.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyName::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyName::OnUserUpdate)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9fc0738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyName*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyName::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyName::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fc098c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_set__text(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____text = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__localisedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisedText;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText> const& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__localisedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisedText;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_set__localisedText(::UnityW<::Modio::Unity::UI::Components::Localization::ModioUILocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localisedText = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__userLoggedInFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userLoggedInFormat;
}
constexpr ::StringW const& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__userLoggedInFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userLoggedInFormat;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_set__userLoggedInFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userLoggedInFormat = value;
}
constexpr ::StringW& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__noUserLoggedIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noUserLoggedIn;
}
constexpr ::StringW const& Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_get__noUserLoggedIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noUserLoggedIn;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyName::__cordl_internal_set__noUserLoggedIn(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noUserLoggedIn = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyName::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyName*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyName* Modio::Unity::UI::Components::UserProperties::UserPropertyName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyName*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyName::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyName::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyName::UserPropertyName()   {
}
