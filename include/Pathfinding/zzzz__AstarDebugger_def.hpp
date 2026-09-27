#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AstarDebugger_GraphPoint_def.hpp"
#include "Pathfinding/zzzz__AstarDebugger_PathTypeDebug_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AstarDebugger)
namespace GlobalNamespace {
struct AstarDebugger_GraphPoint;
}
namespace GlobalNamespace {
struct AstarDebugger_PathTypeDebug;
}
namespace Pathfinding {
class AstarDebugger___c;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace Pathfinding {
class AstarDebugger;
}
namespace Pathfinding {
class AstarDebugger___c;
}
// Write type traits
MARK_REF_T(::Pathfinding::AstarDebugger*);
MARK_REF_T(::Pathfinding::AstarDebugger___c*);
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarDebugger*, "Pathfinding", "AstarDebugger");
DEFINE_IL2CPP_CLASS(::Pathfinding::AstarDebugger___c*, "Pathfinding", "AstarDebugger/<>c");
// [AddComponentMenu("Pathfinding/Pathfinding Debugger")]
// [ExecuteInEditMode]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_astar_debugger.php")]
// Dependencies Pathfinding.AstarDebugger::GraphPoint, Pathfinding.AstarDebugger::PathTypeDebug, Pathfinding.VersionedMonoBehaviour, UnityEngine.Rect
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarDebugger
class CORDL_TYPE AstarDebugger : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using GraphPoint = ::GlobalNamespace::AstarDebugger_GraphPoint;

using PathTypeDebug = ::GlobalNamespace::AstarDebugger_PathTypeDebug;

using __c = ::Pathfinding::AstarDebugger___c;

/// @brief Field allocMem, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_allocMem, put=__cordl_internal_set_allocMem)) int32_t  allocMem;

/// @brief Field allocRate, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_allocRate, put=__cordl_internal_set_allocRate)) int32_t  allocRate;

/// @brief Field boxRect, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_boxRect, put=__cordl_internal_set_boxRect)) ::UnityEngine::Rect  boxRect;

/// @brief Field cachedText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedText, put=__cordl_internal_set_cachedText)) ::StringW  cachedText;

/// @brief Field cam, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field collectAlloc, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectAlloc, put=__cordl_internal_set_collectAlloc)) int32_t  collectAlloc;

/// @brief Field debugTypes, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugTypes, put=__cordl_internal_set_debugTypes)) ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>  debugTypes;

/// @brief Field delayedDeltaTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayedDeltaTime, put=__cordl_internal_set_delayedDeltaTime)) float_t  delayedDeltaTime;

/// @brief Field delta, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_delta, put=__cordl_internal_set_delta)) float_t  delta;

/// @brief Field font, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_font, put=__cordl_internal_set_font)) ::UnityW<::UnityEngine::Font>  font;

/// @brief Field fontSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_fontSize, put=__cordl_internal_set_fontSize)) int32_t  fontSize;

/// @brief Field fpsDropCounterSize, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_fpsDropCounterSize, put=__cordl_internal_set_fpsDropCounterSize)) int32_t  fpsDropCounterSize;

/// @brief Field fpsDrops, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_fpsDrops, put=__cordl_internal_set_fpsDrops)) ::ArrayW<float_t>  fpsDrops;

/// @brief Field graph, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>  graph;

/// @brief Field graphBufferSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphBufferSize, put=__cordl_internal_set_graphBufferSize)) int32_t  graphBufferSize;

/// @brief Field graphHeight, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphHeight, put=__cordl_internal_set_graphHeight)) float_t  graphHeight;

/// @brief Field graphOffset, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphOffset, put=__cordl_internal_set_graphOffset)) float_t  graphOffset;

/// @brief Field graphWidth, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphWidth, put=__cordl_internal_set_graphWidth)) float_t  graphWidth;

/// @brief Field lastAllocMemory, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAllocMemory, put=__cordl_internal_set_lastAllocMemory)) int32_t  lastAllocMemory;

/// @brief Field lastAllocSet, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAllocSet, put=__cordl_internal_set_lastAllocSet)) float_t  lastAllocSet;

/// @brief Field lastCollect, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCollect, put=__cordl_internal_set_lastCollect)) float_t  lastCollect;

/// @brief Field lastCollectNum, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCollectNum, put=__cordl_internal_set_lastCollectNum)) float_t  lastCollectNum;

