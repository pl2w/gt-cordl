#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListQueuedFunctionsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListQueuedFunctionsResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__QueuedFunctionModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ListQueuedFunctionsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ListQueuedFunctionsResult::*)()>(&::PlayFab::CloudScriptModels::ListQueuedFunctionsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*& PlayFab::CloudScriptModels::ListQueuedFunctionsResult::__cordl_internal_get_Functions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Functions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>* const& PlayFab::CloudScriptModels::ListQueuedFunctionsResult::__cordl_internal_get_Functions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Functions;
}
constexpr void PlayFab::CloudScriptModels::ListQueuedFunctionsResult::__cordl_internal_set_Functions(::System::Collections::Generic::List_1<::PlayFab::CloudScriptModels::QueuedFunctionModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Functions = value;
}
inline void PlayFab::CloudScriptModels::ListQueuedFunctionsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ListQueuedFunctionsResult* PlayFab::CloudScriptModels::ListQueuedFunctionsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ListQueuedFunctionsResult::ListQueuedFunctionsResult()   {
}
