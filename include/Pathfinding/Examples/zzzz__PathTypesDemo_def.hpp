#pragma once
// IWYU pragma private; include "Pathfinding/Examples/PathTypesDemo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Examples/zzzz__PathTypesDemo_DemoMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PathTypesDemo)
namespace GlobalNamespace {
struct PathTypesDemo_DemoMode;
}
namespace Pathfinding::Examples {
class PathTypesDemo__DemoConstantPath_d__22;
}
namespace Pathfinding::Examples {
class PathTypesDemo__DemoMultiTargetPath_d__21;
}
namespace Pathfinding {
class ConstantPath;
}
namespace Pathfinding {
class FloodPath;
}
namespace Pathfinding {
class MultiTargetPath;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class PathTypesDemo;
}
namespace Pathfinding::Examples {
class PathTypesDemo__DemoConstantPath_d__22;
}
namespace Pathfinding::Examples {
class PathTypesDemo__DemoMultiTargetPath_d__21;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::PathTypesDemo*);
MARK_REF_T(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*);
MARK_REF_T(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::PathTypesDemo*, "Pathfinding.Examples", "PathTypesDemo");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22*, "Pathfinding.Examples", "PathTypesDemo/<DemoConstantPath>d__22");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21*, "Pathfinding.Examples", "PathTypesDemo/<DemoMultiTargetPath>d__21");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_path_types_demo.php")]
// Dependencies Pathfinding.Examples.PathTypesDemo::DemoMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.PathTypesDemo
class CORDL_TYPE PathTypesDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DemoMode = ::GlobalNamespace::PathTypesDemo_DemoMode;

using _DemoConstantPath_d__22 = ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22;

using _DemoMultiTargetPath_d__21 = ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21;

/// @brief Field activeDemo, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeDemo, put=__cordl_internal_set_activeDemo)) ::GlobalNamespace::PathTypesDemo_DemoMode  activeDemo;

/// @brief Field aimStrength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_aimStrength, put=__cordl_internal_set_aimStrength)) float_t  aimStrength;

/// @brief Field end, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

/// @brief Field lastFloodPath, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastFloodPath, put=__cordl_internal_set_lastFloodPath)) ::Pathfinding::FloodPath*  lastFloodPath;

/// @brief Field lastPath, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPath, put=__cordl_internal_set_lastPath)) ::Pathfinding::Path*  lastPath;

/// @brief Field lastRender, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRender, put=__cordl_internal_set_lastRender)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  lastRender;

/// @brief Field lineMat, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineMat, put=__cordl_internal_set_lineMat)) ::UnityW<::UnityEngine::Material>  lineMat;

/// @brief Field lineWidth, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineWidth, put=__cordl_internal_set_lineWidth)) float_t  lineWidth;

/// @brief Field multipoints, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_multipoints, put=__cordl_internal_set_multipoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  multipoints;

/// @brief Field pathOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_pathOffset, put=__cordl_internal_set_pathOffset)) ::UnityEngine::Vector3  pathOffset;

/// @brief Field searchLength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchLength, put=__cordl_internal_set_searchLength)) int32_t  searchLength;

/// @brief Field spread, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_spread, put=__cordl_internal_set_spread)) int32_t  spread;

/// @brief Field squareMat, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_squareMat, put=__cordl_internal_set_squareMat)) ::UnityW<::UnityEngine::Material>  squareMat;

/// @brief Field start, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityW<::UnityEngine::Transform>  start;

/// @brief Method ClearPrevious, addr 0x5ef8ea0, size 0xfc, virtual false, abstract: false, final false
inline void ClearPrevious() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.PathTypesDemo::<DemoConstantPath>d__22))]
/// @brief Method DemoConstantPath, addr 0x5ef9028, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DemoConstantPath() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.PathTypesDemo::<DemoMultiTargetPath>d__21))]
/// @brief Method DemoMultiTargetPath, addr 0x5ef8fbc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DemoMultiTargetPath() ;

/// @brief Method DemoPath, addr 0x5ef7990, size 0x3e4, virtual false, abstract: false, final false
inline void DemoPath() ;

static inline ::Pathfinding::Examples::PathTypesDemo* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5ef8f9c, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGUI, addr 0x5ef7d74, size 0xe5c, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnPathComplete, addr 0x5ef8bd0, size 0x2d0, virtual false, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  p) ;

/// @brief Method Update, addr 0x5ef77b0, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::PathTypesDemo_DemoMode const& __cordl_internal_get_activeDemo() const;

constexpr ::GlobalNamespace::PathTypesDemo_DemoMode& __cordl_internal_get_activeDemo() ;

constexpr float_t const& __cordl_internal_get_aimStrength() const;

constexpr float_t& __cordl_internal_get_aimStrength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr ::Pathfinding::FloodPath* const& __cordl_internal_get_lastFloodPath() const;

constexpr ::Pathfinding::FloodPath*& __cordl_internal_get_lastFloodPath() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_lastPath() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_lastPath() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_lastRender() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_lastRender() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lineMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lineMat() ;

