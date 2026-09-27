#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyValueStringPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyValueStringPair)
// Forward declare root types
namespace GlobalNamespace {
struct KeyValueStringPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KeyValueStringPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KeyValueStringPair, "", "KeyValueStringPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KeyValueStringPair
struct CORDL_TYPE KeyValueStringPair {
public:
// Declarations
/// @brief Method .ctor, addr 0x57f00a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyValueStringPair() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr KeyValueStringPair(::StringW  Key, ::StringW  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 ::StringW  Key;

/// [Multiline]
/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 ::StringW  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KeyValueStringPair, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KeyValueStringPair, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KeyValueStringPair) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
