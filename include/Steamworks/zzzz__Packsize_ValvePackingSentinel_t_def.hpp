#pragma once
// IWYU pragma private; include "Steamworks/Packsize_ValvePackingSentinel_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Packsize_ValvePackingSentinel_t)
// Forward declare root types
namespace GlobalNamespace {
struct Packsize_ValvePackingSentinel_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Packsize_ValvePackingSentinel_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Packsize_ValvePackingSentinel_t, "Steamworks", "Packsize/ValvePackingSentinel_t");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Steamworks.Packsize/ValvePackingSentinel_t
#pragma pack(push, 4)
struct CORDL_TYPE Packsize_ValvePackingSentinel_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Packsize_ValvePackingSentinel_t() ;

// Ctor Parameters [CppParam { name: "m_u32", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_u64", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_u16", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_d", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr Packsize_ValvePackingSentinel_t(uint32_t  m_u32, uint64_t  m_u64, uint16_t  m_u16, double_t  m_d) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_u32, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_u32;

/// @brief Field m_u64, offset: 0x4, size: 0x8, def value: None
 uint64_t  m_u64;

/// @brief Field m_u16, offset: 0xc, size: 0x2, def value: None
 uint16_t  m_u16;

/// @brief Field m_d, offset: 0x10, size: 0x8, def value: None
 double_t  m_d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Packsize_ValvePackingSentinel_t, m_u32) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Packsize_ValvePackingSentinel_t, m_u64) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Packsize_ValvePackingSentinel_t, m_u16) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Packsize_ValvePackingSentinel_t, m_d) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Packsize_ValvePackingSentinel_t) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
