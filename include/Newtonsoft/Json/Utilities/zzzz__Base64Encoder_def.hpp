#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/Base64Encoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoder)
namespace System::IO {
class TextWriter;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class Base64Encoder;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Utilities::Base64Encoder*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Utilities::Base64Encoder*, "Newtonsoft.Json.Utilities", "Base64Encoder");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.Base64Encoder
class CORDL_TYPE Base64Encoder : public ::System::Object {
public:
// Declarations
/// @brief Field _charsLine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__charsLine, put=__cordl_internal_set__charsLine)) ::ArrayW<char16_t>  _charsLine;

/// @brief Field _leftOverBytes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftOverBytes, put=__cordl_internal_set__leftOverBytes)) ::ArrayW<uint8_t>  _leftOverBytes;

/// @brief Field _leftOverBytesCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftOverBytesCount, put=__cordl_internal_set__leftOverBytesCount)) int32_t  _leftOverBytesCount;

/// @brief Field _writer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::TextWriter*  _writer;

/// @brief Method Encode, addr 0xa38b6e0, size 0x1a0, virtual false, abstract: false, final false
inline void Encode(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Flush, addr 0xa38b880, size 0xb8, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method FulfillFromLeftover, addr 0xa39070c, size 0x9c, virtual false, abstract: false, final false
inline bool FulfillFromLeftover(::ArrayW<uint8_t>  buffer, int32_t  index, ::by_ref<int32_t>  count) ;

static inline ::Newtonsoft::Json::Utilities::Base64Encoder* New_ctor(::System::IO::TextWriter*  writer) ;

/// @brief Method StoreLeftOverBytes, addr 0xa3907c8, size 0x118, virtual false, abstract: false, final false
inline void StoreLeftOverBytes(::ArrayW<uint8_t>  buffer, int32_t  index, ::by_ref<int32_t>  count) ;

/// @brief Method ValidateEncode, addr 0xa390648, size 0xc4, virtual false, abstract: false, final false
inline void ValidateEncode(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteChars, addr 0xa3907a8, size 0x20, virtual false, abstract: false, final false
inline void WriteChars(::ArrayW<char16_t>  chars, int32_t  index, int32_t  count) ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__charsLine() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__charsLine() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__leftOverBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__leftOverBytes() ;

constexpr int32_t const& __cordl_internal_get__leftOverBytesCount() const;

constexpr int32_t& __cordl_internal_get__leftOverBytesCount() ;

constexpr ::System::IO::TextWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::TextWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__charsLine(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__leftOverBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__leftOverBytesCount(int32_t  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::TextWriter*  value) ;

/// @brief Method .ctor, addr 0xa389b14, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextWriter*  writer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Encoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Encoder(Base64Encoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Encoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Encoder(Base64Encoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23158};

/// @brief Field _charsLine, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____charsLine;

/// @brief Field _writer, offset: 0x18, size: 0x8, def value: None
 ::System::IO::TextWriter*  ____writer;

/// [Nullable(2)]
/// @brief Field _leftOverBytes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____leftOverBytes;

/// @brief Field _leftOverBytesCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ____leftOverBytesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____charsLine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::Base64Encoder, ____leftOverBytesCount) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Newtonsoft::Json::Utilities::Base64Encoder) == 0x30, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
