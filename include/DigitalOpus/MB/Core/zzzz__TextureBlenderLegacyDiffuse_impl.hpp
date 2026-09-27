#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/TextureBlenderLegacyDiffuse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlenderLegacyDiffuse_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.DoesShaderNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::DoesShaderNameMatch)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9df4fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.OnBeforeTintTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::OnBeforeTintTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9df5070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.OnBlendTexturePixel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::OnBlendTexturePixel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9df511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9df5140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.SetNonTexturePropertyValuesOnResultMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::SetNonTexturePropertyValuesOnResultMaterial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9df51a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse.GetColorIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::GetColorIfNoTexture)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9df520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::*)()>(&::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9df52e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_doColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doColor;
}
constexpr bool const& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_doColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_set_doColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_m_tintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_m_tintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_set_m_tintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tintColor = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_m_defaultTintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultTintColor;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_get_m_defaultTintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_defaultTintColor;
}
constexpr void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::__cordl_internal_set_m_defaultTintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_defaultTintColor = value;
}
inline bool DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::DoesShaderNameMatch(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"DoesShaderNameMatch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shaderName);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::OnBeforeTintTexture(::UnityEngine::Material*  sourceMat, ::StringW  shaderTexturePropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"OnBeforeTintTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceMat, shaderTexturePropertyName);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::OnBlendTexturePixel(::StringW  propertyToDoshaderPropertyName, ::UnityEngine::Color  pixelColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"OnBlendTexturePixel", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, propertyToDoshaderPropertyName, pixelColor);
}
inline bool DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"SetNonTexturePropertyValuesOnResultMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::GetColorIfNoTexture(::UnityEngine::Material*  m, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {"GetColorIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, m, texPropertyName);
}
inline void DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse* DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::TextureBlender"
constexpr  DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::operator ::DigitalOpus::MB::Core::TextureBlender*() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::TextureBlender"
constexpr ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::i___DigitalOpus__MB__Core__TextureBlender() noexcept {
return static_cast<::DigitalOpus::MB::Core::TextureBlender*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::TextureBlenderLegacyDiffuse::TextureBlenderLegacyDiffuse()   {
}
