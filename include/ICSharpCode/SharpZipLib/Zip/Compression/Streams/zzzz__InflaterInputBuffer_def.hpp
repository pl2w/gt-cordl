#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterInputBuffer)
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class Inflater;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class InflaterInputBuffer;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*, "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "InflaterInputBuffer");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
class CORDL_TYPE InflaterInputBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Available, put=set_Available)) int32_t  Available;

 __declspec(property(get=get_ClearText)) ::ArrayW<uint8_t>  ClearText;

 __declspec(property(get=get_ClearTextLength)) int32_t  ClearTextLength;

 __declspec(property(put=set_CryptoTransform)) ::System::Security::Cryptography::ICryptoTransform*  CryptoTransform;

 __declspec(property(get=get_RawData)) ::ArrayW<uint8_t>  RawData;

 __declspec(property(get=get_RawLength)) int32_t  RawLength;

/// @brief Field available, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_available, put=__cordl_internal_set_available)) int32_t  available;

/// @brief Field clearText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clearText, put=__cordl_internal_set_clearText)) ::ArrayW<uint8_t>  clearText;

/// @brief Field clearTextLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_clearTextLength, put=__cordl_internal_set_clearTextLength)) int32_t  clearTextLength;

/// @brief Field cryptoTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cryptoTransform, put=__cordl_internal_set_cryptoTransform)) ::System::Security::Cryptography::ICryptoTransform*  cryptoTransform;

/// @brief Field inputStream, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputStream, put=__cordl_internal_set_inputStream)) ::System::IO::Stream*  inputStream;

/// @brief Field internalClearText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalClearText, put=__cordl_internal_set_internalClearText)) ::ArrayW<uint8_t>  internalClearText;

/// @brief Field rawData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawData, put=__cordl_internal_set_rawData)) ::ArrayW<uint8_t>  rawData;

/// @brief Field rawLength, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rawLength, put=__cordl_internal_set_rawLength)) int32_t  rawLength;

/// @brief Method Fill, addr 0x9fd9e44, size 0x154, virtual false, abstract: false, final false
inline void Fill() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* New_ctor(::System::IO::Stream*  stream) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* New_ctor(::System::IO::Stream*  stream, int32_t  bufferSize) ;

/// @brief Method ReadClearTextBuffer, addr 0x9fccfe0, size 0x148, virtual false, abstract: false, final false
inline int32_t ReadClearTextBuffer(::ArrayW<uint8_t>  outBuffer, int32_t  offset, int32_t  length) ;

/// @brief Method ReadLeByte, addr 0x9fda0e0, size 0xac, virtual false, abstract: false, final false
inline uint8_t ReadLeByte() ;

/// @brief Method ReadLeInt, addr 0x9fcc18c, size 0x54, virtual false, abstract: false, final false
inline int32_t ReadLeInt() ;

/// @brief Method ReadLeLong, addr 0x9fcc3ec, size 0x30, virtual false, abstract: false, final false
inline int64_t ReadLeLong() ;

/// @brief Method ReadLeShort, addr 0x9fcc1e0, size 0x34, virtual false, abstract: false, final false
inline int32_t ReadLeShort() ;

/// @brief Method ReadRawBuffer, addr 0x9fcc214, size 0x18, virtual false, abstract: false, final false
inline int32_t ReadRawBuffer(::ArrayW<uint8_t>  buffer) ;

/// @brief Method ReadRawBuffer, addr 0x9fd9f98, size 0x148, virtual false, abstract: false, final false
inline int32_t ReadRawBuffer(::ArrayW<uint8_t>  outBuffer, int32_t  offset, int32_t  length) ;

/// @brief Method SetInflaterInput, addr 0x9fcd128, size 0x40, virtual false, abstract: false, final false
inline void SetInflaterInput(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater) ;

constexpr int32_t const& __cordl_internal_get_available() const;

constexpr int32_t& __cordl_internal_get_available() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_clearText() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_clearText() ;

constexpr int32_t const& __cordl_internal_get_clearTextLength() const;

constexpr int32_t& __cordl_internal_get_clearTextLength() ;

constexpr ::System::Security::Cryptography::ICryptoTransform* const& __cordl_internal_get_cryptoTransform() const;

constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_cryptoTransform() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_inputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_inputStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_internalClearText() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_internalClearText() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawData() ;

constexpr int32_t const& __cordl_internal_get_rawLength() const;

constexpr int32_t& __cordl_internal_get_rawLength() ;

constexpr void __cordl_internal_set_available(int32_t  value) ;

constexpr void __cordl_internal_set_clearText(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_clearTextLength(int32_t  value) ;

constexpr void __cordl_internal_set_cryptoTransform(::System::Security::Cryptography::ICryptoTransform*  value) ;

constexpr void __cordl_internal_set_inputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_internalClearText(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_rawData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_rawLength(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fd9d6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0x9fd9d74, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, int32_t  bufferSize) ;

/// @brief Method get_Available, addr 0x9fd9e34, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Available() ;

/// @brief Method get_ClearText, addr 0x9fd9e2c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_ClearText() ;

/// @brief Method get_ClearTextLength, addr 0x9fd9e24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ClearTextLength() ;

/// @brief Method get_RawData, addr 0x9fd9e1c, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_RawLength, addr 0x9fd9e14, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RawLength() ;

/// @brief Method set_Available, addr 0x9fd9e3c, size 0x8, virtual false, abstract: false, final false
inline void set_Available(int32_t  value) ;

/// @brief Method set_CryptoTransform, addr 0x9fcce54, size 0x18c, virtual false, abstract: false, final false
inline void set_CryptoTransform(::System::Security::Cryptography::ICryptoTransform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterInputBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterInputBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterInputBuffer(InflaterInputBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterInputBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterInputBuffer(InflaterInputBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17384};

/// @brief Field rawLength, offset: 0x10, size: 0x4, def value: None
 int32_t  ___rawLength;

/// @brief Field rawData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawData;

/// @brief Field clearTextLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ___clearTextLength;

/// @brief Field clearText, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___clearText;

/// @brief Field internalClearText, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___internalClearText;

/// @brief Field available, offset: 0x38, size: 0x4, def value: None
 int32_t  ___available;

/// @brief Field cryptoTransform, offset: 0x40, size: 0x8, def value: None
 ::System::Security::Cryptography::ICryptoTransform*  ___cryptoTransform;

/// @brief Field inputStream, offset: 0x48, size: 0x8, def value: None
 ::System::IO::Stream*  ___inputStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___rawLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___rawData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___clearTextLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___clearText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___internalClearText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___available) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___cryptoTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer, ___inputStream) == 0x48, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer) == 0x50, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression::Streams
