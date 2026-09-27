#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyPlatformName.hpp"
#include "Modio/API/zzzz__ModioAPI_Portal_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyPlatformName_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyPlatformName_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::OnUserUpdate)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9fc09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc0c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__enableIsUsernameDefinedByPortal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIsUsernameDefinedByPortal;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__enableIsUsernameDefinedByPortal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableIsUsernameDefinedByPortal;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_set__enableIsUsernameDefinedByPortal(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableIsUsernameDefinedByPortal = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__platformImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__platformImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformImage;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_set__platformImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platformImage = value;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__platformIcons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformIcons;
}
constexpr ::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*> const& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_get__platformIcons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformIcons;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::__cordl_internal_set__platformIcons(::ArrayW<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platformIcons = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName* Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName::UserPropertyPlatformName()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ModioAPI_Portal& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_get_Portal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Portal;
}
constexpr ::GlobalNamespace::ModioAPI_Portal const& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_get_Portal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Portal;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_set_Portal(::GlobalNamespace::ModioAPI_Portal  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Portal = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_get_Icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_get_Icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Icon;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::__cordl_internal_set_Icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Icon = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon* Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyPlatformName_PlatformIcon::UserPropertyPlatformName_PlatformIcon()   {
}
