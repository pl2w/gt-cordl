#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListFunctionsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListFunctionsResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__FunctionModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ListFunctionsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ListFunctionsResult::*)()>(&::PlayFab::CloudScriptModels::ListFunctionsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListFunctionsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::FunctionModel*>*& PlayFab::CloudScriptModels::ListFunctionsResult::__cordl_internal_get_Functions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Functions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::FunctionModel*>* const& PlayFab::CloudScriptModels::ListFunctionsResult::__cordl_internal_get_Functions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Functions;
}
constexpr void PlayFab::CloudScriptModels::ListFunctionsResult::__cordl_internal_set_Functions(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::FunctionModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Functions = value;
}
inline void PlayFab::CloudScriptModels::ListFunctionsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListFunctionsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ListFunctionsResult* PlayFab::CloudScriptModels::ListFunctionsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ListFunctionsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ListFunctionsResult::ListFunctionsResult()   {
}
