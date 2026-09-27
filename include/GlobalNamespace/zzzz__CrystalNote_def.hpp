#pragma once
// IWYU pragma private; include "GlobalNamespace/CrystalNote.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrystalNote)
// Forward declare root types
namespace GlobalNamespace {
struct CrystalNote;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrystalNote);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrystalNote, "", "CrystalNote");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CrystalNote
struct CORDL_TYPE CrystalNote {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CrystalNote_Unwrapped
enum struct __CrystalNote_Unwrapped : int32_t {
__E_C = static_cast<int32_t>(0x0),
__E_D = static_cast<int32_t>(0x1),
__E_E = static_cast<int32_t>(0x2),
__E_F = static_cast<int32_t>(0x3),
__E_G = static_cast<int32_t>(0x4),
__E_A = static_cast<int32_t>(0x5),
__E_B = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CrystalNote_Unwrapped () const noexcept {
return static_cast<__CrystalNote_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CrystalNote() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CrystalNote(int32_t  value__) noexcept;

/// @brief Field A value: I32(5)
static ::GlobalNamespace::CrystalNote const A;

/// @brief Field B value: I32(6)
static ::GlobalNamespace::CrystalNote const B;

/// @brief Field C value: I32(0)
static ::GlobalNamespace::CrystalNote const C;

/// @brief Field D value: I32(1)
static ::GlobalNamespace::CrystalNote const D;

/// @brief Field E value: I32(2)
static ::GlobalNamespace::CrystalNote const E;

/// @brief Field F value: I32(3)
static ::GlobalNamespace::CrystalNote const F;

/// @brief Field G value: I32(4)
static ::GlobalNamespace::CrystalNote const G;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrystalNote, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrystalNote) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
