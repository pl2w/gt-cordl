#pragma once
// IWYU pragma private; include "Meta/WitAi/CoroutineUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoroutineUtility)
namespace Meta::WitAi {
class CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9;
}
namespace Meta::WitAi {
class CoroutineUtility_CoroutinePerformer;
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
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi {
class CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9;
}
namespace Meta::WitAi {
class CoroutineUtility;
}
namespace Meta::WitAi {
class CoroutineUtility_CoroutinePerformer;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*);
MARK_REF_T(::Meta::WitAi::CoroutineUtility*);
MARK_REF_T(::Meta::WitAi::CoroutineUtility_CoroutinePerformer*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9*, "Meta.WitAi", "CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CoroutineUtility*, "Meta.WitAi", "CoroutineUtility");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::CoroutineUtility_CoroutinePerformer*, "Meta.WitAi", "CoroutineUtility/CoroutinePerformer");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.CoroutineUtility
class CORDL_TYPE CoroutineUtility : public ::System::Object {
public:
// Declarations
using CoroutinePerformer = ::Meta::WitAi::CoroutineUtility_CoroutinePerformer;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoroutineUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoroutineUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineUtility(CoroutineUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineUtility(CoroutineUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30983};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::CoroutineUtility) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.CoroutineUtility/CoroutinePerformer
class CORDL_TYPE CoroutineUtility_CoroutinePerformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CoroutineIterateEnumerator_d__9 = ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

/// @brief Field <IsRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRunning_k__BackingField, put=__cordl_internal_set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field _coroutine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine, put=__cordl_internal_set__coroutine)) ::UnityEngine::Coroutine*  _coroutine;

/// @brief Field _method, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::System::Collections::IEnumerator*  _method;

/// @brief Field _useUpdate, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__useUpdate, put=__cordl_internal_set__useUpdate)) bool  _useUpdate;

/// @brief Method Awake, addr 0x9e3c080, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CoroutineBegin, addr 0x9e3c0ec, size 0xe8, virtual false, abstract: false, final false
inline void CoroutineBegin(::System::Collections::IEnumerator*  asyncMethod, bool  useUpdate) ;

/// @brief Method CoroutineCancel, addr 0x9e3c300, size 0x4, virtual false, abstract: false, final false
inline void CoroutineCancel() ;

/// @brief Method CoroutineComplete, addr 0x9e3c4d4, size 0xc4, virtual false, abstract: false, final false
inline void CoroutineComplete() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.CoroutineUtility::CoroutinePerformer::<CoroutineIterateEnumerator>d__9))]
/// @brief Method CoroutineIterateEnumerator, addr 0x9e3c25c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoroutineIterateEnumerator() ;

/// @brief Method CoroutineIterateUpdate, addr 0x9e3c1d4, size 0x88, virtual false, abstract: false, final false
inline void CoroutineIterateUpdate() ;

/// @brief Method CoroutineUnload, addr 0x9e3c59c, size 0x60, virtual false, abstract: false, final false
inline void CoroutineUnload() ;

/// @brief Method MoveNext, addr 0x9e3c304, size 0x1d0, virtual false, abstract: false, final false
inline bool MoveNext(::System::Collections::IEnumerator*  method) ;

static inline ::Meta::WitAi::CoroutineUtility_CoroutinePerformer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e3c598, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0x9e3c2f0, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__IsRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRunning_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__coroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__coroutine() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__method() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__method() ;

constexpr bool const& __cordl_internal_get__useUpdate() const;

constexpr bool& __cordl_internal_get__useUpdate() ;

constexpr void __cordl_internal_set__IsRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__method(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set__useUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x9e3c680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsRunning, addr 0x9e3c070, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// [CompilerGenerated]
/// @brief Method set_IsRunning, addr 0x9e3c078, size 0x8, virtual false, abstract: false, final false
inline void set_IsRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoroutineUtility_CoroutinePerformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoroutineUtility_CoroutinePerformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutineUtility_CoroutinePerformer(CoroutineUtility_CoroutinePerformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineUtility_CoroutinePerformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutineUtility_CoroutinePerformer(CoroutineUtility_CoroutinePerformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30982};

/// [CompilerGenerated]
/// @brief Field <IsRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsRunning_k__BackingField;

/// @brief Field _useUpdate, offset: 0x21, size: 0x1, def value: None
 bool  ____useUpdate;

/// @brief Field _method, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ____method;

/// @brief Field _coroutine, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____coroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CoroutineUtility_CoroutinePerformer, ____IsRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CoroutineUtility_CoroutinePerformer, ____useUpdate) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CoroutineUtility_CoroutinePerformer, ____method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CoroutineUtility_CoroutinePerformer, ____coroutine) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CoroutineUtility_CoroutinePerformer) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.CoroutineUtility/CoroutinePerformer/<CoroutineIterateEnumerator>d__9
class CORDL_TYPE CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e3c68c, size 0x70, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e3c6fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e3c704, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e3c73c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e3c688, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e3c2c8, size 0x28, virtual false, abstract: false, final false
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
constexpr CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9(CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9(CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30981};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::CoroutineUtility_CoroutinePerformer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::CoroutinePerformer_CoroutineUtility__CoroutineIterateEnumerator_d__9) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
