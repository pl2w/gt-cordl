#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsPanelHeader.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsPanelHeader_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_FusionStatisticsStatCustomConfig_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphDefault_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.add_OnRenderStatsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::System::Action*)>(&::Fusion::Statistics::FusionStatsPanelHeader::add_OnRenderStatsUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60fb4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"add_OnRenderStatsUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.remove_OnRenderStatsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::System::Action*)>(&::Fusion::Statistics::FusionStatsPanelHeader::remove_OnRenderStatsUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60fb614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"remove_OnRenderStatsUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.SetupHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::StringW, ::Fusion::Statistics::FusionStatistics*)>(&::Fusion::Statistics::FusionStatsPanelHeader::SetupHeader)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60fa15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetupHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Statistics::FusionStatistics*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.SetupDropdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)()>(&::Fusion::Statistics::FusionStatsPanelHeader::SetupDropdown)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x60fc460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetupDropdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.SetStatsToRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsPanelHeader::SetStatsToRender)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x60f9c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetStatsToRender", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.AddStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsPanelHeader::AddStat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fc780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"AddStat", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.RemoveStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsPanelHeader::RemoveStat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fc7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"RemoveStat", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.InvokeRenderStatsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)()>(&::Fusion::Statistics::FusionStatsPanelHeader::InvokeRenderStatsUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60fc8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"InvokeRenderStatsUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.OnDropDownChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(int32_t)>(&::Fusion::Statistics::FusionStatsPanelHeader::OnDropDownChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60fc998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"OnDropDownChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.InstantiateStatGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsPanelHeader::InstantiateStatGraph)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fc7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"InstantiateStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.DestroyStatGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::RenderSimStats)>(&::Fusion::Statistics::FusionStatsPanelHeader::DestroyStatGraph)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x60fc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"DestroyStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.TryApplyCustomStatConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::FusionStatsGraphDefault*)>(&::Fusion::Statistics::FusionStatsPanelHeader::TryApplyCustomStatConfig)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x60fc9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"TryApplyCustomStatConfig", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphDefault*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.ApplyCustomStatsConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::Fusion::Statistics::FusionStatsGraphDefault*, ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig)>(&::Fusion::Statistics::FusionStatsPanelHeader::ApplyCustomStatsConfig)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60fcb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"ApplyCustomStatsConfig", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), ::i2c::type_of<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader.ApplyStatsConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*)>(&::Fusion::Statistics::FusionStatsPanelHeader::ApplyStatsConfig)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x60f9a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"ApplyStatsConfig", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsPanelHeader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsPanelHeader::*)()>(&::Fusion::Statistics::FusionStatsPanelHeader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fcbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get_OnRenderStatsUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRenderStatsUpdate;
}
constexpr ::System::Action* const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get_OnRenderStatsUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRenderStatsUpdate;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set_OnRenderStatsUpdate(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRenderStatsUpdate = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsHeaderTitle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsHeaderTitle;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsHeaderTitle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsHeaderTitle;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__statsHeaderTitle(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsHeaderTitle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsDropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsDropdown;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__statsDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsDropdown = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__defaultGraphPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultGraphPrefab;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault> const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__defaultGraphPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultGraphPrefab;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__defaultGraphPrefab(::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultGraphPrefab = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get_ContentRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get_ContentRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContentRect;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set_ContentRect(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContentRect = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__defaultStatsGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultStatsGraph;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>* const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__defaultStatsGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultStatsGraph;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__defaultStatsGraph(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultStatsGraph = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__fusionStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__fusionStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fusionStatistics = value;
}
constexpr ::Fusion::Statistics::RenderSimStats& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsToRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsToRender;
}
constexpr ::Fusion::Statistics::RenderSimStats const& Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_get__statsToRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsToRender;
}
constexpr void Fusion::Statistics::FusionStatsPanelHeader::__cordl_internal_set__statsToRender(::Fusion::Statistics::RenderSimStats  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsToRender = value;
}
inline void Fusion::Statistics::FusionStatsPanelHeader::add_OnRenderStatsUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"add_OnRenderStatsUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::remove_OnRenderStatsUpdate(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"remove_OnRenderStatsUpdate", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::SetupHeader(::StringW  title, ::Fusion::Statistics::FusionStatistics*  fusionStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetupHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Statistics::FusionStatistics*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, fusionStatistics);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::SetupDropdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetupDropdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::SetStatsToRender(::Fusion::Statistics::RenderSimStats  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"SetStatsToRender", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::AddStat(::Fusion::Statistics::RenderSimStats  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"AddStat", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::RemoveStat(::Fusion::Statistics::RenderSimStats  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"RemoveStat", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::InvokeRenderStatsUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"InvokeRenderStatsUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::OnDropDownChanged(int32_t  arg0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"OnDropDownChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::InstantiateStatGraph(::Fusion::Statistics::RenderSimStats  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"InstantiateStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::DestroyStatGraph(::Fusion::Statistics::RenderSimStats  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"DestroyStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::RenderSimStats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::TryApplyCustomStatConfig(::Fusion::Statistics::FusionStatsGraphDefault*  graph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"TryApplyCustomStatConfig", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphDefault*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::ApplyCustomStatsConfig(::Fusion::Statistics::FusionStatsGraphDefault*  graph, ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"ApplyCustomStatsConfig", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatsGraphDefault*>(), ::i2c::type_of<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, graph, config);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::ApplyStatsConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  statsConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {"ApplyStatsConfig", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statsConfig);
}
inline void Fusion::Statistics::FusionStatsPanelHeader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsPanelHeader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsPanelHeader* Fusion::Statistics::FusionStatsPanelHeader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsPanelHeader*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsPanelHeader::FusionStatsPanelHeader()   {
}
