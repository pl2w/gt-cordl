#pragma once
// IWYU pragma private; include "System/Xml/StringHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__StringHandle_StringHandleType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringHandle)
namespace GlobalNamespace {
struct StringHandle_StringHandleType;
}
namespace System::Xml {
class PrefixHandle;
}
namespace System::Xml {
class XmlBufferReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class StringHandle;
}
// Write type traits
MARK_REF_T(::System::Xml::StringHandle*);
DEFINE_IL2CPP_CLASS(::System::Xml::StringHandle*, "System.Xml", "StringHandle");
// Dependencies System.Object, System.Xml.StringHandle::StringHandleType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.StringHandle
class CORDL_TYPE StringHandle : public ::System::Object {
public:
// Declarations
using StringHandleType = ::GlobalNamespace::StringHandle_StringHandleType;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsXmlns)) bool  IsXmlns;

/// @brief Field bufferReader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferReader, put=__cordl_internal_set_bufferReader)) ::System::Xml::XmlBufferReader*  bufferReader;

/// @brief Field constStrings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_constStrings, put=setStaticF_constStrings)) ::ArrayW<::StringW>  constStrings;

/// @brief Field key, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) int32_t  key;

/// @brief Field length, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Field offset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::StringHandle_StringHandleType  type;

/// @brief Method CompareTo, addr 0xaa08ad8, size 0x84, virtual false, abstract: false, final false
inline int32_t CompareTo(::System::Xml::StringHandle*  that) ;

/// @brief Method Equals, addr 0xaa08b5c, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals2, addr 0xaa087b8, size 0xdc, virtual false, abstract: false, final false
inline bool Equals2(int32_t  key2, ::System::Xml::XmlBufferReader*  bufferReader2) ;

/// @brief Method Equals2, addr 0xaa08940, size 0xe0, virtual false, abstract: false, final false
inline bool Equals2(int32_t  offset2, int32_t  length2, ::System::Xml::XmlBufferReader*  bufferReader2) ;

/// @brief Method Equals2, addr 0xaa081cc, size 0x74, virtual false, abstract: false, final false
inline bool Equals2(::StringW  s2) ;

/// @brief Method Equals2, addr 0xaa08a20, size 0x68, virtual false, abstract: false, final false
inline bool Equals2(::System::Xml::StringHandle*  s2) ;

/// @brief Method Equals2, addr 0xaa08894, size 0xac, virtual false, abstract: false, final false
inline bool Equals2(::System::Xml::XmlDictionaryString*  xmlString2) ;

/// @brief Method GetHashCode, addr 0xaa08bfc, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetString, addr 0xaa08580, size 0x160, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetString(::by_ref<int32_t>  offset, ::by_ref<int32_t>  length) ;

/// @brief Method GetString, addr 0xaa08490, size 0xf0, virtual false, abstract: false, final false
inline ::StringW GetString() ;

/// @brief Method GetString, addr 0xaa08378, size 0x118, virtual false, abstract: false, final false
inline ::StringW GetString(::System::Xml::XmlNameTable*  nameTable) ;

static inline ::System::Xml::StringHandle* New_ctor(::System::Xml::XmlBufferReader*  bufferReader) ;

/// @brief Method SetValue, addr 0xaa0814c, size 0x10, virtual false, abstract: false, final false
inline void SetValue(int32_t  offset, int32_t  length) ;

/// @brief Method SetValue, addr 0xaa0815c, size 0x24, virtual false, abstract: false, final false
inline void SetValue(int32_t  offset, int32_t  length, bool  escaped) ;

/// @brief Method SetValue, addr 0xaa08180, size 0x18, virtual false, abstract: false, final false
inline void SetValue(::System::Xml::StringHandle*  value) ;

/// @brief Method ToPrefixHandle, addr 0xaa0835c, size 0x1c, virtual false, abstract: false, final false
inline void ToPrefixHandle(::System::Xml::PrefixHandle*  prefix) ;

/// @brief Method ToString, addr 0xaa087b4, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetDictionaryString, addr 0xaa086e0, size 0xd4, virtual false, abstract: false, final false
inline bool TryGetDictionaryString(::by_ref<::System::Xml::XmlDictionaryString*>  value) ;

constexpr ::System::Xml::XmlBufferReader* const& __cordl_internal_get_bufferReader() const;

constexpr ::System::Xml::XmlBufferReader*& __cordl_internal_get_bufferReader() ;

constexpr int32_t const& __cordl_internal_get_key() const;

constexpr int32_t& __cordl_internal_get_key() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr ::GlobalNamespace::StringHandle_StringHandleType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::StringHandle_StringHandleType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_bufferReader(::System::Xml::XmlBufferReader*  value) ;

constexpr void __cordl_internal_set_key(int32_t  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::StringHandle_StringHandleType  value) ;

/// @brief Method .ctor, addr 0xaa0810c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::XmlBufferReader*  bufferReader) ;

static inline ::ArrayW<::StringW> getStaticF_constStrings() ;

/// @brief Method get_IsEmpty, addr 0xaa08198, size 0x34, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsXmlns, addr 0xaa08240, size 0x11c, virtual false, abstract: false, final false
inline bool get_IsXmlns() ;

/// @brief Method op_Equality, addr 0xaa08a98, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Xml::StringHandle*  s1, ::StringW  s2) ;

/// @brief Method op_Equality, addr 0xaa08ac8, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Xml::StringHandle*  s1, ::System::Xml::StringHandle*  s2) ;

/// @brief Method op_Equality, addr 0xaa08a88, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Xml::StringHandle*  s1, ::System::Xml::XmlDictionaryString*  xmlString2) ;

/// @brief Method op_Inequality, addr 0xaa08aa8, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Xml::StringHandle*  s1, ::StringW  s2) ;

static inline void setStaticF_constStrings(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringHandle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringHandle(StringHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringHandle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringHandle(StringHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24412};

/// @brief Field bufferReader, offset: 0x10, size: 0x8, def value: None
 ::System::Xml::XmlBufferReader*  ___bufferReader;

/// @brief Field type, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::StringHandle_StringHandleType  ___type;

/// @brief Field key, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___key;

/// @brief Field offset, offset: 0x20, size: 0x4, def value: None
 int32_t  ___offset;

/// @brief Field length, offset: 0x24, size: 0x4, def value: None
 int32_t  ___length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::StringHandle, ___bufferReader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___key) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::StringHandle, ___length) == 0x24, "Offset mismatch!");

static_assert(sizeof(::System::Xml::StringHandle) == 0x28, "Size mismatch!");

} // namespace end def System::Xml
