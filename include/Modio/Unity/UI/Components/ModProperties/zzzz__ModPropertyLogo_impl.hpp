#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyLogo.hpp"
#include "Modio/Mods/zzzz__Mod_LogoResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyLogo_def.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__IModProperty_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo.OnModUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::OnModUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9fc6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc707c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo._OnModUpdate_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::*)(::UnityEngine::Texture2D*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_OnModUpdate_b__6_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fc708c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"<OnModUpdate>b__6_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo._OnModUpdate_b__6_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::*)(bool)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_OnModUpdate_b__6_1)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9fc7124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"<OnModUpdate>b__6_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__image()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__image() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____image;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__image(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____image = value;
}
constexpr ::GlobalNamespace::Mod_LogoResolution& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr ::GlobalNamespace::Mod_LogoResolution const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolution;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__resolution(::GlobalNamespace::Mod_LogoResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolution = value;
}
constexpr bool& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__useHighestAvailableResolutionAsFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHighestAvailableResolutionAsFallback;
}
constexpr bool const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__useHighestAvailableResolutionAsFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHighestAvailableResolutionAsFallback;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__useHighestAvailableResolutionAsFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHighestAvailableResolutionAsFallback = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__loadingActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__loadingActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__loadingActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadingActive = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__loadedActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedActive;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__loadedActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadedActive;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__loadedActive(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadedActive = value;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__lazyImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr ::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>* const& Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_get__lazyImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lazyImage;
}
constexpr void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::__cordl_internal_set__lazyImage(::Modio::Images::LazyImage_1<::UnityW<::UnityEngine::Texture2D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lazyImage = value;
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::OnModUpdate(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"OnModUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_OnModUpdate_b__6_0(::UnityEngine::Texture2D*  texture2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"<OnModUpdate>b__6_0", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, texture2D);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::_OnModUpdate_b__6_1(bool  isLoading)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>(),
                        {"<OnModUpdate>b__6_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLoading);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo* Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo*>());
}
/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr  Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::operator ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept {
return static_cast<::Modio::Unity::UI::Components::ModProperties::IModProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyLogo::ModPropertyLogo()   {
}