/// @brief Field lastDeltaTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDeltaTime, put=__cordl_internal_set_lastDeltaTime)) float_t  lastDeltaTime;

/// @brief Field lastUpdate, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdate, put=__cordl_internal_set_lastUpdate)) float_t  lastUpdate;

/// @brief Field maxNodePool, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNodePool, put=__cordl_internal_set_maxNodePool)) int32_t  maxNodePool;

/// @brief Field maxVecPool, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVecPool, put=__cordl_internal_set_maxVecPool)) int32_t  maxVecPool;

/// @brief Field peakAlloc, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_peakAlloc, put=__cordl_internal_set_peakAlloc)) int32_t  peakAlloc;

/// @brief Field show, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_show, put=__cordl_internal_set_show)) bool  show;

/// @brief Field showFPS, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_showFPS, put=__cordl_internal_set_showFPS)) bool  showFPS;

/// @brief Field showGraph, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGraph, put=__cordl_internal_set_showGraph)) bool  showGraph;

/// @brief Field showInEditor, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_showInEditor, put=__cordl_internal_set_showInEditor)) bool  showInEditor;

/// @brief Field showMemProfile, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMemProfile, put=__cordl_internal_set_showMemProfile)) bool  showMemProfile;

/// @brief Field showPathProfile, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_showPathProfile, put=__cordl_internal_set_showPathProfile)) bool  showPathProfile;

/// @brief Field style, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_style, put=__cordl_internal_set_style)) ::UnityEngine::GUIStyle*  style;

/// @brief Field text, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_text, put=__cordl_internal_set_text)) ::System::Text::StringBuilder*  text;

/// @brief Field yOffset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_yOffset, put=__cordl_internal_set_yOffset)) int32_t  yOffset;

/// @brief Method DrawGraphLine, addr 0x5e53d40, size 0x138, virtual false, abstract: false, final false
inline void DrawGraphLine(int32_t  index, ::UnityEngine::Matrix4x4  m, float_t  x1, float_t  x2, float_t  y1, float_t  y2, ::UnityEngine::Color  color) ;

/// @brief Method LateUpdate, addr 0x5e536e4, size 0x65c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Pathfinding::AstarDebugger* New_ctor() ;

/// @brief Method OnGUI, addr 0x5e53e78, size 0x1188, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x5e5354c, size 0x198, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_allocMem() const;

constexpr int32_t& __cordl_internal_get_allocMem() ;

constexpr int32_t const& __cordl_internal_get_allocRate() const;

constexpr int32_t& __cordl_internal_get_allocRate() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_boxRect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_boxRect() ;

constexpr ::StringW const& __cordl_internal_get_cachedText() const;

constexpr ::StringW& __cordl_internal_get_cachedText() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr int32_t const& __cordl_internal_get_collectAlloc() const;

constexpr int32_t& __cordl_internal_get_collectAlloc() ;

constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug> const& __cordl_internal_get_debugTypes() const;

constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>& __cordl_internal_get_debugTypes() ;

constexpr float_t const& __cordl_internal_get_delayedDeltaTime() const;

constexpr float_t& __cordl_internal_get_delayedDeltaTime() ;

constexpr float_t const& __cordl_internal_get_delta() const;

constexpr float_t& __cordl_internal_get_delta() ;

constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_font() const;

constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_font() ;

constexpr int32_t const& __cordl_internal_get_fontSize() const;

constexpr int32_t& __cordl_internal_get_fontSize() ;

constexpr int32_t const& __cordl_internal_get_fpsDropCounterSize() const;

constexpr int32_t& __cordl_internal_get_fpsDropCounterSize() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_fpsDrops() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_fpsDrops() ;

constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint> const& __cordl_internal_get_graph() const;

constexpr ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>& __cordl_internal_get_graph() ;

constexpr int32_t const& __cordl_internal_get_graphBufferSize() const;

constexpr int32_t& __cordl_internal_get_graphBufferSize() ;

constexpr float_t const& __cordl_internal_get_graphHeight() const;

constexpr float_t& __cordl_internal_get_graphHeight() ;

constexpr float_t const& __cordl_internal_get_graphOffset() const;

constexpr float_t& __cordl_internal_get_graphOffset() ;

constexpr float_t const& __cordl_internal_get_graphWidth() const;

