#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__TextureBlender_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerNonTextureProperties)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialProperty;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace DigitalOpus::MB::Core {
class TextureBlender;
}
namespace GlobalNamespace {
struct MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialProperty;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialProperty");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyColor");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyFloat");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedColor");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedFloat");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/NonTextureProperties");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/NonTexturePropertiesBlendProps");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps*, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/NonTexturePropertiesDontBlendProps");
// Dependencies DigitalOpus.MB.Core.MB2_LogLevel, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::MaterialProperty, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties::TexPropertyNameColorPair, DigitalOpus.MB.Core.TextureBlender, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties : public ::System::Object {
public:
// Declarations
using MaterialProperty = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty;

using MaterialPropertyColor = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor;

using MaterialPropertyFloat = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat;

using MaterialPropertyValueAveraged = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged;

using MaterialPropertyValueAveragedColor = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor;

using MaterialPropertyValueAveragedFloat = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat;

using NonTextureProperties = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties;

using NonTexturePropertiesBlendProps = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps;

using NonTexturePropertiesDontBlendProps = ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps;

using TexPropertyNameColorPair = ::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair;

/// @brief Field LOG_LEVEL, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LOG_LEVEL, put=__cordl_internal_set_LOG_LEVEL)) ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL;

/// @brief Field _considerNonTextureProperties, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__considerNonTextureProperties, put=__cordl_internal_set__considerNonTextureProperties)) bool  _considerNonTextureProperties;

/// @brief Field _nonTextureProperties, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonTextureProperties, put=__cordl_internal_set__nonTextureProperties)) ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>  _nonTextureProperties;

/// @brief Field _nonTexturePropertiesBlender, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonTexturePropertiesBlender, put=__cordl_internal_set__nonTexturePropertiesBlender)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*  _nonTexturePropertiesBlender;

/// @brief Field defaultTextureProperty2DefaultColorMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultTextureProperty2DefaultColorMap, put=__cordl_internal_set_defaultTextureProperty2DefaultColorMap)) ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>  defaultTextureProperty2DefaultColorMap;

/// @brief Field resultMaterialTextureBlender, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialTextureBlender, put=__cordl_internal_set_resultMaterialTextureBlender)) ::DigitalOpus::MB::Core::TextureBlender*  resultMaterialTextureBlender;

/// @brief Field textureBlenders, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureBlenders, put=__cordl_internal_set_textureBlenders)) ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>  textureBlenders;

/// @brief Field textureProperty2DefaultColorMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureProperty2DefaultColorMap, put=__cordl_internal_set_textureProperty2DefaultColorMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  textureProperty2DefaultColorMap;

/// @brief Method AdjustNonTextureProperties, addr 0x9dd43ec, size 0x11c, virtual false, abstract: false, final false
inline void AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method CollectAverageValuesOfNonTextureProperties, addr 0x9dd36d8, size 0x1e4, virtual false, abstract: false, final false
inline void CollectAverageValuesOfNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::UnityEngine::Material*  mat) ;

/// @brief Method FindBestTextureBlender, addr 0x9dd3f44, size 0x234, virtual false, abstract: false, final false
inline void FindBestTextureBlender(::UnityEngine::Material*  resultMaterial) ;

/// @brief Method FindMatchingTextureBlender, addr 0x9dd41c8, size 0x11c, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::TextureBlender* FindMatchingTextureBlender(::StringW  shaderName) ;

/// @brief Method GetColorAsItWouldAppearInAtlasIfNoTexture, addr 0x9dd4508, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method GetColorForTemporaryTexture, addr 0x9dd45c4, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method InterfaceFilter, addr 0x9dd4178, size 0x50, virtual false, abstract: false, final false
static inline bool InterfaceFilter(::System::Type*  typeObj, ::System::Object*  criteriaObj) ;

/// @brief Method LoadTextureBlenders, addr 0x9dd38bc, size 0x688, virtual false, abstract: false, final false
inline void LoadTextureBlenders() ;

