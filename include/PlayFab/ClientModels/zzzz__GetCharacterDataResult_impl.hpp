#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterDataResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetCharacterDataResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserDataRecord_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetCharacterDataResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetCharacterDataResult::*)()>(&::PlayFab::ClientModels::GetCharacterDataResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterDataResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr uint32_t& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_DataVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr uint32_t const& PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_get_DataVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataVersion;
}
constexpr void PlayFab::ClientModels::GetCharacterDataResult::__cordl_internal_set_DataVersion(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataVersion = value;
}
inline void PlayFab::ClientModels::GetCharacterDataResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCharacterDataResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetCharacterDataResult* PlayFab::ClientModels::GetCharacterDataResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetCharacterDataResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetCharacterDataResult::GetCharacterDataResult()   {
}
