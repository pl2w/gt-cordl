#pragma once
// IWYU pragma private; include "Unity/Cinemachine/RectD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RectD)
namespace Unity::Cinemachine {
struct PointD;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct RectD;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::RectD);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::RectD, "Unity.Cinemachine", "RectD");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.RectD
struct CORDL_TYPE RectD {
public:
// Declarations
 __declspec(property(get=get_Height, put=set_Height)) double_t  Height;

 __declspec(property(get=get_Width, put=set_Width)) double_t  Width;

/// @brief Method IsEmpty, addr 0xaee7e90, size 0x2c, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method MidPoint, addr 0xaee7ebc, size 0x18, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PointD MidPoint() ;

/// @brief Method PtIsInside, addr 0xaee7ed4, size 0x3c, virtual false, abstract: false, final false
inline bool PtIsInside(::Unity::Cinemachine::PointD  pt) ;

/// @brief Method .ctor, addr 0xaee7e38, size 0xc, virtual false, abstract: false, final false
inline void _ctor(double_t  l, double_t  t, double_t  r, double_t  b) ;

/// @brief Method .ctor, addr 0xaee7e44, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::RectD  rec) ;

/// @brief Method get_Height, addr 0xaee7e70, size 0x10, virtual false, abstract: false, final false
inline double_t get_Height() ;

/// @brief Method get_Width, addr 0xaee7e50, size 0x10, virtual false, abstract: false, final false
inline double_t get_Width() ;

/// @brief Method set_Height, addr 0xaee7e80, size 0x10, virtual false, abstract: false, final false
inline void set_Height(double_t  value) ;

/// @brief Method set_Width, addr 0xaee7e60, size 0x10, virtual false, abstract: false, final false
inline void set_Width(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RectD() ;

// Ctor Parameters [CppParam { name: "left", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "top", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottom", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr RectD(double_t  left, double_t  top, double_t  right, double_t  bottom) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field left, offset: 0x0, size: 0x8, def value: None
 double_t  left;

/// @brief Field top, offset: 0x8, size: 0x8, def value: None
 double_t  top;

/// @brief Field right, offset: 0x10, size: 0x8, def value: None
 double_t  right;

/// @brief Field bottom, offset: 0x18, size: 0x8, def value: None
 double_t  bottom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::RectD, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::RectD, top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::RectD, right) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::RectD, bottom) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::RectD) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
