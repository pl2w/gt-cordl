#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MaterialAndUVRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB_TextureTilingTreatment_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_MaterialAndUVRect)
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
class MB_MaterialAndUVRect;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_MaterialAndUVRect*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_MaterialAndUVRect*, "", "MB_MaterialAndUVRect");
// Dependencies DigitalOpus.MB.Core.MB_TextureTilingTreatment, System.Object, UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_MaterialAndUVRect
class CORDL_TYPE MB_MaterialAndUVRect : public ::System::Object {
public:
// Declarations
/// @brief Field allPropsUseSameTiling, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_allPropsUseSameTiling, put=__cordl_internal_set_allPropsUseSameTiling)) bool  allPropsUseSameTiling;

/// @brief Field allPropsUseSameTiling_samplingEncapsulatinRect, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_allPropsUseSameTiling_samplingEncapsulatinRect, put=__cordl_internal_set_allPropsUseSameTiling_samplingEncapsulatinRect)) ::UnityEngine::Rect  allPropsUseSameTiling_samplingEncapsulatinRect;

/// @brief Field allPropsUseSameTiling_sourceMaterialTiling, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_allPropsUseSameTiling_sourceMaterialTiling, put=__cordl_internal_set_allPropsUseSameTiling_sourceMaterialTiling)) ::UnityEngine::Rect  allPropsUseSameTiling_sourceMaterialTiling;

/// @brief Field atlasRect, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_atlasRect, put=__cordl_internal_set_atlasRect)) ::UnityEngine::Rect  atlasRect;

/// @brief Field material, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field objectsThatUse, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsThatUse, put=__cordl_internal_set_objectsThatUse)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsThatUse;

/// @brief Field propsUseDifferntTiling_srcUVsamplingRect, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_propsUseDifferntTiling_srcUVsamplingRect, put=__cordl_internal_set_propsUseDifferntTiling_srcUVsamplingRect)) ::UnityEngine::Rect  propsUseDifferntTiling_srcUVsamplingRect;

/// @brief Field srcObjName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_srcObjName, put=__cordl_internal_set_srcObjName)) ::StringW  srcObjName;

/// @brief Field textureArraySliceIdx, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_textureArraySliceIdx, put=__cordl_internal_set_textureArraySliceIdx)) int32_t  textureArraySliceIdx;

/// @brief Field tilingTreatment, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_tilingTreatment, put=__cordl_internal_set_tilingTreatment)) ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  tilingTreatment;

/// @brief Method Equals, addr 0x9d730b0, size 0x160, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetEncapsulatingRect, addr 0x9d73210, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetEncapsulatingRect() ;

/// @brief Method GetHashCode, addr 0x9d7305c, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMaterialTilingRect, addr 0x9d7325c, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetMaterialTilingRect() ;

static inline ::GlobalNamespace::MB_MaterialAndUVRect* New_ctor(::UnityEngine::Material*  mat, ::UnityEngine::Rect  destRect, bool  allPropsUseSameTiling, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatingRect, ::UnityEngine::Rect  srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment, ::StringW  objName) ;

constexpr bool const& __cordl_internal_get_allPropsUseSameTiling() const;

constexpr bool& __cordl_internal_get_allPropsUseSameTiling() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_allPropsUseSameTiling_samplingEncapsulatinRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_allPropsUseSameTiling_samplingEncapsulatinRect() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_allPropsUseSameTiling_sourceMaterialTiling() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_allPropsUseSameTiling_sourceMaterialTiling() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_atlasRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_atlasRect() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsThatUse() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsThatUse() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_propsUseDifferntTiling_srcUVsamplingRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_propsUseDifferntTiling_srcUVsamplingRect() ;

constexpr ::StringW const& __cordl_internal_get_srcObjName() const;

constexpr ::StringW& __cordl_internal_get_srcObjName() ;

constexpr int32_t const& __cordl_internal_get_textureArraySliceIdx() const;

constexpr int32_t& __cordl_internal_get_textureArraySliceIdx() ;

constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const& __cordl_internal_get_tilingTreatment() const;

constexpr ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& __cordl_internal_get_tilingTreatment() ;

constexpr void __cordl_internal_set_allPropsUseSameTiling(bool  value) ;

constexpr void __cordl_internal_set_allPropsUseSameTiling_samplingEncapsulatinRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_allPropsUseSameTiling_sourceMaterialTiling(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_atlasRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_objectsThatUse(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_propsUseDifferntTiling_srcUVsamplingRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_srcObjName(::StringW  value) ;

constexpr void __cordl_internal_set_textureArraySliceIdx(int32_t  value) ;

constexpr void __cordl_internal_set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment  value) ;

/// @brief Method .ctor, addr 0x9d72f70, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  mat, ::UnityEngine::Rect  destRect, bool  allPropsUseSameTiling, ::UnityEngine::Rect  sourceMaterialTiling, ::UnityEngine::Rect  samplingEncapsulatingRect, ::UnityEngine::Rect  srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  treatment, ::StringW  objName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_MaterialAndUVRect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_MaterialAndUVRect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_MaterialAndUVRect(MB_MaterialAndUVRect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_MaterialAndUVRect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_MaterialAndUVRect(MB_MaterialAndUVRect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22558};

/// @brief Field material, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field atlasRect, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rect  ___atlasRect;

/// @brief Field srcObjName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___srcObjName;

/// @brief Field textureArraySliceIdx, offset: 0x30, size: 0x4, def value: None
 int32_t  ___textureArraySliceIdx;

/// @brief Field allPropsUseSameTiling, offset: 0x34, size: 0x1, def value: None
 bool  ___allPropsUseSameTiling;

/// [FormerlySerializedAs("sourceMaterialTiling")]
/// @brief Field allPropsUseSameTiling_sourceMaterialTiling, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Rect  ___allPropsUseSameTiling_sourceMaterialTiling;

/// [FormerlySerializedAs("samplingEncapsulatinRect")]
/// @brief Field allPropsUseSameTiling_samplingEncapsulatinRect, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Rect  ___allPropsUseSameTiling_samplingEncapsulatinRect;

/// @brief Field propsUseDifferntTiling_srcUVsamplingRect, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Rect  ___propsUseDifferntTiling_srcUVsamplingRect;

/// @brief Field objectsThatUse, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsThatUse;

/// @brief Field tilingTreatment, offset: 0x70, size: 0x4, def value: None
 ::DigitalOpus::MB::Core::MB_TextureTilingTreatment  ___tilingTreatment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___atlasRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___srcObjName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___textureArraySliceIdx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___allPropsUseSameTiling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___allPropsUseSameTiling_sourceMaterialTiling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___allPropsUseSameTiling_samplingEncapsulatinRect) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___propsUseDifferntTiling_srcUVsamplingRect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___objectsThatUse) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_MaterialAndUVRect, ___tilingTreatment) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_MaterialAndUVRect) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
