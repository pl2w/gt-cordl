#pragma once
// IWYU pragma private; include "System/Xml/XmlEventCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Xsl/Runtime/zzzz__StringConcat_def.hpp"
#include "System/Xml/zzzz__XmlEventCache_XmlEvent_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlEventCache)
namespace GlobalNamespace {
struct XmlEventCache_XmlEventType;
}
namespace GlobalNamespace {
struct XmlEventCache_XmlEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlEventCache;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlEventCache*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlEventCache*, "System.Xml", "XmlEventCache");
// Dependencies System.Xml.XmlEventCache::XmlEvent, System.Xml.XmlRawWriter, System.Xml.Xsl.Runtime.StringConcat
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlEventCache
class CORDL_TYPE XmlEventCache : public ::System::Xml::XmlRawWriter {
public:
// Declarations
using XmlEvent = ::GlobalNamespace::XmlEventCache_XmlEvent;

using XmlEventType = ::GlobalNamespace::XmlEventCache_XmlEventType;

/// @brief Field baseUri, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseUri, put=__cordl_internal_set_baseUri)) ::StringW  baseUri;

/// @brief Field hasRootNode, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRootNode, put=__cordl_internal_set_hasRootNode)) bool  hasRootNode;

/// @brief Field pageCurr, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pageCurr, put=__cordl_internal_set_pageCurr)) ::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>  pageCurr;

/// @brief Field pageSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageSize, put=__cordl_internal_set_pageSize)) int32_t  pageSize;

/// @brief Field pages, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pages, put=__cordl_internal_set_pages)) ::System::Collections::Generic::List_1<::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>>*  pages;

/// @brief Field singleText, offset 0x40, size 0x38 
 __declspec(property(get=__cordl_internal_get_singleText, put=__cordl_internal_set_singleText)) ::System::Xml::Xsl::Runtime::StringConcat  singleText;

/// @brief Method AddEvent, addr 0xaac3854, size 0x48, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType) ;

/// @brief Method AddEvent, addr 0xaac3ba4, size 0x58, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::System::Object*  o) ;

/// @brief Method AddEvent, addr 0xaac39e0, size 0x58, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1) ;

/// @brief Method AddEvent, addr 0xaac3a54, size 0x68, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2) ;

/// @brief Method AddEvent, addr 0xaac3948, size 0x70, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2, ::StringW  s3) ;

/// @brief Method AddEvent, addr 0xaac38b4, size 0x80, virtual false, abstract: false, final false
inline void AddEvent(::GlobalNamespace::XmlEventCache_XmlEventType  eventType, ::StringW  s1, ::StringW  s2, ::StringW  s3, ::System::Object*  o) ;

/// @brief Method Close, addr 0xaac3d94, size 0x8, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Dispose, addr 0xaac3db4, size 0xa8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndEvents, addr 0xaac0c20, size 0x14, virtual false, abstract: false, final false
inline void EndEvents() ;

/// @brief Method EventsToWriter, addr 0xaac0c34, size 0x6e0, virtual false, abstract: false, final false
inline void EventsToWriter(::System::Xml::XmlWriter*  writer) ;

/// @brief Method Flush, addr 0xaac3d9c, size 0x8, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method NewEvent, addr 0xaac3f1c, size 0x240, virtual false, abstract: false, final false
inline int32_t NewEvent() ;

static inline ::System::Xml::XmlEventCache* New_ctor(::StringW  baseUri, bool  hasRootNode) ;

/// @brief Method StartElementContent, addr 0xaac3ed4, size 0x8, virtual true, abstract: false, final false
inline void StartElementContent() ;

/// @brief Method ToBytes, addr 0xaac3cb4, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToBytes(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteBase64, addr 0xaac3c88, size 0x2c, virtual true, abstract: false, final false
inline void WriteBase64(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteBinHex, addr 0xaac3d68, size 0x2c, virtual true, abstract: false, final false
inline void WriteBinHex(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteCData, addr 0xaac39d4, size 0xc, virtual true, abstract: false, final false
inline void WriteCData(::StringW  text) ;

/// @brief Method WriteCharEntity, addr 0xaac3b64, size 0x40, virtual true, abstract: false, final false
inline void WriteCharEntity(char16_t  ch) ;

/// @brief Method WriteChars, addr 0xaac3aec, size 0x30, virtual true, abstract: false, final false
inline void WriteChars(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteComment, addr 0xaac3a38, size 0xc, virtual true, abstract: false, final false
inline void WriteComment(::StringW  text) ;

/// @brief Method WriteDocType, addr 0xaac389c, size 0x18, virtual true, abstract: false, final false
inline void WriteDocType(::StringW  name, ::StringW  pubid, ::StringW  sysid, ::StringW  subset) ;

/// @brief Method WriteEndAttribute, addr 0xaac39cc, size 0x8, virtual true, abstract: false, final false
inline void WriteEndAttribute() ;

/// @brief Method WriteEndBase64, addr 0xaac3f14, size 0x8, virtual true, abstract: false, final false
inline void WriteEndBase64() ;

/// @brief Method WriteEndElement, addr 0xaac3edc, size 0x14, virtual true, abstract: false, final false
inline void WriteEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteEntityRef, addr 0xaac3b58, size 0xc, virtual true, abstract: false, final false
inline void WriteEntityRef(::StringW  name) ;

/// @brief Method WriteFullEndElement, addr 0xaac3ef0, size 0x14, virtual true, abstract: false, final false
inline void WriteFullEndElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteNamespaceDeclaration, addr 0xaac3f04, size 0x10, virtual true, abstract: false, final false
inline void WriteNamespaceDeclaration(::StringW  prefix, ::StringW  ns) ;

/// @brief Method WriteProcessingInstruction, addr 0xaac3a44, size 0x10, virtual true, abstract: false, final false
inline void WriteProcessingInstruction(::StringW  name, ::StringW  text) ;

/// @brief Method WriteRaw, addr 0xaac3b1c, size 0x30, virtual true, abstract: false, final false
inline void WriteRaw(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteRaw, addr 0xaac3b4c, size 0xc, virtual true, abstract: false, final false
inline void WriteRaw(::StringW  data) ;

/// @brief Method WriteStartAttribute, addr 0xaac39b8, size 0x14, virtual true, abstract: false, final false
inline void WriteStartAttribute(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteStartElement, addr 0xaac3934, size 0x14, virtual true, abstract: false, final false
inline void WriteStartElement(::StringW  prefix, ::StringW  localName, ::StringW  ns) ;

/// @brief Method WriteString, addr 0xaac3ac8, size 0x24, virtual true, abstract: false, final false
inline void WriteString(::StringW  text) ;

/// @brief Method WriteSurrogateCharEntity, addr 0xaac3bfc, size 0x8c, virtual true, abstract: false, final false
inline void WriteSurrogateCharEntity(char16_t  lowChar, char16_t  highChar) ;

/// @brief Method WriteValue, addr 0xaac3da4, size 0x10, virtual true, abstract: false, final false
inline void WriteValue(::StringW  value) ;

/// @brief Method WriteWhitespace, addr 0xaac3abc, size 0xc, virtual true, abstract: false, final false
inline void WriteWhitespace(::StringW  ws) ;

/// @brief Method WriteXmlDeclaration, addr 0xaac3e5c, size 0x6c, virtual true, abstract: false, final false
inline void WriteXmlDeclaration(::System::Xml::XmlStandalone  standalone) ;

/// @brief Method WriteXmlDeclaration, addr 0xaac3ec8, size 0xc, virtual true, abstract: false, final false
inline void WriteXmlDeclaration(::StringW  xmldecl) ;

constexpr ::StringW const& __cordl_internal_get_baseUri() const;

constexpr ::StringW& __cordl_internal_get_baseUri() ;

constexpr bool const& __cordl_internal_get_hasRootNode() const;

constexpr bool& __cordl_internal_get_hasRootNode() ;

constexpr ::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent> const& __cordl_internal_get_pageCurr() const;

constexpr ::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>& __cordl_internal_get_pageCurr() ;

constexpr int32_t const& __cordl_internal_get_pageSize() const;

constexpr int32_t& __cordl_internal_get_pageSize() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>>* const& __cordl_internal_get_pages() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>>*& __cordl_internal_get_pages() ;

constexpr ::System::Xml::Xsl::Runtime::StringConcat const& __cordl_internal_get_singleText() const;

constexpr ::System::Xml::Xsl::Runtime::StringConcat& __cordl_internal_get_singleText() ;

constexpr void __cordl_internal_set_baseUri(::StringW  value) ;

constexpr void __cordl_internal_set_hasRootNode(bool  value) ;

constexpr void __cordl_internal_set_pageCurr(::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>  value) ;

constexpr void __cordl_internal_set_pageSize(int32_t  value) ;

constexpr void __cordl_internal_set_pages(::System::Collections::Generic::List_1<::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>>*  value) ;

constexpr void __cordl_internal_set_singleText(::System::Xml::Xsl::Runtime::StringConcat  value) ;

/// @brief Method .ctor, addr 0xaabfee0, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  baseUri, bool  hasRootNode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XmlEventCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XmlEventCache(XmlEventCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XmlEventCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XmlEventCache(XmlEventCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14043};

/// @brief Field pages, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>>*  ___pages;

/// @brief Field pageCurr, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlEventCache_XmlEvent>  ___pageCurr;

/// @brief Field pageSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___pageSize;

/// @brief Field hasRootNode, offset: 0x3c, size: 0x1, def value: None
 bool  ___hasRootNode;

/// @brief Field singleText, offset: 0x40, size: 0x38, def value: None
 ::System::Xml::Xsl::Runtime::StringConcat  ___singleText;

/// @brief Field baseUri, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___baseUri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlEventCache, ___pages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageCurr) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___pageSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___hasRootNode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___singleText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEventCache, ___baseUri) == 0x78, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlEventCache) == 0x80, "Size mismatch!");

} // namespace end def System::Xml
