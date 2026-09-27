#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserDataResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetUserDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataRecord_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetUserDataResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetUserDataResult::*)()>(&::PlayFab::ClientModels::GetUserDataResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserDataResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& PlayFab::ClientModels::GetUserDataResult::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& PlayFab::ClientModels::GetUserDataResult::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::GetUserDataResult::__cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr uint32_t& PlayFab::ClientModels::GetUserDataResult::__cordl_internal_get_DataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr uint32_t const& PlayFab::ClientModels::GetUserDataResult::__cordl_internal_get_DataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr void PlayFab::ClientModels::GetUserDataResult::__cordl_internal_set_DataVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataVersion = value;
}
inline void PlayFab::ClientModels::GetUserDataResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetUserDataResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetUserDataResult* PlayFab::ClientModels::GetUserDataResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetUserDataResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetUserDataResult::GetUserDataResult()   {
}
