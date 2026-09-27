#pragma once
// IWYU pragma private; include "GorillaUtil/StringTable_StringPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StringTable_StringPair)
// Forward declare root types
namespace GlobalNamespace {
struct StringTable_StringPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StringTable_StringPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringTable_StringPair, "GorillaUtil", "StringTable/StringPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaUtil.StringTable/StringPair
struct CORDL_TYPE StringTable_StringPair {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StringTable_StringPair() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr StringTable_StringPair(::StringW  Key, ::StringW  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 ::StringW  Key;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 ::StringW  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringTable_StringPair, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StringTable_StringPair, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringTable_StringPair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
