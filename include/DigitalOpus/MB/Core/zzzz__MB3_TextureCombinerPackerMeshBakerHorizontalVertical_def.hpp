#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerHorizontalVertical.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_TextureCombinerPackerMeshBaker_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_TextureCombinerPackerMeshBakerHorizontalVertical)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace DigitalOpus::MB::Core {
struct MB2_LogLevel;
}
namespace DigitalOpus::MB::Core {
struct MB2_PackingAlgorithmEnum;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPipeline_TexturePipelineData;
}
namespace DigitalOpus::MB::Core {
class MB_TexSet;
}
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
namespace GlobalNamespace {
struct MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline;
}
namespace DigitalOpus::MB::Core {
class MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*);
MARK_REF_T(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerHorizontalVertical");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerHorizontalVertical/HorizontalPipeline");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerHorizontalVertical/IPipeline");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerHorizontalVertical/VerticalPipeline");
// Dependencies DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker, DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical::AtlasDirection
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerHorizontalVertical : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker {
public:
// Declarations
using HorizontalPipeline = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline;

using IPipeline = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline;

using VerticalPipeline = ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline;

using AtlasDirection = ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection;

/// @brief Field _atlasDirection, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__atlasDirection, put=__cordl_internal_set__atlasDirection)) ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  _atlasDirection;

/// @brief Method CalculateAtlasRectangles, addr 0x9ddbfd4, size 0x1228, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_TexturePipelineData*  data, bool  doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL) ;

/// @brief Method MergeAtlasPackingResultStackBonA, addr 0x9ddd20c, size 0x438, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::AtlasPackingResult* MergeAtlasPackingResultStackBonA(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxWidthDim, int32_t  maxHeightDim, bool  stretchBToAtlasWidth, ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*  pipeline) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical* New_ctor(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  ad) ;

/// @brief Method TestStackRectanglesHorizontal, addr 0x9ddd644, size 0x8c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesHorizontal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxHeightDim, int32_t  maxWidthDim, bool  stretchBToAtlasWidth) ;

/// @brief Method TestStackRectanglesVertical, addr 0x9ddd6d0, size 0x8c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::AtlasPackingResult* TestStackRectanglesVertical(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, int32_t  maxHeightDim, int32_t  maxWidthDim, bool  stretchBToAtlasWidth) ;

constexpr ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection const& __cordl_internal_get__atlasDirection() const;

constexpr ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection& __cordl_internal_get__atlasDirection() ;

constexpr void __cordl_internal_set__atlasDirection(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  value) ;

/// @brief Method .ctor, addr 0x9ddbfac, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  ad) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerHorizontalVertical() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerHorizontalVertical(MB3_TextureCombinerPackerMeshBakerHorizontalVertical && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerHorizontalVertical(MB3_TextureCombinerPackerMeshBakerHorizontalVertical const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22813};

/// @brief Field _atlasDirection, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_AtlasDirection  ____atlasDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical, ____atlasDirection) == 0x10, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical) == 0x18, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/HorizontalPipeline
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*() noexcept;

/// @brief Method GetEdge2EdgeTreatment, addr 0x9dddbac, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment GetEdge2EdgeTreatment() ;

/// @brief Method GetExtraRoomForRegularAtlas, addr 0x9dddd54, size 0x10, virtual true, abstract: false, final true
inline void GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight) ;

/// @brief Method GetPackingAlg, addr 0x9ddda60, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GetPackingAlg() ;

/// @brief Method InitializeAtlasPadding, addr 0x9dddbb4, size 0x8, virtual true, abstract: false, final true
inline void InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue) ;

/// @brief Method MergeAtlasPackingResultStackBonAInternal, addr 0x9dddbbc, size 0x198, virtual true, abstract: false, final true
inline void MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline* New_ctor() ;

/// @brief Method SortTexSetIntoBins, addr 0x9ddda68, size 0x144, virtual true, abstract: false, final true
inline void SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight) ;

/// @brief Method .ctor, addr 0x9ddd1fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline* i___DigitalOpus__MB__Core__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline(MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline(MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_HorizontalPipeline) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/VerticalPipeline
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr operator  ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline*() noexcept;

/// @brief Method GetEdge2EdgeTreatment, addr 0x9ddd8a8, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment GetEdge2EdgeTreatment() ;

/// @brief Method GetExtraRoomForRegularAtlas, addr 0x9ddda50, size 0x10, virtual true, abstract: false, final true
inline void GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight) ;

/// @brief Method GetPackingAlg, addr 0x9ddd75c, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GetPackingAlg() ;

/// @brief Method InitializeAtlasPadding, addr 0x9ddd8b0, size 0x8, virtual true, abstract: false, final true
inline void InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue) ;

/// @brief Method MergeAtlasPackingResultStackBonAInternal, addr 0x9ddd8b8, size 0x198, virtual true, abstract: false, final true
inline void MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY) ;

static inline ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline* New_ctor() ;

/// @brief Method SortTexSetIntoBins, addr 0x9ddd764, size 0x144, virtual true, abstract: false, final true
inline void SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight) ;

/// @brief Method .ctor, addr 0x9ddd204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline"
constexpr ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline* i___DigitalOpus__MB__Core__MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline(MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline(MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22810};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical_VerticalPipeline) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/IPipeline
class CORDL_TYPE MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline {
public:
// Declarations
/// @brief Method GetEdge2EdgeTreatment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_TextureTilingTreatment GetEdge2EdgeTreatment() ;

/// @brief Method GetExtraRoomForRegularAtlas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetExtraRoomForRegularAtlas(int32_t  usedHorizontalVertWidth, int32_t  usedHorizontalVertHeight, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight, ::by_ref<int32_t>  atlasRegularMaxWidth, ::by_ref<int32_t>  atlasRegularMaxHeight) ;

/// @brief Method GetPackingAlg, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GetPackingAlg() ;

/// @brief Method InitializeAtlasPadding, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void InitializeAtlasPadding(::by_ref<::DigitalOpus::MB::Core::AtlasPadding>  padding, int32_t  paddingValue) ;

/// @brief Method MergeAtlasPackingResultStackBonAInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult*  a, ::DigitalOpus::MB::Core::AtlasPackingResult*  b, ::by_ref<::UnityEngine::Rect>  AatlasToFinal, ::by_ref<::UnityEngine::Rect>  BatlasToFinal, bool  stretchBToAtlasWidth, int32_t  maxWidthDim, int32_t  maxHeightDim, ::by_ref<int32_t>  atlasX, ::by_ref<int32_t>  atlasY) ;

/// @brief Method SortTexSetIntoBins, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet*  texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*  regular, int32_t  maxAtlasWidth, int32_t  maxAtlasHeight) ;

// Ctor Parameters [CppParam { name: "", ty: "MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline(MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
