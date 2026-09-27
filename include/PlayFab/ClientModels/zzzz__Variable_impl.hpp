#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Variable.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__Variable_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::Variable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::Variable::*)()>(&::PlayFab::ClientModels::Variable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::Variable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::Variable::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ClientModels::Variable::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ClientModels::Variable::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::ClientModels::Variable::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::StringW const& PlayFab::ClientModels::Variable::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ClientModels::Variable::__cordl_internal_set_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::ClientModels::Variable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::Variable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::Variable* PlayFab::ClientModels::Variable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::Variable*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::Variable::Variable()   {
}
