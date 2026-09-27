#pragma once
// IWYU pragma private; include "VYaml/Internal/EmitStringAnalyzer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmitStringAnalyzer)
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace VYaml::Internal {
struct EmitStringInfo;
}
// Forward declare root types
namespace VYaml::Internal {
class EmitStringAnalyzer;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::EmitStringAnalyzer*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::EmitStringAnalyzer*, "VYaml.Internal", "EmitStringAnalyzer");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.EmitStringAnalyzer
class CORDL_TYPE EmitStringAnalyzer : public ::System::Object {
public:
// Declarations
/// @brief Field stringBuilderThreadStatic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_stringBuilderThreadStatic, put=setStaticF_stringBuilderThreadStatic)) ::System::Text::StringBuilder*  stringBuilderThreadStatic;

/// @brief Field whiteSpaces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_whiteSpaces, put=setStaticF_whiteSpaces)) ::ArrayW<char16_t>  whiteSpaces;

/// @brief Method Analyze, addr 0xb96661c, size 0x1fc, virtual false, abstract: false, final false
static inline ::VYaml::Internal::EmitStringInfo Analyze(::StringW  value) ;

/// @brief Method AppendWhiteSpace, addr 0xb967268, size 0x1a4, virtual false, abstract: false, final false
static inline void AppendWhiteSpace(::System::Text::StringBuilder*  stringBuilder, int32_t  length) ;

/// [NullableContext(0)]
/// @brief Method BuildLiteralScalar, addr 0xb966a20, size 0x25c, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* BuildLiteralScalar(::System::ReadOnlySpan_1<char16_t>  originalValue, int32_t  indentCharCount) ;

/// [NullableContext(0)]
/// @brief Method BuildQuotedScalar, addr 0xb966c7c, size 0x528, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* BuildQuotedScalar(::System::ReadOnlySpan_1<char16_t>  originalValue, bool  doubleQuote) ;

/// @brief Method GetStringBuilder, addr 0xb9671a4, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* GetStringBuilder() ;

/// @brief Method IsReservedWord, addr 0xb966818, size 0x208, virtual false, abstract: false, final false
static inline bool IsReservedWord(::StringW  value) ;

static inline ::System::Text::StringBuilder* getStaticF_stringBuilderThreadStatic() ;

static inline ::ArrayW<char16_t> getStaticF_whiteSpaces() ;

static inline void setStaticF_stringBuilderThreadStatic(::System::Text::StringBuilder*  value) ;

static inline void setStaticF_whiteSpaces(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmitStringAnalyzer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitStringAnalyzer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitStringAnalyzer(EmitStringAnalyzer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitStringAnalyzer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitStringAnalyzer(EmitStringAnalyzer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::EmitStringAnalyzer) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
