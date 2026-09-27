#pragma once
// IWYU pragma private; include "Oculus/Interaction/MonoBehaviourEndOfFrameExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBehaviourEndOfFrameExtensions)
namespace Oculus::Interaction {
class MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class YieldInstruction;
}
// Forward declare root types
namespace Oculus::Interaction {
class MonoBehaviourEndOfFrameExtensions;
}
namespace Oculus::Interaction {
class MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*);
MARK_REF_T(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions*, "Oculus.Interaction", "MonoBehaviourEndOfFrameExtensions");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4*, "Oculus.Interaction", "MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MonoBehaviourEndOfFrameExtensions
class CORDL_TYPE MonoBehaviourEndOfFrameExtensions : public ::System::Object {
public:
// Declarations
using _EndOfFrameCoroutine_d__4 = ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4;

/// @brief Field _endOfFrame, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__endOfFrame, put=setStaticF__endOfFrame)) ::UnityEngine::YieldInstruction*  _endOfFrame;

/// @brief Field _routines, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__routines, put=setStaticF__routines)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*  _routines;

/// [IteratorStateMachine(typeof(Oculus.Interaction.MonoBehaviourEndOfFrameExtensions::<EndOfFrameCoroutine>d__4))]
/// @brief Method EndOfFrameCoroutine, addr 0xa48bc4c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* EndOfFrameCoroutine(::System::Action*  callback) ;

/// [Extension]
/// @brief Method RegisterEndOfFrameCallback, addr 0xa48bb10, size 0x13c, virtual false, abstract: false, final false
static inline void RegisterEndOfFrameCallback(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Action*  callback) ;

/// [Extension]
/// @brief Method UnregisterEndOfFrameCallback, addr 0xa48bcb8, size 0x150, virtual false, abstract: false, final false
static inline void UnregisterEndOfFrameCallback(::UnityEngine::MonoBehaviour*  monoBehaviour) ;

static inline ::UnityEngine::YieldInstruction* getStaticF__endOfFrame() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>* getStaticF__routines() ;

static inline void setStaticF__endOfFrame(::UnityEngine::YieldInstruction*  value) ;

static inline void setStaticF__routines(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>,::UnityEngine::Coroutine*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviourEndOfFrameExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEndOfFrameExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourEndOfFrameExtensions(MonoBehaviourEndOfFrameExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEndOfFrameExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourEndOfFrameExtensions(MonoBehaviourEndOfFrameExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.MonoBehaviourEndOfFrameExtensions/<EndOfFrameCoroutine>d__4
class CORDL_TYPE MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action*  callback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa48bf08, size 0xb8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa48bfc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa48bfc8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa48c000, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa48bf04, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action* const& __cordl_internal_get_callback() const;

constexpr ::System::Action*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa48be08, size 0x28, virtual false, abstract: false, final false
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
constexpr MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4(MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4(MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16029};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4, ___callback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MonoBehaviourEndOfFrameExtensions__EndOfFrameCoroutine_d__4) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
