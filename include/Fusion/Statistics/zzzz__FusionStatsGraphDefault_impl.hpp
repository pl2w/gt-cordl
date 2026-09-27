#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphDefault.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_impl.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphDefault_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_FusionStatisticsStatCustomConfig_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault.get_Stat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Statistics::RenderSimStats (::Fusion::Statistics::FusionStatsGraphDefault::*)()>(&::Fusion::Statistics::FusionStatsGraphDefault::get_Stat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fc018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {"get_Stat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphDefault::*)(int32_t)>(&::Fusion::Statistics::FusionStatsGraphDefault::Initialize)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60fc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault.UpdateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphDefault::*)(::Fusion::NetworkRunner*, ::Fusion::Statistics::FusionStatisticsManager*, ::by_ref<::System::DateTime>)>(&::Fusion::Statistics::FusionStatsGraphDefault::UpdateGraph)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60fc154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault.ApplyCustomStatsConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphDefault::*)(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig)>(&::Fusion::Statistics::FusionStatsGraphDefault::ApplyCustomStatsConfig)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60fc198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault.SetupDefaultGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphDefault::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsGraphDefault::SetupDefaultGraph)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60fc1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {"SetupDefaultGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphDefault._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphDefault::*)()>(&::Fusion::Statistics::FusionStatsGraphDefault::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x60fc280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Statistics::RenderSimStats& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__selectedStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedStats;
}
constexpr ::Fusion::Statistics::RenderSimStats const& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__selectedStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedStats;
}
constexpr void Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_set__selectedStats(::Fusion::Statistics::RenderSimStats  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedStats = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__descriptionText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descriptionText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__descriptionText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____descriptionText;
}
constexpr void Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_set__descriptionText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____descriptionText = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__statsAdditionalInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsAdditionalInfo;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>* const& Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_get__statsAdditionalInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsAdditionalInfo;
}
constexpr void Fusion::Statistics::FusionStatsGraphDefault::__cordl_internal_set__statsAdditionalInfo(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsAdditionalInfo = value;
}
inline ::Fusion::Statistics::RenderSimStats Fusion::Statistics::FusionStatsGraphDefault::get_Stat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {"get_Stat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Statistics::RenderSimStats>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphDefault::Initialize(int32_t  accumulateTimeMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulateTimeMs);
}
inline void Fusion::Statistics::FusionStatsGraphDefault::UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, statisticsManager, now);
}
inline void Fusion::Statistics::FusionStatsGraphDefault::ApplyCustomStatsConfig(::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline void Fusion::Statistics::FusionStatsGraphDefault::SetupDefaultGraph(::Fusion::Statistics::RenderSimStats  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {"SetupDefaultGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionStatsGraphDefault::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphDefault*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsGraphDefault* Fusion::Statistics::FusionStatsGraphDefault::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsGraphDefault*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsGraphDefault::FusionStatsGraphDefault()   {
}
