#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Configuration/WitConfigurationAssetData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfigurationAssetData_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Configuration::WitConfigurationAssetData::*)()>(&::Meta::WitAi::Data::Configuration::WitConfigurationAssetData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e479f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Data::Configuration::WitConfigurationAssetData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData* Meta::WitAi::Data::Configuration::WitConfigurationAssetData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Configuration::WitConfigurationAssetData*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Configuration::WitConfigurationAssetData::WitConfigurationAssetData()   {
}
