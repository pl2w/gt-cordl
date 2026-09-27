#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_QName.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader_QName)
namespace System::Xml {
class SecureStringHasher;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlSqlBinaryReader_QName;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSqlBinaryReader_QName);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSqlBinaryReader_QName, "System.Xml", "XmlSqlBinaryReader/QName");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlSqlBinaryReader/QName
struct CORDL_TYPE XmlSqlBinaryReader_QName {
public:
// Declarations
/// @brief Method CheckPrefixNS, addr 0xaab5974, size 0xe4, virtual false, abstract: false, final false
inline void CheckPrefixNS(::StringW  prefix, ::StringW  namespaceUri) ;

/// @brief Method Clear, addr 0xaab5880, size 0x54, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Equals, addr 0xaab5b90, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0xaab5a58, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetNSHashCode, addr 0xaab5aa0, size 0x44, virtual false, abstract: false, final false
inline int32_t GetNSHashCode(::System::Xml::SecureStringHasher*  hasher) ;

/// @brief Method MatchNs, addr 0xaab58d4, size 0x50, virtual false, abstract: false, final false
inline bool MatchNs(::StringW  lname, ::StringW  nsUri) ;

/// @brief Method MatchPrefix, addr 0xaab5924, size 0x50, virtual false, abstract: false, final false
inline bool MatchPrefix(::StringW  prefix, ::StringW  lname) ;

/// @brief Method Set, addr 0xaab583c, size 0x44, virtual false, abstract: false, final false
inline void Set(::StringW  prefix, ::StringW  lname, ::StringW  nsUri) ;

/// @brief Method ToString, addr 0xaab5c90, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaab57f8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, ::StringW  lname, ::StringW  nsUri) ;

/// @brief Method op_Equality, addr 0xaab5c30, size 0x60, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::XmlSqlBinaryReader_QName  a, ::GlobalNamespace::XmlSqlBinaryReader_QName  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_QName() ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "localname", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "namespaceUri", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr XmlSqlBinaryReader_QName(::StringW  prefix, ::StringW  localname, ::StringW  namespaceUri) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13983};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
 ::StringW  prefix;

/// @brief Field localname, offset: 0x8, size: 0x8, def value: None
 ::StringW  localname;

/// @brief Field namespaceUri, offset: 0x10, size: 0x8, def value: None
 ::StringW  namespaceUri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_QName, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_QName, localname) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_QName, namespaceUri) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSqlBinaryReader_QName) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