constexpr float_t& __cordl_internal_get_graphWidth() ;

constexpr int32_t const& __cordl_internal_get_lastAllocMemory() const;

constexpr int32_t& __cordl_internal_get_lastAllocMemory() ;

constexpr float_t const& __cordl_internal_get_lastAllocSet() const;

constexpr float_t& __cordl_internal_get_lastAllocSet() ;

constexpr float_t const& __cordl_internal_get_lastCollect() const;

constexpr float_t& __cordl_internal_get_lastCollect() ;

constexpr float_t const& __cordl_internal_get_lastCollectNum() const;

constexpr float_t& __cordl_internal_get_lastCollectNum() ;

constexpr float_t const& __cordl_internal_get_lastDeltaTime() const;

constexpr float_t& __cordl_internal_get_lastDeltaTime() ;

constexpr float_t const& __cordl_internal_get_lastUpdate() const;

constexpr float_t& __cordl_internal_get_lastUpdate() ;

constexpr int32_t const& __cordl_internal_get_maxNodePool() const;

constexpr int32_t& __cordl_internal_get_maxNodePool() ;

constexpr int32_t const& __cordl_internal_get_maxVecPool() const;

constexpr int32_t& __cordl_internal_get_maxVecPool() ;

constexpr int32_t const& __cordl_internal_get_peakAlloc() const;

constexpr int32_t& __cordl_internal_get_peakAlloc() ;

constexpr bool const& __cordl_internal_get_show() const;

constexpr bool& __cordl_internal_get_show() ;

constexpr bool const& __cordl_internal_get_showFPS() const;

constexpr bool& __cordl_internal_get_showFPS() ;

constexpr bool const& __cordl_internal_get_showGraph() const;

constexpr bool& __cordl_internal_get_showGraph() ;

constexpr bool const& __cordl_internal_get_showInEditor() const;

constexpr bool& __cordl_internal_get_showInEditor() ;

constexpr bool const& __cordl_internal_get_showMemProfile() const;

constexpr bool& __cordl_internal_get_showMemProfile() ;

constexpr bool const& __cordl_internal_get_showPathProfile() const;

constexpr bool& __cordl_internal_get_showPathProfile() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_style() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_style() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_text() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_text() ;

constexpr int32_t const& __cordl_internal_get_yOffset() const;

constexpr int32_t& __cordl_internal_get_yOffset() ;

constexpr void __cordl_internal_set_allocMem(int32_t  value) ;

constexpr void __cordl_internal_set_allocRate(int32_t  value) ;

constexpr void __cordl_internal_set_boxRect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_cachedText(::StringW  value) ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_collectAlloc(int32_t  value) ;

constexpr void __cordl_internal_set_debugTypes(::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>  value) ;

constexpr void __cordl_internal_set_delayedDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set_delta(float_t  value) ;

constexpr void __cordl_internal_set_font(::UnityW<::UnityEngine::Font>  value) ;

constexpr void __cordl_internal_set_fontSize(int32_t  value) ;

constexpr void __cordl_internal_set_fpsDropCounterSize(int32_t  value) ;

