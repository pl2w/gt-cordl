#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatistics.hpp"
#include "Fusion/Statistics/zzzz__CanvasAnchor_impl.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_impl.hpp"
#include "Fusion/zzzz__SimulationBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__CanvasAnchor_def.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatsGraphCombine_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_FusionStatisticsStatCustomConfig_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsConfig_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsPanelHeader_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsWorldAnchor_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__ISpawned_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.get_ActiveGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>* (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::get_ActiveGraphs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f9018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_ActiveGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.get_StatsCustomConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>* (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::get_StatsCustomConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_StatsCustomConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.get_IsPanelActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::get_IsPanelActive)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60f9028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_IsPanelActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::Awake)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x60f9084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.Fusion_ISpawned_Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::Fusion_ISpawned_Spawned)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f9298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Fusion.ISpawned.Spawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.SetStatsCustomConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*)>(&::Fusion::Statistics::FusionStatistics::SetStatsCustomConfig)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x60f983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetStatsCustomConfig", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.SetCanvasAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::CanvasAnchor)>(&::Fusion::Statistics::FusionStatistics::SetCanvasAnchor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x60f9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetCanvasAnchor", {}, {::i2c::type_of<::Fusion::Statistics::CanvasAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.ApplyCustomConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::ApplyCustomConfig)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60f98f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"ApplyCustomConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.OnEditorChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::OnEditorChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60f9bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"OnEditorChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.RenderEnabledStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::RenderEnabledStats)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60f9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"RenderEnabledStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.UpdateStatsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatistics::UpdateStatsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f9f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UpdateStatsEnabled", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.SetupStatisticsPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::SetupStatisticsPanel)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x60f929c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetupStatisticsPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.SetWorldAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::FusionStatsWorldAnchor*, float_t)>(&::Fusion::Statistics::FusionStatistics::SetWorldAnchor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x60fa1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetWorldAnchor", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsWorldAnchor*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.DestroyStatisticsPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::DestroyStatisticsPanel)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x60fa624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"DestroyStatisticsPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.MonitorNetworkObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatistics::*)(::Fusion::NetworkObject*, ::Fusion::Statistics::FusionNetworkObjectStatistics*, bool)>(&::Fusion::Statistics::FusionStatistics::MonitorNetworkObject)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x60f7f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"MonitorNetworkObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.UpdateAllGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::FusionStatisticsManager*)>(&::Fusion::Statistics::FusionStatistics::UpdateAllGraphs)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x60fa7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UpdateAllGraphs", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.RegisterGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::FusionStatsGraphBase*)>(&::Fusion::Statistics::FusionStatistics::RegisterGraph)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60fa958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"RegisterGraph", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.UnregisterGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)(::Fusion::Statistics::FusionStatsGraphBase*)>(&::Fusion::Statistics::FusionStatistics::UnregisterGraph)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x60faa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UnregisterGraph", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60faa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatistics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatistics::*)()>(&::Fusion::Statistics::FusionStatistics::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60faaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCanvasPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCanvasPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCanvasPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCanvasPrefab;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsCanvasPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsCanvasPrefab = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__objectGraphCombinePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectGraphCombinePrefab;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__objectGraphCombinePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectGraphCombinePrefab;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__objectGraphCombinePrefab(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectGraphCombinePrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraph;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>* const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraph;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsGraph(::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsGraph = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__header(::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__config(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsCanvas>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCanvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCanvas;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsCanvas> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCanvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCanvas;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsCanvas(::UnityW<::Fusion::Statistics::FusionStatsCanvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsCanvas = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsPanelObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsPanelObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsPanelObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsPanelObject;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsPanelObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsPanelObject = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*& Fusion::Statistics::FusionStatistics::__cordl_internal_get__objectStatsGraphCombines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatsGraphCombines;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>* const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__objectStatsGraphCombines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatsGraphCombines;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__objectStatsGraphCombines(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectStatsGraphCombines = value;
}
constexpr ::Fusion::Statistics::RenderSimStats& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsEnabled;
}
constexpr ::Fusion::Statistics::RenderSimStats const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsEnabled;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsEnabled(::Fusion::Statistics::RenderSimStats  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsEnabled = value;
}
constexpr ::Fusion::Statistics::CanvasAnchor& Fusion::Statistics::FusionStatistics::__cordl_internal_get__canvasAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasAnchor;
}
constexpr ::Fusion::Statistics::CanvasAnchor const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__canvasAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasAnchor;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__canvasAnchor(::Fusion::Statistics::CanvasAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasAnchor = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCustomConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCustomConfig;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>* const& Fusion::Statistics::FusionStatistics::__cordl_internal_get__statsCustomConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsCustomConfig;
}
constexpr void Fusion::Statistics::FusionStatistics::__cordl_internal_set__statsCustomConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsCustomConfig = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>* Fusion::Statistics::FusionStatistics::get_ActiveGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_ActiveGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>* Fusion::Statistics::FusionStatistics::get_StatsCustomConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_StatsCustomConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*>(this, ___internal_method);
}
inline bool Fusion::Statistics::FusionStatistics::get_IsPanelActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"get_IsPanelActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::Fusion_ISpawned_Spawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Fusion.ISpawned.Spawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::SetStatsCustomConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  customConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetStatsCustomConfig", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customConfig);
}
inline void Fusion::Statistics::FusionStatistics::SetCanvasAnchor(::Fusion::Statistics::CanvasAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetCanvasAnchor", {}, {::i2c::type_of<::Fusion::Statistics::CanvasAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline void Fusion::Statistics::FusionStatistics::ApplyCustomConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"ApplyCustomConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::OnEditorChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"OnEditorChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::RenderEnabledStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"RenderEnabledStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::UpdateStatsEnabled(::Fusion::Statistics::RenderSimStats  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UpdateStatsEnabled", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void Fusion::Statistics::FusionStatistics::SetupStatisticsPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetupStatisticsPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::SetWorldAnchor(::Fusion::Statistics::FusionStatsWorldAnchor*  anchor, float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"SetWorldAnchor", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsWorldAnchor*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, scale);
}
inline void Fusion::Statistics::FusionStatistics::DestroyStatisticsPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"DestroyStatisticsPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Statistics::FusionStatistics::MonitorNetworkObject(::Fusion::NetworkObject*  networkObject, ::Fusion::Statistics::FusionNetworkObjectStatistics*  objectStatisticsInstance, bool  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"MonitorNetworkObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, networkObject, objectStatisticsInstance, monitor);
}
inline void Fusion::Statistics::FusionStatistics::UpdateAllGraphs(::Fusion::Statistics::FusionStatisticsManager*  statisticsManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UpdateAllGraphs", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statisticsManager);
}
inline void Fusion::Statistics::FusionStatistics::RegisterGraph(::Fusion::Statistics::FusionStatsGraphBase*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"RegisterGraph", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Fusion::Statistics::FusionStatistics::UnregisterGraph(::Fusion::Statistics::FusionStatsGraphBase*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"UnregisterGraph", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Fusion::Statistics::FusionStatistics::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatistics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatistics* Fusion::Statistics::FusionStatistics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatistics*>());
}
/// @brief Convert operator to "::Fusion::ISpawned"
constexpr  Fusion::Statistics::FusionStatistics::operator ::Fusion::ISpawned*() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* Fusion::Statistics::FusionStatistics::i___Fusion__ISpawned() noexcept {
return static_cast<::Fusion::ISpawned*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::Statistics::FusionStatistics::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::Statistics::FusionStatistics::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatistics::FusionStatistics()   {
}
