#pragma once
// IWYU pragma private; include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct Color;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Color);
DEFINE_IL2CPP_CLASS(::UnityEngine::Color, "UnityEngine", "Color");
// [NativeHeader("Runtime/Math/Color.h")]
// [DefaultMember("Item")]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
// [NativeClass("ColorRGBAf")]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Color
struct CORDL_TYPE Color {
public:
// Declarations
 __declspec(property(get=get_Item)) float_t  Item[];

 __declspec(property(get=get_gamma)) ::UnityEngine::Color  gamma;

 __declspec(property(get=get_linear)) ::UnityEngine::Color  linear;

 __declspec(property(get=get_maxColorComponent)) float_t  maxColorComponent;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Color>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Color>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0xb5c664c, size 0xd4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0xb5c6720, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Color  other) ;

/// @brief Method GetHashCode, addr 0xb5c65d0, size 0x7c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HSVToRGB, addr 0xb5c6db4, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HSVToRGB(float_t  H, float_t  S, float_t  V) ;

/// @brief Method HSVToRGB, addr 0xb5c6dbc, size 0x198, virtual false, abstract: false, final false
static inline ::UnityEngine::Color HSVToRGB(float_t  H, float_t  S, float_t  V, bool  hdr) ;

/// @brief Method Lerp, addr 0xb5c689c, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Color Lerp(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t) ;

/// @brief Method LerpUnclamped, addr 0xb5c68ec, size 0x38, virtual false, abstract: false, final false
static inline ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t) ;

/// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
/// @brief Method RGBMultiplied, addr 0xb5c6924, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Color RGBMultiplied(float_t  multiplier) ;

/// @brief Method RGBToHSV, addr 0xb5c6c04, size 0x140, virtual false, abstract: false, final false
static inline void RGBToHSV(::UnityEngine::Color  rgbColor, ::by_ref<float_t>  H, ::by_ref<float_t>  S, ::by_ref<float_t>  V) ;

/// @brief Method RGBToHSVHelper, addr 0xb5c6d44, size 0x70, virtual false, abstract: false, final false
static inline void RGBToHSVHelper(float_t  offset, float_t  dominantcolor, float_t  colorone, float_t  colortwo, ::by_ref<float_t>  H, ::by_ref<float_t>  S, ::by_ref<float_t>  V) ;

/// @brief Method ToString, addr 0xb5c637c, size 0x10, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb5c638c, size 0xc, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToString, addr 0xb5c6398, size 0x238, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0xb5c6368, size 0x14, virtual false, abstract: false, final false
inline void _ctor(float_t  r, float_t  g, float_t  b) ;

/// @brief Method .ctor, addr 0xb5c635c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  r, float_t  g, float_t  b, float_t  a) ;

/// @brief Method get_Item, addr 0xb5c6b34, size 0xd0, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_black, addr 0xb5c6f54, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_black() ;

/// @brief Method get_blue, addr 0xb5c6f68, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_blue() ;

/// @brief Method get_clear, addr 0xb5c6f7c, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_clear() ;

/// @brief Method get_cyan, addr 0xb5c6f90, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_cyan() ;

/// @brief Method get_gamma, addr 0xb5c6a28, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_gamma() ;

/// @brief Method get_gold, addr 0xb5c6fa4, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_gold() ;

/// @brief Method get_gray, addr 0xb5c6fbc, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_gray() ;

/// @brief Method get_gray3, addr 0xb5c6fe4, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_gray3() ;

/// @brief Method get_gray5, addr 0xb5c6ffc, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_gray5() ;

/// @brief Method get_green, addr 0xb5c7010, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_green() ;

/// @brief Method get_grey, addr 0xb5c6fd0, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_grey() ;

/// @brief Method get_linear, addr 0xb5c6940, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_linear() ;

/// @brief Method get_magenta, addr 0xb5c7024, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_magenta() ;

/// @brief Method get_maxColorComponent, addr 0xb5c6b10, size 0x1c, virtual false, abstract: false, final false
inline float_t get_maxColorComponent() ;

/// @brief Method get_red, addr 0xb5c7038, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_red() ;

/// @brief Method get_white, addr 0xb5c704c, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_white() ;

/// @brief Method get_yellow, addr 0xb5c7060, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_yellow() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Color>"
constexpr ::System::IEquatable_1<::UnityEngine::Color>* i___System__IEquatable_1___UnityEngine__Color_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Addition, addr 0xb5c67a0, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Addition(::UnityEngine::Color  a, ::UnityEngine::Color  b) ;

/// @brief Method op_Division, addr 0xb5c6808, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Division(::UnityEngine::Color  a, float_t  b) ;

/// @brief Method op_Equality, addr 0xb5c681c, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Color  lhs, ::UnityEngine::Color  rhs) ;

/// @brief Method op_Implicit, addr 0xb5c6b30, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::UnityEngine::Vector4  v) ;

/// @brief Method op_Implicit, addr 0xb5c6b2c, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::UnityEngine::Color  c) ;

/// @brief Method op_Inequality, addr 0xb5c685c, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Color  lhs, ::UnityEngine::Color  rhs) ;

/// @brief Method op_Multiply, addr 0xb5c67c8, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color  a, ::UnityEngine::Color  b) ;

/// @brief Method op_Multiply, addr 0xb5c67dc, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Multiply(::UnityEngine::Color  a, float_t  b) ;

/// @brief Method op_Multiply, addr 0xb5c67f0, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Multiply(float_t  b, ::UnityEngine::Color  a) ;

/// @brief Method op_Subtraction, addr 0xb5c67b4, size 0x14, virtual false, abstract: false, final false
static inline ::UnityEngine::Color op_Subtraction(::UnityEngine::Color  a, ::UnityEngine::Color  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Color() ;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Color(float_t  r, float_t  g, float_t  b, float_t  a) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14974};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field r, offset: 0x0, size: 0x4, def value: None
 float_t  r;

/// @brief Field g, offset: 0x4, size: 0x4, def value: None
 float_t  g;

/// @brief Field b, offset: 0x8, size: 0x4, def value: None
 float_t  b;

/// @brief Field a, offset: 0xc, size: 0x4, def value: None
 float_t  a;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Color, r) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, g) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, b) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Color, a) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Color) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
