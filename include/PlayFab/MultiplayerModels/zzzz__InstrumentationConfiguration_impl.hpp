#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/InstrumentationConfiguration.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__InstrumentationConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::InstrumentationConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::InstrumentationConfiguration::*)()>(&::PlayFab::MultiplayerModels::InstrumentationConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::InstrumentationConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::InstrumentationConfiguration::__cordl_internal_get_ProcessesToMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessesToMonitor;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::InstrumentationConfiguration::__cordl_internal_get_ProcessesToMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessesToMonitor;
}
constexpr void PlayFab::MultiplayerModels::InstrumentationConfiguration::__cordl_internal_set_ProcessesToMonitor(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessesToMonitor = value;
}
inline void PlayFab::MultiplayerModels::InstrumentationConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::InstrumentationConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::InstrumentationConfiguration* PlayFab::MultiplayerModels::InstrumentationConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::InstrumentationConfiguration*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::InstrumentationConfiguration::InstrumentationConfiguration()   {
}
