#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString_FormatOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Burst/zzzz__BurstString_NumberFormatKind_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstString_FormatOptions)
namespace GlobalNamespace {
struct BurstString_NumberFormatKind;
}
// Forward declare root types
namespace GlobalNamespace {
struct BurstString_FormatOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstString_FormatOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstString_FormatOptions, "Unity.Burst", "BurstString/FormatOptions");
// Dependencies Unity.Burst.BurstString::NumberFormatKind
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Burst.BurstString/FormatOptions
struct CORDL_TYPE BurstString_FormatOptions {
public:
// Declarations
 __declspec(property(get=get_Uppercase)) bool  Uppercase;

/// @brief Method GetBase, addr 0xae82918, size 0x18, virtual false, abstract: false, final false
inline int32_t GetBase() ;

/// @brief Method ToString, addr 0xae84fe0, size 0x308, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xae83128, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BurstString_NumberFormatKind  kind, int8_t  alignAndSize, uint8_t  specifier, bool  lowercase) ;

/// @brief Method get_Uppercase, addr 0xae82930, size 0x10, virtual false, abstract: false, final false
inline bool get_Uppercase() ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstString_FormatOptions() ;

// Ctor Parameters [CppParam { name: "Kind", ty: "::GlobalNamespace::BurstString_NumberFormatKind", modifiers: "", def_value: None, comment: None }, CppParam { name: "AlignAndSize", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Specifier", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Lowercase", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BurstString_FormatOptions(::GlobalNamespace::BurstString_NumberFormatKind  Kind, int8_t  AlignAndSize, uint8_t  Specifier, bool  Lowercase) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Kind, offset: 0x0, size: 0x1, def value: None
 ::GlobalNamespace::BurstString_NumberFormatKind  Kind;

/// @brief Field AlignAndSize, offset: 0x1, size: 0x1, def value: None
 int8_t  AlignAndSize;

/// @brief Field Specifier, offset: 0x2, size: 0x1, def value: None
 uint8_t  Specifier;

/// @brief Field Lowercase, offset: 0x3, size: 0x1, def value: None
 bool  Lowercase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstString_FormatOptions, Kind) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_FormatOptions, AlignAndSize) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_FormatOptions, Specifier) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstString_FormatOptions, Lowercase) == 0x3, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstString_FormatOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
