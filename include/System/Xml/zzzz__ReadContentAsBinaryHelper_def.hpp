#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadContentAsBinaryHelper)
namespace GlobalNamespace {
struct ReadContentAsBinaryHelper_State;
}
namespace System::Xml {
class Base64Decoder;
}
namespace System::Xml {
class BinHexDecoder;
}
namespace System::Xml {
class IncrementalReadDecoder;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Xml {
class ReadContentAsBinaryHelper;
}
// Write type traits
MARK_REF_T(::System::Xml::ReadContentAsBinaryHelper*);
DEFINE_IL2CPP_CLASS(::System::Xml::ReadContentAsBinaryHelper*, "System.Xml", "ReadContentAsBinaryHelper");
// Dependencies System.Object, System.Xml.ReadContentAsBinaryHelper::State
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ReadContentAsBinaryHelper
class CORDL_TYPE ReadContentAsBinaryHelper : public ::System::Object {
public:
// Declarations
using State = ::GlobalNamespace::ReadContentAsBinaryHelper_State;

/// @brief Field base64Decoder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_base64Decoder, put=__cordl_internal_set_base64Decoder)) ::System::Xml::Base64Decoder*  base64Decoder;

/// @brief Field binHexDecoder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_binHexDecoder, put=__cordl_internal_set_binHexDecoder)) ::System::Xml::BinHexDecoder*  binHexDecoder;

/// @brief Field canReadValueChunk, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_canReadValueChunk, put=__cordl_internal_set_canReadValueChunk)) bool  canReadValueChunk;

/// @brief Field decoder, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) ::System::Xml::IncrementalReadDecoder*  decoder;

/// @brief Field isEnd, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEnd, put=__cordl_internal_set_isEnd)) bool  isEnd;

/// @brief Field reader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::Xml::XmlReader*  reader;

/// @brief Field state, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::ReadContentAsBinaryHelper_State  state;

/// @brief Field valueChunk, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueChunk, put=__cordl_internal_set_valueChunk)) ::ArrayW<char16_t>  valueChunk;

/// @brief Field valueChunkLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueChunkLength, put=__cordl_internal_set_valueChunkLength)) int32_t  valueChunkLength;

/// @brief Field valueOffset, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_valueOffset, put=__cordl_internal_set_valueOffset)) int32_t  valueOffset;

/// @brief Method CreateOrReset, addr 0xaabc424, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Xml::ReadContentAsBinaryHelper* CreateOrReset(::System::Xml::ReadContentAsBinaryHelper*  helper, ::System::Xml::XmlReader*  reader) ;

/// @brief Method Finish, addr 0xaabcb24, size 0x148, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method Init, addr 0xaabc688, size 0x2c, virtual false, abstract: false, final false
inline bool Init() ;

/// @brief Method InitBase64Decoder, addr 0xaabc81c, size 0x8c, virtual false, abstract: false, final false
inline void InitBase64Decoder() ;

/// @brief Method InitBinHexDecoder, addr 0xaabca98, size 0x8c, virtual false, abstract: false, final false
inline void InitBinHexDecoder() ;

/// @brief Method MoveToNextContentNode, addr 0xaabcc6c, size 0xf4, virtual false, abstract: false, final false
inline bool MoveToNextContentNode(bool  moveIfOnContentNode) ;

static inline ::System::Xml::ReadContentAsBinaryHelper* New_ctor(::System::Xml::XmlReader*  reader) ;

/// @brief Method ReadContentAsBase64, addr 0xaabc49c, size 0x1ec, virtual false, abstract: false, final false
inline int32_t ReadContentAsBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBinHex, addr 0xaabc8a8, size 0x1f0, virtual false, abstract: false, final false
inline int32_t ReadContentAsBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method ReadContentAsBinary, addr 0xaabc6b4, size 0x168, virtual false, abstract: false, final false
inline int32_t ReadContentAsBinary(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Reset, addr 0xaabc490, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::System::Xml::Base64Decoder* const& __cordl_internal_get_base64Decoder() const;

constexpr ::System::Xml::Base64Decoder*& __cordl_internal_get_base64Decoder() ;

constexpr ::System::Xml::BinHexDecoder* const& __cordl_internal_get_binHexDecoder() const;

constexpr ::System::Xml::BinHexDecoder*& __cordl_internal_get_binHexDecoder() ;

constexpr bool const& __cordl_internal_get_canReadValueChunk() const;

constexpr bool& __cordl_internal_get_canReadValueChunk() ;

constexpr ::System::Xml::IncrementalReadDecoder* const& __cordl_internal_get_decoder() const;

constexpr ::System::Xml::IncrementalReadDecoder*& __cordl_internal_get_decoder() ;

constexpr bool const& __cordl_internal_get_isEnd() const;

constexpr bool& __cordl_internal_get_isEnd() ;

constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader() ;

constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State& __cordl_internal_get_state() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get_valueChunk() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get_valueChunk() ;

constexpr int32_t const& __cordl_internal_get_valueChunkLength() const;

constexpr int32_t& __cordl_internal_get_valueChunkLength() ;

constexpr int32_t const& __cordl_internal_get_valueOffset() const;

constexpr int32_t& __cordl_internal_get_valueOffset() ;

constexpr void __cordl_internal_set_base64Decoder(::System::Xml::Base64Decoder*  value) ;

constexpr void __cordl_internal_set_binHexDecoder(::System::Xml::BinHexDecoder*  value) ;

constexpr void __cordl_internal_set_canReadValueChunk(bool  value) ;

constexpr void __cordl_internal_set_decoder(::System::Xml::IncrementalReadDecoder*  value) ;

constexpr void __cordl_internal_set_isEnd(bool  value) ;

constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader*  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::ReadContentAsBinaryHelper_State  value) ;

constexpr void __cordl_internal_set_valueChunk(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set_valueChunkLength(int32_t  value) ;

constexpr void __cordl_internal_set_valueOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0xaabc378, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlReader*  reader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadContentAsBinaryHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadContentAsBinaryHelper(ReadContentAsBinaryHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadContentAsBinaryHelper(ReadContentAsBinaryHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14020};

/// @brief Field reader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlReader*  ___reader;

/// @brief Field state, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ReadContentAsBinaryHelper_State  ___state;

/// @brief Field valueOffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___valueOffset;

/// @brief Field isEnd, offset: 0x20, size: 0x1, def value: None
 bool  ___isEnd;

/// @brief Field canReadValueChunk, offset: 0x21, size: 0x1, def value: None
 bool  ___canReadValueChunk;

/// @brief Field valueChunk, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<char16_t>  ___valueChunk;

/// @brief Field valueChunkLength, offset: 0x30, size: 0x4, def value: None
 int32_t  ___valueChunkLength;

/// @brief Field decoder, offset: 0x38, size: 0x8, def value: None
 ::System::Xml::IncrementalReadDecoder*  ___decoder;

/// @brief Field base64Decoder, offset: 0x40, size: 0x8, def value: None
 ::System::Xml::Base64Decoder*  ___base64Decoder;

/// @brief Field binHexDecoder, offset: 0x48, size: 0x8, def value: None
 ::System::Xml::BinHexDecoder*  ___binHexDecoder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___isEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___canReadValueChunk) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueChunk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueChunkLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___decoder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___base64Decoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___binHexDecoder) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Xml::ReadContentAsBinaryHelper) == 0x50, "Size mismatch!");

} // namespace end def System::Xml
