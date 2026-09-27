#pragma once
// IWYU pragma private; include "System/Text/ASCIIEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASCIIEncoding)
namespace GlobalNamespace {
class ASCIIEncoding_ASCIIEncodingSealed;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
// Forward declare root types
namespace System::Text {
class ASCIIEncoding;
}
// Write type traits
MARK_REF_T(::System::Text::ASCIIEncoding*);
DEFINE_IL2CPP_CLASS(::System::Text::ASCIIEncoding*, "System.Text", "ASCIIEncoding");
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.ASCIIEncoding
class CORDL_TYPE ASCIIEncoding : public ::System::Text::Encoding {
public:
// Declarations
using ASCIIEncodingSealed = ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed;

/// @brief Field s_default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_default, put=setStaticF_s_default)) ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*  s_default;

/// @brief Method GetByteCount, addr 0xa364e20, size 0x188, virtual true, abstract: false, final false
inline int32_t GetByteCount(::ArrayW<char16_t>  chars, int32_t  index, int32_t  count) ;

/// @brief Method GetByteCount, addr 0xa364fa8, size 0x8c, virtual true, abstract: false, final false
inline int32_t GetByteCount(::StringW  chars) ;

/// @brief Method GetByteCount, addr 0xa365e14, size 0x308, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  charCount, ::System::Text::EncoderNLS*  encoder) ;

/// [CLSCompliant(false)]
/// @brief Method GetByteCount, addr 0xa365034, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetByteCount(char16_t*  chars, int32_t  count) ;

/// @brief Method GetBytes, addr 0xa36534c, size 0x274, virtual true, abstract: false, final false
inline int32_t GetBytes(::ArrayW<char16_t>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// @brief Method GetBytes, addr 0xa365104, size 0x248, virtual true, abstract: false, final false
inline int32_t GetBytes(::StringW  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t>  bytes, int32_t  byteIndex) ;

/// [CLSCompliant(false)]
/// @brief Method GetBytes, addr 0xa3655c0, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount) ;

/// @brief Method GetBytes, addr 0xa36611c, size 0x440, virtual true, abstract: false, final false
inline int32_t GetBytes(char16_t*  chars, int32_t  charCount, uint8_t*  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  encoder) ;

/// @brief Method GetCharCount, addr 0xa3656b8, size 0x188, virtual true, abstract: false, final false
inline int32_t GetCharCount(::ArrayW<uint8_t>  bytes, int32_t  index, int32_t  count) ;

/// [CLSCompliant(false)]
/// @brief Method GetCharCount, addr 0xa365840, size 0xd0, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count) ;

/// @brief Method GetCharCount, addr 0xa36655c, size 0x160, virtual true, abstract: false, final false
inline int32_t GetCharCount(uint8_t*  bytes, int32_t  count, ::System::Text::DecoderNLS*  decoder) ;

/// @brief Method GetChars, addr 0xa365910, size 0x278, virtual true, abstract: false, final false
inline int32_t GetChars(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t>  chars, int32_t  charIndex) ;

/// [CLSCompliant(false)]
/// @brief Method GetChars, addr 0xa365b88, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount) ;

/// @brief Method GetChars, addr 0xa366708, size 0x298, virtual true, abstract: false, final false
inline int32_t GetChars(uint8_t*  bytes, int32_t  byteCount, char16_t*  chars, int32_t  charCount, ::System::Text::DecoderNLS*  decoder) ;

/// @brief Method GetDecoder, addr 0xa366b98, size 0x5c, virtual true, abstract: false, final false
inline ::System::Text::Decoder* GetDecoder() ;

/// @brief Method GetEncoder, addr 0xa366bf4, size 0x5c, virtual true, abstract: false, final false
inline ::System::Text::Encoder* GetEncoder() ;

/// @brief Method GetMaxByteCount, addr 0xa3669a0, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetMaxByteCount(int32_t  charCount) ;

/// @brief Method GetMaxCharCount, addr 0xa366a9c, size 0xfc, virtual true, abstract: false, final false
inline int32_t GetMaxCharCount(int32_t  byteCount) ;

/// @brief Method GetString, addr 0xa365c80, size 0x194, virtual true, abstract: false, final false
inline ::StringW GetString(::ArrayW<uint8_t>  bytes, int32_t  byteIndex, int32_t  byteCount) ;

static inline ::System::Text::ASCIIEncoding* New_ctor() ;

/// @brief Method SetDefaultFallbacks, addr 0xa364de4, size 0x3c, virtual true, abstract: false, final false
inline void SetDefaultFallbacks() ;

/// @brief Method .ctor, addr 0xa364dd8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* getStaticF_s_default() ;

static inline void setStaticF_s_default(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ASCIIEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ASCIIEncoding(ASCIIEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ASCIIEncoding(ASCIIEncoding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Text::ASCIIEncoding) == 0x38, "Size mismatch!");

} // namespace end def System::Text
