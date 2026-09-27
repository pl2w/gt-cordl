#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_TexturePackerRegular.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_NodeType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_TexturePacker_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB2_TexturePackerRegular)
namespace DigitalOpus::MB::Core {
class AtlasPackingResult;
}
namespace DigitalOpus::MB::Core {
struct AtlasPadding;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePackerRegular_Node;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePackerRegular_ProbeResult;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_Image;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePacker_PixRect;
}
namespace GlobalNamespace {
struct MB2_TexturePacker_NodeType;
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
class MB2_TexturePackerRegular;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePackerRegular_Node;
}
namespace DigitalOpus::MB::Core {
class MB2_TexturePackerRegular_ProbeResult;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePackerRegular*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*);
MARK_REF_T(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, "DigitalOpus.MB.Core", "MB2_TexturePackerRegular");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*, "DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node");
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*, "DigitalOpus.MB.Core", "MB2_TexturePackerRegular/ProbeResult");
// Dependencies DigitalOpus.MB.Core.MB2_TexturePacker
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePackerRegular
class CORDL_TYPE MB2_TexturePackerRegular : public ::DigitalOpus::MB::Core::MB2_TexturePacker {
public:
// Declarations
using Node = ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node;

using ProbeResult = ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult;

/// @brief Field atlasY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_atlasY, put=__cordl_internal_set_atlasY)) int32_t  atlasY;

/// @brief Field bestRoot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestRoot, put=__cordl_internal_set_bestRoot)) ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  bestRoot;

/// @brief Method DrawGizmos, addr 0x9dc1da8, size 0x80, virtual false, abstract: false, final false
inline void DrawGizmos() ;

/// @brief Method GetExtent, addr 0x9dc288c, size 0xc4, virtual false, abstract: false, final false
inline void GetExtent(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::by_ref<int32_t>  x, ::by_ref<int32_t>  y) ;

/// @brief Method GetRects, addr 0x9dc2de8, size 0x158, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  atPadding) ;

/// @brief Method GetRects, addr 0x9dc2f40, size 0x1cc, virtual true, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, bool  doMultiAtlas) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular* New_ctor() ;

/// @brief Method ProbeMultiAtlas, addr 0x9dc299c, size 0x420, virtual false, abstract: false, final false
inline bool ProbeMultiAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>  imgsToAdd, int32_t  idealAtlasW, int32_t  idealAtlasH, float_t  imgArea, int32_t  maxAtlasDimX, int32_t  maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  pr) ;

/// @brief Method ProbeSingleAtlas, addr 0x9dc1e28, size 0x5f4, virtual false, abstract: false, final false
inline bool ProbeSingleAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>  imgsToAdd, int32_t  idealAtlasW, int32_t  idealAtlasH, float_t  imgArea, int32_t  maxAtlasDimX, int32_t  maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  pr) ;

/// @brief Method StepWidthHeight, addr 0x9dc2dbc, size 0x2c, virtual false, abstract: false, final false
inline int32_t StepWidthHeight(int32_t  oldVal, int32_t  step, int32_t  maxDim) ;

/// @brief Method _GetRectsMultiAtlas, addr 0x9dc310c, size 0x123c, virtual false, abstract: false, final false
inline ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> _GetRectsMultiAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionPassedX, int32_t  maxDimensionPassedY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY) ;

/// @brief Method _GetRectsSingleAtlas, addr 0x9dc4348, size 0x1930, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*  paddings, int32_t  maxDimensionX, int32_t  maxDimensionY, int32_t  minImageSizeX, int32_t  minImageSizeY, int32_t  masterImageSizeX, int32_t  masterImageSizeY, int32_t  recursionDepth) ;

constexpr int32_t const& __cordl_internal_get_atlasY() const;

constexpr int32_t& __cordl_internal_get_atlasY() ;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* const& __cordl_internal_get_bestRoot() const;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*& __cordl_internal_get_bestRoot() ;

constexpr void __cordl_internal_set_atlasY(int32_t  value) ;

constexpr void __cordl_internal_set_bestRoot(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  value) ;

/// @brief Method .ctor, addr 0x9dc5cb8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method drawGizmosNode, addr 0x9dc1bc0, size 0x1e8, virtual false, abstract: false, final false
static inline void drawGizmosNode(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r) ;

/// @brief Method flattenTree, addr 0x9dc1ac0, size 0x100, virtual false, abstract: false, final false
static inline void flattenTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker_Image*>*  putHere) ;

