#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TexSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MeshBakerMaterialTexture_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TexSet)
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerNonTextureProperties;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombiner;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariation;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
namespace DigitalOpus::MB::Core {
class MatsAndGOs;
}
namespace DigitalOpus::MB::Core {
class MeshBakerMaterialTexture;
}
namespace DigitalOpus::MB::Core {
class ShaderTextureProperty;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariation;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TexSet*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*);
MARK_REF_T(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TexSet*, "DigitalOpus.MB.Core", "MB_TexSet");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*, "DigitalOpus.MB.Core", "MB_TexSet/PipelineVariation");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling*, "DigitalOpus.MB.Core", "MB_TexSet/PipelineVariationAllTexturesUseSameMatTiling");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling*, "DigitalOpus.MB.Core", "MB_TexSet/PipelineVariationSomeTexturesUseDifferentMatTiling");
// Dependencies DigitalOpus.MB.Core.MB_TextureTilingTreatment, DigitalOpus.MB.Core.MeshBakerMaterialTexture, System.Object, UnityEngine.Vector2
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TexSet
class CORDL_TYPE MB_TexSet : public ::System::Object {
public:
// Declarations
using PipelineVariation = ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation;

using PipelineVariationAllTexturesUseSameMatTiling = ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling;

using PipelineVariationSomeTexturesUseDifferentMatTiling = ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling;

/// @brief Field <allTexturesUseSameMatTiling>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__allTexturesUseSameMatTiling_k__BackingField, put=__cordl_internal_set__allTexturesUseSameMatTiling_k__BackingField)) bool  _allTexturesUseSameMatTiling_k__BackingField;

/// @brief Field <obUVoffset>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__obUVoffset_k__BackingField, put=__cordl_internal_set__obUVoffset_k__BackingField)) ::UnityEngine::Vector2  _obUVoffset_k__BackingField;

/// @brief Field <obUVscale>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__obUVscale_k__BackingField, put=__cordl_internal_set__obUVscale_k__BackingField)) ::UnityEngine::Vector2  _obUVscale_k__BackingField;

/// @brief Field <thisIsOnlyTexSetInAtlas>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__thisIsOnlyTexSetInAtlas_k__BackingField, put=__cordl_internal_set__thisIsOnlyTexSetInAtlas_k__BackingField)) bool  _thisIsOnlyTexSetInAtlas_k__BackingField;

/// @brief Field <tilingTreatment>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__tilingTreatment_k__BackingField, put=__cordl_internal_set__tilingTreatment_k__BackingField)) ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  _tilingTreatment_k__BackingField;

 __declspec(property(get=get_allTexturesUseSameMatTiling, put=set_allTexturesUseSameMatTiling)) bool  allTexturesUseSameMatTiling;

/// @brief Field idealHeight_pix, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_idealHeight_pix, put=__cordl_internal_set_idealHeight_pix)) int32_t  idealHeight_pix;

/// @brief Field idealWidth_pix, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_idealWidth_pix, put=__cordl_internal_set_idealWidth_pix)) int32_t  idealWidth_pix;

/// @brief Field matsAndGOs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_matsAndGOs, put=__cordl_internal_set_matsAndGOs)) ::DigitalOpus::MB::Core::MatsAndGOs*  matsAndGOs;

 __declspec(property(get=get_obUVoffset, put=set_obUVoffset)) ::UnityEngine::Vector2  obUVoffset;

 __declspec(property(get=get_obUVrect)) ::DigitalOpus::MB::Core::DRect  obUVrect;

 __declspec(property(get=get_obUVscale, put=set_obUVscale)) ::UnityEngine::Vector2  obUVscale;

/// @brief Field pipelineVariation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pipelineVariation, put=__cordl_internal_set_pipelineVariation)) ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*  pipelineVariation;

 __declspec(property(get=get_thisIsOnlyTexSetInAtlas, put=set_thisIsOnlyTexSetInAtlas)) bool  thisIsOnlyTexSetInAtlas;

 __declspec(property(get=get_tilingTreatment, put=set_tilingTreatment)) ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  tilingTreatment;

/// @brief Field ts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ts, put=__cordl_internal_set_ts)) ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  ts;

/// @brief Method AdjustResultMaterialNonTextureProperties, addr 0x9dcf0a4, size 0xbc, virtual false, abstract: false, final false
inline void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props) ;

/// @brief Method AllTexturesAreSameForMerge, addr 0x9dcf688, size 0x20c, virtual false, abstract: false, final false
inline bool AllTexturesAreSameForMerge(::DigitalOpus::MB::Core::MB_TexSet*  other, bool  considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender) ;

