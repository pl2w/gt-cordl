#pragma once
// IWYU pragma private; include "Oculus/Interaction/Context.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Context)
namespace Oculus::Interaction {
class Context_Instance;
}
namespace Oculus::Interaction {
class Context___c__DisplayClass4_0;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
class Mutex;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Oculus::Interaction {
class Context;
}
namespace Oculus::Interaction {
class Context_Instance;
}
namespace Oculus::Interaction {
class Context___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Context*);
MARK_REF_T(::Oculus::Interaction::Context_Instance*);
MARK_REF_T(::Oculus::Interaction::Context___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Context*, "Oculus.Interaction", "Context");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Context_Instance*, "Oculus.Interaction", "Context/Instance");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Context___c__DisplayClass4_0*, "Oculus.Interaction", "Context/<>c__DisplayClass4_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Context
class CORDL_TYPE Context : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Instance = ::Oculus::Interaction::Context_Instance;

using __c__DisplayClass4_0 = ::Oculus::Interaction::Context___c__DisplayClass4_0;

/// @brief Field WhenDestroyed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenDestroyed, put=__cordl_internal_set_WhenDestroyed)) ::System::Action*  WhenDestroyed;

/// @brief Field <Global>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Global_k__BackingField, put=setStaticF__Global_k__BackingField)) ::Oculus::Interaction::Context_Instance*  _Global_k__BackingField;

/// @brief Field _singletons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__singletons, put=__cordl_internal_set__singletons)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*  _singletons;

/// @brief Field _unityMainThreadSynchronizationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityMainThreadSynchronizationContext, put=setStaticF__unityMainThreadSynchronizationContext)) ::System::Threading::SynchronizationContext*  _unityMainThreadSynchronizationContext;

/// @brief Field _unityMainThreadWork, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityMainThreadWork, put=setStaticF__unityMainThreadWork)) ::System::Collections::Generic::Queue_1<::System::Action*>*  _unityMainThreadWork;

/// @brief Field _unityMainThreadWorkMutex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityMainThreadWorkMutex, put=setStaticF__unityMainThreadWorkMutex)) ::System::Threading::Mutex*  _unityMainThreadWorkMutex;

/// @brief Method Awake, addr 0xa48b3fc, size 0x138, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ExecuteOnMainThread, addr 0xa48b0c4, size 0x1a0, virtual false, abstract: false, final false
static inline void ExecuteOnMainThread(::System::Action*  work) ;

/// @brief Method GetOrCreateSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetOrCreateSingleton() ;

/// @brief Method GetOrCreateSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GetOrCreateSingleton(::System::Func_1<T>*  factory) ;

static inline ::Oculus::Interaction::Context* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa48b534, size 0x1c, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenDestroyed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenDestroyed() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>* const& __cordl_internal_get__singletons() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*& __cordl_internal_get__singletons() ;

constexpr void __cordl_internal_set_WhenDestroyed(::System::Action*  value) ;

constexpr void __cordl_internal_set__singletons(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xa48b550, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenDestroyed, addr 0xa48b2c4, size 0x9c, virtual false, abstract: false, final false
inline void add_WhenDestroyed(::System::Action*  value) ;

static inline ::Oculus::Interaction::Context_Instance* getStaticF__Global_k__BackingField() ;

static inline ::System::Threading::SynchronizationContext* getStaticF__unityMainThreadSynchronizationContext() ;

static inline ::System::Collections::Generic::Queue_1<::System::Action*>* getStaticF__unityMainThreadWork() ;

static inline ::System::Threading::Mutex* getStaticF__unityMainThreadWorkMutex() ;

/// [CompilerGenerated]
/// @brief Method get_Global, addr 0xa48b26c, size 0x58, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Context_Instance* get_Global() ;

/// [CompilerGenerated]
/// @brief Method remove_WhenDestroyed, addr 0xa48b360, size 0x9c, virtual false, abstract: false, final false
inline void remove_WhenDestroyed(::System::Action*  value) ;

static inline void setStaticF__Global_k__BackingField(::Oculus::Interaction::Context_Instance*  value) ;

static inline void setStaticF__unityMainThreadSynchronizationContext(::System::Threading::SynchronizationContext*  value) ;

static inline void setStaticF__unityMainThreadWork(::System::Collections::Generic::Queue_1<::System::Action*>*  value) ;

static inline void setStaticF__unityMainThreadWorkMutex(::System::Threading::Mutex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Context() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Context(Context && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Context(Context const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16015};

/// [CompilerGenerated]
/// @brief Field WhenDestroyed, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___WhenDestroyed;

/// @brief Field _singletons, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::System::Object*>*  ____singletons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Context, ___WhenDestroyed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Context, ____singletons) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Context) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Context/<>c__DisplayClass4_0
class CORDL_TYPE Context___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field work, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_work, put=__cordl_internal_set_work)) ::System::Action*  work;

static inline ::Oculus::Interaction::Context___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <ExecuteOnMainThread>b__0, addr 0xa48b75c, size 0x20, virtual false, abstract: false, final false
inline void _ExecuteOnMainThread_b__0(::System::Object*  _) ;

constexpr ::System::Action* const& __cordl_internal_get_work() const;

constexpr ::System::Action*& __cordl_internal_get_work() ;

constexpr void __cordl_internal_set_work(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa48b264, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Context___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Context___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Context___c__DisplayClass4_0(Context___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Context___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Context___c__DisplayClass4_0(Context___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16014};

/// @brief Field work, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___work;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Context___c__DisplayClass4_0, ___work) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Context___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Context/Instance
class CORDL_TYPE Context_Instance : public ::System::Object {
public:
// Declarations
/// @brief Field _instance, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::UnityW<::Oculus::Interaction::Context>  _instance;

/// @brief Field _name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Method GetInstance, addr 0xa47320c, size 0x134, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Context> GetInstance() ;

static inline ::Oculus::Interaction::Context_Instance* New_ctor(::StringW  name) ;

constexpr ::UnityW<::Oculus::Interaction::Context> const& __cordl_internal_get__instance() const;

constexpr ::UnityW<::Oculus::Interaction::Context>& __cordl_internal_get__instance() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__instance(::UnityW<::Oculus::Interaction::Context>  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa48b72c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Context_Instance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Context_Instance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Context_Instance(Context_Instance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Context_Instance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Context_Instance(Context_Instance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16013};

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _instance, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Context>  ____instance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Context_Instance, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Context_Instance, ____instance) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Context_Instance) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction
