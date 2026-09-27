#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/UserProperties/UserPropertyCreatorAvatar.hpp"
#include "Modio/Users/zzzz__UserProfile_AvatarResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__UserPropertyCreatorAvatar_def.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Unity/UI/Components/UserProperties/zzzz__IUserProperty_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar.OnUserUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::*)(::Modio::Users::UserProfile*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::OnUserUpdate)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9fbed28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::*)()>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fbeecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar._OnUserUpdate_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::*)(::UnityEngine::Texture2D*)>(&::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::_OnUserUpdate_b__5_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fbeedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {"<OnUserUpdate>b__5_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____image = value;
}
constexpr ::GlobalNamespace::UserProfile_AvatarResolution& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr ::GlobalNamespace::UserProfile_AvatarResolution const& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_set__resolution(::GlobalNamespace::UserProfile_AvatarResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolution = value;
}
constexpr bool& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__useHighestAvailableResolutionAsFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHighestAvailableResolutionAsFallback;
}
constexpr bool const& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__useHighestAvailableResolutionAsFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHighestAvailableResolutionAsFallback;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_set__useHighestAvailableResolutionAsFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHighestAvailableResolutionAsFallback = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__noUserImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noUserImage;
}
constexpr ::UnityW<::UnityEngine::Texture> const& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__noUserImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noUserImage;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_set__noUserImage(::UnityW<::UnityEngine::Texture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noUserImage = value;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__lazyImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_get__lazyImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::__cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lazyImage = value;
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::OnUserUpdate(::Modio::Users::UserProfile*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {"OnUserUpdate", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, user);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::_OnUserUpdate_b__5_0(::UnityEngine::Texture2D*  texture2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>(),
                        {"<OnUserUpdate>b__5_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture2D);
}
inline ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar* Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr  Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::operator ::Modio::Unity::UI::Components::UserProperties::IUserProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::UserProperties::IUserProperty"
constexpr ::Modio::Unity::UI::Components::UserProperties::IUserProperty* Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::i___Modio__Unity__UI__Components__UserProperties__IUserProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::UserProperties::IUserProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::UserProperties::UserPropertyCreatorAvatar::UserPropertyCreatorAvatar()   {
}
