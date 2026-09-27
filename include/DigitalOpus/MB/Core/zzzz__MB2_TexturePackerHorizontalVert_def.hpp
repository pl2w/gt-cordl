#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePackerHorizontalVert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePackerHorizontalVert_TexturePackingOrientation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TexturePackerHorizontalVert)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_Image;
}
namespace GlobalNamespace {
struct MB2_TexturePackerHorizontalVert_TexturePackingOrientation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB2_TexturePackerHorizontalVert;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert*, "DigitalOpus.MB.Core", "MB2_TexturePackerHorizontalVert");
// Dependencies DigitalOpus.MB.Core.MB2_TexturePacker, DigitalOpus.MB.Core.MB2_TexturePackerHorizontalVert::TexturePackingOrientation
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePackerHorizontalVert
class CORDL_TYPE MB2_TexturePackerHorizontalVert : public ::DigitalOpus::MB::Core::MB2_TexturePacker {
public:
// Declarations
using TexturePackingOrientation = ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation;

/// @brief Field packingOrientation, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_packingOrientation, put=__cordl_internal_set_packingOrientation)) ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation  packingOrientation;

/// @brief Field stretchImagesToEdges, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_stretchImagesToEdges, put=__cordl_internal_set_stretchImagesToEdges)) bool  stretchImagesToEdges;

/// @brief Method GetRects, addr 0x9dc5d60, size 0x15c, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  padding) ;

/// @brief Method GetRects, addr 0x9dc5ebc, size 0x1e0, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert* New_ctor() ;

/// @brief Method PopLargestThatFits, addr 0x9dc83dc, size 0x134, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* PopLargestThatFits(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  images, int32_t  spaceRemaining, int32_t  maxDim, bool  emptyAtlas) ;

/// @brief Method _GetRectsMultiAtlasHorizontal, addr 0x9dc6b64, size 0xab8, virtual false, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> _GetRectsMultiAtlasHorizontal(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY) ;

/// @brief Method _GetRectsMultiAtlasVertical, addr 0x9dc609c, size 0xac8, virtual false, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> _GetRectsMultiAtlasVertical(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY) ;

/// @brief Method _GetRectsSingleAtlas, addr 0x9dc761c, size 0xdc0, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, int32_t  recursionDepth) ;

constexpr ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation const& __cordl_internal_get_packingOrientation() const;

constexpr ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation& __cordl_internal_get_packingOrientation() ;

constexpr bool const& __cordl_internal_get_stretchImagesToEdges() const;

constexpr bool& __cordl_internal_get_stretchImagesToEdges() ;

constexpr void __cordl_internal_set_packingOrientation(::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation  value) ;

constexpr void __cordl_internal_set_stretchImagesToEdges(bool  value) ;

/// @brief Method .ctor, addr 0x9dc8510, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePackerHorizontalVert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerHorizontalVert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePackerHorizontalVert(MB2_TexturePackerHorizontalVert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerHorizontalVert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePackerHorizontalVert(MB2_TexturePackerHorizontalVert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22765};

/// @brief Field packingOrientation, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TexturePackerHorizontalVert_TexturePackingOrientation  ___packingOrientation;

/// @brief Field stretchImagesToEdges, offset: 0x1c, size: 0x1, def value: None
 bool  ___stretchImagesToEdges;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert, ___packingOrientation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert, ___stretchImagesToEdges) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerHorizontalVert) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