constexpr void __cordl_internal_set_fpsDrops(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_graph(::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>  value) ;

constexpr void __cordl_internal_set_graphBufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_graphHeight(float_t  value) ;

constexpr void __cordl_internal_set_graphOffset(float_t  value) ;

constexpr void __cordl_internal_set_graphWidth(float_t  value) ;

constexpr void __cordl_internal_set_lastAllocMemory(int32_t  value) ;

constexpr void __cordl_internal_set_lastAllocSet(float_t  value) ;

constexpr void __cordl_internal_set_lastCollect(float_t  value) ;

constexpr void __cordl_internal_set_lastCollectNum(float_t  value) ;

constexpr void __cordl_internal_set_lastDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set_lastUpdate(float_t  value) ;

constexpr void __cordl_internal_set_maxNodePool(int32_t  value) ;

constexpr void __cordl_internal_set_maxVecPool(int32_t  value) ;

constexpr void __cordl_internal_set_peakAlloc(int32_t  value) ;

constexpr void __cordl_internal_set_show(bool  value) ;

constexpr void __cordl_internal_set_showFPS(bool  value) ;

constexpr void __cordl_internal_set_showGraph(bool  value) ;

constexpr void __cordl_internal_set_showInEditor(bool  value) ;

constexpr void __cordl_internal_set_showMemProfile(bool  value) ;

constexpr void __cordl_internal_set_showPathProfile(bool  value) ;

constexpr void __cordl_internal_set_style(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set_text(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_yOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e55148, size 0xb0c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarDebugger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarDebugger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarDebugger(AstarDebugger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarDebugger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarDebugger(AstarDebugger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21238};

/// @brief Field yOffset, offset: 0x24, size: 0x4, def value: None
 int32_t  ___yOffset;

/// @brief Field show, offset: 0x28, size: 0x1, def value: None
 bool  ___show;

/// @brief Field showInEditor, offset: 0x29, size: 0x1, def value: None
 bool  ___showInEditor;

/// @brief Field showFPS, offset: 0x2a, size: 0x1, def value: None
 bool  ___showFPS;

/// @brief Field showPathProfile, offset: 0x2b, size: 0x1, def value: None
 bool  ___showPathProfile;

/// @brief Field showMemProfile, offset: 0x2c, size: 0x1, def value: None
 bool  ___showMemProfile;

/// @brief Field showGraph, offset: 0x2d, size: 0x1, def value: None
 bool  ___showGraph;

/// @brief Field graphBufferSize, offset: 0x30, size: 0x4, def value: None
 int32_t  ___graphBufferSize;

/// @brief Field font, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Font>  ___font;

/// @brief Field fontSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ___fontSize;

/// @brief Field text, offset: 0x48, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___text;

/// @brief Field cachedText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___cachedText;

/// @brief Field lastUpdate, offset: 0x58, size: 0x4, def value: None
 float_t  ___lastUpdate;

/// @brief Field graph, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AstarDebugger_GraphPoint>  ___graph;

/// @brief Field delayedDeltaTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___delayedDeltaTime;

/// @brief Field lastCollect, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lastCollect;

/// @brief Field lastCollectNum, offset: 0x70, size: 0x4, def value: None
 float_t  ___lastCollectNum;

/// @brief Field delta, offset: 0x74, size: 0x4, def value: None
 float_t  ___delta;

/// @brief Field lastDeltaTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___lastDeltaTime;

/// @brief Field allocRate, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___allocRate;

/// @brief Field lastAllocMemory, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lastAllocMemory;

/// @brief Field lastAllocSet, offset: 0x84, size: 0x4, def value: None
 float_t  ___lastAllocSet;

/// @brief Field allocMem, offset: 0x88, size: 0x4, def value: None
 int32_t  ___allocMem;

/// @brief Field collectAlloc, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___collectAlloc;

/// @brief Field peakAlloc, offset: 0x90, size: 0x4, def value: None
 int32_t  ___peakAlloc;

/// @brief Field fpsDropCounterSize, offset: 0x94, size: 0x4, def value: None
 int32_t  ___fpsDropCounterSize;

/// @brief Field fpsDrops, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ___fpsDrops;

/// @brief Field boxRect, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Rect  ___boxRect;

/// @brief Field style, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ___style;

/// @brief Field cam, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

/// @brief Field graphWidth, offset: 0xc0, size: 0x4, def value: None
 float_t  ___graphWidth;

/// @brief Field graphHeight, offset: 0xc4, size: 0x4, def value: None
 float_t  ___graphHeight;

/// @brief Field graphOffset, offset: 0xc8, size: 0x4, def value: None
 float_t  ___graphOffset;

/// @brief Field maxVecPool, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___maxVecPool;

/// @brief Field maxNodePool, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___maxNodePool;

/// @brief Field debugTypes, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AstarDebugger_PathTypeDebug>  ___debugTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::AstarDebugger, ___yOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___show) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___showInEditor) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___showFPS) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___showPathProfile) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___showMemProfile) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___showGraph) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___graphBufferSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___font) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___fontSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___text) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___cachedText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___graph) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___delayedDeltaTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastCollect) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastCollectNum) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___delta) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastDeltaTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___allocRate) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastAllocMemory) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___lastAllocSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___allocMem) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___collectAlloc) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___peakAlloc) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___fpsDropCounterSize) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___fpsDrops) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___boxRect) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___style) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___cam) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___graphWidth) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___graphHeight) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___graphOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___maxVecPool) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___maxNodePool) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::AstarDebugger, ___debugTypes) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::AstarDebugger) == 0xe0, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.AstarDebugger/<>c
class CORDL_TYPE AstarDebugger___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Pathfinding::AstarDebugger___c*  __9;

/// @brief Field <>9__42_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_0, put=setStaticF___9__42_0)) ::System::Func_1<int32_t>*  __9__42_0;

/// @brief Field <>9__42_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_1, put=setStaticF___9__42_1)) ::System::Func_1<int32_t>*  __9__42_1;

/// @brief Field <>9__42_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_10, put=setStaticF___9__42_10)) ::System::Func_1<int32_t>*  __9__42_10;

/// @brief Field <>9__42_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_11, put=setStaticF___9__42_11)) ::System::Func_1<int32_t>*  __9__42_11;

/// @brief Field <>9__42_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_12, put=setStaticF___9__42_12)) ::System::Func_1<int32_t>*  __9__42_12;

/// @brief Field <>9__42_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_13, put=setStaticF___9__42_13)) ::System::Func_1<int32_t>*  __9__42_13;

/// @brief Field <>9__42_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_2, put=setStaticF___9__42_2)) ::System::Func_1<int32_t>*  __9__42_2;

/// @brief Field <>9__42_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_3, put=setStaticF___9__42_3)) ::System::Func_1<int32_t>*  __9__42_3;

/// @brief Field <>9__42_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_4, put=setStaticF___9__42_4)) ::System::Func_1<int32_t>*  __9__42_4;

/// @brief Field <>9__42_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_5, put=setStaticF___9__42_5)) ::System::Func_1<int32_t>*  __9__42_5;

/// @brief Field <>9__42_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_6, put=setStaticF___9__42_6)) ::System::Func_1<int32_t>*  __9__42_6;

/// @brief Field <>9__42_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_7, put=setStaticF___9__42_7)) ::System::Func_1<int32_t>*  __9__42_7;

/// @brief Field <>9__42_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_8, put=setStaticF___9__42_8)) ::System::Func_1<int32_t>*  __9__42_8;

/// @brief Field <>9__42_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__42_9, put=setStaticF___9__42_9)) ::System::Func_1<int32_t>*  __9__42_9;

static inline ::Pathfinding::AstarDebugger___c* New_ctor() ;

/// @brief Method <.ctor>b__42_0, addr 0x5e55d08, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_0() ;

/// @brief Method <.ctor>b__42_1, addr 0x5e55da0, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_1() ;

/// @brief Method <.ctor>b__42_10, addr 0x5e562f8, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_10() ;

/// @brief Method <.ctor>b__42_11, addr 0x5e56390, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_11() ;

/// @brief Method <.ctor>b__42_12, addr 0x5e56428, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_12() ;

/// @brief Method <.ctor>b__42_13, addr 0x5e564c0, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_13() ;

/// @brief Method <.ctor>b__42_2, addr 0x5e55e38, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_2() ;

/// @brief Method <.ctor>b__42_3, addr 0x5e55ed0, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_3() ;

/// @brief Method <.ctor>b__42_4, addr 0x5e55f68, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_4() ;

/// @brief Method <.ctor>b__42_5, addr 0x5e56000, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_5() ;

/// @brief Method <.ctor>b__42_6, addr 0x5e56098, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_6() ;

/// @brief Method <.ctor>b__42_7, addr 0x5e56130, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_7() ;

/// @brief Method <.ctor>b__42_8, addr 0x5e561c8, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_8() ;

/// @brief Method <.ctor>b__42_9, addr 0x5e56260, size 0x98, virtual false, abstract: false, final false
inline int32_t __ctor_b__42_9() ;

/// @brief Method .ctor, addr 0x5e55d00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::AstarDebugger___c* getStaticF___9() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_0() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_1() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_10() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_11() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_12() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_13() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_2() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_3() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_4() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_5() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_6() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_7() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_8() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__42_9() ;

static inline void setStaticF___9(::Pathfinding::AstarDebugger___c*  value) ;

static inline void setStaticF___9__42_0(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_1(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_10(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_11(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_12(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_13(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_2(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_3(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_4(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_5(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_6(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_7(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_8(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__42_9(::System::Func_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarDebugger___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarDebugger___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarDebugger___c(AstarDebugger___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarDebugger___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarDebugger___c(AstarDebugger___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21237};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::AstarDebugger___c) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
