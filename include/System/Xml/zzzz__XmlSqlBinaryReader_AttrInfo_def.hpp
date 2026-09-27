#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_AttrInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader_AttrInfo)
namespace GlobalNamespace {
struct XmlSqlBinaryReader_QName;
}
namespace System::Xml {
class SecureStringHasher;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlSqlBinaryReader_AttrInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, "System.Xml", "XmlSqlBinaryReader/AttrInfo");
// Dependencies System.Xml.XmlSqlBinaryReader::QName
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlSqlBinaryReader/AttrInfo
struct CORDL_TYPE XmlSqlBinaryReader_AttrInfo {
public:
// Declarations
/// @brief Method AdjustPosition, addr 0xaab5eb4, size 0x14, virtual false, abstract: false, final false
inline void AdjustPosition(int32_t  adj) ;

/// @brief Method GetLocalnameAndNamespaceUri, addr 0xaab5e04, size 0x3c, virtual false, abstract: false, final false
inline void GetLocalnameAndNamespaceUri(::by_ref<::StringW>  localname, ::by_ref<::StringW>  namespaceUri) ;

/// @brief Method GetLocalnameAndNamespaceUriAndHash, addr 0xaab5e40, size 0x50, virtual false, abstract: false, final false
inline int32_t GetLocalnameAndNamespaceUriAndHash(::System::Xml::SecureStringHasher*  hasher, ::by_ref<::StringW>  localname, ::by_ref<::StringW>  namespaceUri) ;

/// @brief Method MatchHashNS, addr 0xaab5e94, size 0x20, virtual false, abstract: false, final false
inline bool MatchHashNS(int32_t  hash, ::StringW  localname, ::StringW  namespaceUri) ;

/// @brief Method MatchNS, addr 0xaab5e90, size 0x4, virtual false, abstract: false, final false
inline bool MatchNS(::StringW  localname, ::StringW  namespaceUri) ;

/// @brief Method Set, addr 0xaab5db8, size 0x4c, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::XmlSqlBinaryReader_QName  n, int32_t  pos) ;

/// @brief Method Set, addr 0xaab5d6c, size 0x4c, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::XmlSqlBinaryReader_QName  n, ::StringW  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_AttrInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::GlobalNamespace::XmlSqlBinaryReader_QName", modifiers: "", def_value: None, comment: None }, CppParam { name: "val", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "contentPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "prevHash", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSqlBinaryReader_AttrInfo(::GlobalNamespace::XmlSqlBinaryReader_QName  name, ::StringW  val, int32_t  contentPos, int32_t  hashCode, int32_t  prevHash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field name, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::XmlSqlBinaryReader_QName  name;

/// @brief Field val, offset: 0x18, size: 0x8, def value: None
 ::StringW  val;

/// @brief Field contentPos, offset: 0x20, size: 0x4, def value: None
 int32_t  contentPos;

/// @brief Field hashCode, offset: 0x24, size: 0x4, def value: None
 int32_t  hashCode;

/// @brief Field prevHash, offset: 0x28, size: 0x4, def value: None
 int32_t  prevHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, val) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, contentPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, hashCode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo, prevHash) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSqlBinaryReader_AttrInfo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
