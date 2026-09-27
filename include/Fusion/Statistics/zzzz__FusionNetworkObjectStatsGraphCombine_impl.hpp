#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatsGraphCombine.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatsGraphCombine_def.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatsGraph_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.get_NetworkObjectID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::get_NetworkObjectID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x60f84dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"get_NetworkObjectID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.SetupNetworkObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)(::Fusion::NetworkObject*, ::Fusion::Statistics::FusionStatistics*, ::Fusion::Statistics::FusionNetworkObjectStatistics*)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::SetupNetworkObject)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60f8504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"SetupNetworkObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::Statistics::FusionStatistics*>(), ::i2c::type_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::Start)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x60f8548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.OnDropDownChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)(int32_t)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnDropDownChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f89a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnDropDownChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.InstantiateStatGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)(::Fusion::Statistics::NetworkObjectStat)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::InstantiateStatGraph)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x60f8b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"InstantiateStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.DestroyStatGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)(::Fusion::Statistics::NetworkObjectStat)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::DestroyStatGraph)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x60f8a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"DestroyStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.UpdateHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)(float_t)>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::UpdateHeight)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60f88d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"UpdateHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnDisable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x60f8bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x60f8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.ToggleRenderDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::ToggleRenderDisplay)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60f8ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"ToggleRenderDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine.DestroyCombinedGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::DestroyCombinedGraph)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60f8fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"DestroyCombinedGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60f9004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__titleText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__titleText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleText;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__titleText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statDropdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statDropdown;
}
constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statDropdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statDropdown;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__statDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statDropdown = value;
}
constexpr ::Fusion::Statistics::NetworkObjectStat& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsToRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsToRender;
}
constexpr ::Fusion::Statistics::NetworkObjectStat const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsToRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsToRender;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__statsToRender(::Fusion::Statistics::NetworkObjectStat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsToRender = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rect;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__rect(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rect = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__combinedGraphRender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combinedGraphRender;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__combinedGraphRender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____combinedGraphRender;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__combinedGraphRender(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____combinedGraphRender = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__toggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__toggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__toggleButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggleButton = value;
}
constexpr float_t& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__headerHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerHeight;
}
constexpr float_t const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__headerHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerHeight;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__headerHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerHeight = value;
}
constexpr float_t& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__graphHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphHeight;
}
constexpr float_t const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__graphHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphHeight;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__graphHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphHeight = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsGraphs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraphs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>* const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsGraphs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraphs;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__statsGraphs(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsGraphs = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsGraphPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraphPrefab;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__statsGraphPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____statsGraphPrefab;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__statsGraphPrefab(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____statsGraphPrefab = value;
}
constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__parentContentSizeFitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentContentSizeFitter;
}
constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__parentContentSizeFitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentContentSizeFitter;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__parentContentSizeFitter(::UnityW<::UnityEngine::UI::ContentSizeFitter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentContentSizeFitter = value;
}
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__networkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObject;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__networkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkObject;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__networkObject(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkObject = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__fusionStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__fusionStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fusionStatistics;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fusionStatistics = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__objectStatisticsInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatisticsInstance;
}
constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics> const& Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_get__objectStatisticsInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectStatisticsInstance;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::__cordl_internal_set__objectStatisticsInstance(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectStatisticsInstance = value;
}
inline ::Fusion::NetworkId Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::get_NetworkObjectID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"get_NetworkObjectID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::SetupNetworkObject(::Fusion::NetworkObject*  networkObject, ::Fusion::Statistics::FusionStatistics*  fusionStatistics, ::Fusion::Statistics::FusionNetworkObjectStatistics*  objectStatisticsInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"SetupNetworkObject", {}, {::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<::Fusion::Statistics::FusionStatistics*>(), ::i2c::type_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject, fusionStatistics, objectStatisticsInstance);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnDropDownChanged(int32_t  arg0)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnDropDownChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg0);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::InstantiateStatGraph(::Fusion::Statistics::NetworkObjectStat  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"InstantiateStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::DestroyStatGraph(::Fusion::Statistics::NetworkObjectStat  stat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"DestroyStatGraph", {}, {::i2c::type_of<::Fusion::Statistics::NetworkObjectStat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::UpdateHeight(float_t  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"UpdateHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideValue);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::ToggleRenderDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"ToggleRenderDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::DestroyCombinedGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {"DestroyCombinedGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine* Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine::FusionNetworkObjectStatsGraphCombine()   {
}
