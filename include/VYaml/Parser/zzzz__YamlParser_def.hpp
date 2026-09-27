#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VYaml/Parser/zzzz__ParseEventType_def.hpp"
#include "VYaml/Parser/zzzz__ParseState_def.hpp"
#include "VYaml/Parser/zzzz__Utf8YamlTokenizer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YamlParser)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace VYaml::Internal {
template<typename T>
class ExpandBuffer_1;
}
namespace VYaml::Parser {
class Anchor;
}
namespace VYaml::Parser {
struct Marker;
}
namespace VYaml::Parser {
struct ParseEventType;
}
namespace VYaml::Parser {
struct ParseState;
}
namespace VYaml::Parser {
class Scalar;
}
namespace VYaml::Parser {
class Tag;
}
namespace VYaml::Parser {
struct TokenType;
}
namespace VYaml::Parser {
struct Utf8YamlTokenizer;
}
// Forward declare root types
namespace VYaml::Parser {
struct YamlParser;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::YamlParser);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::YamlParser, "VYaml.Parser", "YamlParser");
// [NullableContext(2)]
// [Nullable(0)]
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies VYaml.Parser.ParseEventType, VYaml.Parser.ParseState, VYaml.Parser.Utf8YamlTokenizer
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.YamlParser
struct CORDL_TYPE YamlParser {
public:
// Declarations
 __declspec(property(get=get_CurrentEventType, put=set_CurrentEventType)) ::VYaml::Parser::ParseEventType  CurrentEventType;

 __declspec(property(get=get_CurrentMark)) ::VYaml::Parser::Marker  CurrentMark;

 __declspec(property(get=get_CurrentTokenType)) ::VYaml::Parser::TokenType  CurrentTokenType;

 __declspec(property(get=get_End)) bool  End;

