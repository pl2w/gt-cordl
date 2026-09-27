#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseItemResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseItemResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PurchaseItemResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PurchaseItemResult::*)()>(&::PlayFab::ClientModels::PurchaseItemResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseItemResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::PurchaseItemResult::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::PurchaseItemResult::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr void PlayFab::ClientModels::PurchaseItemResult::__cordl_internal_set_Items(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Items = value;
}
inline void PlayFab::ClientModels::PurchaseItemResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseItemResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PurchaseItemResult* PlayFab::ClientModels::PurchaseItemResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PurchaseItemResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PurchaseItemResult::PurchaseItemResult()   {
}
