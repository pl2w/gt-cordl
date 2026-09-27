#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsHelper_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsSnapshot_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsHelper.GetStatGraphDefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Statistics::RenderSimStats, ::by_ref<::StringW>, ::by_ref<float_t>, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<int32_t>)>(&::Fusion::Statistics::FusionStatisticsHelper::GetStatGraphDefaultSettings)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x60f62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsHelper*>(),
                        {"GetStatGraphDefaultSettings", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatisticsHelper.GetStatDataFromSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Fusion::Statistics::RenderSimStats, ::Fusion::Statistics::FusionStatisticsSnapshot*)>(&::Fusion::Statistics::FusionStatisticsHelper::GetStatDataFromSnapshot)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x60f65b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsHelper*>(),
                        {"GetStatDataFromSnapshot", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>(), ::i2c::type_of<::Fusion::Statistics::FusionStatisticsSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Statistics::FusionStatisticsHelper::GetStatGraphDefaultSettings(::Fusion::Statistics::RenderSimStats  stat, ::by_ref<::StringW>  valueTextFormat, ::by_ref<float_t>  valueTextMultiplier, ::by_ref<bool>  ignoreZeroOnAverage, ::by_ref<bool>  ignoreZeroOnBuffer, ::by_ref<int32_t>  accumulateTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsHelper*>(),
                        {"GetStatGraphDefaultSettings", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stat, valueTextFormat, valueTextMultiplier, ignoreZeroOnAverage, ignoreZeroOnBuffer, accumulateTimeMs);
}
inline float_t Fusion::Statistics::FusionStatisticsHelper::GetStatDataFromSnapshot(::Fusion::Statistics::RenderSimStats  stat, ::Fusion::Statistics::FusionStatisticsSnapshot*  simulationStatsSnapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatisticsHelper*>(),
                        {"GetStatDataFromSnapshot", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>(), ::i2c::type_of<::Fusion::Statistics::FusionStatisticsSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, stat, simulationStatsSnapshot);
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatisticsHelper::FusionStatisticsHelper()   {
}
