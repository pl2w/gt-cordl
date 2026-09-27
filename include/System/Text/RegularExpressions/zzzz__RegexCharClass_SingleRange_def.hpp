#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass_SingleRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RegexCharClass_SingleRange)
// Forward declare root types
namespace GlobalNamespace {
struct RegexCharClass_SingleRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RegexCharClass_SingleRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RegexCharClass_SingleRange, "System.Text.RegularExpressions", "RegexCharClass/SingleRange");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Text.RegularExpressions.RegexCharClass/SingleRange
struct CORDL_TYPE RegexCharClass_SingleRange {
public:
// Declarations
/// @brief Method .ctor, addr 0xad11c30, size 0xc, virtual false, abstract: false, final false
inline void _ctor(char16_t  first, char16_t  last) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegexCharClass_SingleRange() ;

// Ctor Parameters [CppParam { name: "First", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Last", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr RegexCharClass_SingleRange(char16_t  First, char16_t  Last) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9982};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field First, offset: 0x0, size: 0x2, def value: None
 char16_t  First;

/// @brief Field Last, offset: 0x2, size: 0x2, def value: None
 char16_t  Last;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RegexCharClass_SingleRange, First) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RegexCharClass_SingleRange, Last) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RegexCharClass_SingleRange) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
