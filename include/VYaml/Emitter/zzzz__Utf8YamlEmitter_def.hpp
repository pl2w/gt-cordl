#pragma once
// IWYU pragma private; include "VYaml/Emitter/Utf8YamlEmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Utf8YamlEmitter)
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace VYaml::Emitter {
struct EmitState;
}
namespace VYaml::Emitter {
struct MappingStyle;
}
namespace VYaml::Emitter {
struct ScalarStyle;
}
namespace VYaml::Emitter {
struct SequenceStyle;
}
namespace VYaml::Emitter {
class YamlEmitOptions;
}
namespace VYaml::Internal {
template<typename T>
class ExpandBuffer_1;
}
// Forward declare root types
namespace VYaml::Emitter {
struct Utf8YamlEmitter;
}
// Write type traits
MARK_VAL_T(::VYaml::Emitter::Utf8YamlEmitter);
DEFINE_IL2CPP_CLASS(::VYaml::Emitter::Utf8YamlEmitter, "VYaml.Emitter", "Utf8YamlEmitter");
// [NullableContext(1)]
// [Nullable(0)]
// [IsByRefLike]
// [Obsolete("Types with embedded references are not supported in this version of your compiler.", true)]
// Dependencies 
namespace VYaml::Emitter {
// Is value type: true
// CS Name: VYaml.Emitter.Utf8YamlEmitter
struct CORDL_TYPE Utf8YamlEmitter {
public:
// Declarations
/// @brief Field BlockSequenceEntryHeader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BlockSequenceEntryHeader, put=setStaticF_BlockSequenceEntryHeader)) ::ArrayW<uint8_t>  BlockSequenceEntryHeader;

 __declspec(property(get=get_CurrentState)) ::VYaml::Emitter::EmitState  CurrentState;

/// @brief Field FlowMappingEmpty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlowMappingEmpty, put=setStaticF_FlowMappingEmpty)) ::ArrayW<uint8_t>  FlowMappingEmpty;

/// @brief Field FlowMappingFooter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlowMappingFooter, put=setStaticF_FlowMappingFooter)) ::ArrayW<uint8_t>  FlowMappingFooter;

/// @brief Field FlowMappingHeader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlowMappingHeader, put=setStaticF_FlowMappingHeader)) ::ArrayW<uint8_t>  FlowMappingHeader;

/// @brief Field FlowSequenceEmpty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlowSequenceEmpty, put=setStaticF_FlowSequenceEmpty)) ::ArrayW<uint8_t>  FlowSequenceEmpty;

/// @brief Field FlowSequenceSeparator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlowSequenceSeparator, put=setStaticF_FlowSequenceSeparator)) ::ArrayW<uint8_t>  FlowSequenceSeparator;

 __declspec(property(get=get_IsFirstElement)) bool  IsFirstElement;

/// @brief Field MappingKeyFooter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MappingKeyFooter, put=setStaticF_MappingKeyFooter)) ::ArrayW<uint8_t>  MappingKeyFooter;

