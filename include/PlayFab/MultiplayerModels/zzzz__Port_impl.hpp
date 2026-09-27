#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Port.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ProtocolType_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__Port_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::Port._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::Port::*)()>(&::PlayFab::MultiplayerModels::Port::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Port*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::Port::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Num()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Num;
}
constexpr int32_t const& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Num() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Num;
}
constexpr void PlayFab::MultiplayerModels::Port::__cordl_internal_set_Num(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Num = value;
}
constexpr ::PlayFab::MultiplayerModels::ProtocolType& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr ::PlayFab::MultiplayerModels::ProtocolType const& PlayFab::MultiplayerModels::Port::__cordl_internal_get_Protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Protocol;
}
constexpr void PlayFab::MultiplayerModels::Port::__cordl_internal_set_Protocol(::PlayFab::MultiplayerModels::ProtocolType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Protocol = value;
}
inline void PlayFab::MultiplayerModels::Port::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::Port*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::Port* PlayFab::MultiplayerModels::Port::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::Port*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::Port::Port()   {
}
