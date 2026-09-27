#pragma once
// IWYU pragma private; include "System/Xml/XmlSqlBinaryReader_SymbolTables.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_impl.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_SymbolTables_def.hpp"
#include "System/Xml/zzzz__XmlSqlBinaryReader_QName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XmlSqlBinaryReader_SymbolTables::*)()>(&::GlobalNamespace::XmlSqlBinaryReader_SymbolTables::Init)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaab5f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_SymbolTables>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XmlSqlBinaryReader_SymbolTables::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XmlSqlBinaryReader_SymbolTables>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "symtable", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "symCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "qnametable", ty: "::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_QName>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "qnameCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables::XmlSqlBinaryReader_SymbolTables(::ArrayW<::StringW>  symtable, int32_t  symCount, ::ArrayW<::GlobalNamespace::XmlSqlBinaryReader_QName>  qnametable, int32_t  qnameCount) noexcept  {
this->symtable = symtable;
this->symCount = symCount;
this->qnametable = qnametable;
this->qnameCount = qnameCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSqlBinaryReader_SymbolTables::XmlSqlBinaryReader_SymbolTables()   {
}
