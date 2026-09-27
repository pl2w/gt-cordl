#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/DRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DRect)
namespace DigitalOpus::MB::Core {
struct DVector2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct DRect;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::DRect);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::DRect, "DigitalOpus.MB.Core", "DRect");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.DRect
struct CORDL_TYPE DRect {
public:
// Declarations
 __declspec(property(get=get_center)) ::DigitalOpus::MB::Core::DVector2  center;

 __declspec(property(get=get_max)) ::UnityEngine::Vector2  max;

 __declspec(property(get=get_maxD)) ::DigitalOpus::MB::Core::DVector2  maxD;

 __declspec(property(get=get_min)) ::UnityEngine::Vector2  min;

 __declspec(property(get=get_minD)) ::DigitalOpus::MB::Core::DVector2  minD;

 __declspec(property(get=get_size)) ::UnityEngine::Vector2  size;

/// @brief Method Encloses, addr 0x9dbcdb4, size 0x54, virtual false, abstract: false, final false
inline bool Encloses(::DigitalOpus::MB::Core::DRect  smallToTestIfFits) ;

/// @brief Method Equals, addr 0x9dbc9ec, size 0xbc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Expand, addr 0x9dbcd8c, size 0x28, virtual false, abstract: false, final false
inline void Expand(float_t  amt) ;

/// @brief Method GetHashCode, addr 0x9dbce08, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRect, addr 0x9dbc96c, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetRect() ;

/// @brief Method ToString, addr 0x9dbcbcc, size 0x1c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x9dbc91c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  o, ::UnityEngine::Vector2  s) ;

/// @brief Method .ctor, addr 0x9dbc938, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::DigitalOpus::MB::Core::DRect  r) ;

/// @brief Method .ctor, addr 0x9dbc900, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rect  r) ;

/// @brief Method .ctor, addr 0x9dbc960, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  xx, double_t  yy, double_t  w, double_t  h) ;

/// @brief Method .ctor, addr 0x9dbc944, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(float_t  xx, float_t  yy, float_t  w, float_t  h) ;

/// @brief Method get_center, addr 0x9dbc9d4, size 0x18, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DVector2 get_center() ;

/// @brief Method get_max, addr 0x9dbc9b0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_max() ;

/// @brief Method get_maxD, addr 0x9dbc990, size 0x10, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DVector2 get_maxD() ;

/// @brief Method get_min, addr 0x9dbc9a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_min() ;

/// @brief Method get_minD, addr 0x9dbc988, size 0x8, virtual false, abstract: false, final false
inline ::DigitalOpus::MB::Core::DVector2 get_minD() ;

/// @brief Method get_size, addr 0x9dbc9c4, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_size() ;

/// @brief Method op_Equality, addr 0x9dbcaa8, size 0x90, virtual false, abstract: false, final false
static inline bool op_Equality(::DigitalOpus::MB::Core::DRect  a, ::DigitalOpus::MB::Core::DRect  b) ;

/// @brief Method op_Inequality, addr 0x9dbcb38, size 0x94, virtual false, abstract: false, final false
static inline bool op_Inequality(::DigitalOpus::MB::Core::DRect  a, ::DigitalOpus::MB::Core::DRect  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr DRect() ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr DRect(double_t  x, double_t  y, double_t  width, double_t  height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22733};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field x, offset: 0x0, size: 0x8, def value: None
 double_t  x;

/// @brief Field y, offset: 0x8, size: 0x8, def value: None
 double_t  y;

/// @brief Field width, offset: 0x10, size: 0x8, def value: None
 double_t  width;

/// @brief Field height, offset: 0x18, size: 0x8, def value: None
 double_t  height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::DRect, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::DRect, y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::DRect, width) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::DRect, height) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::DRect) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
