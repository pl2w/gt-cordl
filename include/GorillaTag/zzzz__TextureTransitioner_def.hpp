#pragma once
// IWYU pragma private; include "GorillaTag/TextureTransitioner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaExtensions/zzzz__GorillaMath_RemapFloatInfo_def.hpp"
#include "GorillaTag/zzzz__TextureTransitioner_DirectionRetentionMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureTransitioner)
namespace GlobalNamespace {
struct TextureTransitioner_DirectionRetentionMode;
}
namespace GorillaTag {
class IDynamicFloat;
}
namespace GorillaTag {
class IResettableItem;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GorillaTag {
class TextureTransitioner;
}
// Write type traits
MARK_REF_T(::GorillaTag::TextureTransitioner*);
DEFINE_IL2CPP_CLASS(::GorillaTag::TextureTransitioner*, "GorillaTag", "TextureTransitioner");
// [ExecuteAlways]
// Dependencies GorillaExtensions.GorillaMath::RemapFloatInfo, GorillaTag.TextureTransitioner::DirectionRetentionMode, UnityEngine.MonoBehaviour, UnityEngine.Renderer, UnityEngine.Texture
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.TextureTransitioner
class CORDL_TYPE TextureTransitioner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DirectionRetentionMode = ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode;

/// @brief Field directionRetentionMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionRetentionMode, put=__cordl_internal_set_directionRetentionMode)) ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode  directionRetentionMode;

/// @brief Field dynamicFloatComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dynamicFloatComponent, put=__cordl_internal_set_dynamicFloatComponent)) ::UnityW<::UnityEngine::MonoBehaviour>  dynamicFloatComponent;

/// @brief Field editorPreview, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_editorPreview, put=__cordl_internal_set_editorPreview)) bool  editorPreview;

/// @brief Field iDynamicFloat, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_iDynamicFloat, put=__cordl_internal_set_iDynamicFloat)) ::GorillaTag::IDynamicFloat*  iDynamicFloat;

/// @brief Field normalizedValue, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizedValue, put=__cordl_internal_set_normalizedValue)) float_t  normalizedValue;

/// @brief Field remapInfo, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_remapInfo, put=__cordl_internal_set_remapInfo)) ::GlobalNamespace::GorillaMath_RemapFloatInfo  remapInfo;

/// @brief Field renderers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Field tex1Index, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tex1Index, put=__cordl_internal_set_tex1Index)) int32_t  tex1Index;

/// @brief Field tex1ShaderParam, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tex1ShaderParam, put=__cordl_internal_set_tex1ShaderParam)) int32_t  tex1ShaderParam;

/// @brief Field tex1ShaderParamName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tex1ShaderParamName, put=__cordl_internal_set_tex1ShaderParamName)) ::StringW  tex1ShaderParamName;

/// @brief Field tex2Index, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tex2Index, put=__cordl_internal_set_tex2Index)) int32_t  tex2Index;

/// @brief Field tex2ShaderParam, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_tex2ShaderParam, put=__cordl_internal_set_tex2ShaderParam)) int32_t  tex2ShaderParam;

/// @brief Field tex2ShaderParamName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tex2ShaderParamName, put=__cordl_internal_set_tex2ShaderParamName)) ::StringW  tex2ShaderParamName;

/// @brief Field texTransitionShaderParam, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_texTransitionShaderParam, put=__cordl_internal_set_texTransitionShaderParam)) int32_t  texTransitionShaderParam;

/// @brief Field texTransitionShaderParamName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_texTransitionShaderParamName, put=__cordl_internal_set_texTransitionShaderParamName)) ::StringW  texTransitionShaderParamName;

/// @brief Field textures, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::ArrayW<::UnityW<::UnityEngine::Texture>>  textures;

/// @brief Field transitionPercent, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_transitionPercent, put=__cordl_internal_set_transitionPercent)) int32_t  transitionPercent;

/// @brief Convert operator to "::GorillaTag::IResettableItem"
constexpr operator  ::GorillaTag::IResettableItem*() noexcept;

/// @brief Method Awake, addr 0x5d26eb4, size 0x124, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::TextureTransitioner* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d276d4, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d271dc, size 0x424, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshShaderParams, addr 0x5d27188, size 0x48, virtual false, abstract: false, final false
inline void RefreshShaderParams() ;

/// @brief Method ResetToDefaultState, addr 0x5d271d0, size 0xc, virtual true, abstract: false, final true
inline void ResetToDefaultState() ;

constexpr ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode const& __cordl_internal_get_directionRetentionMode() const;

constexpr ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode& __cordl_internal_get_directionRetentionMode() ;

constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get_dynamicFloatComponent() const;

constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get_dynamicFloatComponent() ;

constexpr bool const& __cordl_internal_get_editorPreview() const;

constexpr bool& __cordl_internal_get_editorPreview() ;

constexpr ::GorillaTag::IDynamicFloat* const& __cordl_internal_get_iDynamicFloat() const;

constexpr ::GorillaTag::IDynamicFloat*& __cordl_internal_get_iDynamicFloat() ;

constexpr float_t const& __cordl_internal_get_normalizedValue() const;

constexpr float_t& __cordl_internal_get_normalizedValue() ;

constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo const& __cordl_internal_get_remapInfo() const;

constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo& __cordl_internal_get_remapInfo() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr int32_t const& __cordl_internal_get_tex1Index() const;

constexpr int32_t& __cordl_internal_get_tex1Index() ;

constexpr int32_t const& __cordl_internal_get_tex1ShaderParam() const;

constexpr int32_t& __cordl_internal_get_tex1ShaderParam() ;

constexpr ::StringW const& __cordl_internal_get_tex1ShaderParamName() const;

constexpr ::StringW& __cordl_internal_get_tex1ShaderParamName() ;

constexpr int32_t const& __cordl_internal_get_tex2Index() const;

constexpr int32_t& __cordl_internal_get_tex2Index() ;

constexpr int32_t const& __cordl_internal_get_tex2ShaderParam() const;

constexpr int32_t& __cordl_internal_get_tex2ShaderParam() ;

constexpr ::StringW const& __cordl_internal_get_tex2ShaderParamName() const;

constexpr ::StringW& __cordl_internal_get_tex2ShaderParamName() ;

constexpr int32_t const& __cordl_internal_get_texTransitionShaderParam() const;

constexpr int32_t& __cordl_internal_get_texTransitionShaderParam() ;

constexpr ::StringW const& __cordl_internal_get_texTransitionShaderParamName() const;

constexpr ::StringW& __cordl_internal_get_texTransitionShaderParamName() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>> const& __cordl_internal_get_textures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>>& __cordl_internal_get_textures() ;

constexpr int32_t const& __cordl_internal_get_transitionPercent() const;

constexpr int32_t& __cordl_internal_get_transitionPercent() ;

constexpr void __cordl_internal_set_directionRetentionMode(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode  value) ;

constexpr void __cordl_internal_set_dynamicFloatComponent(::UnityW<::UnityEngine::MonoBehaviour>  value) ;

constexpr void __cordl_internal_set_editorPreview(bool  value) ;

constexpr void __cordl_internal_set_iDynamicFloat(::GorillaTag::IDynamicFloat*  value) ;

constexpr void __cordl_internal_set_normalizedValue(float_t  value) ;

constexpr void __cordl_internal_set_remapInfo(::GlobalNamespace::GorillaMath_RemapFloatInfo  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_tex1Index(int32_t  value) ;

constexpr void __cordl_internal_set_tex1ShaderParam(int32_t  value) ;

constexpr void __cordl_internal_set_tex1ShaderParamName(::StringW  value) ;

constexpr void __cordl_internal_set_tex2Index(int32_t  value) ;

constexpr void __cordl_internal_set_tex2ShaderParam(int32_t  value) ;

constexpr void __cordl_internal_set_tex2ShaderParamName(::StringW  value) ;

constexpr void __cordl_internal_set_texTransitionShaderParam(int32_t  value) ;

constexpr void __cordl_internal_set_texTransitionShaderParamName(::StringW  value) ;

constexpr void __cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>>  value) ;

constexpr void __cordl_internal_set_transitionPercent(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d277a8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::IResettableItem"
constexpr ::GorillaTag::IResettableItem* i___GorillaTag__IResettableItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureTransitioner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureTransitioner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureTransitioner(TextureTransitioner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureTransitioner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureTransitioner(TextureTransitioner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4622};

/// @brief Field editorPreview, offset: 0x20, size: 0x1, def value: None
 bool  ___editorPreview;

/// [Tooltip("The component that will drive the texture transitions.")]
/// @brief Field dynamicFloatComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MonoBehaviour>  ___dynamicFloatComponent;

/// [Tooltip("Set these values so that after remap 0 is the first texture in the textures list and 1 is the last.")]
/// @brief Field remapInfo, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::GorillaMath_RemapFloatInfo  ___remapInfo;

/// @brief Field directionRetentionMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode  ___directionRetentionMode;

/// @brief Field texTransitionShaderParamName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___texTransitionShaderParamName;

/// @brief Field tex1ShaderParamName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___tex1ShaderParamName;

/// @brief Field tex2ShaderParamName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___tex2ShaderParamName;

/// @brief Field textures, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture>>  ___textures;

/// @brief Field renderers, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field iDynamicFloat, offset: 0x70, size: 0x8, def value: None
 ::GorillaTag::IDynamicFloat*  ___iDynamicFloat;

/// @brief Field texTransitionShaderParam, offset: 0x78, size: 0x4, def value: None
 int32_t  ___texTransitionShaderParam;

/// @brief Field tex1ShaderParam, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___tex1ShaderParam;

/// @brief Field tex2ShaderParam, offset: 0x80, size: 0x4, def value: None
 int32_t  ___tex2ShaderParam;

/// [DebugReadout]
/// @brief Field normalizedValue, offset: 0x84, size: 0x4, def value: None
 float_t  ___normalizedValue;

/// [DebugReadout]
/// @brief Field transitionPercent, offset: 0x88, size: 0x4, def value: None
 int32_t  ___transitionPercent;

/// [DebugReadout]
/// @brief Field tex1Index, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___tex1Index;

/// [DebugReadout]
/// @brief Field tex2Index, offset: 0x90, size: 0x4, def value: None
 int32_t  ___tex2Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::TextureTransitioner, ___editorPreview) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___dynamicFloatComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___remapInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___directionRetentionMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___texTransitionShaderParamName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex1ShaderParamName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex2ShaderParamName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___textures) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___renderers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___iDynamicFloat) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___texTransitionShaderParam) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex1ShaderParam) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex2ShaderParam) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___normalizedValue) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___transitionPercent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex1Index) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::TextureTransitioner, ___tex2Index) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::TextureTransitioner) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag
