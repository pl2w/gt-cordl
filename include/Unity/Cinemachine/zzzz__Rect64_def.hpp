#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Rect64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rect64)
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct Rect64;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::Rect64);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Rect64, "Unity.Cinemachine", "Rect64");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.Rect64
struct CORDL_TYPE Rect64 {
public:
// Declarations
 __declspec(property(get=get_Height, put=set_Height)) int64_t  Height;

 __declspec(property(get=get_Width, put=set_Width)) int64_t  Width;

/// @brief Method Contains, addr 0xaee7db0, size 0x3c, virtual false, abstract: false, final false
inline bool Contains(::Unity::Cinemachine::Point64  pt) ;

/// @brief Method Contains, addr 0xaee7dec, size 0x4c, virtual false, abstract: false, final false
inline bool Contains(::Unity::Cinemachine::Rect64  rec) ;

/// @brief Method IsEmpty, addr 0xaee7d54, size 0x2c, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method MidPoint, addr 0xaee7d80, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::Point64 MidPoint() ;

/// @brief Method .ctor, addr 0xaee7ce4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int64_t  l, int64_t  t, int64_t  r, int64_t  b) ;

/// @brief Method .ctor, addr 0xaee7cf0, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Rect64  rec) ;

/// @brief Method get_Height, addr 0xaee7d34, size 0x10, virtual false, abstract: false, final false
inline int64_t get_Height() ;

/// @brief Method get_Width, addr 0xaee7d14, size 0x10, virtual false, abstract: false, final false
inline int64_t get_Width() ;

/// @brief Method set_Height, addr 0xaee7d44, size 0x10, virtual false, abstract: false, final false
inline void set_Height(int64_t  value) ;

/// @brief Method set_Width, addr 0xaee7d24, size 0x10, virtual false, abstract: false, final false
inline void set_Width(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Rect64() ;

// Ctor Parameters [CppParam { name: "left", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "top", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "right", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottom", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr Rect64(int64_t  left, int64_t  top, int64_t  right, int64_t  bottom) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22496};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field left, offset: 0x0, size: 0x8, def value: None
 int64_t  left;

/// @brief Field top, offset: 0x8, size: 0x8, def value: None
 int64_t  top;

/// @brief Field right, offset: 0x10, size: 0x8, def value: None
 int64_t  right;

/// @brief Field bottom, offset: 0x18, size: 0x8, def value: None
 int64_t  bottom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::Rect64, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Rect64, top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Rect64, right) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::Rect64, bottom) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::Rect64) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
