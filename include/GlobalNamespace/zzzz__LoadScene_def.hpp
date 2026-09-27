#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadScene)
namespace GlobalNamespace {
class LoadScene__Start_d__2;
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
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
class LoadScene;
}
namespace GlobalNamespace {
class LoadScene__Start_d__2;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LoadScene*);
MARK_REF_T(::GlobalNamespace::LoadScene__Start_d__2*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoadScene*, "", "LoadScene");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LoadScene__Start_d__2*, "", "LoadScene/<Start>d__2");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadScene
class CORDL_TYPE LoadScene : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = ::GlobalNamespace::LoadScene__Start_d__2;

/// @brief Field _delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Field _sceneName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneName, put=__cordl_internal_set__sceneName)) ::StringW  _sceneName;

static inline ::GlobalNamespace::LoadScene* New_ctor() ;

/// [IteratorStateMachine(typeof(LoadScene::<Start>d__2))]
/// @brief Method Start, addr 0x55ec000, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr ::StringW const& __cordl_internal_get__sceneName() const;

constexpr ::StringW& __cordl_internal_get__sceneName() ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

constexpr void __cordl_internal_set__sceneName(::StringW  value) ;

/// @brief Method .ctor, addr 0x55ec094, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadScene(LoadScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadScene(LoadScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{49};

/// [SerializeField]
/// @brief Field _delay, offset: 0x20, size: 0x4, def value: None
 float_t  ____delay;

/// [SerializeField]
/// @brief Field _sceneName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____sceneName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadScene, ____delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadScene, ____sceneName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LoadScene) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LoadScene/<Start>d__2
class CORDL_TYPE LoadScene__Start_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LoadScene>  __4__this;

/// @brief Field <asyncOperation>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncOperation_5__2, put=__cordl_internal_set__asyncOperation_5__2)) ::UnityEngine::AsyncOperation*  _asyncOperation_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55ec0a0, size 0x164, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LoadScene__Start_d__2* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55ec204, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55ec20c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55ec244, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55ec09c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LoadScene> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LoadScene>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get__asyncOperation_5__2() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get__asyncOperation_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LoadScene>  value) ;

constexpr void __cordl_internal_set__asyncOperation_5__2(::UnityEngine::AsyncOperation*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55ec06c, size 0x28, virtual false, abstract: false, final false
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
constexpr LoadScene__Start_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadScene__Start_d__2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadScene__Start_d__2(LoadScene__Start_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadScene__Start_d__2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadScene__Start_d__2(LoadScene__Start_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{48};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LoadScene>  _____4__this;

/// @brief Field <asyncOperation>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ____asyncOperation_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadScene__Start_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadScene__Start_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadScene__Start_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadScene__Start_d__2, ____asyncOperation_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LoadScene__Start_d__2) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
