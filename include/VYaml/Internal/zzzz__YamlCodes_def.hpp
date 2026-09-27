#pragma once
// IWYU pragma private; include "VYaml/Internal/YamlCodes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(YamlCodes)
// Forward declare root types
namespace VYaml::Internal {
class YamlCodes;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::YamlCodes*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::YamlCodes*, "VYaml.Internal", "YamlCodes");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.YamlCodes
class CORDL_TYPE YamlCodes : public ::System::Object {
public:
// Declarations
/// @brief Field CrLf, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CrLf, put=setStaticF_CrLf)) ::ArrayW<uint8_t>  CrLf;

/// @brief Field DocStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DocStart, put=setStaticF_DocStart)) ::ArrayW<uint8_t>  DocStart;

/// @brief Field False0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_False0, put=setStaticF_False0)) ::ArrayW<uint8_t>  False0;

/// @brief Field False1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_False1, put=setStaticF_False1)) ::ArrayW<uint8_t>  False1;

/// @brief Field False2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_False2, put=setStaticF_False2)) ::ArrayW<uint8_t>  False2;

/// @brief Field HexPrefix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HexPrefix, put=setStaticF_HexPrefix)) ::ArrayW<uint8_t>  HexPrefix;

/// @brief Field HexPrefixNegative, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HexPrefixNegative, put=setStaticF_HexPrefixNegative)) ::ArrayW<uint8_t>  HexPrefixNegative;

/// @brief Field Inf0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf0, put=setStaticF_Inf0)) ::ArrayW<uint8_t>  Inf0;

/// @brief Field Inf1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf1, put=setStaticF_Inf1)) ::ArrayW<uint8_t>  Inf1;

/// @brief Field Inf2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf2, put=setStaticF_Inf2)) ::ArrayW<uint8_t>  Inf2;

/// @brief Field Inf3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf3, put=setStaticF_Inf3)) ::ArrayW<uint8_t>  Inf3;

/// @brief Field Inf4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf4, put=setStaticF_Inf4)) ::ArrayW<uint8_t>  Inf4;

/// @brief Field Inf5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Inf5, put=setStaticF_Inf5)) ::ArrayW<uint8_t>  Inf5;

/// @brief Field Nan0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Nan0, put=setStaticF_Nan0)) ::ArrayW<uint8_t>  Nan0;

/// @brief Field Nan1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Nan1, put=setStaticF_Nan1)) ::ArrayW<uint8_t>  Nan1;

/// @brief Field Nan2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Nan2, put=setStaticF_Nan2)) ::ArrayW<uint8_t>  Nan2;

/// @brief Field NegInf0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NegInf0, put=setStaticF_NegInf0)) ::ArrayW<uint8_t>  NegInf0;

/// @brief Field NegInf1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NegInf1, put=setStaticF_NegInf1)) ::ArrayW<uint8_t>  NegInf1;

/// @brief Field NegInf2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NegInf2, put=setStaticF_NegInf2)) ::ArrayW<uint8_t>  NegInf2;

/// @brief Field No0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No0, put=setStaticF_No0)) ::ArrayW<uint8_t>  No0;

/// @brief Field No1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No1, put=setStaticF_No1)) ::ArrayW<uint8_t>  No1;

/// @brief Field No2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No2, put=setStaticF_No2)) ::ArrayW<uint8_t>  No2;

/// @brief Field Null0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null0, put=setStaticF_Null0)) ::ArrayW<uint8_t>  Null0;

/// @brief Field Null1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null1, put=setStaticF_Null1)) ::ArrayW<uint8_t>  Null1;

/// @brief Field Null2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null2, put=setStaticF_Null2)) ::ArrayW<uint8_t>  Null2;

/// @brief Field OctalPrefix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OctalPrefix, put=setStaticF_OctalPrefix)) ::ArrayW<uint8_t>  OctalPrefix;

/// @brief Field Off0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Off0, put=setStaticF_Off0)) ::ArrayW<uint8_t>  Off0;

/// @brief Field Off1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Off1, put=setStaticF_Off1)) ::ArrayW<uint8_t>  Off1;

/// @brief Field Off2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Off2, put=setStaticF_Off2)) ::ArrayW<uint8_t>  Off2;

/// @brief Field On0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_On0, put=setStaticF_On0)) ::ArrayW<uint8_t>  On0;

/// @brief Field On1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_On1, put=setStaticF_On1)) ::ArrayW<uint8_t>  On1;

/// @brief Field On2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_On2, put=setStaticF_On2)) ::ArrayW<uint8_t>  On2;

/// @brief Field StreamStart, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StreamStart, put=setStaticF_StreamStart)) ::ArrayW<uint8_t>  StreamStart;

/// @brief Field TagDirectiveName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TagDirectiveName, put=setStaticF_TagDirectiveName)) ::ArrayW<uint8_t>  TagDirectiveName;

/// @brief Field True0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_True0, put=setStaticF_True0)) ::ArrayW<uint8_t>  True0;

/// @brief Field True1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_True1, put=setStaticF_True1)) ::ArrayW<uint8_t>  True1;

/// @brief Field True2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_True2, put=setStaticF_True2)) ::ArrayW<uint8_t>  True2;

/// @brief Field UnityStrippedSymbol, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnityStrippedSymbol, put=setStaticF_UnityStrippedSymbol)) ::ArrayW<uint8_t>  UnityStrippedSymbol;

/// @brief Field Utf8Bom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Utf8Bom, put=setStaticF_Utf8Bom)) ::ArrayW<uint8_t>  Utf8Bom;

/// @brief Field YamlDirectiveName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_YamlDirectiveName, put=setStaticF_YamlDirectiveName)) ::ArrayW<uint8_t>  YamlDirectiveName;

/// @brief Field Yes0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes0, put=setStaticF_Yes0)) ::ArrayW<uint8_t>  Yes0;

/// @brief Field Yes1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes1, put=setStaticF_Yes1)) ::ArrayW<uint8_t>  Yes1;

/// @brief Field Yes2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes2, put=setStaticF_Yes2)) ::ArrayW<uint8_t>  Yes2;

/// @brief Method AsHex, addr 0xb96ba8c, size 0x90, virtual false, abstract: false, final false
static inline uint8_t AsHex(uint8_t  code) ;

/// @brief Method IsAlphaNumericDashOrUnderscore, addr 0xb96b75c, size 0x70, virtual false, abstract: false, final false
static inline bool IsAlphaNumericDashOrUnderscore(uint8_t  code) ;

/// @brief Method IsAnyFlowSymbol, addr 0xb96ba50, size 0x3c, virtual false, abstract: false, final false
static inline bool IsAnyFlowSymbol(uint8_t  code) ;

/// @brief Method IsAscii, addr 0xb96b964, size 0xc, virtual false, abstract: false, final false
static inline bool IsAscii(uint8_t  code) ;

/// @brief Method IsBlank, addr 0xb96b9b8, size 0x14, virtual false, abstract: false, final false
static inline bool IsBlank(uint8_t  code) ;

/// @brief Method IsEmpty, addr 0xb96b984, size 0x20, virtual false, abstract: false, final false
static inline bool IsEmpty(uint8_t  code) ;

/// @brief Method IsHex, addr 0xb96ba0c, size 0x44, virtual false, abstract: false, final false
static inline bool IsHex(uint8_t  code) ;

/// @brief Method IsLineBreak, addr 0xb96b9a4, size 0x14, virtual false, abstract: false, final false
static inline bool IsLineBreak(uint8_t  code) ;

/// @brief Method IsNumber, addr 0xb96b970, size 0x14, virtual false, abstract: false, final false
static inline bool IsNumber(uint8_t  code) ;

/// @brief Method IsNumberRepresentation, addr 0xb96b9cc, size 0x40, virtual false, abstract: false, final false
static inline bool IsNumberRepresentation(uint8_t  code) ;

/// @brief Method IsTagChar, addr 0xb96b8cc, size 0x98, virtual false, abstract: false, final false
static inline bool IsTagChar(uint8_t  code) ;

/// @brief Method IsUriChar, addr 0xb96b830, size 0x9c, virtual false, abstract: false, final false
static inline bool IsUriChar(uint8_t  code) ;

/// @brief Method IsWordChar, addr 0xb96b7cc, size 0x64, virtual false, abstract: false, final false
static inline bool IsWordChar(uint8_t  code) ;

static inline ::ArrayW<uint8_t> getStaticF_CrLf() ;

static inline ::ArrayW<uint8_t> getStaticF_DocStart() ;

static inline ::ArrayW<uint8_t> getStaticF_False0() ;

static inline ::ArrayW<uint8_t> getStaticF_False1() ;

static inline ::ArrayW<uint8_t> getStaticF_False2() ;

static inline ::ArrayW<uint8_t> getStaticF_HexPrefix() ;

static inline ::ArrayW<uint8_t> getStaticF_HexPrefixNegative() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf0() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf1() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf2() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf3() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf4() ;

static inline ::ArrayW<uint8_t> getStaticF_Inf5() ;

static inline ::ArrayW<uint8_t> getStaticF_Nan0() ;

static inline ::ArrayW<uint8_t> getStaticF_Nan1() ;

static inline ::ArrayW<uint8_t> getStaticF_Nan2() ;

static inline ::ArrayW<uint8_t> getStaticF_NegInf0() ;

static inline ::ArrayW<uint8_t> getStaticF_NegInf1() ;

static inline ::ArrayW<uint8_t> getStaticF_NegInf2() ;

static inline ::ArrayW<uint8_t> getStaticF_No0() ;

static inline ::ArrayW<uint8_t> getStaticF_No1() ;

static inline ::ArrayW<uint8_t> getStaticF_No2() ;

static inline ::ArrayW<uint8_t> getStaticF_Null0() ;

static inline ::ArrayW<uint8_t> getStaticF_Null1() ;

static inline ::ArrayW<uint8_t> getStaticF_Null2() ;

static inline ::ArrayW<uint8_t> getStaticF_OctalPrefix() ;

static inline ::ArrayW<uint8_t> getStaticF_Off0() ;

static inline ::ArrayW<uint8_t> getStaticF_Off1() ;

static inline ::ArrayW<uint8_t> getStaticF_Off2() ;

static inline ::ArrayW<uint8_t> getStaticF_On0() ;

static inline ::ArrayW<uint8_t> getStaticF_On1() ;

static inline ::ArrayW<uint8_t> getStaticF_On2() ;

static inline ::ArrayW<uint8_t> getStaticF_StreamStart() ;

static inline ::ArrayW<uint8_t> getStaticF_TagDirectiveName() ;

static inline ::ArrayW<uint8_t> getStaticF_True0() ;

static inline ::ArrayW<uint8_t> getStaticF_True1() ;

static inline ::ArrayW<uint8_t> getStaticF_True2() ;

static inline ::ArrayW<uint8_t> getStaticF_UnityStrippedSymbol() ;

static inline ::ArrayW<uint8_t> getStaticF_Utf8Bom() ;

static inline ::ArrayW<uint8_t> getStaticF_YamlDirectiveName() ;

static inline ::ArrayW<uint8_t> getStaticF_Yes0() ;

static inline ::ArrayW<uint8_t> getStaticF_Yes1() ;

static inline ::ArrayW<uint8_t> getStaticF_Yes2() ;

static inline void setStaticF_CrLf(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_DocStart(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_False0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_False1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_False2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_HexPrefix(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_HexPrefixNegative(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf3(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf4(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Inf5(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Nan0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Nan1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Nan2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NegInf0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NegInf1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_NegInf2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_No0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_No1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_No2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Null0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Null1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Null2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_OctalPrefix(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Off0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Off1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Off2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_On0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_On1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_On2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_StreamStart(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_TagDirectiveName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_True0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_True1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_True2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_UnityStrippedSymbol(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Utf8Bom(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_YamlDirectiveName(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Yes0(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Yes1(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_Yes2(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlCodes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlCodes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlCodes(YamlCodes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlCodes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlCodes(YamlCodes const& ) = delete;

/// @brief Field Alias offset 0xffffffff size 0x1
static constexpr uint8_t  Alias{static_cast<uint8_t>(0x2au)};

/// @brief Field Anchor offset 0xffffffff size 0x1
static constexpr uint8_t  Anchor{static_cast<uint8_t>(0x26u)};

/// @brief Field BlockEntryIndent offset 0xffffffff size 0x1
static constexpr uint8_t  BlockEntryIndent{static_cast<uint8_t>(0x2du)};

/// @brief Field Comma offset 0xffffffff size 0x1
static constexpr uint8_t  Comma{static_cast<uint8_t>(0x2cu)};

/// @brief Field Comment offset 0xffffffff size 0x1
static constexpr uint8_t  Comment{static_cast<uint8_t>(0x23u)};

/// @brief Field Cr offset 0xffffffff size 0x1
static constexpr uint8_t  Cr{static_cast<uint8_t>(0xdu)};

/// @brief Field DirectiveLine offset 0xffffffff size 0x1
static constexpr uint8_t  DirectiveLine{static_cast<uint8_t>(0x25u)};

/// @brief Field DoubleQuote offset 0xffffffff size 0x1
static constexpr uint8_t  DoubleQuote{static_cast<uint8_t>(0x22u)};

/// @brief Field ExplicitKeyIndent offset 0xffffffff size 0x1
static constexpr uint8_t  ExplicitKeyIndent{static_cast<uint8_t>(0x3fu)};

/// @brief Field FlowMapEnd offset 0xffffffff size 0x1
static constexpr uint8_t  FlowMapEnd{static_cast<uint8_t>(0x7du)};

/// @brief Field FlowMapStart offset 0xffffffff size 0x1
static constexpr uint8_t  FlowMapStart{static_cast<uint8_t>(0x7bu)};

/// @brief Field FlowSequenceEnd offset 0xffffffff size 0x1
static constexpr uint8_t  FlowSequenceEnd{static_cast<uint8_t>(0x5du)};

/// @brief Field FlowSequenceStart offset 0xffffffff size 0x1
static constexpr uint8_t  FlowSequenceStart{static_cast<uint8_t>(0x5bu)};

/// @brief Field FoldedScalerHeader offset 0xffffffff size 0x1
static constexpr uint8_t  FoldedScalerHeader{static_cast<uint8_t>(0x3eu)};

/// @brief Field Lf offset 0xffffffff size 0x1
static constexpr uint8_t  Lf{static_cast<uint8_t>(0xau)};

/// @brief Field LiteralScalerHeader offset 0xffffffff size 0x1
static constexpr uint8_t  LiteralScalerHeader{static_cast<uint8_t>(0x7cu)};

/// @brief Field MapValueIndent offset 0xffffffff size 0x1
static constexpr uint8_t  MapValueIndent{static_cast<uint8_t>(0x3au)};

/// @brief Field NullAlias offset 0xffffffff size 0x1
static constexpr uint8_t  NullAlias{static_cast<uint8_t>(0x7eu)};

/// @brief Field SingleQuote offset 0xffffffff size 0x1
static constexpr uint8_t  SingleQuote{static_cast<uint8_t>(0x27u)};

/// @brief Field Space offset 0xffffffff size 0x1
static constexpr uint8_t  Space{static_cast<uint8_t>(0x20u)};

/// @brief Field Tab offset 0xffffffff size 0x1
static constexpr uint8_t  Tab{static_cast<uint8_t>(0x9u)};

/// @brief Field Tag offset 0xffffffff size 0x1
static constexpr uint8_t  Tag{static_cast<uint8_t>(0x21u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::YamlCodes) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