 __declspec(property(get=get_PreviousState)) ::VYaml::Emitter::EmitState  PreviousState;

/// @brief Field elementCountBufferSTatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_elementCountBufferSTatic, put=setStaticF_elementCountBufferSTatic)) ::VYaml::Internal::ExpandBuffer_1<int32_t>*  elementCountBufferSTatic;

/// @brief Field stateBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stateBufferStatic, put=setStaticF_stateBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  stateBufferStatic;

/// @brief Field stringBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringBufferStatic, put=setStaticF_stringBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<char16_t>*  stringBufferStatic;

/// @brief Field tagBufferStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tagBufferStatic, put=setStaticF_tagBufferStatic)) ::VYaml::Internal::ExpandBuffer_1<::StringW>*  tagBufferStatic;

/// @brief Field whiteSpaces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_whiteSpaces, put=setStaticF_whiteSpaces)) ::ArrayW<uint8_t>  whiteSpaces;

/// @brief Method BeginMapping, addr 0xb96dc70, size 0x798, virtual false, abstract: false, final false
inline void BeginMapping(::VYaml::Emitter::MappingStyle  style) ;

/// [NullableContext(0)]
/// @brief Method BeginScalar, addr 0xb971ea0, size 0x6cc, virtual false, abstract: false, final false
inline void BeginScalar(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset) ;

/// @brief Method BeginSequence, addr 0xb96cc14, size 0x73c, virtual false, abstract: false, final false
inline void BeginSequence(::VYaml::Emitter::SequenceStyle  style) ;

/// @brief Method CalculateMaxScalarBufferLength, addr 0xb971e18, size 0x88, virtual false, abstract: false, final false
inline int32_t CalculateMaxScalarBufferLength(int32_t  length) ;

/// @brief Method DecreaseIndent, addr 0xb972d9c, size 0x14, virtual false, abstract: false, final false
inline void DecreaseIndent() ;

/// @brief Method EndMapping, addr 0xb96e408, size 0x7d4, virtual false, abstract: false, final false
inline void EndMapping() ;

/// [NullableContext(0)]
/// @brief Method EndScalar, addr 0xb97256c, size 0x4e8, virtual false, abstract: false, final false
inline void EndScalar(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset) ;

/// @brief Method EndSequence, addr 0xb96d5e8, size 0x688, virtual false, abstract: false, final false
inline void EndSequence() ;

/// @brief Method GetTagLength, addr 0xb96d350, size 0xe4, virtual false, abstract: false, final false
inline int32_t GetTagLength() ;

/// [IsReadOnly]
/// @brief Method GetWriter, addr 0xb96cc0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Buffers::IBufferWriter_1<uint8_t>* GetWriter() ;

/// @brief Method IncreaseIndent, addr 0xb972d8c, size 0x10, virtual false, abstract: false, final false
inline void IncreaseIndent() ;

/// @brief Method PopState, addr 0xb972c80, size 0x10c, virtual false, abstract: false, final false
inline void PopState() ;

/// @brief Method PushState, addr 0xb972ad0, size 0x1b0, virtual false, abstract: false, final false
inline void PushState(::VYaml::Emitter::EmitState  state) ;

/// @brief Method ReplaceCurrentState, addr 0xb972a54, size 0x7c, virtual false, abstract: false, final false
inline void ReplaceCurrentState(::VYaml::Emitter::EmitState  newState) ;

/// @brief Method Tag, addr 0xb96f114, size 0xf4, virtual false, abstract: false, final false
inline void Tag(::StringW  value) ;

/// [NullableContext(0)]
/// @brief Method TryWriteTag, addr 0xb96d434, size 0x1b4, virtual false, abstract: false, final false
inline bool TryWriteTag(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset) ;

/// @brief Method WriteBlockSequenceEntryHeader, addr 0xb9717f4, size 0x190, virtual false, abstract: false, final false
inline void WriteBlockSequenceEntryHeader() ;

/// [NullableContext(0)]
/// @brief Method WriteBlockSequenceEntryHeader, addr 0xb971984, size 0x26c, virtual false, abstract: false, final false
inline void WriteBlockSequenceEntryHeader(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset) ;

/// @brief Method WriteBool, addr 0xb96f53c, size 0xe0, virtual false, abstract: false, final false
inline void WriteBool(bool  value) ;

/// @brief Method WriteDouble, addr 0xb970524, size 0x308, virtual false, abstract: false, final false
inline void WriteDouble(double_t  value) ;

/// @brief Method WriteFloat, addr 0xb97021c, size 0x308, virtual false, abstract: false, final false
inline void WriteFloat(float_t  value) ;

/// [NullableContext(0)]
/// @brief Method WriteIndent, addr 0xb971bf0, size 0x228, virtual false, abstract: false, final false
inline void WriteIndent(::System::Span_1<uint8_t>  output, ::by_ref<int32_t>  offset, int32_t  forceWidth) ;

/// @brief Method WriteInt32, addr 0xb96f61c, size 0x300, virtual false, abstract: false, final false
inline void WriteInt32(int32_t  value) ;

/// @brief Method WriteInt64, addr 0xb96fc1c, size 0x300, virtual false, abstract: false, final false
inline void WriteInt64(int64_t  value) ;

/// @brief Method WriteLiteralScalar, addr 0xb9711a4, size 0x52c, virtual false, abstract: false, final false
inline void WriteLiteralScalar(::StringW  value) ;

/// @brief Method WriteNull, addr 0xb96f480, size 0xbc, virtual false, abstract: false, final false
inline void WriteNull() ;

/// @brief Method WritePlainScalar, addr 0xb970a38, size 0x30c, virtual false, abstract: false, final false
inline void WritePlainScalar(::StringW  value) ;

/// @brief Method WriteQuotedScalar, addr 0xb970d44, size 0x460, virtual false, abstract: false, final false
inline void WriteQuotedScalar(::StringW  value, bool  doubleQuote) ;

/// [NullableContext(0)]
/// @brief Method WriteRaw, addr 0xb96ebdc, size 0x270, virtual false, abstract: false, final false
inline void WriteRaw(::System::ReadOnlySpan_1<uint8_t>  value, bool  indent, bool  lineBreak) ;

/// [NullableContext(0)]
/// @brief Method WriteRaw, addr 0xb96ee4c, size 0x2c8, virtual false, abstract: false, final false
inline void WriteRaw(::System::ReadOnlySpan_1<uint8_t>  value1, ::System::ReadOnlySpan_1<uint8_t>  value2, bool  indent, bool  lineBreak) ;

/// @brief Method WriteRaw1, addr 0xb9716d0, size 0x124, virtual false, abstract: false, final false
inline void WriteRaw1(uint8_t  value) ;

/// [NullableContext(0)]
/// @brief Method WriteScalar, addr 0xb96f208, size 0x278, virtual false, abstract: false, final false
inline void WriteScalar(::System::ReadOnlySpan_1<uint8_t>  value) ;

/// @brief Method WriteString, addr 0xb97082c, size 0x20c, virtual false, abstract: false, final false
inline void WriteString(::StringW  value, ::VYaml::Emitter::ScalarStyle  style) ;

/// @brief Method WriteUInt32, addr 0xb96f91c, size 0x300, virtual false, abstract: false, final false
inline void WriteUInt32(uint32_t  value) ;

/// @brief Method WriteUInt64, addr 0xb96ff1c, size 0x300, virtual false, abstract: false, final false
inline void WriteUInt64(uint64_t  value) ;

/// @brief Method .ctor, addr 0xb96c898, size 0x374, virtual false, abstract: false, final false
inline void _ctor(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, /* [Nullable(2)] */ ::VYaml::Emitter::YamlEmitOptions*  options) ;

static inline ::ArrayW<uint8_t> getStaticF_BlockSequenceEntryHeader() ;

static inline ::ArrayW<uint8_t> getStaticF_FlowMappingEmpty() ;

static inline ::ArrayW<uint8_t> getStaticF_FlowMappingFooter() ;

static inline ::ArrayW<uint8_t> getStaticF_FlowMappingHeader() ;

static inline ::ArrayW<uint8_t> getStaticF_FlowSequenceEmpty() ;

static inline ::ArrayW<uint8_t> getStaticF_FlowSequenceSeparator() ;

static inline ::ArrayW<uint8_t> getStaticF_MappingKeyFooter() ;

static inline ::VYaml::Internal::ExpandBuffer_1<int32_t>* getStaticF_elementCountBufferSTatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>* getStaticF_stateBufferStatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<char16_t>* getStaticF_stringBufferStatic() ;

static inline ::VYaml::Internal::ExpandBuffer_1<::StringW>* getStaticF_tagBufferStatic() ;

static inline ::ArrayW<uint8_t> getStaticF_whiteSpaces() ;

/// @brief Method get_CurrentState, addr 0xb96c798, size 0x78, virtual false, abstract: false, final false
inline ::VYaml::Emitter::EmitState get_CurrentState() ;

/// @brief Method get_IsFirstElement, addr 0xb96c888, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFirstElement() ;

/// @brief Method get_PreviousState, addr 0xb96c810, size 0x78, virtual false, abstract: false, final false
inline ::VYaml::Emitter::EmitState get_PreviousState() ;

static inline void setStaticF_BlockSequenceEntryHeader(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FlowMappingEmpty(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FlowMappingFooter(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FlowMappingHeader(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FlowSequenceEmpty(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_FlowSequenceSeparator(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_MappingKeyFooter(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_elementCountBufferSTatic(::VYaml::Internal::ExpandBuffer_1<int32_t>*  value) ;

static inline void setStaticF_stateBufferStatic(::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  value) ;

static inline void setStaticF_stringBufferStatic(::VYaml::Internal::ExpandBuffer_1<char16_t>*  value) ;

static inline void setStaticF_tagBufferStatic(::VYaml::Internal::ExpandBuffer_1<::StringW>*  value) ;

static inline void setStaticF_whiteSpaces(::ArrayW<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Utf8YamlEmitter() ;

// Ctor Parameters [CppParam { name: "writer", ty: "::System::Buffers::IBufferWriter_1<uint8_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::VYaml::Emitter::YamlEmitOptions*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stringBuffer", ty: "::VYaml::Internal::ExpandBuffer_1<char16_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateStack", ty: "::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "elementCountStack", ty: "::VYaml::Internal::ExpandBuffer_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "tagStack", ty: "::VYaml::Internal::ExpandBuffer_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentIndentLevel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentElementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Utf8YamlEmitter(::System::Buffers::IBufferWriter_1<uint8_t>*  writer, ::VYaml::Emitter::YamlEmitOptions*  options, ::VYaml::Internal::ExpandBuffer_1<char16_t>*  stringBuffer, ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  stateStack, ::VYaml::Internal::ExpandBuffer_1<int32_t>*  elementCountStack, ::VYaml::Internal::ExpandBuffer_1<::StringW>*  tagStack, int32_t  currentIndentLevel, int32_t  currentElementCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29042};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field writer, offset: 0x0, size: 0x8, def value: None
 ::System::Buffers::IBufferWriter_1<uint8_t>*  writer;

/// @brief Field options, offset: 0x8, size: 0x8, def value: None
 ::VYaml::Emitter::YamlEmitOptions*  options;

/// @brief Field stringBuffer, offset: 0x10, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<char16_t>*  stringBuffer;

/// @brief Field stateStack, offset: 0x18, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<::VYaml::Emitter::EmitState>*  stateStack;

/// @brief Field elementCountStack, offset: 0x20, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<int32_t>*  elementCountStack;

/// @brief Field tagStack, offset: 0x28, size: 0x8, def value: None
 ::VYaml::Internal::ExpandBuffer_1<::StringW>*  tagStack;

/// @brief Field currentIndentLevel, offset: 0x30, size: 0x4, def value: None
 int32_t  currentIndentLevel;

/// @brief Field currentElementCount, offset: 0x34, size: 0x4, def value: None
 int32_t  currentElementCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, writer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, options) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, stringBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, stateStack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, elementCountStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, tagStack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, currentIndentLevel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VYaml::Emitter::Utf8YamlEmitter, currentElementCount) == 0x34, "Offset mismatch!");

static_assert(sizeof(::VYaml::Emitter::Utf8YamlEmitter) == 0x38, "Size mismatch!");

} // namespace end def VYaml::Emitter
