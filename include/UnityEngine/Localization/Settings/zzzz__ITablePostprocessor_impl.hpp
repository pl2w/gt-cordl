#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ITablePostprocessor.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ITablePostprocessor_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::ITablePostprocessor.PostprocessTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::ITablePostprocessor::*)(::UnityEngine::Localization::Tables::LocalizationTable*)>(&::UnityEngine::Localization::Settings::ITablePostprocessor::PostprocessTable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::ITablePostprocessor*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::ITablePostprocessor*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Settings::ITablePostprocessor::PostprocessTable(::UnityEngine::Localization::Tables::LocalizationTable*  table)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::ITablePostprocessor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
