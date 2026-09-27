#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryReader)
namespace GlobalNamespace {
class XmlDictionaryReader_XmlWrappedReader;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class OnXmlDictionaryReaderClose;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
class Array;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml {
class XmlDictionaryReader;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlDictionaryReader*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlDictionaryReader*, "System.Xml", "XmlDictionaryReader");
// Dependencies System.Xml.XmlReader
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryReader
class CORDL_TYPE XmlDictionaryReader : public ::System::Xml::XmlReader {
public:
// Declarations
using XmlWrappedReader = ::GlobalNamespace::XmlDictionaryReader_XmlWrappedReader;

 __declspec(property(get=get_Quotas)) ::System::Xml::XmlDictionaryReaderQuotas*  Quotas;

/// @brief Method CheckArray, addr 0xaa28d64, size 0x25c, virtual false, abstract: false, final false
inline void CheckArray(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method CreateDictionaryReader, addr 0xaa26cac, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateDictionaryReader(::System::Xml::XmlReader*  reader) ;

/// @brief Method CreateTextReader, addr 0xaa26dd0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateTextReader(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, ::System::Xml::XmlDictionaryReaderQuotas*  quotas, ::System::Xml::OnXmlDictionaryReaderClose*  onClose) ;

/// @brief Method CreateTextReader, addr 0xaa26dc0, size 0x10, virtual false, abstract: false, final false
static inline ::System::Xml::XmlDictionaryReader* CreateTextReader(::System::IO::Stream*  stream, ::System::Xml::XmlDictionaryReaderQuotas*  quotas) ;

/// @brief Method IndexOfLocalName, addr 0xaa270dc, size 0x14c, virtual true, abstract: false, final false
inline int32_t IndexOfLocalName(::ArrayW<::System::Xml::XmlDictionaryString*>  localNames, ::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsLocalName, addr 0xaa26f24, size 0x28, virtual true, abstract: false, final false
inline bool IsLocalName(::StringW  localName) ;

/// @brief Method IsLocalName, addr 0xaa26f4c, size 0x4c, virtual true, abstract: false, final false
inline bool IsLocalName(::System::Xml::XmlDictionaryString*  localName) ;

/// @brief Method IsNamespaceUri, addr 0xaa26f98, size 0x58, virtual true, abstract: false, final false
inline bool IsNamespaceUri(::StringW  namespaceUri) ;

/// @brief Method IsNamespaceUri, addr 0xaa26ff0, size 0x4c, virtual true, abstract: false, final false
inline bool IsNamespaceUri(::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsStartArray, addr 0xaa28fc0, size 0x20, virtual true, abstract: false, final false
inline bool IsStartArray(::by_ref<::System::Type*>  type) ;

/// @brief Method IsStartElement, addr 0xaa2703c, size 0x94, virtual true, abstract: false, final false
inline bool IsStartElement(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri) ;

/// @brief Method IsTextNode, addr 0xaa27b20, size 0x18, virtual false, abstract: false, final false
inline bool IsTextNode(::System::Xml::XmlNodeType  nodeType) ;

/// @brief Method MoveToStartElement, addr 0xaa26ef0, size 0x34, virtual true, abstract: false, final false
inline void MoveToStartElement() ;

static inline ::System::Xml::XmlDictionaryReader* New_ctor() ;

/// @brief Method ReadArray, addr 0xaa29bdc, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::DateTime>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29a38, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Decimal>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29d80, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::Guid>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29f24, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<::System::TimeSpan>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa28fec, size 0xec, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<bool>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29894, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<double_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa296f0, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<float_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29194, size 0x158, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int16_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa293a8, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int32_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa2954c, size 0xe8, virtual true, abstract: false, final false
inline int32_t ReadArray(::StringW  localName, ::StringW  namespaceUri, ::ArrayW<int64_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29cc4, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::DateTime>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29b20, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Decimal>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29e68, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::Guid>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa2a00c, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<::System::TimeSpan>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa290d8, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<bool>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa2997c, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<double_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa297d8, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<float_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa292ec, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int16_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29490, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int32_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadArray, addr 0xaa29634, size 0xbc, virtual true, abstract: false, final false
inline int32_t ReadArray(::System::Xml::XmlDictionaryString*  localName, ::System::Xml::XmlDictionaryString*  namespaceUri, ::ArrayW<int64_t>  array, int32_t  offset, int32_t  count) ;

/// @brief Method ReadContentAs, addr 0xaa27c08, size 0x364, virtual true, abstract: false, final false
inline ::System::Object* ReadContentAs(::System::Type*  type, ::System::Xml::IXmlNamespaceResolver*  namespaceResolver) ;

/// @brief Method ReadContentAsBase64, addr 0xaa27234, size 0x34, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ReadContentAsBase64() ;

/// @brief Method ReadContentAsBase64, addr 0xaa27268, size 0x114, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadContentAsBase64(int32_t  maxByteArrayContentLength, int32_t  maxInitialCount) ;

/// @brief Method ReadContentAsBytes, addr 0xaa2737c, size 0x284, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadContentAsBytes(bool  base64, int32_t  maxByteArrayContentLength) ;

/// @brief Method ReadContentAsChars, addr 0xaa27b38, size 0xd0, virtual true, abstract: false, final false
inline int32_t ReadContentAsChars(::ArrayW<char16_t>  chars, int32_t  offset, int32_t  count) ;

/// @brief Method ReadContentAsDecimal, addr 0xaa27f6c, size 0x70, virtual true, abstract: false, final false
inline ::System::Decimal ReadContentAsDecimal() ;

/// @brief Method ReadContentAsFloat, addr 0xaa27fdc, size 0x70, virtual true, abstract: false, final false
inline float_t ReadContentAsFloat() ;

/// @brief Method ReadContentAsGuid, addr 0xaa280bc, size 0x70, virtual true, abstract: false, final false
inline ::System::Guid ReadContentAsGuid() ;

/// @brief Method ReadContentAsString, addr 0xaa27600, size 0x30, virtual true, abstract: false, final false
inline ::StringW ReadContentAsString() ;

/// @brief Method ReadContentAsString, addr 0xaa27630, size 0x220, virtual false, abstract: false, final false
inline ::StringW ReadContentAsString(int32_t  maxStringContentLength) ;

/// @brief Method ReadContentAsTimeSpan, addr 0xaa2812c, size 0x70, virtual true, abstract: false, final false
inline ::System::TimeSpan ReadContentAsTimeSpan() ;

/// @brief Method ReadContentAsUniqueId, addr 0xaa2804c, size 0x70, virtual true, abstract: false, final false
inline ::System::Xml::UniqueId* ReadContentAsUniqueId() ;

/// @brief Method ReadElementContentAsBase64, addr 0xaa28c28, size 0xdc, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ReadElementContentAsBase64() ;

/// @brief Method ReadElementContentAsBoolean, addr 0xaa28250, size 0xfc, virtual true, abstract: false, final false
inline bool ReadElementContentAsBoolean() ;

/// @brief Method ReadElementContentAsDateTime, addr 0xaa2885c, size 0x1ec, virtual true, abstract: false, final false
inline ::System::DateTime ReadElementContentAsDateTime() ;

/// @brief Method ReadElementContentAsDecimal, addr 0xaa28754, size 0x108, virtual true, abstract: false, final false
inline ::System::Decimal ReadElementContentAsDecimal() ;

/// @brief Method ReadElementContentAsDouble, addr 0xaa2864c, size 0x108, virtual true, abstract: false, final false
inline double_t ReadElementContentAsDouble() ;

/// @brief Method ReadElementContentAsFloat, addr 0xaa28544, size 0x108, virtual true, abstract: false, final false
inline float_t ReadElementContentAsFloat() ;

/// @brief Method ReadElementContentAsGuid, addr 0xaa28a48, size 0xe4, virtual true, abstract: false, final false
inline ::System::Guid ReadElementContentAsGuid() ;

/// @brief Method ReadElementContentAsInt, addr 0xaa2834c, size 0xfc, virtual true, abstract: false, final false
inline int32_t ReadElementContentAsInt() ;

/// @brief Method ReadElementContentAsLong, addr 0xaa28448, size 0xfc, virtual true, abstract: false, final false
inline int64_t ReadElementContentAsLong() ;

/// @brief Method ReadElementContentAsString, addr 0xaa2819c, size 0xb4, virtual true, abstract: false, final false
inline ::StringW ReadElementContentAsString() ;

/// @brief Method ReadElementContentAsTimeSpan, addr 0xaa28b2c, size 0xfc, virtual true, abstract: false, final false
inline ::System::TimeSpan ReadElementContentAsTimeSpan() ;

/// @brief Method ReadString, addr 0xaa27850, size 0x30, virtual true, abstract: false, final false
inline ::StringW ReadString() ;

/// @brief Method ReadString, addr 0xaa27880, size 0x2a0, virtual false, abstract: false, final false
inline ::StringW ReadString(int32_t  maxStringContentLength) ;

/// @brief Method TryGetArrayLength, addr 0xaa28fe0, size 0xc, virtual true, abstract: false, final false
inline bool TryGetArrayLength(::by_ref<int32_t>  count) ;

/// @brief Method TryGetBase64ContentLength, addr 0xaa27228, size 0xc, virtual true, abstract: false, final false
inline bool TryGetBase64ContentLength(::by_ref<int32_t>  length) ;

/// @brief Method TryGetLocalNameAsDictionaryString, addr 0xaa28d04, size 0x20, virtual true, abstract: false, final false
inline bool TryGetLocalNameAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  localName) ;

/// @brief Method TryGetNamespaceUriAsDictionaryString, addr 0xaa28d24, size 0x20, virtual true, abstract: false, final false
inline bool TryGetNamespaceUriAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  namespaceUri) ;

/// @brief Method TryGetValueAsDictionaryString, addr 0xaa28d44, size 0x20, virtual true, abstract: false, final false
inline bool TryGetValueAsDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  value) ;

/// @brief Method .ctor, addr 0xaa2a0c8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Quotas, addr 0xaa26e68, size 0x88, virtual true, abstract: false, final false
inline ::System::Xml::XmlDictionaryReaderQuotas* get_Quotas() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlDictionaryReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlDictionaryReader(XmlDictionaryReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlDictionaryReader(XmlDictionaryReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlDictionaryReader) == 0x10, "Size mismatch!");

} // namespace end def System::Xml