 __declspec(property(get=get_UnityStrippedMark, put=set_UnityStrippedMark)) bool  UnityStrippedMark;

/// @brief Field anchorsBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_anchorsBufferStatic, put=setStaticF_anchorsBufferStatic)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  anchorsBufferStatic;

/// @brief Field stateStackBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateStackBufferStatic, put=setStaticF_stateStackBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  stateStackBufferStatic;

/// @brief Method EmptyScalar, addr 0xb96574c, size 0x10, virtual false, abstract: false, final false
inline void EmptyScalar() ;

/// [NullableContext(0)]
/// @brief Method FromBytes, addr 0xb963f64, size 0xd4, virtual false, abstract: false, final false
static inline ::VYaml::Parser::YamlParser FromBytes(::System::Memory_1<uint8_t>  bytes) ;

/// [NullableContext(0)]
/// @brief Method FromSequence, addr 0xb9641ec, size 0x44, virtual false, abstract: false, final false
static inline ::VYaml::Parser::YamlParser FromSequence(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<uint8_t>>  sequence) ;

/// [IsReadOnly]
/// @brief Method GetScalarAsBool, addr 0xb965a7c, size 0xc8, virtual false, abstract: false, final false
inline bool GetScalarAsBool() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsDouble, addr 0xb965f24, size 0xc8, virtual false, abstract: false, final false
inline double_t GetScalarAsDouble() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsFloat, addr 0xb965e5c, size 0xc8, virtual false, abstract: false, final false
inline float_t GetScalarAsFloat() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsInt32, addr 0xb965b44, size 0xc8, virtual false, abstract: false, final false
inline int32_t GetScalarAsInt32() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsInt64, addr 0xb965c0c, size 0xc4, virtual false, abstract: false, final false
inline int64_t GetScalarAsInt64() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsString, addr 0xb965834, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetScalarAsString() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsUInt32, addr 0xb965cd0, size 0xc8, virtual false, abstract: false, final false
inline uint32_t GetScalarAsUInt32() ;

/// [IsReadOnly]
/// @brief Method GetScalarAsUInt64, addr 0xb965d98, size 0xc4, virtual false, abstract: false, final false
inline uint64_t GetScalarAsUInt64() ;

/// [IsReadOnly]
/// [NullableContext(0)]
/// @brief Method GetScalarAsUtf8, addr 0xb96584c, size 0x148, virtual false, abstract: false, final false
inline ::System::ReadOnlySpan_1<uint8_t> GetScalarAsUtf8() ;

/// [IsReadOnly]
/// @brief Method IsNullScalar, addr 0xb96580c, size 0x28, virtual false, abstract: false, final false
inline bool IsNullScalar() ;

/// @brief Method ParseBlockMappingKey, addr 0xb964b4c, size 0x128, virtual false, abstract: false, final false
inline void ParseBlockMappingKey(bool  first) ;

/// @brief Method ParseBlockMappingValue, addr 0xb964c74, size 0x80, virtual false, abstract: false, final false
inline void ParseBlockMappingValue() ;

/// @brief Method ParseBlockSequenceEntry, addr 0xb964cf4, size 0x110, virtual false, abstract: false, final false
inline void ParseBlockSequenceEntry(bool  first) ;

/// @brief Method ParseDocumentContent, addr 0xb964468, size 0x4c, virtual false, abstract: false, final false
inline void ParseDocumentContent() ;

/// @brief Method ParseDocumentEnd, addr 0xb9644b4, size 0x34, virtual false, abstract: false, final false
inline void ParseDocumentEnd() ;

/// @brief Method ParseDocumentStart, addr 0xb9643a4, size 0xc4, virtual false, abstract: false, final false
inline void ParseDocumentStart(bool  implicitStarted) ;

/// @brief Method ParseExplicitDocumentStart, addr 0xb96546c, size 0x74, virtual false, abstract: false, final false
inline void ParseExplicitDocumentStart() ;

/// @brief Method ParseFlowMappingKey, addr 0xb964f2c, size 0x160, virtual false, abstract: false, final false
inline void ParseFlowMappingKey(bool  first) ;

/// @brief Method ParseFlowMappingValue, addr 0xb96508c, size 0x70, virtual false, abstract: false, final false
inline void ParseFlowMappingValue(bool  empty) ;

/// @brief Method ParseFlowSequenceEntry, addr 0xb964e04, size 0x128, virtual false, abstract: false, final false
inline void ParseFlowSequenceEntry(bool  first) ;

/// @brief Method ParseFlowSequenceEntryMappingEnd, addr 0xb965588, size 0x14, virtual false, abstract: false, final false
inline void ParseFlowSequenceEntryMappingEnd() ;

/// @brief Method ParseFlowSequenceEntryMappingKey, addr 0xb965194, size 0x74, virtual false, abstract: false, final false
inline void ParseFlowSequenceEntryMappingKey() ;

/// @brief Method ParseFlowSequenceEntryMappingValue, addr 0xb965208, size 0x74, virtual false, abstract: false, final false
inline void ParseFlowSequenceEntryMappingValue() ;

/// @brief Method ParseIndentlessSequenceEntry, addr 0xb9650fc, size 0x98, virtual false, abstract: false, final false
inline void ParseIndentlessSequenceEntry() ;

/// @brief Method ParseNode, addr 0xb9644e8, size 0x664, virtual false, abstract: false, final false
inline void ParseNode(bool  block, bool  indentlessSequence) ;

/// @brief Method ParseStreamStart, addr 0xb964358, size 0x4c, virtual false, abstract: false, final false
inline void ParseStreamStart() ;

/// @brief Method PopState, addr 0xb96559c, size 0xc0, virtual false, abstract: false, final false
inline void PopState() ;

/// @brief Method ProcessDirectives, addr 0xb9654e0, size 0x38, virtual false, abstract: false, final false
inline void ProcessDirectives() ;

/// @brief Method PushState, addr 0xb96565c, size 0xf0, virtual false, abstract: false, final false
inline void PushState(::VYaml::Parser::ParseState  state) ;

/// @brief Method Read, addr 0xb94ea64, size 0x250, virtual false, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadScalarAsBool, addr 0xb966038, size 0x38, virtual false, abstract: false, final false
inline bool ReadScalarAsBool() ;

/// @brief Method ReadScalarAsDouble, addr 0xb966188, size 0x38, virtual false, abstract: false, final false
inline double_t ReadScalarAsDouble() ;

/// @brief Method ReadScalarAsFloat, addr 0xb966150, size 0x38, virtual false, abstract: false, final false
inline float_t ReadScalarAsFloat() ;

/// @brief Method ReadScalarAsInt32, addr 0xb966070, size 0x38, virtual false, abstract: false, final false
inline int32_t ReadScalarAsInt32() ;

/// @brief Method ReadScalarAsInt64, addr 0xb9660a8, size 0x38, virtual false, abstract: false, final false
inline int64_t ReadScalarAsInt64() ;

/// @brief Method ReadScalarAsString, addr 0xb965fec, size 0x4c, virtual false, abstract: false, final false
inline ::StringW ReadScalarAsString() ;

/// @brief Method ReadScalarAsUInt32, addr 0xb9660e0, size 0x38, virtual false, abstract: false, final false
inline uint32_t ReadScalarAsUInt32() ;

/// @brief Method ReadScalarAsUInt64, addr 0xb966118, size 0x38, virtual false, abstract: false, final false
inline uint64_t ReadScalarAsUInt64() ;

/// @brief Method ReadWithVerify, addr 0xb96527c, size 0xb0, virtual false, abstract: false, final false
inline void ReadWithVerify(::VYaml::Parser::ParseEventType  eventType) ;

/// [NullableContext(1)]
/// @brief Method RegisterAnchor, addr 0xb965518, size 0x70, virtual false, abstract: false, final false
inline int32_t RegisterAnchor(::StringW  anchorName) ;

/// @brief Method SkipAfter, addr 0xb96532c, size 0x50, virtual false, abstract: false, final false
inline void SkipAfter(::VYaml::Parser::ParseEventType  eventType) ;

/// @brief Method SkipCurrentNode, addr 0xb96537c, size 0xf0, virtual false, abstract: false, final false
inline void SkipCurrentNode() ;

/// @brief Method ThrowIfCurrentTokenUnless, addr 0xb96575c, size 0xb0, virtual false, abstract: false, final false
inline void ThrowIfCurrentTokenUnless(::VYaml::Parser::TokenType  expectedTokenType) ;

/// [IsReadOnly]
/// [NullableContext(1)]
/// @brief Method TryGetCurrentAnchor, addr 0xb966540, size 0x38, virtual false, abstract: false, final false
inline bool TryGetCurrentAnchor(::by_ref<::VYaml::Parser::Anchor*>  anchor) ;

/// [IsReadOnly]
/// [NullableContext(1)]
/// @brief Method TryGetCurrentTag, addr 0xb966508, size 0x38, virtual false, abstract: false, final false
inline bool TryGetCurrentTag(::by_ref<::VYaml::Parser::Tag*>  tag) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsBool, addr 0xb96647c, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsBool(::by_ref<bool>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsDouble, addr 0xb9664f4, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsDouble(::by_ref<double_t>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsFloat, addr 0xb9664e0, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsFloat(::by_ref<float_t>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsInt32, addr 0xb966490, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsInt32(::by_ref<int32_t>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsInt64, addr 0xb9664b8, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsInt64(::by_ref<int64_t>  value) ;

/// [IsReadOnly]
/// [NullableContext(0)]
/// @brief Method TryGetScalarAsSpan, addr 0xb965994, size 0xe8, virtual false, abstract: false, final false
inline bool TryGetScalarAsSpan(::by_ref<::System::ReadOnlySpan_1<uint8_t>>  span) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsString, addr 0xb96641c, size 0x60, virtual false, abstract: false, final false
inline bool TryGetScalarAsString(::by_ref<::StringW>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsUInt32, addr 0xb9664a4, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsUInt32(::by_ref<uint32_t>  value) ;

/// [IsReadOnly]
/// @brief Method TryGetScalarAsUInt64, addr 0xb9664cc, size 0x14, virtual false, abstract: false, final false
inline bool TryGetScalarAsUInt64(::by_ref<uint64_t>  value) ;

/// @brief Method TryReadScalarAsBool, addr 0xb966240, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsBool(::by_ref<bool>  result) ;

/// @brief Method TryReadScalarAsDouble, addr 0xb9663d8, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsDouble(::by_ref<double_t>  result) ;

/// @brief Method TryReadScalarAsFloat, addr 0xb966394, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsFloat(::by_ref<float_t>  result) ;

/// @brief Method TryReadScalarAsInt32, addr 0xb966284, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsInt32(::by_ref<int32_t>  result) ;

/// @brief Method TryReadScalarAsInt64, addr 0xb9662c8, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsInt64(::by_ref<int64_t>  result) ;

/// @brief Method TryReadScalarAsString, addr 0xb9661c0, size 0x80, virtual false, abstract: false, final false
inline bool TryReadScalarAsString(::by_ref<::StringW>  result) ;

/// @brief Method TryReadScalarAsUInt32, addr 0xb96630c, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsUInt32(::by_ref<uint32_t>  result) ;

/// @brief Method TryReadScalarAsUInt64, addr 0xb966350, size 0x44, virtual false, abstract: false, final false
inline bool TryReadScalarAsUInt64(::by_ref<uint64_t>  result) ;

/// [NullableContext(0)]
/// @brief Method .ctor, addr 0xb964038, size 0x1b4, virtual false, abstract: false, final false
inline void _ctor(::System::Buffers::ReadOnlySequence_1<uint8_t>  sequence) ;

/// @brief Method .ctor, addr 0xb964268, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::VYaml::Parser::Utf8YamlTokenizer>  tokenizer) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_anchorsBufferStatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>* getStaticF_stateStackBufferStatic() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CurrentEventType, addr 0xb964230, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Parser::ParseEventType get_CurrentEventType() ;

/// [IsReadOnly]
/// @brief Method get_CurrentMark, addr 0xb964250, size 0x10, virtual false, abstract: false, final false
inline ::VYaml::Parser::Marker get_CurrentMark() ;

/// @brief Method get_CurrentTokenType, addr 0xb964260, size 0x8, virtual false, abstract: false, final false
inline ::VYaml::Parser::TokenType get_CurrentTokenType() ;

/// @brief Method get_End, addr 0xb9539d8, size 0x10, virtual false, abstract: false, final false
inline bool get_End() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_UnityStrippedMark, addr 0xb964240, size 0x8, virtual false, abstract: false, final false
inline bool get_UnityStrippedMark() ;

static inline void setStaticF_anchorsBufferStatic(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_stateStackBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentEventType, addr 0xb964238, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentEventType(::VYaml::Parser::ParseEventType  value) ;

/// [CompilerGenerated]
/// @brief Method set_UnityStrippedMark, addr 0xb964248, size 0x8, virtual false, abstract: false, final false
inline void set_UnityStrippedMark(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr YamlParser() ;

// Ctor Parameters [CppParam { name: "_CurrentEventType_k__BackingField", ty: "::VYaml::Parser::ParseEventType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UnityStrippedMark_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "tokenizer", ty: "::VYaml::Parser::Utf8YamlTokenizer", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentState", ty: "::VYaml::Parser::ParseState", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentScalar", ty: "::VYaml::Parser::Scalar*", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentTag", ty: "::VYaml::Parser::Tag*", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentAnchor", ty: "::VYaml::Parser::Anchor*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastAnchorId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStack", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*", modifiers: "", def_value: None, comment: None }]
constexpr YamlParser(::VYaml::Parser::ParseEventType  _CurrentEventType_k__BackingField, bool  _UnityStrippedMark_k__BackingField, ::VYaml::Parser::Utf8YamlTokenizer  tokenizer, ::VYaml::Parser::ParseState  currentState, ::VYaml::Parser::Scalar*  currentScalar, ::VYaml::Parser::Tag*  currentTag, ::VYaml::Parser::Anchor*  currentAnchor, int32_t  lastAnchorId, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  anchors, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  stateStack) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29024};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// [CompilerGenerated]
/// @brief Field <CurrentEventType>k__BackingField, offset: 0x0, size: 0x1, def value: None
 ::VYaml::Parser::ParseEventType  _CurrentEventType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UnityStrippedMark>k__BackingField, offset: 0x1, size: 0x1, def value: None
 bool  _UnityStrippedMark_k__BackingField;

/// @brief Field tokenizer, offset: 0x8, size: 0xc0, def value: None
 ::VYaml::Parser::Utf8YamlTokenizer  tokenizer;

/// @brief Field currentState, offset: 0xc8, size: 0x4, def value: None
 ::VYaml::Parser::ParseState  currentState;

/// @brief Field currentScalar, offset: 0xd0, size: 0x8, def value: None
 ::VYaml::Parser::Scalar*  currentScalar;

/// @brief Field currentTag, offset: 0xd8, size: 0x8, def value: None
 ::VYaml::Parser::Tag*  currentTag;

/// @brief Field currentAnchor, offset: 0xe0, size: 0x8, def value: None
 ::VYaml::Parser::Anchor*  currentAnchor;

/// @brief Field lastAnchorId, offset: 0xe8, size: 0x4, def value: None
 int32_t  lastAnchorId;

/// [Nullable(1)]
/// @brief Field anchors, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  anchors;

/// [Nullable(1)]
/// @brief Field stateStack, offset: 0xf8, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<::VYaml::Parser::ParseState>*  stateStack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::YamlParser, _CurrentEventType_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, _UnityStrippedMark_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, tokenizer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, currentState) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, currentScalar) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, currentTag) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, currentAnchor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, lastAnchorId) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, anchors) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::YamlParser, stateStack) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::YamlParser) == 0x100, "Size mismatch!");

} // namespace end def VYaml::Parser
