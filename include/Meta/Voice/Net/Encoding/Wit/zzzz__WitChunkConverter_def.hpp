#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunkConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitChunkConverter)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunkHeader;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
// Forward declare root types
namespace Meta::Voice::Net::Encoding::Wit {
class WitChunkConverter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*, "Meta.Voice.Net.Encoding.Wit", "WitChunkConverter");
// [LogCategory((Meta.Voice.Logging.LogCategory)18)]
// Dependencies Meta.Voice.Net.Encoding.Wit.WitChunk, System.Object
namespace Meta::Voice::Net::Encoding::Wit {
// Is value type: false
// CS Name: Meta.Voice.Net.Encoding.Wit.WitChunkConverter
class CORDL_TYPE WitChunkConverter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsBinaryDecoded)) bool  IsBinaryDecoded;

 __declspec(property(get=get_IsHeaderDecoded)) bool  IsHeaderDecoded;

 __declspec(property(get=get_IsJsonDecoded)) bool  IsJsonDecoded;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field TextEncoding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TextEncoding, put=setStaticF_TextEncoding)) ::System::Text::UTF8Encoding*  TextEncoding;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _binaryDecoded, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__binaryDecoded, put=__cordl_internal_set__binaryDecoded)) uint64_t  _binaryDecoded;

/// @brief Field _currentChunk, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get__currentChunk, put=__cordl_internal_set__currentChunk)) ::Meta::Voice::Net::Encoding::Wit::WitChunk  _currentChunk;

/// @brief Field _headerBytes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__headerBytes, put=__cordl_internal_set__headerBytes)) ::ArrayW<uint8_t>  _headerBytes;

/// @brief Field _headerDecoded, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__headerDecoded, put=__cordl_internal_set__headerDecoded)) int32_t  _headerDecoded;

/// @brief Field _jsonBuilder, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__jsonBuilder, put=__cordl_internal_set__jsonBuilder)) ::System::Text::StringBuilder*  _jsonBuilder;

/// @brief Field _jsonDecoded, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__jsonDecoded, put=__cordl_internal_set__jsonDecoded)) int32_t  _jsonDecoded;

/// @brief Method Decode, addr 0x9e6b69c, size 0x70, virtual false, abstract: false, final false
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*  onChunkDecoded, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder) ;

/// @brief Method DecodeBinary, addr 0x9e6bc18, size 0x8c, virtual false, abstract: false, final false
inline int32_t DecodeBinary(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder) ;

/// @brief Method DecodeChunk, addr 0x9e6b70c, size 0x310, virtual false, abstract: false, final false
inline int32_t DecodeChunk(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::System::Action_1<::Meta::Voice::Net::Encoding::Wit::WitChunk>*  onChunkDecoded, ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  customBinaryDecoder) ;

/// @brief Method DecodeHeader, addr 0x9e6ba1c, size 0xbc, virtual false, abstract: false, final false
inline int32_t DecodeHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

/// @brief Method DecodeJson, addr 0x9e6bae0, size 0x138, virtual false, abstract: false, final false
inline int32_t DecodeJson(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

/// @brief Method DecodeString, addr 0x9e6bd94, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW DecodeString(::ArrayW<uint8_t>  rawData, int32_t  offset, int32_t  length) ;

/// @brief Method Encode, addr 0x9e6a4e8, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Encode(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunkData) ;

/// @brief Method Encode, addr 0x9e6bf1c, size 0x178, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t>  jsonData, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method Encode, addr 0x9e6be20, size 0x68, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Encode(::StringW  jsonString, ::ArrayW<uint8_t>  binaryData) ;

/// @brief Method EncodeBytes, addr 0x9e6c12c, size 0x50, virtual false, abstract: false, final false
static inline void EncodeBytes(::ArrayW<uint8_t>  destination, ::by_ref<int32_t>  offset, ::ArrayW<uint8_t>  source) ;

/// @brief Method EncodeFlag, addr 0x9e6c094, size 0x18, virtual false, abstract: false, final false
static inline uint8_t EncodeFlag(bool  hasJson, bool  hasBinary) ;

/// @brief Method EncodeLength, addr 0x9e6c0ac, size 0x80, virtual false, abstract: false, final false
static inline void EncodeLength(::ArrayW<uint8_t>  destination, ::by_ref<int32_t>  offset, int64_t  length) ;

/// @brief Method EncodeString, addr 0x9e6be88, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> EncodeString(::StringW  stringData) ;

/// @brief Method GetHeader, addr 0x9e6bca4, size 0xf0, virtual false, abstract: false, final false
static inline ::Meta::Voice::Net::Encoding::Wit::WitChunkHeader GetHeader(::ArrayW<uint8_t>  bytes, int32_t  offset) ;

static inline ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* New_ctor() ;

/// @brief Method ResetChunk, addr 0x9e6b640, size 0x5c, virtual false, abstract: false, final false
inline void ResetChunk() ;

/// @brief Method SafeShift, addr 0x9e6c17c, size 0xc, virtual false, abstract: false, final false
static inline int32_t SafeShift(uint8_t  flags, int32_t  index) ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__binaryDecoded() const;

constexpr uint64_t& __cordl_internal_get__binaryDecoded() ;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk const& __cordl_internal_get__currentChunk() const;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunk& __cordl_internal_get__currentChunk() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__headerBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__headerBytes() ;

constexpr int32_t const& __cordl_internal_get__headerDecoded() const;

constexpr int32_t& __cordl_internal_get__headerDecoded() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__jsonBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get__jsonBuilder() ;

constexpr int32_t const& __cordl_internal_get__jsonDecoded() const;

constexpr int32_t& __cordl_internal_get__jsonDecoded() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__binaryDecoded(uint64_t  value) ;

constexpr void __cordl_internal_set__currentChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  value) ;

