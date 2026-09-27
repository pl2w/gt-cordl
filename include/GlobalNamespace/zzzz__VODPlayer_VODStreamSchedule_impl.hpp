#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStreamSchedule.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODHourlyStream_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStreamSchedule_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODHourlyStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODStreamSchedule.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer_VODStreamSchedule::*)(::GlobalNamespace::VODPlayer_VODStreamSchedule)>(&::GlobalNamespace::VODPlayer_VODStreamSchedule::Merge)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5d04420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(),
                        {"Merge", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VODPlayer_VODStreamSchedule::Merge(::GlobalNamespace::VODPlayer_VODStreamSchedule  subSchedule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>(),
                        {"Merge", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODStreamSchedule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, subSchedule);
}
// Ctor Parameters [CppParam { name: "hourly", ty: "::ArrayW<::GlobalNamespace::VODPlayer_VODHourlyStream>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule::VODPlayer_VODStreamSchedule(::ArrayW<::GlobalNamespace::VODPlayer_VODHourlyStream>  hourly) noexcept  {
this->hourly = hourly;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule::VODPlayer_VODStreamSchedule()   {
}
