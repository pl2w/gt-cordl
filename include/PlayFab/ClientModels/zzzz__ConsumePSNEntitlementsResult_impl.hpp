#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumePSNEntitlementsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ConsumePSNEntitlementsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ConsumePSNEntitlementsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ConsumePSNEntitlementsResult::*)()>(&::PlayFab::ClientModels::ConsumePSNEntitlementsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumePSNEntitlementsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::ConsumePSNEntitlementsResult::__cordl_internal_get_ItemsGranted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemsGranted;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::ConsumePSNEntitlementsResult::__cordl_internal_get_ItemsGranted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemsGranted;
}
constexpr void PlayFab::ClientModels::ConsumePSNEntitlementsResult::__cordl_internal_set_ItemsGranted(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemsGranted = value;
}
inline void PlayFab::ClientModels::ConsumePSNEntitlementsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumePSNEntitlementsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConsumePSNEntitlementsResult* PlayFab::ClientModels::ConsumePSNEntitlementsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ConsumePSNEntitlementsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult()   {
}
