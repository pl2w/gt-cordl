#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/PersistentVariables/VariablesGroupAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VariablesGroupAsset)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariableNameValuePair;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset__GetEnumerator_d__23;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset___c;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset__GetEnumerator_d__23;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariablesGroupAsset___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "VariablesGroupAsset");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "VariablesGroupAsset/<GetEnumerator>d__23");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "VariablesGroupAsset/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__22");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*, "UnityEngine.Localization.SmartFormat.PersistentVariables", "VariablesGroupAsset/<>c");
// [DefaultMember("Item")]
// [CreateAssetMenu(menuName = "Localization/Variables Group")]
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset
class CORDL_TYPE VariablesGroupAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using _GetEnumerator_d__23 = ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23;

using _System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22 = ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22;

using __c = ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  Values;

/// @brief Field m_VariableLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariableLookup, put=__cordl_internal_set_m_VariableLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  m_VariableLookup;

/// @brief Field m_Variables, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Variables, put=__cordl_internal_set_m_Variables)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  m_Variables;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept;

/// @brief Method Add, addr 0xb04a674, size 0x60, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method Add, addr 0xb04a448, size 0x228, virtual true, abstract: false, final true
inline void Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  variable) ;

/// @brief Method Clear, addr 0xb04abe4, size 0x94, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0xb04a838, size 0x78, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method ContainsKey, addr 0xb04a7e0, size 0x58, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  name) ;

/// [Obsolete("Please use ContainsKey instead.", false)]
/// @brief Method ContainsName, addr 0xb04abe0, size 0x4, virtual false, abstract: false, final false
inline bool ContainsName(::StringW  name) ;

/// @brief Method CopyTo, addr 0xb04a8b0, size 0x208, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>  array, int32_t  arrayIndex) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset::<GetEnumerator>d__23))]
/// @brief Method GetEnumerator, addr 0xb04ab4c, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetSourceValue, addr 0xb04a670, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  _) ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb04ac7c, size 0x1f4, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb04ac78, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method Remove, addr 0xb04a79c, size 0x44, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method Remove, addr 0xb04a6d4, size 0xc8, virtual true, abstract: false, final true
inline bool Remove(::StringW  name) ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset::<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__22))]
/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator, addr 0xb04aab8, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator() ;

/// @brief Method TryGetValue, addr 0xb04a07c, size 0x9c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& __cordl_internal_get_m_VariableLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& __cordl_internal_get_m_VariableLookup() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& __cordl_internal_get_m_Variables() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& __cordl_internal_get_m_Variables() ;

constexpr void __cordl_internal_set_m_VariableLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value) ;

constexpr void __cordl_internal_set_m_Variables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value) ;

/// @brief Method .ctor, addr 0xb04ae70, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xb04a1e8, size 0x50, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0xb04a3d8, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xb04a3e0, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* get_Item(::StringW  name) ;

/// @brief Method get_Keys, addr 0xb04a238, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_Values, addr 0xb04a288, size 0x150, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* i___System__Collections__Generic__IDictionary_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept;

/// @brief Method set_Item, addr 0xb04a444, size 0x4, virtual true, abstract: false, final true
inline void set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VariablesGroupAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariablesGroupAsset(VariablesGroupAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariablesGroupAsset(VariablesGroupAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25282};

/// [SerializeField]
/// @brief Field m_Variables, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  ___m_Variables;

/// @brief Field m_VariableLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  ___m_VariableLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset, ___m_Variables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset, ___m_VariableLookup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__22
class CORDL_TYPE VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb04b2d4, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current, addr 0xb04b530, size 0xc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb04b53c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb04b574, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb04b2b8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> const& __cordl_internal_get___2__current() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb04b4e0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb04ab24, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22(VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22(VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25281};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  _____2__current;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__22) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Object
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset/<GetEnumerator>d__23
class CORDL_TYPE VariablesGroupAsset__GetEnumerator_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb04afec, size 0x234, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb04b270, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb04b278, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb04b2b0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb04afd0, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb04b220, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb04abb8, size 0x28, virtual false, abstract: false, final false
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
constexpr VariablesGroupAsset__GetEnumerator_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset__GetEnumerator_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariablesGroupAsset__GetEnumerator_d__23(VariablesGroupAsset__GetEnumerator_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset__GetEnumerator_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariablesGroupAsset__GetEnumerator_d__23(VariablesGroupAsset__GetEnumerator_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25280};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset__GetEnumerator_d__23) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.PersistentVariables.VariablesGroupAsset/<>c
class CORDL_TYPE VariablesGroupAsset___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  __9__7_0;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb04afb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Values>b__7_0, addr 0xb04afbc, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* _get_Values_b__7_0(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*  s) ;

static inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VariablesGroupAsset___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariablesGroupAsset___c(VariablesGroupAsset___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariablesGroupAsset___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariablesGroupAsset___c(VariablesGroupAsset___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariablesGroupAsset___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::PersistentVariables