/// @brief Method LoadTextureBlendersIfNeeded, addr 0x9dccf04, size 0x34, virtual false, abstract: false, final false
inline void LoadTextureBlendersIfNeeded(::UnityEngine::Material*  resultMaterial) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* New_ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, bool  considerNonTextureProps) ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9dcec64, size 0xb8, virtual false, abstract: false, final false
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method TintTextureWithTextureCombiner, addr 0x9dd4328, size 0xc4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName) ;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel const& __cordl_internal_get_LOG_LEVEL() const;

constexpr ::DigitalOpus::MB::Core::MB2_LogLevel& __cordl_internal_get_LOG_LEVEL() ;

constexpr bool const& __cordl_internal_get__considerNonTextureProperties() const;

constexpr bool& __cordl_internal_get__considerNonTextureProperties() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*> const& __cordl_internal_get__nonTextureProperties() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>& __cordl_internal_get__nonTextureProperties() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* const& __cordl_internal_get__nonTexturePropertiesBlender() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*& __cordl_internal_get__nonTexturePropertiesBlender() ;

constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair> const& __cordl_internal_get_defaultTextureProperty2DefaultColorMap() const;

constexpr ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>& __cordl_internal_get_defaultTextureProperty2DefaultColorMap() ;

constexpr ::DigitalOpus::MB::Core::TextureBlender* const& __cordl_internal_get_resultMaterialTextureBlender() const;

constexpr ::DigitalOpus::MB::Core::TextureBlender*& __cordl_internal_get_resultMaterialTextureBlender() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*> const& __cordl_internal_get_textureBlenders() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>& __cordl_internal_get_textureBlenders() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>* const& __cordl_internal_get_textureProperty2DefaultColorMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*& __cordl_internal_get_textureProperty2DefaultColorMap() ;

constexpr void __cordl_internal_set_LOG_LEVEL(::DigitalOpus::MB::Core::MB2_LogLevel  value) ;

constexpr void __cordl_internal_set__considerNonTextureProperties(bool  value) ;

constexpr void __cordl_internal_set__nonTextureProperties(::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>  value) ;

constexpr void __cordl_internal_set__nonTexturePropertiesBlender(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*  value) ;

constexpr void __cordl_internal_set_defaultTextureProperty2DefaultColorMap(::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>  value) ;

constexpr void __cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::TextureBlender*  value) ;

constexpr void __cordl_internal_set_textureBlenders(::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>  value) ;

constexpr void __cordl_internal_set_textureProperty2DefaultColorMap(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  value) ;

/// @brief Method .ctor, addr 0x9dd2d88, size 0x798, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB2_LogLevel  ll, bool  considerNonTextureProps) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties(MB3_TextureCombinerNonTextureProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties(MB3_TextureCombinerNonTextureProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22796};

/// @brief Field defaultTextureProperty2DefaultColorMap, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair>  ___defaultTextureProperty2DefaultColorMap;

/// @brief Field _nonTextureProperties, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*>  ____nonTextureProperties;

/// @brief Field LOG_LEVEL, offset: 0x20, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB2_LogLevel  ___LOG_LEVEL;

/// @brief Field _considerNonTextureProperties, offset: 0x24, size: 0x1, def value: None
 bool  ____considerNonTextureProperties;

/// @brief Field resultMaterialTextureBlender, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlender*  ___resultMaterialTextureBlender;

/// @brief Field textureBlenders, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::TextureBlender*>  ___textureBlenders;

/// @brief Field textureProperty2DefaultColorMap, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  ___textureProperty2DefaultColorMap;

