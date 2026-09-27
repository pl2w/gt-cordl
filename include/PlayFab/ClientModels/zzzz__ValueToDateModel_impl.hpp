#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValueToDateModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValueToDateModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValueToDateModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValueToDateModel::*)()>(&::PlayFab::ClientModels::ValueToDateModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValueToDateModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_Currency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr ::StringW const& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_Currency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr void PlayFab::ClientModels::ValueToDateModel::__cordl_internal_set_Currency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Currency = value;
}
constexpr uint32_t& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_TotalValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValue;
}
constexpr uint32_t const& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_TotalValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValue;
}
constexpr void PlayFab::ClientModels::ValueToDateModel::__cordl_internal_set_TotalValue(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalValue = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_TotalValueAsDecimal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValueAsDecimal;
}
constexpr ::StringW const& PlayFab::ClientModels::ValueToDateModel::__cordl_internal_get_TotalValueAsDecimal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalValueAsDecimal;
}
constexpr void PlayFab::ClientModels::ValueToDateModel::__cordl_internal_set_TotalValueAsDecimal(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalValueAsDecimal = value;
}
inline void PlayFab::ClientModels::ValueToDateModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValueToDateModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValueToDateModel* PlayFab::ClientModels::ValueToDateModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValueToDateModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValueToDateModel::ValueToDateModel()   {
}
