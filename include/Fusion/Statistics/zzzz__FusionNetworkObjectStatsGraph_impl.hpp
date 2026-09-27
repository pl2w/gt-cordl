#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatsGraph.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_impl.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_impl.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatsGraph_def.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatsGraphCombine_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraph.UpdateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraph::*)(::Fusion::NetworkRunner*, ::Fusion::Statistics::FusionStatisticsManager*, ::by_ref<::System::DateTime>)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraph::UpdateGraph)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60f8164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraph.GetNetworkObjectStatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionNetworkObjectStatsGraph::*)(::Fusion::Statistics::FusionStatisticsManager*)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraph::GetNetworkObjectStatValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60f8198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {"GetNetworkObjectStatValue", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraph.SetupNetworkObjectStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraph::*)(::Fusion::NetworkId, ::Fusion::Statistics::NetworkObjectStat)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraph::SetupNetworkObjectStat)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x60f8298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {"SetupNetworkObjectStat", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraph::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraph::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60f8484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____description;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____description;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_set__description(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____description = value;
}
constexpr ::Fusion::NetworkId& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::Fusion::NetworkId const& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_set__id(::Fusion::NetworkId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::Fusion::Statistics::NetworkObjectStat& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__stat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stat;
}
constexpr ::Fusion::Statistics::NetworkObjectStat const& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__stat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stat;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_set__stat(::Fusion::Statistics::NetworkObjectStat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stat = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__combineParentGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineParentGraph;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine> const& Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_get__combineParentGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combineParentGraph;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraph::__cordl_internal_set__combineParentGraph(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____combineParentGraph = value;
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraph::UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, statisticsManager, now);
}
inline float_t Fusion::Statistics::FusionNetworkObjectStatsGraph::GetNetworkObjectStatValue(::Fusion::Statistics::FusionStatisticsManager*  statisticsManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {"GetNetworkObjectStatValue", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, statisticsManager);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraph::SetupNetworkObjectStat(::Fusion::NetworkId  id, ::Fusion::Statistics::NetworkObjectStat  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {"SetupNetworkObjectStat", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, stat);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionNetworkObjectStatsGraph* Fusion::Statistics::FusionNetworkObjectStatsGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionNetworkObjectStatsGraph*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionNetworkObjectStatsGraph::FusionNetworkObjectStatsGraph()   {
}
