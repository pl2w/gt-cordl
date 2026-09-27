#pragma once
// IWYU pragma private; include "System/Data/DataTable_DSRowDiffIdUsageSection.hpp"
#include "System/Data/zzzz__DataTable_DSRowDiffIdUsageSection_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DataTable_DSRowDiffIdUsageSection.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DataTable_DSRowDiffIdUsageSection::*)(::System::Data::DataSet*)>(&::GlobalNamespace::DataTable_DSRowDiffIdUsageSection::Prepare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa90f4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataTable_DSRowDiffIdUsageSection>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Data::DataSet*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DataTable_DSRowDiffIdUsageSection::Prepare(::System::Data::DataSet*  ds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DataTable_DSRowDiffIdUsageSection>(),
                        {"Prepare", {}, {::i2c::type_of<::System::Data::DataSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ds);
}
// Ctor Parameters [CppParam { name: "_targetDS", ty: "::System::Data::DataSet*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DataTable_DSRowDiffIdUsageSection::DataTable_DSRowDiffIdUsageSection(::System::Data::DataSet*  _targetDS) noexcept  {
this->_targetDS = _targetDS;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DataTable_DSRowDiffIdUsageSection::DataTable_DSRowDiffIdUsageSection()   {
}
