#pragma once
// IWYU pragma private; include "System/Data/DataTable_RowDiffIdUsageSection.hpp"
#include "System/Data/zzzz__DataTable_RowDiffIdUsageSection_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataTable_RowDiffIdUsageSection.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataTable_RowDiffIdUsageSection::*)(::System::Data::DataTable*)>(&::GlobalNamespace::DataTable_RowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa912d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataTable_RowDiffIdUsageSection>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DataTable_RowDiffIdUsageSection::Prepare(::System::Data::DataTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataTable_RowDiffIdUsageSection>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, table);
}
// Ctor Parameters [CppParam { name: "_targetTable", ty: "::System::Data::DataTable*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataTable_RowDiffIdUsageSection::DataTable_RowDiffIdUsageSection(::System::Data::DataTable*  _targetTable) noexcept  {
this->_targetTable = _targetTable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataTable_RowDiffIdUsageSection::DataTable_RowDiffIdUsageSection()   {
}
