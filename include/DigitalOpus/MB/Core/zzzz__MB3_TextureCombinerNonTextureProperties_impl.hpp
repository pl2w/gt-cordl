#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TexSet_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::DigitalOpus::MB::Core::MB2_LogLevel, bool)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::_ctor)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x9dd2d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.CollectAverageValuesOfNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::CollectAverageValuesOfNonTextureProperties)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9dd36d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"CollectAverageValuesOfNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.LoadTextureBlendersIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::LoadTextureBlendersIfNeeded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9dccf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"LoadTextureBlendersIfNeeded", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.InterfaceFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Object*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::InterfaceFilter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9dd4178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"InterfaceFilter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.FindBestTextureBlender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::FindBestTextureBlender)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9dd3f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"FindBestTextureBlender", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.LoadTextureBlenders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::LoadTextureBlenders)> {
  constexpr static std::size_t size = 0x688;
  constexpr static std::size_t addrs = 0x9dd38bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"LoadTextureBlenders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9dcec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.TintTextureWithTextureCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::TintTextureWithTextureCombiner)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9dd4328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.AdjustNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::AdjustNonTextureProperties)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9dd43ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.GetColorAsItWouldAppearInAtlasIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dd4508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.GetColorForTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::GetColorForTemporaryTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dd45c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties.FindMatchingTextureBlender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::TextureBlender* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::FindMatchingTextureBlender)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9dd41c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"FindMatchingTextureBlender", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_defaultTextureProperty2DefaultColorMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextureProperty2DefaultColorMap;
}
constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair> const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_defaultTextureProperty2DefaultColorMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextureProperty2DefaultColorMap;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set_defaultTextureProperty2DefaultColorMap(::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTextureProperty2DefaultColorMap = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__nonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonTextureProperties;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*> const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__nonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonTextureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set__nonTextureProperties(::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonTextureProperties = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_LOG_LEVEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_LOG_LEVEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LOG_LEVEL;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LOG_LEVEL = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__considerNonTextureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__considerNonTextureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____considerNonTextureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set__considerNonTextureProperties(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____considerNonTextureProperties = value;
}
constexpr ::DigitalOpus::MB::Core::TextureBlender*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_resultMaterialTextureBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr ::DigitalOpus::MB::Core::TextureBlender* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_resultMaterialTextureBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::TextureBlender*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialTextureBlender = value;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_textureBlenders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBlenders;
}
constexpr ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*> const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_textureBlenders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureBlenders;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set_textureBlenders(::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureBlenders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_textureProperty2DefaultColorMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureProperty2DefaultColorMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get_textureProperty2DefaultColorMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureProperty2DefaultColorMap;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set_textureProperty2DefaultColorMap(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureProperty2DefaultColorMap = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__nonTexturePropertiesBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonTexturePropertiesBlender;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_get__nonTexturePropertiesBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonTexturePropertiesBlender;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::__cordl_internal_set__nonTexturePropertiesBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonTexturePropertiesBlender = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, bool  considerNonTextureProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ll, considerNonTextureProps);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::CollectAverageValuesOfNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"CollectAverageValuesOfNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial, mat);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::LoadTextureBlendersIfNeeded(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"LoadTextureBlendersIfNeeded", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::InterfaceFilter(::System::Type*  typeObj, ::System::Object*  criteriaObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"InterfaceFilter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, typeObj, criteriaObj);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::FindBestTextureBlender(::UnityEngine::Material*  resultMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"FindBestTextureBlender", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMaterial);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::LoadTextureBlenders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"LoadTextureBlenders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, t, sourceMaterial, shaderPropertyName);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMat, texPropertyNames, editorMethods);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::DigitalOpus::MB::Core::TextureBlender* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::FindMatchingTextureBlender(::StringW  shaderName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(),
                        {"FindMatchingTextureBlender", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::TextureBlender*>(this, ___internal_method, shaderName);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, bool  considerNonTextureProps)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(ll, considerNonTextureProps));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties::MB3_TextureCombinerNonTextureProperties()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, ::DigitalOpus::MB::Core::TextureBlender*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9dd42e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<::DigitalOpus::MB::Core::TextureBlender*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dd5398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps.TintTextureWithTextureCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::TintTextureWithTextureCombiner)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x9dd5454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps.AdjustNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::AdjustNonTextureProperties)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x9dd57b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps.GetColorAsItWouldAppearInAtlasIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::GetColorAsItWouldAppearInAtlasIfNoTexture)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9dd59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps.GetColorForTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::GetColorForTemporaryTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9dd5b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_get__textureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureProperties;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_get__textureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_set__textureProperties(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureProperties = value;
}
constexpr ::DigitalOpus::MB::Core::TextureBlender*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_get_resultMaterialTextureBlender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr ::DigitalOpus::MB::Core::TextureBlender* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_get_resultMaterialTextureBlender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultMaterialTextureBlender;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::__cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::TextureBlender*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultMaterialTextureBlender = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties, ::DigitalOpus::MB::Core::TextureBlender*  resultMats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>(), ::i2c::type_of<::DigitalOpus::MB::Core::TextureBlender*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureProperties, resultMats);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, t, sourceMaterial, shaderPropertyName);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMat, texPropertyNames, editorMethods);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::New_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties, ::DigitalOpus::MB::Core::TextureBlender*  resultMats)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*>(textureProperties, resultMats));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_NonTextureProperties() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9dd36a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps.TintTextureWithTextureCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::TintTextureWithTextureCombiner)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9dd4f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps.AdjustNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::AdjustNonTextureProperties)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x9dd4fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps.GetColorAsItWouldAppearInAtlasIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::GetColorAsItWouldAppearInAtlasIfNoTexture)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9dd5268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps.GetColorForTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::GetColorForTemporaryTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9dd527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::__cordl_internal_get__textureProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureProperties;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::__cordl_internal_get__textureProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureProperties;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::__cordl_internal_set__textureProperties(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureProperties = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {".ctor", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureProperties);
}
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"NonTexturePropertiesAreEqual", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"TintTextureWithTextureCombiner", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB_TexSet*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, t, sourceMaterial, shaderPropertyName);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"AdjustNonTextureProperties", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMat, texPropertyNames, editorMethods);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"GetColorAsItWouldAppearInAtlasIfNoTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(),
                        {"GetColorForTemporaryTexture", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::New_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*>(textureProperties));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_NonTextureProperties() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties.NonTexturePropertiesAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::NonTexturePropertiesAreEqual)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties.TintTextureWithTextureCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::TintTextureWithTextureCombiner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties.AdjustNonTextureProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::AdjustNonTextureProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties.GetColorForTemporaryTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::GetColorForTemporaryTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties.GetColorAsItWouldAppearInAtlasIfNoTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, t, sourceMaterial, shaderPropertyName);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultMat, texPropertyNames, editorMethods);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