constexpr void __cordl_internal_set__headerBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__headerDecoded(int32_t  value) ;

constexpr void __cordl_internal_set__jsonBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set__jsonDecoded(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e6c188, size 0x190, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::UTF8Encoding* getStaticF_TextEncoding() ;

/// @brief Method get_IsBinaryDecoded, addr 0x9e6b62c, size 0x14, virtual false, abstract: false, final false
inline bool get_IsBinaryDecoded() ;

/// @brief Method get_IsHeaderDecoded, addr 0x9e6b608, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHeaderDecoded() ;

/// @brief Method get_IsJsonDecoded, addr 0x9e6b618, size 0x14, virtual false, abstract: false, final false
inline bool get_IsJsonDecoded() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e6b600, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

static inline void setStaticF_TextEncoding(::System::Text::UTF8Encoding*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitChunkConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitChunkConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitChunkConverter(WitChunkConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitChunkConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitChunkConverter(WitChunkConverter const& ) = delete;

/// @brief Field FLAG_NO_JSON_NO_BINARY offset 0xffffffff size 0x1
static constexpr uint8_t  FLAG_NO_JSON_NO_BINARY{static_cast<uint8_t>(0x0u)};

/// @brief Field FLAG_NO_JSON_YES_BINARY offset 0xffffffff size 0x1
static constexpr uint8_t  FLAG_NO_JSON_YES_BINARY{static_cast<uint8_t>(0x1u)};

/// @brief Field FLAG_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  FLAG_SIZE{static_cast<int32_t>(0x1)};

/// @brief Field FLAG_YES_JSON_NO_BINARY offset 0xffffffff size 0x1
static constexpr uint8_t  FLAG_YES_JSON_NO_BINARY{static_cast<uint8_t>(0x2u)};

/// @brief Field FLAG_YES_JSON_YES_BINARY offset 0xffffffff size 0x1
static constexpr uint8_t  FLAG_YES_JSON_YES_BINARY{static_cast<uint8_t>(0x3u)};

/// @brief Field HEADER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HEADER_SIZE{static_cast<int32_t>(0x11)};

/// @brief Field LONG_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  LONG_SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25502};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _currentChunk, offset: 0x18, size: 0x28, def value: None
 ::Meta::Voice::Net::Encoding::Wit::WitChunk  ____currentChunk;

/// @brief Field _headerDecoded, offset: 0x40, size: 0x4, def value: None
 int32_t  ____headerDecoded;

/// @brief Field _headerBytes, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____headerBytes;

/// @brief Field _jsonDecoded, offset: 0x50, size: 0x4, def value: None
 int32_t  ____jsonDecoded;

/// @brief Field _jsonBuilder, offset: 0x58, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ____jsonBuilder;

/// @brief Field _binaryDecoded, offset: 0x60, size: 0x8, def value: None
 uint64_t  ____binaryDecoded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____currentChunk) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____headerDecoded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____headerBytes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____jsonDecoded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____jsonBuilder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter, ____binaryDecoded) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter) == 0x68, "Size mismatch!");

} // namespace end def Meta::Voice::Net::Encoding::Wit