constexpr float_t const& __cordl_internal_get_lineWidth() const;

constexpr float_t& __cordl_internal_get_lineWidth() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_multipoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_multipoints() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pathOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pathOffset() ;

constexpr int32_t const& __cordl_internal_get_searchLength() const;

constexpr int32_t& __cordl_internal_get_searchLength() ;

constexpr int32_t const& __cordl_internal_get_spread() const;

constexpr int32_t& __cordl_internal_get_spread() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_squareMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_squareMat() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_start() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set_activeDemo(::GlobalNamespace::PathTypesDemo_DemoMode  value) ;

constexpr void __cordl_internal_set_aimStrength(float_t  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastFloodPath(::Pathfinding::FloodPath*  value) ;

constexpr void __cordl_internal_set_lastPath(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_lastRender(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_lineMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_lineWidth(float_t  value) ;

constexpr void __cordl_internal_set_multipoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_pathOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_searchLength(int32_t  value) ;

constexpr void __cordl_internal_set_spread(int32_t  value) ;

constexpr void __cordl_internal_set_squareMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_start(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5ef90e4, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathTypesDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathTypesDemo(PathTypesDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathTypesDemo(PathTypesDemo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21543};

/// @brief Field activeDemo, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::PathTypesDemo_DemoMode  ___activeDemo;

/// @brief Field start, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___start;

/// @brief Field end, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// @brief Field pathOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pathOffset;

/// @brief Field lineMat, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___lineMat;

/// @brief Field squareMat, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___squareMat;

/// @brief Field lineWidth, offset: 0x58, size: 0x4, def value: None
 float_t  ___lineWidth;

/// @brief Field searchLength, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___searchLength;

/// @brief Field spread, offset: 0x60, size: 0x4, def value: None
 int32_t  ___spread;

/// @brief Field aimStrength, offset: 0x64, size: 0x4, def value: None
 float_t  ___aimStrength;

/// @brief Field lastPath, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::Path*  ___lastPath;

/// @brief Field lastFloodPath, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::FloodPath*  ___lastFloodPath;

/// @brief Field lastRender, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___lastRender;

/// @brief Field multipoints, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___multipoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___activeDemo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___start) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___end) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___pathOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___lineMat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___squareMat) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___lineWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___searchLength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___spread) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___aimStrength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___lastPath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___lastFloodPath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___lastRender) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo, ___multipoints) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::PathTypesDemo) == 0x88, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.PathTypesDemo/<DemoMultiTargetPath>d__21
class CORDL_TYPE PathTypesDemo__DemoMultiTargetPath_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::PathTypesDemo>  __4__this;

/// @brief Field <mp>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mp_5__2, put=__cordl_internal_set__mp_5__2)) ::Pathfinding::MultiTargetPath*  _mp_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef9bf8, size 0x5cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5efa1c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5efa1cc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5efa204, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef9bf4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::MultiTargetPath* const& __cordl_internal_get__mp_5__2() const;

constexpr ::Pathfinding::MultiTargetPath*& __cordl_internal_get__mp_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::PathTypesDemo>  value) ;

constexpr void __cordl_internal_set__mp_5__2(::Pathfinding::MultiTargetPath*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef9094, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathTypesDemo__DemoMultiTargetPath_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo__DemoMultiTargetPath_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathTypesDemo__DemoMultiTargetPath_d__21(PathTypesDemo__DemoMultiTargetPath_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo__DemoMultiTargetPath_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathTypesDemo__DemoMultiTargetPath_d__21(PathTypesDemo__DemoMultiTargetPath_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21542};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::PathTypesDemo>  _____4__this;

/// @brief Field <mp>5__2, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::MultiTargetPath*  ____mp_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21, ____mp_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::PathTypesDemo__DemoMultiTargetPath_d__21) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.PathTypesDemo/<DemoConstantPath>d__22
class CORDL_TYPE PathTypesDemo__DemoConstantPath_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::PathTypesDemo>  __4__this;

/// @brief Field <constPath>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__constPath_5__2, put=__cordl_internal_set__constPath_5__2)) ::Pathfinding::ConstantPath*  _constPath_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef91d0, size 0x9dc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef9bac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef9bb4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef9bec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef91cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::PathTypesDemo>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::ConstantPath* const& __cordl_internal_get__constPath_5__2() const;

constexpr ::Pathfinding::ConstantPath*& __cordl_internal_get__constPath_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::PathTypesDemo>  value) ;

constexpr void __cordl_internal_set__constPath_5__2(::Pathfinding::ConstantPath*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef90bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathTypesDemo__DemoConstantPath_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo__DemoConstantPath_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathTypesDemo__DemoConstantPath_d__22(PathTypesDemo__DemoConstantPath_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathTypesDemo__DemoConstantPath_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathTypesDemo__DemoConstantPath_d__22(PathTypesDemo__DemoConstantPath_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21541};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::PathTypesDemo>  _____4__this;

/// @brief Field <constPath>5__2, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::ConstantPath*  ____constPath_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22, ____constPath_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::PathTypesDemo__DemoConstantPath_d__22) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Examples
