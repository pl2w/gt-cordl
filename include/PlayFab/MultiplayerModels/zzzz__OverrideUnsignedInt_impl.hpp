#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OverrideUnsignedInt.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideUnsignedInt_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::OverrideUnsignedInt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::OverrideUnsignedInt::*)()>(&::PlayFab::MultiplayerModels::OverrideUnsignedInt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::MultiplayerModels::OverrideUnsignedInt::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::OverrideUnsignedInt::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::MultiplayerModels::OverrideUnsignedInt::__cordl_internal_set_Value(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::MultiplayerModels::OverrideUnsignedInt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::OverrideUnsignedInt* PlayFab::MultiplayerModels::OverrideUnsignedInt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::OverrideUnsignedInt::OverrideUnsignedInt()   {
}
