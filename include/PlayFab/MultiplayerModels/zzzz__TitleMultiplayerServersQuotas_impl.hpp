#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TitleMultiplayerServersQuotas.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServersQuotas_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CoreCapacity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::*)()>(&::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*& PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::__cordl_internal_get_CoreCapacities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreCapacities;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>* const& PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::__cordl_internal_get_CoreCapacities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CoreCapacities;
}
constexpr void PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::__cordl_internal_set_CoreCapacities(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::CoreCapacity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CoreCapacities = value;
}
inline void PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas* PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas()   {
}
