#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger.hpp"
#include "Pathfinding/zzzz__AstarDebugger_GraphPoint_impl.hpp"
#include "Pathfinding/zzzz__AstarDebugger_PathTypeDebug_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Pathfinding/zzzz__AstarDebugger_def.hpp"
#include "Pathfinding/zzzz__AstarDebugger_GraphPoint_def.hpp"
#include "Pathfinding/zzzz__AstarDebugger_PathTypeDebug_def.hpp"
#include "Pathfinding/zzzz__AstarDebugger_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::Pathfinding::AstarDebugger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger::*)()>(&::Pathfinding::AstarDebugger::Start)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e5354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger::*)()>(&::Pathfinding::AstarDebugger::LateUpdate)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x5e536e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger.DrawGraphLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger::*)(int32_t, ::UnityEngine::Matrix4x4, float_t, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Pathfinding::AstarDebugger::DrawGraphLine)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5e53d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"DrawGraphLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger::*)()>(&::Pathfinding::AstarDebugger::OnGUI)> {
  constexpr static std::size_t size = 0x1188;
  constexpr static std::size_t addrs = 0x5e53e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger::*)()>(&::Pathfinding::AstarDebugger::_ctor)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0x5e55148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_yOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOffset;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_yOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yOffset;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_yOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yOffset = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_show()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_show() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___show;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_show(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___show = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_showInEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showInEditor;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_showInEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showInEditor;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_showInEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showInEditor = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_showFPS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFPS;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_showFPS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFPS;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_showFPS(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFPS = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_showPathProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPathProfile;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_showPathProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showPathProfile;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_showPathProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showPathProfile = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_showMemProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMemProfile;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_showMemProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showMemProfile;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_showMemProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showMemProfile = value;
}
constexpr bool& Pathfinding::AstarDebugger::__cordl_internal_get_showGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGraph;
}
constexpr bool const& Pathfinding::AstarDebugger::__cordl_internal_get_showGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGraph;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_showGraph(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGraph = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_graphBufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphBufferSize;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_graphBufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphBufferSize;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_graphBufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphBufferSize = value;
}
constexpr ::UnityW<::UnityEngine::Font>& Pathfinding::AstarDebugger::__cordl_internal_get_font()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___font;
}
constexpr ::UnityW<::UnityEngine::Font> const& Pathfinding::AstarDebugger::__cordl_internal_get_font() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___font;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_font(::UnityW<::UnityEngine::Font>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___font = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_fontSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontSize;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_fontSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontSize;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_fontSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontSize = value;
}
constexpr ::System::Text::StringBuilder*& Pathfinding::AstarDebugger::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::System::Text::StringBuilder* const& Pathfinding::AstarDebugger::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_text(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::StringW& Pathfinding::AstarDebugger::__cordl_internal_get_cachedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr ::StringW const& Pathfinding::AstarDebugger::__cordl_internal_get_cachedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedText;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_cachedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedText = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdate;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdate;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdate = value;
}
constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>& Pathfinding::AstarDebugger::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint> const& Pathfinding::AstarDebugger::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_graph(::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_delayedDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedDeltaTime;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_delayedDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedDeltaTime;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_delayedDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedDeltaTime = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastCollect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollect;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastCollect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollect;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastCollect(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCollect = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastCollectNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollectNum;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastCollectNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollectNum;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastCollectNum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCollectNum = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_delta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delta = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaTime;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaTime;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDeltaTime = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_allocRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocRate;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_allocRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocRate;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_allocRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allocRate = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastAllocMemory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAllocMemory;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastAllocMemory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAllocMemory;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastAllocMemory(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAllocMemory = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_lastAllocSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAllocSet;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_lastAllocSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastAllocSet;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_lastAllocSet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastAllocSet = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_allocMem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocMem;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_allocMem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocMem;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_allocMem(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allocMem = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_collectAlloc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectAlloc;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_collectAlloc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectAlloc;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_collectAlloc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectAlloc = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_peakAlloc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peakAlloc;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_peakAlloc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___peakAlloc;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_peakAlloc(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___peakAlloc = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_fpsDropCounterSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsDropCounterSize;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_fpsDropCounterSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsDropCounterSize;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_fpsDropCounterSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fpsDropCounterSize = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::AstarDebugger::__cordl_internal_get_fpsDrops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsDrops;
}
constexpr ::ArrayW<float_t> const& Pathfinding::AstarDebugger::__cordl_internal_get_fpsDrops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fpsDrops;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_fpsDrops(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fpsDrops = value;
}
constexpr ::UnityEngine::Rect& Pathfinding::AstarDebugger::__cordl_internal_get_boxRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxRect;
}
constexpr ::UnityEngine::Rect const& Pathfinding::AstarDebugger::__cordl_internal_get_boxRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxRect;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_boxRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boxRect = value;
}
constexpr ::UnityEngine::GUIStyle*& Pathfinding::AstarDebugger::__cordl_internal_get_style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr ::UnityEngine::GUIStyle* const& Pathfinding::AstarDebugger::__cordl_internal_get_style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_style(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___style = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Pathfinding::AstarDebugger::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Pathfinding::AstarDebugger::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_graphWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphWidth;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_graphWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphWidth;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_graphWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphWidth = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_graphHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphHeight;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_graphHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphHeight;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_graphHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphHeight = value;
}
constexpr float_t& Pathfinding::AstarDebugger::__cordl_internal_get_graphOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphOffset;
}
constexpr float_t const& Pathfinding::AstarDebugger::__cordl_internal_get_graphOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphOffset;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_graphOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphOffset = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_maxVecPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVecPool;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_maxVecPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVecPool;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_maxVecPool(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVecPool = value;
}
constexpr int32_t& Pathfinding::AstarDebugger::__cordl_internal_get_maxNodePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodePool;
}
constexpr int32_t const& Pathfinding::AstarDebugger::__cordl_internal_get_maxNodePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNodePool;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_maxNodePool(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNodePool = value;
}
constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>& Pathfinding::AstarDebugger::__cordl_internal_get_debugTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTypes;
}
constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug> const& Pathfinding::AstarDebugger::__cordl_internal_get_debugTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugTypes;
}
constexpr void Pathfinding::AstarDebugger::__cordl_internal_set_debugTypes(::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugTypes = value;
}
inline void Pathfinding::AstarDebugger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarDebugger::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarDebugger::DrawGraphLine(int32_t  index, ::UnityEngine::Matrix4x4  m, float_t  x1, float_t  x2, float_t  y1, float_t  y2, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"DrawGraphLine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, m, x1, x2, y1, y2, color);
}
inline void Pathfinding::AstarDebugger::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AstarDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AstarDebugger* Pathfinding::AstarDebugger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarDebugger*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarDebugger::AstarDebugger()   {
}
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e55d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e55d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e55da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_2)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e55e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_3)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e55ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_4)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e55f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_5)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_6)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_7)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_8)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e561c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_9)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_10)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e562f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_11)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_12)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e56428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AstarDebugger___c.__ctor_b__42_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AstarDebugger___c::*)()>(&::Pathfinding::AstarDebugger___c::__ctor_b__42_13)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e564c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_13", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::AstarDebugger___c::setStaticF___9(::Pathfinding::AstarDebugger___c*  value)  {
::cordl_internals::setStaticField<::Pathfinding::AstarDebugger___c*, "<>9", ::Pathfinding::AstarDebugger___c*>(std::forward<::Pathfinding::AstarDebugger___c*>(value));
}
inline ::Pathfinding::AstarDebugger___c* Pathfinding::AstarDebugger___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Pathfinding::AstarDebugger___c*, "<>9", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_0(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_0", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_0", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_1(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_1", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_1", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_2(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_2", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_2()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_2", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_3(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_3", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_3", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_4(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_4", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_4()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_4", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_5(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_5", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_5", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_6(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_6", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_6()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_6", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_7(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_7", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_7()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_7", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_8(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_8", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_8()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_8", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_9(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_9", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_9()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_9", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_10(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_10", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_10()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_10", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_11(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_11", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_11()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_11", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_12(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_12", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_12()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_12", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::setStaticF___9__42_13(::System::Func_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__42_13", ::Pathfinding::AstarDebugger___c*>(std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* Pathfinding::AstarDebugger___c::getStaticF___9__42_13()  {
return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__42_13", ::Pathfinding::AstarDebugger___c*>();
}
inline void Pathfinding::AstarDebugger___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::AstarDebugger___c::__ctor_b__42_13()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AstarDebugger___c*>(),
                        {"<.ctor>b__42_13", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::AstarDebugger___c* Pathfinding::AstarDebugger___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AstarDebugger___c*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AstarDebugger___c::AstarDebugger___c()   {
}
