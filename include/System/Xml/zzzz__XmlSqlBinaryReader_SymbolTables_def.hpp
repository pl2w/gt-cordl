#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_SymbolTables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSqlBinaryReader_SymbolTables)
namespace GlobalNamespace {
struct XmlSqlBinaryReader_QName;
}
// Forward declare root types
namespace GlobalNamespace {
struct XmlSqlBinaryReader_SymbolTables;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables, "System.Xml", "XmlSqlBinaryReader/SymbolTables");
// Dependencies System.Xml.XmlSqlBinaryReader::QName
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.XmlSqlBinaryReader/SymbolTables
struct CORDL_TYPE XmlSqlBinaryReader_SymbolTables {
public:
// Declarations
/// @brief Method Init, addr 0xaab5f58, size 0xd4, virtual false, abstract: false, final false
inline void Init() ;

// Ctor Parameters []
// @brief default ctor
constexpr XmlSqlBinaryReader_SymbolTables() ;

// Ctor Parameters [CppParam { name: "symtable", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "symCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "qnametable", ty: "::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_QName>", modifiers: "", def_value: None, comment: None }, CppParam { name: "qnameCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XmlSqlBinaryReader_SymbolTables(::ArrayW<::StringW>  symtable, int32_t  symCount, ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_QName>  qnametable, int32_t  qnameCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13987};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field symtable, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  symtable;

/// @brief Field symCount, offset: 0x8, size: 0x4, def value: None
 int32_t  symCount;

/// @brief Field qnametable, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_QName>  qnametable;

/// @brief Field qnameCount, offset: 0x18, size: 0x4, def value: None
 int32_t  qnameCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables, symtable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables, symCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables, qnametable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables, qnameCount) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XmlSqlBinaryReader_SymbolTables) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