inline ::UnityEngine::Color DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties::GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, matIfBlender, texProperty);
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor.TryGetPropValueFromMaterialAndBlendIntoAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::TryGetPropValueFromMaterialAndBlendIntoAverage)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9dd4b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"TryGetPropValueFromMaterialAndBlendIntoAverage", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor.GetAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::GetAverage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9dd4c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"GetAverage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor.NumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::NumValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"NumValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor.SetAverageValueOrDefaultOnMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::SetAverageValueOrDefaultOnMaterial)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x9dd4cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"SetAverageValueOrDefaultOnMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd46d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_get_averageVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageVal;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_get_averageVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageVal;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_set_averageVal(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averageVal = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_get_numValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numValues;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_get_numValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numValues;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::__cordl_internal_set_numValues(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numValues = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"TryGetPropValueFromMaterialAndBlendIntoAverage", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::GetAverage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"GetAverage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::NumValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"NumValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {"SetAverageValueOrDefaultOnMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat.TryGetPropValueFromMaterialAndBlendIntoAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::TryGetPropValueFromMaterialAndBlendIntoAverage)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9dd4744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"TryGetPropValueFromMaterialAndBlendIntoAverage", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat.GetAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::GetAverage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"GetAverage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat.NumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::NumValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd48c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"NumValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat.SetAverageValueOrDefaultOnMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::SetAverageValueOrDefaultOnMaterial)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x9dd48d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"SetAverageValueOrDefaultOnMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_get_averageVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageVal;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_get_averageVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___averageVal;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_set_averageVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___averageVal = value;
}
constexpr int32_t& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_get_numValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numValues;
}
constexpr int32_t const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_get_numValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numValues;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::__cordl_internal_set_numValues(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numValues = value;
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"TryGetPropValueFromMaterialAndBlendIntoAverage", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::GetAverage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"GetAverage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::NumValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"NumValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {"SetAverageValueOrDefaultOnMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged.TryGetPropValueFromMaterialAndBlendIntoAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::TryGetPropValueFromMaterialAndBlendIntoAverage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged.GetAverage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::GetAverage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged.NumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::NumValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged.SetAverageValueOrDefaultOnMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::SetAverageValueOrDefaultOnMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::GetAverage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::NumValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged::SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, property);
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd46c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor.set_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::set_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd46d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::*)(::StringW, ::UnityEngine::Color)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9dd3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor.GetAverageCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::GetAverageCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd46e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"GetAverageCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor.GetDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::GetDefaultValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9dd46e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"GetDefaultValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__averageCalc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageCalc;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__averageCalc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageCalc;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_set__averageCalc(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____averageCalc = value;
}
constexpr ::UnityEngine::Color& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__defaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValue;
}
constexpr ::UnityEngine::Color const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_get__defaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValue;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::__cordl_internal_set__defaultValue(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultValue = value;
}
inline ::StringW DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::set_PropertyName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::_ctor(::StringW  name, ::UnityEngine::Color  defaultVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, defaultVal);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::GetAverageCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"GetAverageCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::GetDefaultValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(),
                        {"GetDefaultValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::New_ctor(::StringW  name, ::UnityEngine::Color  defaultVal)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*>(name, defaultVal));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialProperty() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"get_PropertyName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat.set_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::set_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::*)(::StringW, float_t)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9dd3610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat.GetAverageCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::GetAverageCalculator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dd4698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"GetAverageCalculator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat.GetDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::GetDefaultValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dd46a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"GetDefaultValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__PropertyName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__PropertyName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PropertyName_k__BackingField;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_set__PropertyName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PropertyName_k__BackingField = value;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__averageCalc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageCalc;
}
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__averageCalc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageCalc;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_set__averageCalc(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____averageCalc = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__defaultValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValue;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_get__defaultValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValue;
}
constexpr void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::__cordl_internal_set__defaultValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultValue = value;
}
inline ::StringW DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"get_PropertyName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::set_PropertyName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"set_PropertyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::_ctor(::StringW  name, float_t  defValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, defValue);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::GetAverageCalculator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"GetAverageCalculator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::GetDefaultValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(),
                        {"GetDefaultValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::New_ctor(::StringW  name, float_t  defValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*>(name, defValue));
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr  DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::operator ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialProperty() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty.get_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::get_PropertyName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty.set_PropertyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::*)(::StringW)>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::set_PropertyName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty.GetAverageCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::GetAverageCalculator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty.GetDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::*)()>(&::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::GetDefaultValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::get_PropertyName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::set_PropertyName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::GetAverageCalculator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty::GetDefaultValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
