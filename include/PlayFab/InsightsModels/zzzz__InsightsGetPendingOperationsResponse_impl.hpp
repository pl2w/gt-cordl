#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetPendingOperationsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetPendingOperationsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::*)()>(&::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*& PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::__cordl_internal_get_PendingOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingOperations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>* const& PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::__cordl_internal_get_PendingOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingOperations;
}
constexpr void PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::__cordl_internal_set_PendingOperations(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingOperations = value;
}
inline void PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse* PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse()   {
}