/// @brief Field _nonTexturePropertiesBlender, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*  ____nonTexturePropertiesBlender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ___defaultTextureProperty2DefaultColorMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ____nonTextureProperties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ___LOG_LEVEL) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ____considerNonTextureProperties) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ___resultMaterialTextureBlender) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ___textureBlenders) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ___textureProperty2DefaultColorMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties, ____nonTexturePropertiesBlender) == 0x40, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties) == 0x48, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTexturePropertiesBlendProps
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps : public ::System::Object {
public:
// Declarations
/// @brief Field _textureProperties, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureProperties, put=__cordl_internal_set__textureProperties)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  _textureProperties;

/// @brief Field resultMaterialTextureBlender, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultMaterialTextureBlender, put=__cordl_internal_set_resultMaterialTextureBlender)) ::DigitalOpus::MB::Core::TextureBlender*  resultMaterialTextureBlender;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*() noexcept;

/// @brief Method AdjustNonTextureProperties, addr 0x9dd57b8, size 0x218, virtual true, abstract: false, final true
inline void AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method GetColorAsItWouldAppearInAtlasIfNoTexture, addr 0x9dd59d0, size 0x178, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method GetColorForTemporaryTexture, addr 0x9dd5b48, size 0xbc, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps* New_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties, ::DigitalOpus::MB::Core::TextureBlender*  resultMats) ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9dd5398, size 0xbc, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method TintTextureWithTextureCombiner, addr 0x9dd5454, size 0x364, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName) ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get__textureProperties() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get__textureProperties() ;

constexpr ::DigitalOpus::MB::Core::TextureBlender* const& __cordl_internal_get_resultMaterialTextureBlender() const;

constexpr ::DigitalOpus::MB::Core::TextureBlender*& __cordl_internal_get_resultMaterialTextureBlender() ;

constexpr void __cordl_internal_set__textureProperties(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

constexpr void __cordl_internal_set_resultMaterialTextureBlender(::DigitalOpus::MB::Core::TextureBlender*  value) ;

/// @brief Method .ctor, addr 0x9dd42e4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties, ::DigitalOpus::MB::Core::TextureBlender*  resultMats) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_NonTextureProperties() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps(MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps(MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22795};

/// @brief Field _textureProperties, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ____textureProperties;

/// @brief Field resultMaterialTextureBlender, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::TextureBlender*  ___resultMaterialTextureBlender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps, ____textureProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps, ___resultMaterialTextureBlender) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesBlendProps) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTexturePropertiesDontBlendProps
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps : public ::System::Object {
public:
// Declarations
/// @brief Field _textureProperties, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureProperties, put=__cordl_internal_set__textureProperties)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  _textureProperties;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties*() noexcept;

/// @brief Method AdjustNonTextureProperties, addr 0x9dd4fb0, size 0x2b8, virtual true, abstract: false, final true
inline void AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method GetColorAsItWouldAppearInAtlasIfNoTexture, addr 0x9dd5268, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method GetColorForTemporaryTexture, addr 0x9dd527c, size 0x11c, virtual true, abstract: false, final true
inline ::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps* New_ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties) ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x9dd4f34, size 0x8, virtual true, abstract: false, final true
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method TintTextureWithTextureCombiner, addr 0x9dd4f3c, size 0x74, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Texture2D> TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName) ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* const& __cordl_internal_get__textureProperties() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*& __cordl_internal_get__textureProperties() ;

constexpr void __cordl_internal_set__textureProperties(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  value) ;

/// @brief Method .ctor, addr 0x9dd36a8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  textureProperties) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTextureProperties* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_NonTextureProperties() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps(MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps(MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22794};

