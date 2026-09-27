#pragma once
// IWYU pragma private; include "VYaml/Parser/Utf8YamlTokenizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__SequenceReader_1_def.hpp"
#include "VYaml/Parser/zzzz__ITokenContent_def.hpp"
#include "VYaml/Parser/zzzz__Marker_def.hpp"
#include "VYaml/Parser/zzzz__Token_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8YamlTokenizer)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace VYaml::Internal {
template<typename T>
class ExpandBuffer_1;
}
namespace VYaml::Internal {
template<typename T>
class InsertionQueue_1;
}
namespace VYaml::Internal {
struct LineBreakState;
}
namespace VYaml::Parser {
struct Marker;
}
namespace VYaml::Parser {
class Scalar;
}
namespace VYaml::Parser {
struct SimpleKeyState;
}
namespace VYaml::Parser {
struct TokenType;
}
namespace VYaml::Parser {
struct Token;
}
// Forward declare root types
namespace VYaml::Parser {
struct Utf8YamlTokenizer;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::Utf8YamlTokenizer);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Utf8YamlTokenizer, "VYaml.Parser", "Utf8YamlTokenizer");
// [NullableContext(1)]
// [Nullable(0)]
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies System.Buffers.SequenceReader`1<T>, VYaml.Parser.ITokenContent, VYaml.Parser.Marker, VYaml.Parser.Token
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.Utf8YamlTokenizer
struct CORDL_TYPE Utf8YamlTokenizer {
public:
// Declarations
 __declspec(property(get=get_CurrentMark)) ::VYaml::Parser::Marker  CurrentMark;

 __declspec(property(get=get_CurrentTokenType)) ::VYaml::Parser::TokenType  CurrentTokenType;

/// @brief Field indentsBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_indentsBufferStatic, put=setStaticF_indentsBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<int32_t>*  indentsBufferStatic;

/// @brief Field lineBreaksBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lineBreaksBufferStatic, put=setStaticF_lineBreaksBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<uint8_t>*  lineBreaksBufferStatic;

/// @brief Field simpleKeyBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_simpleKeyBufferStatic, put=setStaticF_simpleKeyBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  simpleKeyBufferStatic;

/// @brief Field tokensBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tokensBufferStatic, put=setStaticF_tokensBufferStatic)) ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  tokensBufferStatic;

/// @brief Method Advance, addr 0xb963918, size 0x110, virtual false, abstract: false, final false
inline void Advance(int32_t  offset) ;

/// @brief Method ConsumeAnchor, addr 0xb95e75c, size 0x380, virtual false, abstract: false, final false
inline void ConsumeAnchor(bool  alias) ;

/// @brief Method ConsumeBlockEntry, addr 0xb95e0c8, size 0x1e0, virtual false, abstract: false, final false
inline void ConsumeBlockEntry() ;

/// @brief Method ConsumeBlockScalarBreaks, addr 0xb96359c, size 0x37c, virtual false, abstract: false, final false
inline void ConsumeBlockScalarBreaks(::by_ref<int32_t>  blockIndent, ::by_ref<::VYaml::Internal::ExpandBuffer_1<uint8_t>*>  blockLineBreaks) ;

/// @brief Method ConsumeBlockScaler, addr 0xb95f280, size 0x9a8, virtual false, abstract: false, final false
inline void ConsumeBlockScaler(bool  literal) ;

/// @brief Method ConsumeBom, addr 0xb9616ac, size 0x1fc, virtual false, abstract: false, final false
inline void ConsumeBom() ;

/// @brief Method ConsumeComplexKeyStart, addr 0xb95e2a8, size 0x1c8, virtual false, abstract: false, final false
inline void ConsumeComplexKeyStart() ;

/// @brief Method ConsumeDirective, addr 0xb95d36c, size 0x63c, virtual false, abstract: false, final false
inline void ConsumeDirective() ;

/// @brief Method ConsumeDirectiveName, addr 0xb9618a8, size 0x24c, virtual false, abstract: false, final false
inline void ConsumeDirectiveName(::VYaml::Parser::Scalar*  result) ;

/// @brief Method ConsumeDocumentIndicator, addr 0xb95dc0c, size 0x130, virtual false, abstract: false, final false
inline void ConsumeDocumentIndicator(::VYaml::Parser::TokenType  tokenType) ;

/// @brief Method ConsumeFlowCollectionEnd, addr 0xb95de70, size 0x130, virtual false, abstract: false, final false
inline void ConsumeFlowCollectionEnd(::VYaml::Parser::TokenType  tokenType) ;

/// @brief Method ConsumeFlowCollectionStart, addr 0xb95dd3c, size 0x134, virtual false, abstract: false, final false
inline void ConsumeFlowCollectionStart(::VYaml::Parser::TokenType  tokenType) ;

/// @brief Method ConsumeFlowEntryStart, addr 0xb95dfa0, size 0x128, virtual false, abstract: false, final false
inline void ConsumeFlowEntryStart() ;

/// @brief Method ConsumeFlowScaler, addr 0xb95fc28, size 0x1128, virtual false, abstract: false, final false
inline void ConsumeFlowScaler(bool  singleQuote) ;

/// @brief Method ConsumeLineBreaks, addr 0xb96219c, size 0xe4, virtual false, abstract: false, final false
inline ::VYaml::Internal::LineBreakState ConsumeLineBreaks() ;

/// @brief Method ConsumeMoreTokens, addr 0xb95c408, size 0xe8, virtual false, abstract: false, final false
inline void ConsumeMoreTokens() ;

/// @brief Method ConsumeNextToken, addr 0xb95c718, size 0x618, virtual false, abstract: false, final false
inline void ConsumeNextToken() ;

/// @brief Method ConsumePlainScalar, addr 0xb960d50, size 0x888, virtual false, abstract: false, final false
inline void ConsumePlainScalar() ;

/// @brief Method ConsumeStreamEnd, addr 0xb95d238, size 0x134, virtual false, abstract: false, final false
inline void ConsumeStreamEnd() ;

/// @brief Method ConsumeStreamStart, addr 0xb95cd30, size 0x1f4, virtual false, abstract: false, final false
inline void ConsumeStreamStart() ;

/// @brief Method ConsumeTag, addr 0xb95eadc, size 0x7a4, virtual false, abstract: false, final false
inline void ConsumeTag() ;

/// @brief Method ConsumeTagDirectiveValue, addr 0xb961d0c, size 0x490, virtual false, abstract: false, final false
inline void ConsumeTagDirectiveValue() ;

/// @brief Method ConsumeTagHandle, addr 0xb962450, size 0x418, virtual false, abstract: false, final false
inline void ConsumeTagHandle(bool  directive, ::VYaml::Parser::Scalar*  buf) ;

/// @brief Method ConsumeTagPrefix, addr 0xb962868, size 0x2a0, virtual false, abstract: false, final false
inline void ConsumeTagPrefix(::VYaml::Parser::Scalar*  prefix) ;

/// @brief Method ConsumeUriEscapes, addr 0xb963068, size 0x360, virtual false, abstract: false, final false
inline int32_t ConsumeUriEscapes() ;

/// @brief Method ConsumeValueStart, addr 0xb95e470, size 0x2ec, virtual false, abstract: false, final false
inline void ConsumeValueStart() ;

/// @brief Method ConsumeVersionDirectiveNumber, addr 0xb962280, size 0x1c8, virtual false, abstract: false, final false
inline int32_t ConsumeVersionDirectiveNumber() ;

/// @brief Method ConsumeVersionDirectiveValue, addr 0xb961af4, size 0x218, virtual false, abstract: false, final false
inline void ConsumeVersionDirectiveValue() ;

/// @brief Method DecreaseFlowLevel, addr 0xb963b4c, size 0xc4, virtual false, abstract: false, final false
inline void DecreaseFlowLevel() ;

/// @brief Method IncreaseFlowLevel, addr 0xb963a28, size 0x124, virtual false, abstract: false, final false
inline void IncreaseFlowLevel() ;

/// [IsReadOnly]
/// @brief Method IsEmptyNext, addr 0xb95d9a8, size 0x264, virtual false, abstract: false, final false
inline bool IsEmptyNext(int32_t  offset) ;

/// @brief Method Read, addr 0xb95c2e0, size 0x128, virtual false, abstract: false, final false
inline bool Read() ;

/// @brief Method RemoveSimpleKeyCandidate, addr 0xb9615d8, size 0xd4, virtual false, abstract: false, final false
inline void RemoveSimpleKeyCandidate() ;

/// @brief Method RollIndent, addr 0xb962c50, size 0x224, virtual false, abstract: false, final false
inline void RollIndent(int32_t  colTo, /* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Token>  nextToken, int32_t  insertNumber) ;

/// @brief Method SaveSimpleKeyCandidate, addr 0xb962b08, size 0x148, virtual false, abstract: false, final false
inline void SaveSimpleKeyCandidate() ;

/// @brief Method SkipToNextToken, addr 0xb95cf24, size 0x14c, virtual false, abstract: false, final false
inline void SkipToNextToken() ;

/// @brief Method StaleSimpleKeyCandidates, addr 0xb95c608, size 0x110, virtual false, abstract: false, final false
inline void StaleSimpleKeyCandidates() ;

/// @brief Method TakeCurrentTokenContent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::VYaml::Parser::ITokenContent*>)
inline T TakeCurrentTokenContent() ;

/// @brief Method TryConsumeTagChar, addr 0xb9633c8, size 0x1d4, virtual false, abstract: false, final false
inline bool TryConsumeTagChar(::VYaml::Parser::Scalar*  scalar) ;

/// @brief Method TryConsumeUriChar, addr 0xb962e74, size 0x1f4, virtual false, abstract: false, final false
inline bool TryConsumeUriChar(::VYaml::Parser::Scalar*  scalar) ;

/// [IsReadOnly]
/// @brief Method TryPeek, addr 0xb963c10, size 0x228, virtual false, abstract: false, final false
inline bool TryPeek(int64_t  offset, ::by_ref<uint8_t>  value) ;

/// @brief Method TrySkipUnityStrippedSymbol, addr 0xb95c4f0, size 0x118, virtual false, abstract: false, final false
inline bool TrySkipUnityStrippedSymbol() ;

/// @brief Method UnrollIndent, addr 0xb95d070, size 0x1c8, virtual false, abstract: false, final false
inline void UnrollIndent(int32_t  col) ;

/// [NullableContext(0)]
/// @brief Method .ctor, addr 0xb95c01c, size 0x2c4, virtual false, abstract: false, final false
inline void _ctor(::System::Buffers::ReadOnlySequence_1<uint8_t>  sequence) ;

static inline ::VYaml::Internal::ExpandBuffer_1<int32_t>* getStaticF_indentsBufferStatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<uint8_t>* getStaticF_lineBreaksBufferStatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>* getStaticF_simpleKeyBufferStatic() ;

static inline ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>* getStaticF_tokensBufferStatic() ;

/// @brief Method get_CurrentMark, addr 0xb95c00c, size 0x10, virtual false, abstract: false, final false
inline ::VYaml::Parser::Marker get_CurrentMark() ;

/// @brief Method get_CurrentTokenType, addr 0xb95c004, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Parser::TokenType get_CurrentTokenType() ;

static inline void setStaticF_indentsBufferStatic(::VYaml::Internal::ExpandBuffer_1<int32_t>*  value) ;

static inline void setStaticF_lineBreaksBufferStatic(::VYaml::Internal::ExpandBuffer_1<uint8_t>*  value) ;

static inline void setStaticF_simpleKeyBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  value) ;

static inline void setStaticF_tokensBufferStatic(::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf8YamlTokenizer() ;

// Ctor Parameters [CppParam { name: "reader", ty: "::System::Buffers::SequenceReader_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mark", ty: "::VYaml::Parser::Marker", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentToken", ty: "::VYaml::Parser::Token", modifiers: "", def_value: None, comment: None }, CppParam { name: "streamStartProduced", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "streamEndProduced", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentCode", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indent", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "simpleKeyAllowed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "adjacentValueAllowedAt", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flowLevel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tokensParsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tokenAvailable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "tokens", ty: "::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "simpleKeyCandidates", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "indents", ty: "::VYaml::Internal::ExpandBuffer_1<int32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr Utf8YamlTokenizer(::System::Buffers::SequenceReader_1<uint8_t>  reader, ::VYaml::Parser::Marker  mark, ::VYaml::Parser::Token  currentToken, bool  streamStartProduced, bool  streamEndProduced, uint8_t  currentCode, int32_t  indent, bool  simpleKeyAllowed, int32_t  adjacentValueAllowedAt, int32_t  flowLevel, int32_t  tokensParsed, bool  tokenAvailable, ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  tokens, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  simpleKeyCandidates, ::VYaml::Internal::ExpandBuffer_1<int32_t>*  indents) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// [Nullable(0)]
/// @brief Field reader, offset: 0x0, size: 0x68, def value: None
 ::System::Buffers::SequenceReader_1<uint8_t>  reader;

/// @brief Field mark, offset: 0x68, size: 0xc, def value: None
 ::VYaml::Parser::Marker  mark;

/// @brief Field currentToken, offset: 0x78, size: 0x10, def value: None
 ::VYaml::Parser::Token  currentToken;

/// @brief Field streamStartProduced, offset: 0x88, size: 0x1, def value: None
 bool  streamStartProduced;

/// @brief Field streamEndProduced, offset: 0x89, size: 0x1, def value: None
 bool  streamEndProduced;

/// @brief Field currentCode, offset: 0x8a, size: 0x1, def value: None
 uint8_t  currentCode;

/// @brief Field indent, offset: 0x8c, size: 0x4, def value: None
 int32_t  indent;

/// @brief Field simpleKeyAllowed, offset: 0x90, size: 0x1, def value: None
 bool  simpleKeyAllowed;

/// @brief Field adjacentValueAllowedAt, offset: 0x94, size: 0x4, def value: None
 int32_t  adjacentValueAllowedAt;

/// @brief Field flowLevel, offset: 0x98, size: 0x4, def value: None
 int32_t  flowLevel;

/// @brief Field tokensParsed, offset: 0x9c, size: 0x4, def value: None
 int32_t  tokensParsed;

/// @brief Field tokenAvailable, offset: 0xa0, size: 0x1, def value: None
 bool  tokenAvailable;

/// @brief Field tokens, offset: 0xa8, size: 0x8, def value: None
 ::VYaml::Internal::InsertionQueue_1<::VYaml::Parser::Token>*  tokens;

/// @brief Field simpleKeyCandidates, offset: 0xb0, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::SimpleKeyState>*  simpleKeyCandidates;

/// @brief Field indents, offset: 0xb8, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<int32_t>*  indents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, reader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, mark) == 0x68, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, currentToken) == 0x78, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, streamStartProduced) == 0x88, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, streamEndProduced) == 0x89, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, currentCode) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, indent) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, simpleKeyAllowed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, adjacentValueAllowedAt) == 0x94, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, flowLevel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, tokensParsed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, tokenAvailable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, tokens) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, simpleKeyCandidates) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Utf8YamlTokenizer, indents) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Utf8YamlTokenizer) == 0xc0, "Size mismatch!");

} // namespace end def VYaml::Parser
