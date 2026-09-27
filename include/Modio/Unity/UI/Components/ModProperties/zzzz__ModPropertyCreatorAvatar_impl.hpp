#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyCreatorAvatar.hpp"
#include "Modio/Users/zzzz__UserProfile_AvatarResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyCreatorAvatar_def.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::OnModUpdate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9fc5d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc5e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar._OnModUpdate_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::*)(::UnityEngine::Texture2D*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::_OnModUpdate_b__3_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fc5e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {"<OnModUpdate>b__3_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____image = value;
}
constexpr ::GlobalNamespace::UserProfile_AvatarResolution& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr ::GlobalNamespace::UserProfile_AvatarResolution const& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_set__resolution(::GlobalNamespace::UserProfile_AvatarResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolution = value;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__lazyImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_get__lazyImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::__cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lazyImage = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::_OnModUpdate_b__3_0(::UnityEngine::Texture2D*  texture2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>(),
                        {"<OnModUpdate>b__3_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture2D);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar* Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyCreatorAvatar::ModPropertyCreatorAvatar()   {
}