/// @brief Method CalcInitialFullSamplingRects, addr 0x9dcf374, size 0x1d8, virtual false, abstract: false, final false
inline void CalcInitialFullSamplingRects(bool  fixOutOfBoundsUVs) ;

/// @brief Method CalcMatAndUVSamplingRects, addr 0x9dcf54c, size 0x13c, virtual false, abstract: false, final false
inline void CalcMatAndUVSamplingRects() ;

/// @brief Method CreateColoredTexToReplaceNull, addr 0x9dcef4c, size 0xa4, virtual false, abstract: false, final false
inline void CreateColoredTexToReplaceNull(::StringW  propName, int32_t  propIdx, bool  considerMeshUVs, ::DigitalOpus::MB::Core::MB3_TextureCombiner*  combiner, ::UnityEngine::Color  col, bool  isLinear) ;

/// @brief Method DrawRectsToMergeGizmos, addr 0x9dcf894, size 0x274, virtual false, abstract: false, final false
inline void DrawRectsToMergeGizmos(::UnityEngine::Color  encC, ::UnityEngine::Color  innerC) ;

/// @brief Method GetDescription, addr 0x9dcfb08, size 0x2b4, virtual false, abstract: false, final false
inline ::StringW GetDescription() ;

/// @brief Method GetEncapsulatingSamplingRectIfTilingSame, addr 0x9dcedbc, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetEncapsulatingSamplingRectIfTilingSame() ;

/// @brief Method GetMatSubrectDescriptions, addr 0x9dcfdbc, size 0x164, virtual false, abstract: false, final false
inline ::StringW GetMatSubrectDescriptions() ;

/// @brief Method GetMaterialTilingRectForTextureBakerResults, addr 0x9dcf2c8, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex) ;

/// @brief Method GetMaxRawTextureHeightWidth, addr 0x9dced1c, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetMaxRawTextureHeightWidth() ;

/// @brief Method GetRectsForTextureBakeResults, addr 0x9dcf210, size 0xb8, virtual false, abstract: false, final false
inline void GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect) ;

/// @brief Method IsEqual, addr 0x9dcea48, size 0x21c, virtual false, abstract: false, final false
inline bool IsEqual(::System::Object*  obj, bool  fixOutOfBoundsUVs, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*  resultMaterialTextureBlender) ;

static inline ::DigitalOpus::MB::Core::MB_TexSet* New_ctor(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  tss, ::UnityEngine::Vector2  uvOffset, ::UnityEngine::Vector2  uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment) ;

/// @brief Method SetAllTexturesUseSameMatTilingTrue, addr 0x9dceffc, size 0x78, virtual false, abstract: false, final false
inline void SetAllTexturesUseSameMatTilingTrue() ;

/// @brief Method SetEncapsulatingRect, addr 0x9dceeb4, size 0x98, virtual false, abstract: false, final false
inline void SetEncapsulatingRect(int32_t  propIdx, bool  considerMeshUVs) ;

/// @brief Method SetEncapsulatingSamplingRectForTesting, addr 0x9dcee78, size 0x3c, virtual false, abstract: false, final false
inline void SetEncapsulatingSamplingRectForTesting(int32_t  propIdx, ::DigitalOpus::MB::Core::DRect  newEncapsulatingSamplingRect) ;

/// @brief Method SetEncapsulatingSamplingRectWhenMergingTexSets, addr 0x9dcee24, size 0x54, virtual false, abstract: false, final false
inline void SetEncapsulatingSamplingRectWhenMergingTexSets(::DigitalOpus::MB::Core::DRect  newEncapsulatingSamplingRect) ;

/// @brief Method SetThisIsOnlyTexSetInAtlasTrue, addr 0x9dceff0, size 0xc, virtual false, abstract: false, final false
inline void SetThisIsOnlyTexSetInAtlasTrue() ;

/// @brief Method SetTilingTreatmentAndAdjustEncapsulatingSamplingRect, addr 0x9dcf160, size 0xb0, virtual false, abstract: false, final false
inline void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment) ;

constexpr bool const& __cordl_internal_get__allTexturesUseSameMatTiling_k__BackingField() const;

constexpr bool& __cordl_internal_get__allTexturesUseSameMatTiling_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__obUVoffset_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__obUVoffset_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__obUVscale_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__obUVscale_k__BackingField() ;

constexpr bool const& __cordl_internal_get__thisIsOnlyTexSetInAtlas_k__BackingField() const;

constexpr bool& __cordl_internal_get__thisIsOnlyTexSetInAtlas_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const& __cordl_internal_get__tilingTreatment_k__BackingField() const;

constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& __cordl_internal_get__tilingTreatment_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_idealHeight_pix() const;

constexpr int32_t& __cordl_internal_get_idealHeight_pix() ;

constexpr int32_t const& __cordl_internal_get_idealWidth_pix() const;

constexpr int32_t& __cordl_internal_get_idealWidth_pix() ;

constexpr ::DigitalOpus::MB::Core::MatsAndGOs* const& __cordl_internal_get_matsAndGOs() const;

constexpr ::DigitalOpus::MB::Core::MatsAndGOs*& __cordl_internal_get_matsAndGOs() ;

constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* const& __cordl_internal_get_pipelineVariation() const;

constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*& __cordl_internal_get_pipelineVariation() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*> const& __cordl_internal_get_ts() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>& __cordl_internal_get_ts() ;

constexpr void __cordl_internal_set__allTexturesUseSameMatTiling_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__obUVoffset_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__obUVscale_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__thisIsOnlyTexSetInAtlas_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__tilingTreatment_k__BackingField(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value) ;

constexpr void __cordl_internal_set_idealHeight_pix(int32_t  value) ;

constexpr void __cordl_internal_set_idealWidth_pix(int32_t  value) ;

constexpr void __cordl_internal_set_matsAndGOs(::DigitalOpus::MB::Core::MatsAndGOs*  value) ;

constexpr void __cordl_internal_set_pipelineVariation(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*  value) ;

constexpr void __cordl_internal_set_ts(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  value) ;

/// @brief Method .ctor, addr 0x9dce85c, size 0x1bc, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  tss, ::UnityEngine::Vector2  uvOffset, ::UnityEngine::Vector2  uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment) ;

/// [CompilerGenerated]
/// @brief Method get_allTexturesUseSameMatTiling, addr 0x9dce7d4, size 0x8, virtual false, abstract: false, final false
inline bool get_allTexturesUseSameMatTiling() ;

/// [CompilerGenerated]
/// @brief Method get_obUVoffset, addr 0x9dce804, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_obUVoffset() ;

/// @brief Method get_obUVrect, addr 0x9dce824, size 0x38, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect get_obUVrect() ;

/// [CompilerGenerated]
/// @brief Method get_obUVscale, addr 0x9dce814, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_obUVscale() ;

/// [CompilerGenerated]
/// @brief Method get_thisIsOnlyTexSetInAtlas, addr 0x9dce7e4, size 0x8, virtual false, abstract: false, final false
inline bool get_thisIsOnlyTexSetInAtlas() ;

/// [CompilerGenerated]
/// @brief Method get_tilingTreatment, addr 0x9dce7f4, size 0x8, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment get_tilingTreatment() ;

