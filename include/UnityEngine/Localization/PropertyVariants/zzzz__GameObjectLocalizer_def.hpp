#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/GameObjectLocalizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameObjectLocalizer)
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
namespace UnityEngine::Localization::PropertyVariants::TrackedObjects {
class TrackedObject;
}
namespace UnityEngine::Localization::PropertyVariants {
class GameObjectLocalizer__Start_d__10;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class LocalizedString_ChangeHandler;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::PropertyVariants {
class GameObjectLocalizer;
}
namespace UnityEngine::Localization::PropertyVariants {
class GameObjectLocalizer__Start_d__10;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*);
MARK_REF_T(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer*, "UnityEngine.Localization.PropertyVariants", "GameObjectLocalizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10*, "UnityEngine.Localization.PropertyVariants", "GameObjectLocalizer/<Start>d__10");
// [ExecuteAlways]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.Localization.PropertyVariants.TrackedObjects.TrackedObject, UnityEngine.MonoBehaviour, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace UnityEngine::Localization::PropertyVariants {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.GameObjectLocalizer
class CORDL_TYPE GameObjectLocalizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__10 = ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10;

 __declspec(property(get=get_CurrentOperation, put=set_CurrentOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  CurrentOperation;

 __declspec(property(get=get_TrackedObjects)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*  TrackedObjects;

/// @brief Field <CurrentOperation>k__BackingField, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__CurrentOperation_k__BackingField, put=__cordl_internal_set__CurrentOperation_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _CurrentOperation_k__BackingField;

/// @brief Field m_CurrentLocale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentLocale, put=__cordl_internal_set_m_CurrentLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_CurrentLocale;

/// @brief Field m_IgnoreChange, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreChange, put=__cordl_internal_set_m_IgnoreChange)) bool  m_IgnoreChange;

/// @brief Field m_LocalizedStringChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalizedStringChanged, put=__cordl_internal_set_m_LocalizedStringChanged)) ::UnityEngine::Localization::LocalizedString_ChangeHandler*  m_LocalizedStringChanged;

/// @brief Field m_TrackedObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedObjects, put=__cordl_internal_set_m_TrackedObjects)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*  m_TrackedObjects;

/// @brief Method ApplyLocaleVariant, addr 0xb052228, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocaleVariant(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method ApplyLocaleVariant, addr 0xb05247c, size 0x548, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle ApplyLocaleVariant(::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Locale*  fallback) ;

/// @brief Method GetTrackedObject, addr 0xb052284, size 0x1f8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject* GetTrackedObject(::UnityEngine::Object*  target) ;

/// @brief Method GetTrackedObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetTrackedObject(::UnityEngine::Object*  target, bool  create) ;

static inline ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer* New_ctor() ;

/// @brief Method OnDisable, addr 0xb051c88, size 0xc4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb0515d0, size 0xf4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RegisterChanges, addr 0xb0516c4, size 0x520, virtual false, abstract: false, final false
inline void RegisterChanges() ;

/// @brief Method RequestUpdate, addr 0xb0529dc, size 0xfc, virtual false, abstract: false, final false
inline void RequestUpdate() ;

/// @brief Method SelectedLocaleChanged, addr 0xb051be4, size 0xa4, virtual false, abstract: false, final false
inline void SelectedLocaleChanged(::UnityEngine::Localization::Locale*  locale) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.PropertyVariants.GameObjectLocalizer::<Start>d__10))]
/// @brief Method Start, addr 0xb052194, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method UnregisterChanges, addr 0xb051d4c, size 0x448, virtual false, abstract: false, final false
inline void UnregisterChanges() ;

/// [CompilerGenerated]
/// @brief Method <RegisterChanges>b__18_0, addr 0xb052b60, size 0x4, virtual false, abstract: false, final false
inline void _RegisterChanges_b__18_0(::StringW  _) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get__CurrentOperation_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get__CurrentOperation_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_CurrentLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_CurrentLocale() ;

constexpr bool const& __cordl_internal_get_m_IgnoreChange() const;

constexpr bool& __cordl_internal_get_m_IgnoreChange() ;

constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler* const& __cordl_internal_get_m_LocalizedStringChanged() const;

constexpr ::UnityEngine::Localization::LocalizedString_ChangeHandler*& __cordl_internal_get_m_LocalizedStringChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>* const& __cordl_internal_get_m_TrackedObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*& __cordl_internal_get_m_TrackedObjects() ;

constexpr void __cordl_internal_set__CurrentOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set_m_CurrentLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_IgnoreChange(bool  value) ;

constexpr void __cordl_internal_set_m_LocalizedStringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value) ;

constexpr void __cordl_internal_set_m_TrackedObjects(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*  value) ;

/// @brief Method .ctor, addr 0xb052ad8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentOperation, addr 0xb051598, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_CurrentOperation() ;

/// @brief Method get_TrackedObjects, addr 0xb05227c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>* get_TrackedObjects() ;

/// [CompilerGenerated]
/// @brief Method set_CurrentOperation, addr 0xb0515ac, size 0x24, virtual false, abstract: false, final false
inline void set_CurrentOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectLocalizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectLocalizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectLocalizer(GameObjectLocalizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectLocalizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectLocalizer(GameObjectLocalizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25350};

/// [SerializeReference]
/// @brief Field m_TrackedObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>*  ___m_TrackedObjects;

/// @brief Field m_CurrentLocale, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_CurrentLocale;

/// @brief Field m_LocalizedStringChanged, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString_ChangeHandler*  ___m_LocalizedStringChanged;

/// @brief Field m_IgnoreChange, offset: 0x38, size: 0x1, def value: None
 bool  ___m_IgnoreChange;

/// [CompilerGenerated]
/// @brief Field <CurrentOperation>k__BackingField, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ____CurrentOperation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer, ___m_TrackedObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer, ___m_CurrentLocale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer, ___m_LocalizedStringChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer, ___m_IgnoreChange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer, ____CurrentOperation_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::PropertyVariants {
// Is value type: false
// CS Name: UnityEngine.Localization.PropertyVariants.GameObjectLocalizer/<Start>d__10
class CORDL_TYPE GameObjectLocalizer__Start_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>  __4__this;

/// @brief Field <localeOp>5__2, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__localeOp_5__2, put=__cordl_internal_set__localeOp_5__2)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  _localeOp_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb052b68, size 0x154, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb052cbc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb052cc4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb052cfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb052b64, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> const& __cordl_internal_get__localeOp_5__2() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>& __cordl_internal_get__localeOp_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>  value) ;

constexpr void __cordl_internal_set__localeOp_5__2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb052200, size 0x28, virtual false, abstract: false, final false
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
constexpr GameObjectLocalizer__Start_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectLocalizer__Start_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectLocalizer__Start_d__10(GameObjectLocalizer__Start_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectLocalizer__Start_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectLocalizer__Start_d__10(GameObjectLocalizer__Start_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25349};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer>  _____4__this;

/// @brief Field <localeOp>5__2, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  ____localeOp_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10, ____localeOp_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::PropertyVariants::GameObjectLocalizer__Start_d__10) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::PropertyVariants
