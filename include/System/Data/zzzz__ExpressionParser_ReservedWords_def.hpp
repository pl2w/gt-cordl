#pragma once
// IWYU pragma private; include "System/Data/ExpressionParser_ReservedWords.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__Tokens_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionParser_ReservedWords)
namespace System::Data {
struct Tokens;
}
// Forward declare root types
namespace GlobalNamespace {
struct ExpressionParser_ReservedWords;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ExpressionParser_ReservedWords);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExpressionParser_ReservedWords, "System.Data", "ExpressionParser/ReservedWords");
// [IsReadOnly]
// Dependencies System.Data.Tokens
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Data.ExpressionParser/ReservedWords
struct CORDL_TYPE ExpressionParser_ReservedWords {
public:
// Declarations
/// @brief Method .ctor, addr 0xa9432ec, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  word, ::System::Data::Tokens  token, int32_t  op) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExpressionParser_ReservedWords() ;

// Ctor Parameters [CppParam { name: "_word", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_token", ty: "::System::Data::Tokens", modifiers: "", def_value: None, comment: None }, CppParam { name: "_op", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExpressionParser_ReservedWords(::StringW  _word, ::System::Data::Tokens  _token, int32_t  _op) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21017};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _word, offset: 0x0, size: 0x8, def value: None
 ::StringW  _word;

/// @brief Field _token, offset: 0x8, size: 0x4, def value: None
 ::System::Data::Tokens  _token;

/// @brief Field _op, offset: 0xc, size: 0x4, def value: None
 int32_t  _op;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExpressionParser_ReservedWords, _word) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionParser_ReservedWords, _token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExpressionParser_ReservedWords, _op) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExpressionParser_ReservedWords) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