/// @brief Field _textureProperties, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  ____textureProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps, ____textureProperties) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_NonTexturePropertiesDontBlendProps) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/NonTextureProperties
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_NonTextureProperties {
public:
// Declarations
/// @brief Method AdjustNonTextureProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AdjustNonTextureProperties(::UnityEngine::Material*  resultMat, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods) ;

/// @brief Method GetColorAsItWouldAppearInAtlasIfNoTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color GetColorAsItWouldAppearInAtlasIfNoTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method GetColorForTemporaryTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Color GetColorForTemporaryTexture(::UnityEngine::Material*  matIfBlender, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texProperty) ;

/// @brief Method NonTexturePropertiesAreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool NonTexturePropertiesAreEqual(::UnityEngine::Material*  a, ::UnityEngine::Material*  b) ;

/// @brief Method TintTextureWithTextureCombiner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::Texture2D> TintTextureWithTextureCombiner(::UnityEngine::Texture2D*  t, ::DigitalOpus::MB::Core::MB_TexSet*  sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty*  shaderPropertyName) ;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_NonTextureProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_NonTextureProperties(MB3_TextureCombinerNonTextureProperties_NonTextureProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedColor
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor : public ::System::Object {
public:
// Declarations
/// @brief Field averageVal, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_averageVal, put=__cordl_internal_set_averageVal)) ::UnityEngine::Color  averageVal;

/// @brief Field numValues, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_numValues, put=__cordl_internal_set_numValues)) int32_t  numValues;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*() noexcept;

/// @brief Method GetAverage, addr 0x9dd4c70, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* GetAverage() ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor* New_ctor() ;

/// @brief Method NumValues, addr 0x9dd4ccc, size 0x8, virtual true, abstract: false, final true
inline int32_t NumValues() ;

/// @brief Method SetAverageValueOrDefaultOnMaterial, addr 0x9dd4cd4, size 0x260, virtual true, abstract: false, final true
inline void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

/// @brief Method TryGetPropValueFromMaterialAndBlendIntoAverage, addr 0x9dd4b04, size 0x16c, virtual true, abstract: false, final true
inline void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_averageVal() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_averageVal() ;

constexpr int32_t const& __cordl_internal_get_numValues() const;

constexpr int32_t& __cordl_internal_get_numValues() ;

constexpr void __cordl_internal_set_averageVal(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_numValues(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dd46d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor(MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor(MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22791};

/// @brief Field averageVal, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___averageVal;

/// @brief Field numValues, offset: 0x20, size: 0x4, def value: None
 int32_t  ___numValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor, ___averageVal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor, ___numValues) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveragedFloat
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat : public ::System::Object {
public:
// Declarations
/// @brief Field averageVal, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_averageVal, put=__cordl_internal_set_averageVal)) float_t  averageVal;

/// @brief Field numValues, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_numValues, put=__cordl_internal_set_numValues)) int32_t  numValues;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged*() noexcept;

/// @brief Method GetAverage, addr 0x9dd48a0, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* GetAverage() ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* New_ctor() ;

/// @brief Method NumValues, addr 0x9dd48c8, size 0x8, virtual true, abstract: false, final true
inline int32_t NumValues() ;

/// @brief Method SetAverageValueOrDefaultOnMaterial, addr 0x9dd48d0, size 0x234, virtual true, abstract: false, final true
inline void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

/// @brief Method TryGetPropValueFromMaterialAndBlendIntoAverage, addr 0x9dd4744, size 0x15c, virtual true, abstract: false, final true
inline void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

constexpr float_t const& __cordl_internal_get_averageVal() const;

constexpr float_t& __cordl_internal_get_averageVal() ;

constexpr int32_t const& __cordl_internal_get_numValues() const;

constexpr int32_t& __cordl_internal_get_numValues() ;

constexpr void __cordl_internal_set_averageVal(float_t  value) ;

constexpr void __cordl_internal_set_numValues(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dd4690, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat(MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat(MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22790};

/// @brief Field averageVal, offset: 0x10, size: 0x4, def value: None
 float_t  ___averageVal;

/// @brief Field numValues, offset: 0x14, size: 0x4, def value: None
 int32_t  ___numValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat, ___averageVal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat, ___numValues) == 0x14, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyValueAveraged
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged {
public:
// Declarations
/// @brief Method GetAverage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetAverage() ;

/// @brief Method NumValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t NumValues() ;

/// @brief Method SetAverageValueOrDefaultOnMaterial, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetAverageValueOrDefaultOnMaterial(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

/// @brief Method TryGetPropValueFromMaterialAndBlendIntoAverage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TryGetPropValueFromMaterialAndBlendIntoAverage(::UnityEngine::Material*  mat, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*  property) ;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged(MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object, UnityEngine.Color
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyColor
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PropertyName, put=set_PropertyName)) ::StringW  PropertyName;

/// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field _averageCalc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__averageCalc, put=__cordl_internal_set__averageCalc)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*  _averageCalc;

/// @brief Field _defaultValue, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__defaultValue, put=__cordl_internal_set__defaultValue)) ::UnityEngine::Color  _defaultValue;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*() noexcept;

/// @brief Method GetAverageCalculator, addr 0x9dd46e0, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* GetAverageCalculator() ;

/// @brief Method GetDefaultValue, addr 0x9dd46e8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* GetDefaultValue() ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor* New_ctor(::StringW  name, ::UnityEngine::Color  defaultVal) ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor* const& __cordl_internal_get__averageCalc() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*& __cordl_internal_get__averageCalc() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultValue() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__defaultValue() ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__averageCalc(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*  value) ;

constexpr void __cordl_internal_set__defaultValue(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x9dd3560, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::UnityEngine::Color  defaultVal) ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0x9dd46c8, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_PropertyName() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialProperty() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PropertyName, addr 0x9dd46d0, size 0x8, virtual true, abstract: false, final true
inline void set_PropertyName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor(MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor(MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22788};

/// [CompilerGenerated]
/// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// @brief Field _averageCalc, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedColor*  ____averageCalc;

/// @brief Field _defaultValue, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____defaultValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor, ____averageCalc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor, ____defaultValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor) == 0x30, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialPropertyFloat
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PropertyName, put=set_PropertyName)) ::StringW  PropertyName;

/// @brief Field <PropertyName>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__PropertyName_k__BackingField, put=__cordl_internal_set__PropertyName_k__BackingField)) ::StringW  _PropertyName_k__BackingField;

/// @brief Field _averageCalc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__averageCalc, put=__cordl_internal_set__averageCalc)) ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*  _averageCalc;

/// @brief Field _defaultValue, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultValue, put=__cordl_internal_set__defaultValue)) float_t  _defaultValue;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty*() noexcept;

/// @brief Method GetAverageCalculator, addr 0x9dd4698, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* GetAverageCalculator() ;

/// @brief Method GetDefaultValue, addr 0x9dd46a0, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* GetDefaultValue() ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat* New_ctor(::StringW  name, float_t  defValue) ;

constexpr ::StringW const& __cordl_internal_get__PropertyName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PropertyName_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat* const& __cordl_internal_get__averageCalc() const;

constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*& __cordl_internal_get__averageCalc() ;

constexpr float_t const& __cordl_internal_get__defaultValue() const;

constexpr float_t& __cordl_internal_get__defaultValue() ;

constexpr void __cordl_internal_set__PropertyName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__averageCalc(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*  value) ;

constexpr void __cordl_internal_set__defaultValue(float_t  value) ;

/// @brief Method .ctor, addr 0x9dd3610, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, float_t  defValue) ;

/// [CompilerGenerated]
/// @brief Method get_PropertyName, addr 0x9dd4680, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_PropertyName() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialProperty* i___DigitalOpus__MB__Core__MB3_TextureCombinerNonTextureProperties_MaterialProperty() noexcept;

/// [CompilerGenerated]
/// @brief Method set_PropertyName, addr 0x9dd4688, size 0x8, virtual true, abstract: false, final true
inline void set_PropertyName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat(MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat(MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22787};

/// [CompilerGenerated]
/// @brief Field <PropertyName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____PropertyName_k__BackingField;

/// @brief Field _averageCalc, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveragedFloat*  ____averageCalc;

/// @brief Field _defaultValue, offset: 0x20, size: 0x4, def value: None
 float_t  ____defaultValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat, ____PropertyName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat, ____averageCalc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat, ____defaultValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyFloat) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/MaterialProperty
class CORDL_TYPE MB3_TextureCombinerNonTextureProperties_MaterialProperty {
public:
// Declarations
 __declspec(property(get=get_PropertyName, put=set_PropertyName)) ::StringW  PropertyName;

/// @brief Method GetAverageCalculator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties_MaterialPropertyValueAveraged* GetAverageCalculator() ;

/// @brief Method GetDefaultValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetDefaultValue() ;

/// @brief Method get_PropertyName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_PropertyName() ;

/// @brief Method set_PropertyName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PropertyName(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerNonTextureProperties_MaterialProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerNonTextureProperties_MaterialProperty(MB3_TextureCombinerNonTextureProperties_MaterialProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22786};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
