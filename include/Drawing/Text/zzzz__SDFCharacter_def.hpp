#pragma once
// IWYU pragma private; include "Drawing/Text/SDFCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDFCharacter)
namespace Unity::Mathematics {
struct float2;
}
// Forward declare root types
namespace Drawing::Text {
struct SDFCharacter;
}
// Write type traits
MARK_VAL_T(::Drawing::Text::SDFCharacter);
DEFINE_IL2CPP_CLASS(::Drawing::Text::SDFCharacter, "Drawing.Text", "SDFCharacter");
// Dependencies Unity.Mathematics.float2
namespace Drawing::Text {
// Is value type: true
// CS Name: Drawing.Text.SDFCharacter
struct CORDL_TYPE SDFCharacter {
public:
// Declarations
 __declspec(property(get=get_uvBottomLeft)) ::Unity::Mathematics::float2  uvBottomLeft;

 __declspec(property(get=get_uvBottomRight)) ::Unity::Mathematics::float2  uvBottomRight;

 __declspec(property(get=get_uvTopLeft)) ::Unity::Mathematics::float2  uvTopLeft;

 __declspec(property(get=get_uvTopRight)) ::Unity::Mathematics::float2  uvTopRight;

 __declspec(property(get=get_vertexBottomLeft)) ::Unity::Mathematics::float2  vertexBottomLeft;

 __declspec(property(get=get_vertexBottomRight)) ::Unity::Mathematics::float2  vertexBottomRight;

 __declspec(property(get=get_vertexTopLeft)) ::Unity::Mathematics::float2  vertexTopLeft;

 __declspec(property(get=get_vertexTopRight)) ::Unity::Mathematics::float2  vertexTopRight;

/// @brief Method .ctor, addr 0x55dc43c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(char16_t  codePoint, int32_t  x, int32_t  y, int32_t  width, int32_t  height, int32_t  originX, int32_t  originY, int32_t  advance, int32_t  textureWidth, int32_t  textureHeight, float_t  defaultSize) ;

/// @brief Method get_uvBottomLeft, addr 0x55dc404, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_uvBottomLeft() ;

/// @brief Method get_uvBottomRight, addr 0x55dc410, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_uvBottomRight() ;

/// @brief Method get_uvTopLeft, addr 0x55dc3f4, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_uvTopLeft() ;

/// @brief Method get_uvTopRight, addr 0x55dc3fc, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_uvTopRight() ;

/// @brief Method get_vertexBottomLeft, addr 0x55dc428, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_vertexBottomLeft() ;

/// @brief Method get_vertexBottomRight, addr 0x55dc434, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_vertexBottomRight() ;

/// @brief Method get_vertexTopLeft, addr 0x55dc418, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_vertexTopLeft() ;

/// @brief Method get_vertexTopRight, addr 0x55dc420, size 0x8, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_vertexTopRight() ;

// Ctor Parameters []
// @brief default ctor
constexpr SDFCharacter() ;

// Ctor Parameters [CppParam { name: "codePoint", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvtopleft", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvbottomright", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "vtopleft", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "vbottomright", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "advance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SDFCharacter(char16_t  codePoint, ::Unity::Mathematics::float2  uvtopleft, ::Unity::Mathematics::float2  uvbottomright, ::Unity::Mathematics::float2  vtopleft, ::Unity::Mathematics::float2  vbottomright, float_t  advance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field codePoint, offset: 0x0, size: 0x2, def value: None
 char16_t  codePoint;

/// @brief Field uvtopleft, offset: 0x4, size: 0x8, def value: None
 ::Unity::Mathematics::float2  uvtopleft;

/// @brief Field uvbottomright, offset: 0xc, size: 0x8, def value: None
 ::Unity::Mathematics::float2  uvbottomright;

/// @brief Field vtopleft, offset: 0x14, size: 0x8, def value: None
 ::Unity::Mathematics::float2  vtopleft;

/// @brief Field vbottomright, offset: 0x1c, size: 0x8, def value: None
 ::Unity::Mathematics::float2  vbottomright;

/// @brief Field advance, offset: 0x24, size: 0x4, def value: None
 float_t  advance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Text::SDFCharacter, codePoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFCharacter, uvtopleft) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFCharacter, uvbottomright) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFCharacter, vtopleft) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFCharacter, vbottomright) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Drawing::Text::SDFCharacter, advance) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Drawing::Text::SDFCharacter) == 0x28, "Size mismatch!");

} // namespace end def Drawing::Text
