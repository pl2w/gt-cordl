#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SceneLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneLoader)
namespace Oculus::Interaction::Samples {
class SceneLoader__LoadSceneAsync_d__6;
}
namespace Oculus::Interaction::Samples {
class SceneLoader___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
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
namespace Oculus::Interaction::Samples {
class SceneLoader;
}
namespace Oculus::Interaction::Samples {
class SceneLoader__LoadSceneAsync_d__6;
}
namespace Oculus::Interaction::Samples {
class SceneLoader___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::SceneLoader*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*);
MARK_REF_T(::Oculus::Interaction::Samples::SceneLoader___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneLoader*, "Oculus.Interaction.Samples", "SceneLoader");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6*, "Oculus.Interaction.Samples", "SceneLoader/<LoadSceneAsync>d__6");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::SceneLoader___c*, "Oculus.Interaction.Samples", "SceneLoader/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneLoader
class CORDL_TYPE SceneLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadSceneAsync_d__6 = ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6;

using __c = ::Oculus::Interaction::Samples::SceneLoader___c;

/// @brief Field WhenLoadingScene, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenLoadingScene, put=__cordl_internal_set_WhenLoadingScene)) ::System::Action_1<::StringW>*  WhenLoadingScene;

/// @brief Field WhenSceneLoaded, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenSceneLoaded, put=__cordl_internal_set_WhenSceneLoaded)) ::System::Action_1<::StringW>*  WhenSceneLoaded;

/// @brief Field _loading, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__loading, put=__cordl_internal_set__loading)) bool  _loading;

/// @brief Field _waitingCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__waitingCount, put=__cordl_internal_set__waitingCount)) int32_t  _waitingCount;

/// @brief Method HandleReadyToLoad, addr 0xa4403f0, size 0x38, virtual false, abstract: false, final false
inline void HandleReadyToLoad(::StringW  sceneName) ;

/// @brief Method Load, addr 0xa44026c, size 0x90, virtual false, abstract: false, final false
inline void Load(::StringW  sceneName) ;

/// [IteratorStateMachine(typeof(Oculus.Interaction.Samples.SceneLoader::<LoadSceneAsync>d__6))]
/// @brief Method LoadSceneAsync, addr 0xa440428, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LoadSceneAsync(::StringW  sceneName) ;

static inline ::Oculus::Interaction::Samples::SceneLoader* New_ctor() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_WhenLoadingScene() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_WhenLoadingScene() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_WhenSceneLoaded() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_WhenSceneLoaded() ;

constexpr bool const& __cordl_internal_get__loading() const;

constexpr bool& __cordl_internal_get__loading() ;

constexpr int32_t const& __cordl_internal_get__waitingCount() const;

constexpr int32_t& __cordl_internal_get__waitingCount() ;

constexpr void __cordl_internal_set_WhenLoadingScene(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_WhenSceneLoaded(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__loading(bool  value) ;

constexpr void __cordl_internal_set__waitingCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa4404d8, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneLoader(SceneLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneLoader(SceneLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28346};

/// @brief Field _loading, offset: 0x20, size: 0x1, def value: None
 bool  ____loading;

/// @brief Field WhenLoadingScene, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___WhenLoadingScene;

/// @brief Field WhenSceneLoaded, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___WhenSceneLoaded;

/// @brief Field _waitingCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____waitingCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader, ____loading) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader, ___WhenLoadingScene) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader, ___WhenSceneLoaded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader, ____waitingCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneLoader) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneLoader/<LoadSceneAsync>d__6
class CORDL_TYPE SceneLoader__LoadSceneAsync_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Oculus::Interaction::Samples::SceneLoader>  __4__this;

/// @brief Field <asyncLoad>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncLoad_5__2, put=__cordl_internal_set__asyncLoad_5__2)) ::UnityEngine::AsyncOperation*  _asyncLoad_5__2;

/// @brief Field sceneName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneName, put=__cordl_internal_set_sceneName)) ::StringW  sceneName;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa4406e0, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa4407d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa4407d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa440810, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa4406dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Oculus::Interaction::Samples::SceneLoader>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get__asyncLoad_5__2() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get__asyncLoad_5__2() ;

constexpr ::StringW const& __cordl_internal_get_sceneName() const;

constexpr ::StringW& __cordl_internal_get_sceneName() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SceneLoader>  value) ;

constexpr void __cordl_internal_set__asyncLoad_5__2(::UnityEngine::AsyncOperation*  value) ;

constexpr void __cordl_internal_set_sceneName(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa4404b0, size 0x28, virtual false, abstract: false, final false
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
constexpr SceneLoader__LoadSceneAsync_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader__LoadSceneAsync_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneLoader__LoadSceneAsync_d__6(SceneLoader__LoadSceneAsync_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader__LoadSceneAsync_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneLoader__LoadSceneAsync_d__6(SceneLoader__LoadSceneAsync_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28345};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sceneName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___sceneName;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Samples::SceneLoader>  _____4__this;

/// @brief Field <asyncLoad>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ____asyncLoad_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6, ___sceneName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6, ____asyncLoad_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::SceneLoader__LoadSceneAsync_d__6) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.SceneLoader/<>c
class CORDL_TYPE SceneLoader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Samples::SceneLoader___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Action_1<::StringW>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Action_1<::StringW>*  __9__7_1;

static inline ::Oculus::Interaction::Samples::SceneLoader___c* New_ctor() ;

/// @brief Method <.ctor>b__7_0, addr 0xa4406d4, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__7_0(::StringW  _p0_) ;

/// @brief Method <.ctor>b__7_1, addr 0xa4406d8, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__7_1(::StringW  _p0_) ;

/// @brief Method .ctor, addr 0xa4406cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Samples::SceneLoader___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__7_0() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__7_1() ;

static inline void setStaticF___9(::Oculus::Interaction::Samples::SceneLoader___c*  value) ;

static inline void setStaticF___9__7_0(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF___9__7_1(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneLoader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneLoader___c(SceneLoader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoader___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneLoader___c(SceneLoader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::SceneLoader___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