/// @brief Method printTree, addr 0x9dc1884, size 0x23c, virtual false, abstract: false, final false
static inline void printTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, ::StringW  spc) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePackerRegular() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePackerRegular(MB2_TexturePackerRegular && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePackerRegular(MB2_TexturePackerRegular const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22763};

/// @brief Field bestRoot, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  ___bestRoot;

/// @brief Field atlasY, offset: 0x20, size: 0x4, def value: None
 int32_t  ___atlasY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular, ___bestRoot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular, ___atlasY) == 0x20, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular) == 0x28, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies DigitalOpus.MB.Core.MB2_TexturePacker::NodeType, System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node
class CORDL_TYPE MB2_TexturePackerRegular_Node : public ::System::Object {
public:
// Declarations
/// @brief Field bestRoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestRoot, put=__cordl_internal_set_bestRoot)) ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  bestRoot;

/// @brief Field child, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_child, put=__cordl_internal_set_child)) ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>  child;

/// @brief Field img, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_img, put=__cordl_internal_set_img)) ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  img;

/// @brief Field isFullAtlas, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_isFullAtlas, put=__cordl_internal_set_isFullAtlas)) ::GlobalNamespace::MB2_TexturePacker_NodeType  isFullAtlas;

/// @brief Field r, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*  r;

/// @brief Method Insert, addr 0x9dc2494, size 0x3f8, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* Insert(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  im, bool  handed) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* New_ctor(::GlobalNamespace::MB2_TexturePacker_NodeType  rootType) ;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* const& __cordl_internal_get_bestRoot() const;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*& __cordl_internal_get_bestRoot() ;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*> const& __cordl_internal_get_child() const;

constexpr ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>& __cordl_internal_get_child() ;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_Image* const& __cordl_internal_get_img() const;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*& __cordl_internal_get_img() ;

constexpr ::GlobalNamespace::MB2_TexturePacker_NodeType const& __cordl_internal_get_isFullAtlas() const;

constexpr ::GlobalNamespace::MB2_TexturePacker_NodeType& __cordl_internal_get_isFullAtlas() ;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect* const& __cordl_internal_get_r() const;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*& __cordl_internal_get_r() ;

constexpr void __cordl_internal_set_bestRoot(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  value) ;

constexpr void __cordl_internal_set_child(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>  value) ;

constexpr void __cordl_internal_set_img(::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  value) ;

constexpr void __cordl_internal_set_isFullAtlas(::GlobalNamespace::MB2_TexturePacker_NodeType  value) ;

constexpr void __cordl_internal_set_r(::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*  value) ;

/// @brief Method .ctor, addr 0x9dc241c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::MB2_TexturePacker_NodeType  rootType) ;

/// @brief Method isLeaf, addr 0x9dc5d18, size 0x48, virtual false, abstract: false, final false
inline bool isLeaf() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePackerRegular_Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular_Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePackerRegular_Node(MB2_TexturePackerRegular_Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular_Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePackerRegular_Node(MB2_TexturePackerRegular_Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22762};

/// @brief Field isFullAtlas, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::MB2_TexturePacker_NodeType  ___isFullAtlas;

/// @brief Field child, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*>  ___child;

/// @brief Field r, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_TexturePacker_PixRect*  ___r;

/// @brief Field img, offset: 0x28, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_TexturePacker_Image*  ___img;

/// @brief Field bestRoot, offset: 0x30, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult*  ___bestRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node, ___isFullAtlas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node, ___child) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node, ___r) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node, ___img) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node, ___bestRoot) == 0x30, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node) == 0x38, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult
class CORDL_TYPE MB2_TexturePackerRegular_ProbeResult : public ::System::Object {
public:
// Declarations
/// @brief Field efficiency, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_efficiency, put=__cordl_internal_set_efficiency)) float_t  efficiency;

/// @brief Field h, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) int32_t  h;

/// @brief Field largerOrEqualToMaxDim, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_largerOrEqualToMaxDim, put=__cordl_internal_set_largerOrEqualToMaxDim)) bool  largerOrEqualToMaxDim;

/// @brief Field numAtlases, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_numAtlases, put=__cordl_internal_set_numAtlases)) int32_t  numAtlases;

/// @brief Field outH, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_outH, put=__cordl_internal_set_outH)) int32_t  outH;

/// @brief Field outW, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_outW, put=__cordl_internal_set_outW)) int32_t  outW;

/// @brief Field root, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  root;

/// @brief Field squareness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_squareness, put=__cordl_internal_set_squareness)) float_t  squareness;

/// @brief Field totalAtlasArea, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalAtlasArea, put=__cordl_internal_set_totalAtlasArea)) float_t  totalAtlasArea;

/// @brief Field w, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_w, put=__cordl_internal_set_w)) int32_t  w;

/// @brief Method GetScore, addr 0x9dc5c80, size 0x38, virtual false, abstract: false, final false
inline float_t GetScore(bool  doPowerOfTwoScore) ;

static inline ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult* New_ctor() ;

/// @brief Method PrintTree, addr 0x9dc5cd0, size 0x48, virtual false, abstract: false, final false
inline void PrintTree() ;

/// @brief Method Set, addr 0x9dc2950, size 0x4c, virtual false, abstract: false, final false
inline void Set(int32_t  ww, int32_t  hh, int32_t  outw, int32_t  outh, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  r, bool  fits, float_t  e, float_t  sq) ;

constexpr float_t const& __cordl_internal_get_efficiency() const;

constexpr float_t& __cordl_internal_get_efficiency() ;

constexpr int32_t const& __cordl_internal_get_h() const;

constexpr int32_t& __cordl_internal_get_h() ;

constexpr bool const& __cordl_internal_get_largerOrEqualToMaxDim() const;

constexpr bool& __cordl_internal_get_largerOrEqualToMaxDim() ;

constexpr int32_t const& __cordl_internal_get_numAtlases() const;

constexpr int32_t& __cordl_internal_get_numAtlases() ;

constexpr int32_t const& __cordl_internal_get_outH() const;

constexpr int32_t& __cordl_internal_get_outH() ;

constexpr int32_t const& __cordl_internal_get_outW() const;

constexpr int32_t& __cordl_internal_get_outW() ;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node* const& __cordl_internal_get_root() const;

constexpr ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*& __cordl_internal_get_root() ;

constexpr float_t const& __cordl_internal_get_squareness() const;

constexpr float_t& __cordl_internal_get_squareness() ;

constexpr float_t const& __cordl_internal_get_totalAtlasArea() const;

constexpr float_t& __cordl_internal_get_totalAtlasArea() ;

constexpr int32_t const& __cordl_internal_get_w() const;

constexpr int32_t& __cordl_internal_get_w() ;

constexpr void __cordl_internal_set_efficiency(float_t  value) ;

constexpr void __cordl_internal_set_h(int32_t  value) ;

constexpr void __cordl_internal_set_largerOrEqualToMaxDim(bool  value) ;

constexpr void __cordl_internal_set_numAtlases(int32_t  value) ;

constexpr void __cordl_internal_set_outH(int32_t  value) ;

constexpr void __cordl_internal_set_outW(int32_t  value) ;

constexpr void __cordl_internal_set_root(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  value) ;

constexpr void __cordl_internal_set_squareness(float_t  value) ;

constexpr void __cordl_internal_set_totalAtlasArea(float_t  value) ;

constexpr void __cordl_internal_set_w(int32_t  value) ;

/// @brief Method .ctor, addr 0x9dc5c78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_TexturePackerRegular_ProbeResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular_ProbeResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_TexturePackerRegular_ProbeResult(MB2_TexturePackerRegular_ProbeResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_TexturePackerRegular_ProbeResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_TexturePackerRegular_ProbeResult(MB2_TexturePackerRegular_ProbeResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22761};

/// @brief Field w, offset: 0x10, size: 0x4, def value: None
 int32_t  ___w;

/// @brief Field h, offset: 0x14, size: 0x4, def value: None
 int32_t  ___h;

/// @brief Field outW, offset: 0x18, size: 0x4, def value: None
 int32_t  ___outW;

/// @brief Field outH, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___outH;

/// @brief Field root, offset: 0x20, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB2_TexturePackerRegular_Node*  ___root;

/// @brief Field largerOrEqualToMaxDim, offset: 0x28, size: 0x1, def value: None
 bool  ___largerOrEqualToMaxDim;

/// @brief Field efficiency, offset: 0x2c, size: 0x4, def value: None
 float_t  ___efficiency;

/// @brief Field squareness, offset: 0x30, size: 0x4, def value: None
 float_t  ___squareness;

/// @brief Field totalAtlasArea, offset: 0x34, size: 0x4, def value: None
 float_t  ___totalAtlasArea;

/// @brief Field numAtlases, offset: 0x38, size: 0x4, def value: None
 int32_t  ___numAtlases;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___w) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___h) == 0x14, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___outW) == 0x18, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___outH) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___largerOrEqualToMaxDim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___efficiency) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___squareness) == 0x30, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___totalAtlasArea) == 0x34, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult, ___numAtlases) == 0x38, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular_ProbeResult) == 0x40, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
