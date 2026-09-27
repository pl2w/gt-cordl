#pragma once
// IWYU pragma private; include "Pathfinding/Examples/RVOAgentPlacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOAgentPlacer)
namespace Pathfinding::Examples {
class RVOAgentPlacer__Start_d__6;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Pathfinding::Examples {
class RVOAgentPlacer;
}
namespace Pathfinding::Examples {
class RVOAgentPlacer__Start_d__6;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::RVOAgentPlacer*);
MARK_REF_T(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::RVOAgentPlacer*, "Pathfinding.Examples", "RVOAgentPlacer");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6*, "Pathfinding.Examples", "RVOAgentPlacer/<Start>d__6");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_r_v_o_agent_placer.php")]
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.RVOAgentPlacer
class CORDL_TYPE RVOAgentPlacer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__6 = ::Pathfinding::Examples::RVOAgentPlacer__Start_d__6;

/// @brief Field agents, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_agents, put=__cordl_internal_set_agents)) int32_t  agents;

/// @brief Field goalOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_goalOffset, put=__cordl_internal_set_goalOffset)) ::UnityEngine::Vector3  goalOffset;

/// @brief Field mask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field prefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field repathRate, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_repathRate, put=__cordl_internal_set_repathRate)) float_t  repathRate;

/// @brief Field ringSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringSize, put=__cordl_internal_set_ringSize)) float_t  ringSize;

/// @brief Method GetColor, addr 0x5ef117c, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(float_t  angle) ;

static inline ::Pathfinding::Examples::RVOAgentPlacer* New_ctor() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.RVOAgentPlacer::<Start>d__6))]
/// @brief Method Start, addr 0x5ef10e8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr int32_t const& __cordl_internal_get_agents() const;

constexpr int32_t& __cordl_internal_get_agents() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_goalOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_goalOffset() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr float_t const& __cordl_internal_get_repathRate() const;

constexpr float_t& __cordl_internal_get_repathRate() ;

constexpr float_t const& __cordl_internal_get_ringSize() const;

constexpr float_t& __cordl_internal_get_ringSize() ;

constexpr void __cordl_internal_set_agents(int32_t  value) ;

constexpr void __cordl_internal_set_goalOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_repathRate(float_t  value) ;

constexpr void __cordl_internal_set_ringSize(float_t  value) ;

/// @brief Method .ctor, addr 0x5ef11a0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOAgentPlacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOAgentPlacer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOAgentPlacer(RVOAgentPlacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOAgentPlacer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOAgentPlacer(RVOAgentPlacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21519};

/// @brief Field rad2Deg offset 0xffffffff size 0x4
static constexpr float_t  rad2Deg{static_cast<float_t>(57.295776f)};

/// @brief Field agents, offset: 0x20, size: 0x4, def value: None
 int32_t  ___agents;

/// @brief Field ringSize, offset: 0x24, size: 0x4, def value: None
 float_t  ___ringSize;

/// @brief Field mask, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field prefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field goalOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___goalOffset;

/// @brief Field repathRate, offset: 0x44, size: 0x4, def value: None
 float_t  ___repathRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___agents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___ringSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___mask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___prefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___goalOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer, ___repathRate) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::RVOAgentPlacer) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.RVOAgentPlacer/<Start>d__6
class CORDL_TYPE RVOAgentPlacer__Start_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::RVOAgentPlacer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef11c0, size 0x39c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::RVOAgentPlacer__Start_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef1908, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef1910, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef1948, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef11bc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::RVOAgentPlacer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::RVOAgentPlacer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::RVOAgentPlacer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef1154, size 0x28, virtual false, abstract: false, final false
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
constexpr RVOAgentPlacer__Start_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOAgentPlacer__Start_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOAgentPlacer__Start_d__6(RVOAgentPlacer__Start_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOAgentPlacer__Start_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOAgentPlacer__Start_d__6(RVOAgentPlacer__Start_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21518};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::RVOAgentPlacer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::RVOAgentPlacer__Start_d__6) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Examples
