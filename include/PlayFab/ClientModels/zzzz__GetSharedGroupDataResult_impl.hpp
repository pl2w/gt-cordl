#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetSharedGroupDataResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__SharedGroupDataRecord_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetSharedGroupDataResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetSharedGroupDataResult::*)()>(&::PlayFab::ClientModels::GetSharedGroupDataResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::ClientModels::GetSharedGroupDataResult::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
inline void PlayFab::ClientModels::GetSharedGroupDataResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetSharedGroupDataResult* PlayFab::ClientModels::GetSharedGroupDataResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetSharedGroupDataResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetSharedGroupDataResult::GetSharedGroupDataResult()   {
}
