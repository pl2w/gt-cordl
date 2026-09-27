#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleUnloadUnusedAssets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleUnloadUnusedAssets)
namespace GlobalNamespace {
class SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2;
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
// Forward declare root types
namespace GlobalNamespace {
class SimpleUnloadUnusedAssets;
}
namespace GlobalNamespace {
class SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleUnloadUnusedAssets*);
MARK_REF_T(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleUnloadUnusedAssets*, "", "SimpleUnloadUnusedAssets");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2*, "", "SimpleUnloadUnusedAssets/<UnloadUnusedAssets>d__2");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleUnloadUnusedAssets
class CORDL_TYPE SimpleUnloadUnusedAssets : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UnloadUnusedAssets_d__2 = ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2;

/// @brief Field WaitForUnload, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_WaitForUnload, put=__cordl_internal_set_WaitForUnload)) float_t  WaitForUnload;

static inline ::GlobalNamespace::SimpleUnloadUnusedAssets* New_ctor() ;

/// @brief Method OnEnable, addr 0x5985398, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(SimpleUnloadUnusedAssets::<UnloadUnusedAssets>d__2))]
/// @brief Method UnloadUnusedAssets, addr 0x59853b8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UnloadUnusedAssets() ;

constexpr float_t const& __cordl_internal_get_WaitForUnload() const;

constexpr float_t& __cordl_internal_get_WaitForUnload() ;

constexpr void __cordl_internal_set_WaitForUnload(float_t  value) ;

/// @brief Method .ctor, addr 0x598544c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleUnloadUnusedAssets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleUnloadUnusedAssets", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleUnloadUnusedAssets(SimpleUnloadUnusedAssets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleUnloadUnusedAssets", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleUnloadUnusedAssets(SimpleUnloadUnusedAssets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2542};

/// @brief Field WaitForUnload, offset: 0x20, size: 0x4, def value: None
 float_t  ___WaitForUnload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleUnloadUnusedAssets, ___WaitForUnload) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleUnloadUnusedAssets) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleUnloadUnusedAssets/<UnloadUnusedAssets>d__2
class CORDL_TYPE SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5985460, size 0x13c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x598559c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59855a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59855dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x598545c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5985424, size 0x28, virtual false, abstract: false, final false
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
constexpr SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2(SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2(SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2541};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleUnloadUnusedAssets>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleUnloadUnusedAssets__UnloadUnusedAssets_d__2) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
