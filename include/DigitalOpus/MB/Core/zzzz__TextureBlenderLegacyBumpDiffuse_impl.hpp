#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderLegacyBumpDiffuse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderLegacyBumpDiffuse_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9df4cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9df4d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9df4e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9df4e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9df4eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9df4f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)()>(&::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9df4fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_doColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doColor;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_doColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_set_doColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_m_defaultTintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultTintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_get_m_defaultTintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultTintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::__cordl_internal_set_m_defaultTintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultTintColor = value;
}
inline bool DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::GetColorIfNoTexture(::UnityEngine::Material*  m, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, m, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse* DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::TextureBlenderLegacyBumpDiffuse()   {
}