/// [CompilerGenerated]
/// @brief Method set_allTexturesUseSameMatTiling, addr 0x9dce7dc, size 0x8, virtual false, abstract: false, final false
inline void set_allTexturesUseSameMatTiling(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_obUVoffset, addr 0x9dce80c, size 0x8, virtual false, abstract: false, final false
inline void set_obUVoffset(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_obUVscale, addr 0x9dce81c, size 0x8, virtual false, abstract: false, final false
inline void set_obUVscale(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_thisIsOnlyTexSetInAtlas, addr 0x9dce7ec, size 0x8, virtual false, abstract: false, final false
inline void set_thisIsOnlyTexSetInAtlas(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_tilingTreatment, addr 0x9dce7fc, size 0x8, virtual false, abstract: false, final false
inline void set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexSet(MB_TexSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexSet(MB_TexSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22784};

/// @brief Field ts, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>  ___ts;

/// @brief Field matsAndGOs, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MatsAndGOs*  ___matsAndGOs;

/// [CompilerGenerated]
/// @brief Field <allTexturesUseSameMatTiling>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____allTexturesUseSameMatTiling_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <thisIsOnlyTexSetInAtlas>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____thisIsOnlyTexSetInAtlas_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <tilingTreatment>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  ____tilingTreatment_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <obUVoffset>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____obUVoffset_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <obUVscale>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____obUVscale_k__BackingField;

/// @brief Field idealWidth_pix, offset: 0x38, size: 0x4, def value: None
 int32_t  ___idealWidth_pix;

/// @brief Field idealHeight_pix, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___idealHeight_pix;

/// @brief Field pipelineVariation, offset: 0x40, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*  ___pipelineVariation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ___ts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ___matsAndGOs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ____allTexturesUseSameMatTiling_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ____thisIsOnlyTexSetInAtlas_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ____tilingTreatment_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ____obUVoffset_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ____obUVscale_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ___idealWidth_pix) == 0x38, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ___idealHeight_pix) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet, ___pipelineVariation) == 0x40, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet) == 0x48, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TexSet/PipelineVariationSomeTexturesUseDifferentMatTiling
class CORDL_TYPE MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling : public ::System::Object {
public:
// Declarations
/// @brief Field texSet, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texSet, put=__cordl_internal_set_texSet)) ::DigitalOpus::MB::Core::MB_TexSet*  texSet;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr operator  ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*() noexcept;

/// @brief Method AdjustResultMaterialNonTextureProperties, addr 0x9dd032c, size 0x1a4, virtual true, abstract: false, final true
inline void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props) ;

/// @brief Method GetMaterialTilingRectForTextureBakerResults, addr 0x9dd0318, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex) ;

/// @brief Method GetRectsForTextureBakeResults, addr 0x9dd0158, size 0xb4, virtual true, abstract: false, final true
inline void GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect) ;

static inline ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling* New_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts) ;

/// @brief Method SetTilingTreatmentAndAdjustEncapsulatingSamplingRect, addr 0x9dd020c, size 0x10c, virtual true, abstract: false, final true
inline void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment) ;

constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& __cordl_internal_get_texSet() const;

constexpr ::DigitalOpus::MB::Core::MB_TexSet*& __cordl_internal_get_texSet() ;

constexpr void __cordl_internal_set_texSet(::DigitalOpus::MB::Core::MB_TexSet*  value) ;

/// @brief Method .ctor, addr 0x9dcea18, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* i___DigitalOpus__MB__Core__MB_TexSet_PipelineVariation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling(MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling(MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22783};

/// @brief Field texSet, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_TexSet*  ___texSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling, ___texSet) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationSomeTexturesUseDifferentMatTiling) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TexSet/PipelineVariationAllTexturesUseSameMatTiling
class CORDL_TYPE MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling : public ::System::Object {
public:
// Declarations
/// @brief Field texSet, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_texSet, put=__cordl_internal_set_texSet)) ::DigitalOpus::MB::Core::MB_TexSet*  texSet;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr operator  ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation*() noexcept;

/// @brief Method AdjustResultMaterialNonTextureProperties, addr 0x9dd0154, size 0x4, virtual true, abstract: false, final true
inline void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props) ;

/// @brief Method GetMaterialTilingRectForTextureBakerResults, addr 0x9dd00bc, size 0x98, virtual true, abstract: false, final true
inline ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex) ;

/// @brief Method GetRectsForTextureBakeResults, addr 0x9dcff20, size 0x90, virtual true, abstract: false, final true
inline void GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect) ;

static inline ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling* New_ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts) ;

/// @brief Method SetTilingTreatmentAndAdjustEncapsulatingSamplingRect, addr 0x9dcffb0, size 0x10c, virtual true, abstract: false, final true
inline void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment) ;

constexpr ::DigitalOpus::MB::Core::MB_TexSet* const& __cordl_internal_get_texSet() const;

constexpr ::DigitalOpus::MB::Core::MB_TexSet*& __cordl_internal_get_texSet() ;

constexpr void __cordl_internal_set_texSet(::DigitalOpus::MB::Core::MB_TexSet*  value) ;

/// @brief Method .ctor, addr 0x9dcf074, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::MB_TexSet*  ts) ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation"
constexpr ::DigitalOpus::MB::Core::MB_TexSet_PipelineVariation* i___DigitalOpus__MB__Core__MB_TexSet_PipelineVariation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling(MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling(MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22782};

/// @brief Field texSet, offset: 0x10, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB_TexSet*  ___texSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling, ___texSet) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet_PipelineVariationAllTexturesUseSameMatTiling) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TexSet/PipelineVariation
class CORDL_TYPE MB_TexSet_PipelineVariation {
public:
// Declarations
/// @brief Method AdjustResultMaterialNonTextureProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material*  resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  props) ;

/// @brief Method GetMaterialTilingRectForTextureBakerResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int32_t  materialIndex) ;

/// @brief Method GetRectsForTextureBakeResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetRectsForTextureBakeResults(::by_ref<::UnityEngine::Rect>  allPropsUseSameTiling_encapsulatingSamplingRect, ::by_ref<::UnityEngine::Rect>  propsUseDifferntTiling_obUVRect) ;

/// @brief Method SetTilingTreatmentAndAdjustEncapsulatingSamplingRect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  newTilingTreatment) ;

// Ctor Parameters [CppParam { name: "", ty: "MB_TexSet_PipelineVariation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TexSet_PipelineVariation(MB_TexSet_PipelineVariation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22781};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
