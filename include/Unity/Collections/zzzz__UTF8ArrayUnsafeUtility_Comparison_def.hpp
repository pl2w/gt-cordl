#pragma once
// IWYU pragma private; include "Unity/Collections/UTF8ArrayUnsafeUtility_Comparison.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8ArrayUnsafeUtility_Comparison)
namespace GlobalNamespace {
struct Unicode_Rune;
}
namespace Unity::Collections {
struct ConversionError;
}
// Forward declare root types
namespace GlobalNamespace {
struct UTF8ArrayUnsafeUtility_Comparison;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison, "Unity.Collections", "UTF8ArrayUnsafeUtility/Comparison");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.UTF8ArrayUnsafeUtility/Comparison
struct CORDL_TYPE UTF8ArrayUnsafeUtility_Comparison {
public:
// Declarations
/// @brief Method .ctor, addr 0xaf077d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Unicode_Rune  runeA, ::Unity::Collections::ConversionError  errorA, ::GlobalNamespace::Unicode_Rune  runeB, ::Unity::Collections::ConversionError  errorB) ;

// Ctor Parameters []
// @brief default ctor
constexpr UTF8ArrayUnsafeUtility_Comparison() ;

// Ctor Parameters [CppParam { name: "terminates", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "result", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UTF8ArrayUnsafeUtility_Comparison(bool  terminates, int32_t  result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field terminates, offset: 0x0, size: 0x1, def value: None
 bool  terminates;

/// @brief Field result, offset: 0x4, size: 0x4, def value: None
 int32_t  result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison, terminates) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison, result) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UTF8ArrayUnsafeUtility_Comparison) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
