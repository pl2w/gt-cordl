#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/MemoryHelpers_BitRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryHelpers_BitRegion)
// Forward declare root types
namespace GlobalNamespace {
struct MemoryHelpers_BitRegion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MemoryHelpers_BitRegion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MemoryHelpers_BitRegion, "UnityEngine.InputSystem.Utilities", "MemoryHelpers/BitRegion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.MemoryHelpers/BitRegion
struct CORDL_TYPE MemoryHelpers_BitRegion {
public:
// Declarations
 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Method Overlap, addr 0xaf3fe48, size 0xb4, virtual false, abstract: false, final false
inline ::GlobalNamespace::MemoryHelpers_BitRegion Overlap(::GlobalNamespace::MemoryHelpers_BitRegion  other) ;

/// @brief Method .ctor, addr 0xaf3fe34, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint32_t  bitOffset, uint32_t  sizeInBits) ;

/// @brief Method .ctor, addr 0xaf3fe3c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint32_t  byteOffset, uint32_t  bitOffset, uint32_t  sizeInBits) ;

/// @brief Method get_isEmpty, addr 0xaf3fe24, size 0x10, virtual false, abstract: false, final false
inline bool get_isEmpty() ;

// Ctor Parameters []
// @brief default ctor
constexpr MemoryHelpers_BitRegion() ;

// Ctor Parameters [CppParam { name: "bitOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sizeInBits", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr MemoryHelpers_BitRegion(uint32_t  bitOffset, uint32_t  sizeInBits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field bitOffset, offset: 0x0, size: 0x4, def value: None
 uint32_t  bitOffset;

/// @brief Field sizeInBits, offset: 0x4, size: 0x4, def value: None
 uint32_t  sizeInBits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MemoryHelpers_BitRegion, bitOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MemoryHelpers_BitRegion, sizeInBits) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MemoryHelpers_BitRegion) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
