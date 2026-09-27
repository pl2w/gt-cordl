#pragma once
// IWYU pragma private; include "Drawing/LabelAlignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LabelAlignment)
// Forward declare root types
namespace Drawing {
struct LabelAlignment;
}
// Write type traits
MARK_VAL_T(::Drawing::LabelAlignment);
DEFINE_IL2CPP_CLASS(::Drawing::LabelAlignment, "Drawing", "LabelAlignment");
// Dependencies Unity.Mathematics.float2
namespace Drawing {
// Is value type: true
// CS Name: Drawing.LabelAlignment
struct CORDL_TYPE LabelAlignment {
public:
// Declarations
/// @brief Field BottomCenter, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_BottomCenter, put=setStaticF_BottomCenter)) ::Drawing::LabelAlignment  BottomCenter;

/// @brief Field BottomLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_BottomLeft, put=setStaticF_BottomLeft)) ::Drawing::LabelAlignment  BottomLeft;

/// @brief Field BottomRight, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_BottomRight, put=setStaticF_BottomRight)) ::Drawing::LabelAlignment  BottomRight;

/// @brief Field Center, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Center, put=setStaticF_Center)) ::Drawing::LabelAlignment  Center;

/// @brief Field MiddleLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MiddleLeft, put=setStaticF_MiddleLeft)) ::Drawing::LabelAlignment  MiddleLeft;

/// @brief Field MiddleRight, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_MiddleRight, put=setStaticF_MiddleRight)) ::Drawing::LabelAlignment  MiddleRight;

/// @brief Field TopCenter, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TopCenter, put=setStaticF_TopCenter)) ::Drawing::LabelAlignment  TopCenter;

/// @brief Field TopLeft, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TopLeft, put=setStaticF_TopLeft)) ::Drawing::LabelAlignment  TopLeft;

/// @brief Field TopRight, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_TopRight, put=setStaticF_TopRight)) ::Drawing::LabelAlignment  TopRight;

static inline ::Drawing::LabelAlignment getStaticF_BottomCenter() ;

static inline ::Drawing::LabelAlignment getStaticF_BottomLeft() ;

static inline ::Drawing::LabelAlignment getStaticF_BottomRight() ;

static inline ::Drawing::LabelAlignment getStaticF_Center() ;

static inline ::Drawing::LabelAlignment getStaticF_MiddleLeft() ;

static inline ::Drawing::LabelAlignment getStaticF_MiddleRight() ;

static inline ::Drawing::LabelAlignment getStaticF_TopCenter() ;

static inline ::Drawing::LabelAlignment getStaticF_TopLeft() ;

static inline ::Drawing::LabelAlignment getStaticF_TopRight() ;

static inline void setStaticF_BottomCenter(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_BottomLeft(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_BottomRight(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_Center(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_MiddleLeft(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_MiddleRight(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_TopCenter(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_TopLeft(::Drawing::LabelAlignment  value) ;

static inline void setStaticF_TopRight(::Drawing::LabelAlignment  value) ;

/// @brief Method withPixelOffset, addr 0x55a81f4, size 0x18, virtual false, abstract: false, final false
inline ::Drawing::LabelAlignment withPixelOffset(float_t  x, float_t  y) ;

// Ctor Parameters []
// @brief default ctor
constexpr LabelAlignment() ;

// Ctor Parameters [CppParam { name: "relativePivot", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "pixelOffset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }]
constexpr LabelAlignment(::Unity::Mathematics::float2  relativePivot, ::Unity::Mathematics::float2  pixelOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field relativePivot, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  relativePivot;

/// @brief Field pixelOffset, offset: 0x8, size: 0x8, def value: None
 ::Unity::Mathematics::float2  pixelOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::LabelAlignment, relativePivot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::LabelAlignment, pixelOffset) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Drawing::LabelAlignment) == 0x10, "Size mismatch!");

} // namespace end def Drawing
