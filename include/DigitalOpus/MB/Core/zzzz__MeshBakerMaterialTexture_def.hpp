#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MeshBakerMaterialTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__DRect_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBakerMaterialTexture)
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MeshBakerMaterialTexture;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, "DigitalOpus.MB.Core", "MeshBakerMaterialTexture");
// Dependencies DigitalOpus.MB.Core.DRect, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MeshBakerMaterialTexture
class CORDL_TYPE MeshBakerMaterialTexture : public ::System::Object {
public:
// Declarations
/// @brief Field <isImportedAsNormalMap>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__isImportedAsNormalMap_k__BackingField, put=__cordl_internal_set__isImportedAsNormalMap_k__BackingField)) int32_t  _isImportedAsNormalMap_k__BackingField;

/// @brief Field <matTilingRect>k__BackingField, offset 0x40, size 0x20 
 __declspec(property(get=__cordl_internal_get__matTilingRect_k__BackingField, put=__cordl_internal_set__matTilingRect_k__BackingField)) ::DigitalOpus::MB::Core::DRect  _matTilingRect_k__BackingField;

/// @brief Field _t, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__t, put=__cordl_internal_set__t)) ::UnityW<::UnityEngine::Texture2D>  _t;

/// @brief Field encapsulatingSamplingRect, offset 0x20, size 0x20 
 __declspec(property(get=__cordl_internal_get_encapsulatingSamplingRect, put=__cordl_internal_set_encapsulatingSamplingRect)) ::DigitalOpus::MB::Core::DRect  encapsulatingSamplingRect;

 __declspec(property(get=get_height)) int32_t  height;

 __declspec(property(get=get_isImportedAsNormalMap, put=set_isImportedAsNormalMap)) int32_t  isImportedAsNormalMap;

 __declspec(property(get=get_isNull)) bool  isNull;

 __declspec(property(get=get_matTilingRect, put=set_matTilingRect)) ::DigitalOpus::MB::Core::DRect  matTilingRect;

/// @brief Field readyToBuildAtlases, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_readyToBuildAtlases, put=setStaticF_readyToBuildAtlases)) bool  readyToBuildAtlases;

 __declspec(property(put=set_t)) ::UnityW<::UnityEngine::Texture2D>  t;

/// @brief Field texelDensity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_texelDensity, put=__cordl_internal_set_texelDensity)) float_t  texelDensity;

 __declspec(property(get=get_width)) int32_t  width;

/// @brief Method AreTexturesEqual, addr 0x9dce330, size 0x70, virtual false, abstract: false, final false
inline bool AreTexturesEqual(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*  b) ;

/// @brief Method GetEncapsulatingSamplingRect, addr 0x9dce044, size 0xc, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect GetEncapsulatingSamplingRect() ;

/// @brief Method GetTexName, addr 0x9dce294, size 0x9c, virtual false, abstract: false, final false
inline ::StringW GetTexName() ;

/// @brief Method GetTexture2D, addr 0x9dce05c, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetTexture2D() ;

static inline ::DigitalOpus::MB::Core::MeshBakerMaterialTexture* New_ctor(::UnityEngine::Texture*  tx, ::UnityEngine::Vector2  matTilingOffset, ::UnityEngine::Vector2  matTilingScale, float_t  texelDens, int32_t  isImportedAsNormalMap) ;

/// @brief Method SetEncapsulatingSamplingRect, addr 0x9dce050, size 0xc, virtual false, abstract: false, final false
inline void SetEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TexSet*  ts, ::DigitalOpus::MB::Core::DRect  r) ;

constexpr int32_t const& __cordl_internal_get__isImportedAsNormalMap_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__isImportedAsNormalMap_k__BackingField() ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get__matTilingRect_k__BackingField() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get__matTilingRect_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__t() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__t() ;

constexpr ::DigitalOpus::MB::Core::DRect const& __cordl_internal_get_encapsulatingSamplingRect() const;

constexpr ::DigitalOpus::MB::Core::DRect& __cordl_internal_get_encapsulatingSamplingRect() ;

constexpr float_t const& __cordl_internal_get_texelDensity() const;

constexpr float_t& __cordl_internal_get_texelDensity() ;

constexpr void __cordl_internal_set__isImportedAsNormalMap_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__matTilingRect_k__BackingField(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set__t(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_encapsulatingSamplingRect(::DigitalOpus::MB::Core::DRect  value) ;

constexpr void __cordl_internal_set_texelDensity(float_t  value) ;

/// @brief Method .ctor, addr 0x9dcde90, size 0x1b4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Texture*  tx, ::UnityEngine::Vector2  matTilingOffset, ::UnityEngine::Vector2  matTilingScale, float_t  texelDens, int32_t  isImportedAsNormalMap) ;

static inline bool getStaticF_readyToBuildAtlases() ;

/// @brief Method get_height, addr 0x9dce208, size 0x8c, virtual false, abstract: false, final false
inline int32_t get_height() ;

/// [CompilerGenerated]
/// @brief Method get_isImportedAsNormalMap, addr 0x9dcde80, size 0x8, virtual false, abstract: false, final false
inline int32_t get_isImportedAsNormalMap() ;

/// @brief Method get_isNull, addr 0x9dce11c, size 0x60, virtual false, abstract: false, final false
inline bool get_isNull() ;

/// [CompilerGenerated]
/// @brief Method get_matTilingRect, addr 0x9dcde68, size 0xc, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DRect get_matTilingRect() ;

/// @brief Method get_width, addr 0x9dce17c, size 0x8c, virtual false, abstract: false, final false
inline int32_t get_width() ;

static inline void setStaticF_readyToBuildAtlases(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isImportedAsNormalMap, addr 0x9dcde88, size 0x8, virtual false, abstract: false, final false
inline void set_isImportedAsNormalMap(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_matTilingRect, addr 0x9dcde74, size 0xc, virtual false, abstract: false, final false
inline void set_matTilingRect(::DigitalOpus::MB::Core::DRect  value) ;

/// @brief Method set_t, addr 0x9dcde60, size 0x8, virtual false, abstract: false, final false
inline void set_t(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshBakerMaterialTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshBakerMaterialTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshBakerMaterialTexture(MeshBakerMaterialTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshBakerMaterialTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshBakerMaterialTexture(MeshBakerMaterialTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22778};

/// @brief Field _t, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____t;

/// @brief Field texelDensity, offset: 0x18, size: 0x4, def value: None
 float_t  ___texelDensity;

/// @brief Field encapsulatingSamplingRect, offset: 0x20, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ___encapsulatingSamplingRect;

/// [CompilerGenerated]
/// @brief Field <matTilingRect>k__BackingField, offset: 0x40, size: 0x20, def value: None
 ::DigitalOpus::MB::Core::DRect  ____matTilingRect_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isImportedAsNormalMap>k__BackingField, offset: 0x60, size: 0x4, def value: None
 int32_t  ____isImportedAsNormalMap_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture, ____t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture, ___texelDensity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture, ___encapsulatingSamplingRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture, ____matTilingRect_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture, ____isImportedAsNormalMap_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MeshBakerMaterialTexture) == 0x68, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
