#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_DynamicAddDeleteExample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_DynamicAddDeleteExample)
namespace GlobalNamespace {
class MB3_MultiMeshBaker;
}
namespace GlobalNamespace {
class MB_DynamicAddDeleteExample__largeNumber_d__6;
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
// Forward declare root types
namespace GlobalNamespace {
class MB_DynamicAddDeleteExample;
}
namespace GlobalNamespace {
class MB_DynamicAddDeleteExample__largeNumber_d__6;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_DynamicAddDeleteExample*);
MARK_REF_T(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_DynamicAddDeleteExample*, "", "MB_DynamicAddDeleteExample");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6*, "", "MB_DynamicAddDeleteExample/<largeNumber>d__6");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_DynamicAddDeleteExample
class CORDL_TYPE MB_DynamicAddDeleteExample : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _largeNumber_d__6 = ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6;

/// @brief Field mbd, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mbd, put=__cordl_internal_set_mbd)) ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>  mbd;

/// @brief Field objs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_objs, put=__cordl_internal_set_objs)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  objs;

/// @brief Field objsInCombined, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objsInCombined, put=__cordl_internal_set_objsInCombined)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsInCombined;

/// @brief Field prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Method GaussianValue, addr 0x9dfcd48, size 0x94, virtual false, abstract: false, final false
inline float_t GaussianValue() ;

static inline ::GlobalNamespace::MB_DynamicAddDeleteExample* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfd2b4, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Start, addr 0x9dfcddc, size 0x444, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker> const& __cordl_internal_get_mbd() const;

constexpr ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>& __cordl_internal_get_mbd() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_objs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_objs() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objsInCombined() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objsInCombined() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_mbd(::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>  value) ;

constexpr void __cordl_internal_set_objs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_objsInCombined(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9dfd364, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [IteratorStateMachine(typeof(MB_DynamicAddDeleteExample::<largeNumber>d__6))]
/// @brief Method largeNumber, addr 0x9dfd220, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* largeNumber() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_DynamicAddDeleteExample() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_DynamicAddDeleteExample", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_DynamicAddDeleteExample(MB_DynamicAddDeleteExample && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_DynamicAddDeleteExample", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_DynamicAddDeleteExample(MB_DynamicAddDeleteExample const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32360};

/// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field objsInCombined, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objsInCombined;

/// @brief Field mbd, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB3_MultiMeshBaker>  ___mbd;

/// @brief Field objs, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___objs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample, ___prefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample, ___objsInCombined) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample, ___mbd) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample, ___objs) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_DynamicAddDeleteExample) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_DynamicAddDeleteExample/<largeNumber>d__6
class CORDL_TYPE MB_DynamicAddDeleteExample__largeNumber_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9dfd3f0, size 0x180, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9dfd570, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9dfd578, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9dfd5b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9dfd3ec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9dfd28c, size 0x28, virtual false, abstract: false, final false
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
constexpr MB_DynamicAddDeleteExample__largeNumber_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_DynamicAddDeleteExample__largeNumber_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_DynamicAddDeleteExample__largeNumber_d__6(MB_DynamicAddDeleteExample__largeNumber_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_DynamicAddDeleteExample__largeNumber_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_DynamicAddDeleteExample__largeNumber_d__6(MB_DynamicAddDeleteExample__largeNumber_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32359};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MB_DynamicAddDeleteExample>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_DynamicAddDeleteExample__largeNumber_d__6) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
