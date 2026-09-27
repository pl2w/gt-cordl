#pragma once
// IWYU pragma private; include "Fusion/UTF32Tools_ConversionResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UTF32Tools_ConversionResult)
// Forward declare root types
namespace GlobalNamespace {
struct UTF32Tools_ConversionResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UTF32Tools_ConversionResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UTF32Tools_ConversionResult, "Fusion", "UTF32Tools/ConversionResult");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.UTF32Tools/ConversionResult
struct CORDL_TYPE UTF32Tools_ConversionResult {
public:
// Declarations
/// @brief Method .ctor, addr 0x5f40788, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  words, int32_t  characters) ;

// Ctor Parameters []
// @brief default ctor
constexpr UTF32Tools_ConversionResult() ;

// Ctor Parameters [CppParam { name: "CharacterCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CodePointCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UTF32Tools_ConversionResult(int32_t  CharacterCount, int32_t  CodePointCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field CharacterCount, offset: 0x0, size: 0x4, def value: None
 int32_t  CharacterCount;

/// @brief Field CodePointCount, offset: 0x4, size: 0x4, def value: None
 int32_t  CodePointCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UTF32Tools_ConversionResult, CharacterCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF32Tools_ConversionResult, CodePointCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UTF32Tools_ConversionResult) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
