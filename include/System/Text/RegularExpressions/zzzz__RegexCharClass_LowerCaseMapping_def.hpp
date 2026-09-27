#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCharClass_LowerCaseMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegexCharClass_LowerCaseMapping)
// Forward declare root types
namespace GlobalNamespace {
struct RegexCharClass_LowerCaseMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RegexCharClass_LowerCaseMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RegexCharClass_LowerCaseMapping, "System.Text.RegularExpressions", "RegexCharClass/LowerCaseMapping");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
struct CORDL_TYPE RegexCharClass_LowerCaseMapping {
public:
// Declarations
/// @brief Method .ctor, addr 0xad18d18, size 0x10, virtual false, abstract: false, final false
inline void _ctor(char16_t  chMin, char16_t  chMax, int32_t  lcOp, int32_t  data) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegexCharClass_LowerCaseMapping() ;

// Ctor Parameters [CppParam { name: "ChMin", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ChMax", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LcOp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Data", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RegexCharClass_LowerCaseMapping(char16_t  ChMin, char16_t  ChMax, int32_t  LcOp, int32_t  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ChMin, offset: 0x0, size: 0x2, def value: None
 char16_t  ChMin;

/// @brief Field ChMax, offset: 0x2, size: 0x2, def value: None
 char16_t  ChMax;

/// @brief Field LcOp, offset: 0x4, size: 0x4, def value: None
 int32_t  LcOp;

/// @brief Field Data, offset: 0x8, size: 0x4, def value: None
 int32_t  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RegexCharClass_LowerCaseMapping, ChMin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RegexCharClass_LowerCaseMapping, ChMax) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RegexCharClass_LowerCaseMapping, LcOp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RegexCharClass_LowerCaseMapping, Data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RegexCharClass_LowerCaseMapping) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
