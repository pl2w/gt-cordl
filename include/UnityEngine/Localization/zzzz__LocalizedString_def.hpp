#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedReference_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedString)
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
namespace GlobalNamespace {
struct LocalizedString_ChainedLocalVariablesGroup;
}
namespace GlobalNamespace {
struct LocalizedString_StringTableEntryVariable;
}
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
template<typename T>
class IList_1;
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
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
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
class IVariableValueChanged;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class VariableNameValuePair;
}
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
namespace UnityEngine::Localization::Tables {
class StringTable;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class LocalVariable_UxmlSerializedData;
}
namespace UnityEngine::Localization {
class LocalVariable;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class LocalizedString_ChangeHandler;
}
namespace UnityEngine::Localization {
class LocalizedString_UxmlSerializedData;
}
namespace UnityEngine::Localization {
class LocalizedString__GetEnumerator_d__58;
}
namespace UnityEngine::Localization {
class LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57;
}
namespace UnityEngine::Localization {
class LocalizedString___c;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine::Localization {
class LocalizedString_ChangeHandler;
}
namespace UnityEngine::Localization {
class LocalizedString_UxmlSerializedData;
}
namespace UnityEngine::Localization {
class LocalizedString__GetEnumerator_d__58;
}
namespace UnityEngine::Localization {
class LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57;
}
namespace UnityEngine::Localization {
class LocalizedString___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedString*);
MARK_REF_T(::UnityEngine::Localization::LocalizedString_ChangeHandler*);
MARK_REF_T(::UnityEngine::Localization::LocalizedString_UxmlSerializedData*);
MARK_REF_T(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*);
MARK_REF_T(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*);
MARK_REF_T(::UnityEngine::Localization::LocalizedString___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString*, "UnityEngine.Localization", "LocalizedString");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString_ChangeHandler*, "UnityEngine.Localization", "LocalizedString/ChangeHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedString/UxmlSerializedData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58*, "UnityEngine.Localization", "LocalizedString/<GetEnumerator>d__58");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57*, "UnityEngine.Localization", "LocalizedString/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__57");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedString___c*, "UnityEngine.Localization", "LocalizedString/<>c");
// [DefaultMember("Item")]
// [UxmlObject]
// Dependencies UnityEngine.Localization.CallbackArray`1<TDelegate>, UnityEngine.Localization.LocalizedReference, UnityEngine.Localization.Settings.LocalizedDatabase`2::TableEntryResult<TTable, TEntry>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString
class CORDL_TYPE LocalizedString : public ::UnityEngine::Localization::LocalizedReference {
public:
// Declarations
using ChainedLocalVariablesGroup = ::GlobalNamespace::LocalizedString_ChainedLocalVariablesGroup;

using StringTableEntryVariable = ::GlobalNamespace::LocalizedString_StringTableEntryVariable;

using ChangeHandler = ::UnityEngine::Localization::LocalizedString_ChangeHandler;

using UxmlSerializedData = ::UnityEngine::Localization::LocalizedString_UxmlSerializedData;

using _GetEnumerator_d__58 = ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58;

using _System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57 = ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57;

using __c = ::UnityEngine::Localization::LocalizedString___c;

 __declspec(property(get=get_Arguments, put=set_Arguments)) ::System::Collections::Generic::IList_1<::System::Object*>*  Arguments;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CurrentLoadingOperationHandle, put=set_CurrentLoadingOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  CurrentLoadingOperationHandle;

 __declspec(property(get=get_ForceSynchronous)) bool  ForceSynchronous;

 __declspec(property(get=get_HasChangeHandler)) bool  HasChangeHandler;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<::StringW>*  Keys;

/// @brief [UxmlObjectReference("variables")]
 __declspec(property(get=get_LocalVariablesUXML, put=set_LocalVariablesUXML)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  LocalVariablesUXML;

/// @brief Field ValueChanged, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValueChanged, put=__cordl_internal_set_ValueChanged)) ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  ValueChanged;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  Values;

/// @brief Field <Arguments>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Arguments_k__BackingField, put=__cordl_internal_set__Arguments_k__BackingField)) ::System::Collections::Generic::IList_1<::System::Object*>*  _Arguments_k__BackingField;

/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset 0xf0, size 0x18 
 __declspec(property(get=__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField, put=__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  _CurrentLoadingOperationHandle_k__BackingField;

/// @brief Field m_AutomaticLoadingCompleted, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutomaticLoadingCompleted, put=__cordl_internal_set_m_AutomaticLoadingCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  m_AutomaticLoadingCompleted;

/// @brief Field m_ChangeHandler, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_ChangeHandler, put=__cordl_internal_set_m_ChangeHandler)) ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>  m_ChangeHandler;

/// @brief Field m_CompletedSourceValue, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CompletedSourceValue, put=__cordl_internal_set_m_CompletedSourceValue)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  m_CompletedSourceValue;

/// @brief Field m_CurrentStringChangedValue, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentStringChangedValue, put=__cordl_internal_set_m_CurrentStringChangedValue)) ::StringW  m_CurrentStringChangedValue;

/// @brief Field m_LocalVariables, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalVariables, put=__cordl_internal_set_m_LocalVariables)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  m_LocalVariables;

/// @brief Field m_OnVariableChanged, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnVariableChanged, put=__cordl_internal_set_m_OnVariableChanged)) ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  m_OnVariableChanged;

/// @brief Field m_SelectedLocaleChanged, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocaleChanged, put=__cordl_internal_set_m_SelectedLocaleChanged)) ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_SelectedLocaleChanged;

/// @brief Field m_UsedVariables, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UsedVariables, put=__cordl_internal_set_m_UsedVariables)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  m_UsedVariables;

/// @brief Field m_UxmlLocalVariables, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UxmlLocalVariables, put=__cordl_internal_set_m_UxmlLocalVariables)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  m_UxmlLocalVariables;

/// @brief Field m_VariableLookup, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariableLookup, put=__cordl_internal_set_m_VariableLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  m_VariableLookup;

/// @brief Field m_WaitingForVariablesEndUpdate, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WaitingForVariablesEndUpdate, put=__cordl_internal_set_m_WaitingForVariablesEndUpdate)) bool  m_WaitingForVariablesEndUpdate;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr operator  ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*() noexcept;

/// @brief Method Add, addr 0xb012034, size 0x60, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method Add, addr 0xb011c90, size 0x28c, virtual true, abstract: false, final true
inline void Add(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  variable) ;

/// @brief Method AutomaticLoadingCompleted, addr 0xb013550, size 0x84, virtual false, abstract: false, final false
inline void AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  loadOperation) ;

/// @brief Method Cleanup, addr 0xb013b60, size 0x7c, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Clear, addr 0xb0125a0, size 0x94, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearLoadingOperation, addr 0xb010914, size 0x138, virtual false, abstract: false, final false
inline void ClearLoadingOperation() ;

/// @brief Method ClearVariableListeners, addr 0xb010a4c, size 0x1e8, virtual false, abstract: false, final false
inline void ClearVariableListeners() ;

/// @brief Method CompletedSourceValue, addr 0xb013174, size 0x20, virtual false, abstract: false, final false
inline void CompletedSourceValue(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  _) ;

/// @brief Method Contains, addr 0xb0121f8, size 0x78, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method ContainsKey, addr 0xb0121a0, size 0x58, virtual true, abstract: false, final true
inline bool ContainsKey(::StringW  name) ;

/// @brief Method CopyTo, addr 0xb012270, size 0x208, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>  array, int32_t  arrayIndex) ;

/// @brief Method Finalize, addr 0xb013774, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ForceUpdate, addr 0xb013194, size 0x6c, virtual true, abstract: false, final false
inline void ForceUpdate() ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.LocalizedString::<GetEnumerator>d__58))]
/// @brief Method GetEnumerator, addr 0xb01250c, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method GetLocalizedString, addr 0xb0118a4, size 0x6c, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString() ;

/// @brief Method GetLocalizedString, addr 0xb011940, size 0x78, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(/* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedString, addr 0xb0119b8, size 0x78, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::System::Collections::Generic::IList_1<::System::Object*>*  arguments) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb01176c, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync() ;

/// @brief Method GetLocalizedStringAsync, addr 0xb011910, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(/* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb0117a0, size 0x104, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(::System::Collections::Generic::IList_1<::System::Object*>*  arguments) ;

/// @brief Method GetSourceValue, addr 0xb012634, size 0xa08, virtual true, abstract: false, final true
inline ::System::Object* GetSourceValue(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selector) ;

/// @brief Method HandleLocaleChange, addr 0xb013200, size 0x1cc, virtual false, abstract: false, final false
inline void HandleLocaleChange(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method Initialize, addr 0xb013a34, size 0x7c, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InvokeChangeHandler, addr 0xb011598, size 0x1d4, virtual false, abstract: false, final false
inline void InvokeChangeHandler(::StringW  value) ;

static inline ::UnityEngine::Localization::LocalizedString* New_ctor() ;

static inline ::UnityEngine::Localization::LocalizedString* New_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

/// @brief Method OnAfterDeserialize, addr 0xb0135d8, size 0x19c, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnVariableChanged, addr 0xb0133cc, size 0xcc, virtual false, abstract: false, final false
inline void OnVariableChanged(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  globalVariable) ;

/// @brief Method OnVariablesSourceUpdateCompleted, addr 0xb013498, size 0xb8, virtual false, abstract: false, final false
inline void OnVariablesSourceUpdateCompleted() ;

/// @brief Method RefreshString, addr 0xb010f4c, size 0x2c0, virtual false, abstract: false, final false
inline bool RefreshString() ;

/// @brief Method Remove, addr 0xb01215c, size 0x44, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  item) ;

/// @brief Method Remove, addr 0xb012094, size 0xc8, virtual true, abstract: false, final true
inline bool Remove(::StringW  name) ;

/// @brief Method Reset, addr 0xb0135d4, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.LocalizedString::<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__57))]
/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.GetEnumerator, addr 0xb012478, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator() ;

/// @brief Method System.IDisposable.Dispose, addr 0xb0137f8, size 0x98, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method TryGetValue, addr 0xb011f1c, size 0x9c, virtual true, abstract: false, final true
inline bool TryGetValue(::StringW  name, ::by_ref<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

/// @brief Method Update, addr 0xb013bdc, size 0x1d8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context) ;

/// @brief Method UpdateBindingValue, addr 0xb013db4, size 0x8, virtual false, abstract: false, final false
inline void UpdateBindingValue(::StringW  _) ;

/// @brief Method UpdateVariableListeners, addr 0xb011350, size 0x248, virtual false, abstract: false, final false
inline void UpdateVariableListeners(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  variables) ;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& __cordl_internal_get_ValueChanged() const;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& __cordl_internal_get_ValueChanged() ;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& __cordl_internal_get__Arguments_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& __cordl_internal_get__Arguments_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> const& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>* const& __cordl_internal_get_m_AutomaticLoadingCompleted() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*& __cordl_internal_get_m_AutomaticLoadingCompleted() ;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*> const& __cordl_internal_get_m_ChangeHandler() const;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>& __cordl_internal_get_m_ChangeHandler() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>* const& __cordl_internal_get_m_CompletedSourceValue() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*& __cordl_internal_get_m_CompletedSourceValue() ;

constexpr ::StringW const& __cordl_internal_get_m_CurrentStringChangedValue() const;

constexpr ::StringW& __cordl_internal_get_m_CurrentStringChangedValue() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& __cordl_internal_get_m_LocalVariables() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& __cordl_internal_get_m_LocalVariables() ;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* const& __cordl_internal_get_m_OnVariableChanged() const;

constexpr ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*& __cordl_internal_get_m_OnVariableChanged() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_SelectedLocaleChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_SelectedLocaleChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>* const& __cordl_internal_get_m_UsedVariables() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*& __cordl_internal_get_m_UsedVariables() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>* const& __cordl_internal_get_m_UxmlLocalVariables() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*& __cordl_internal_get_m_UxmlLocalVariables() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>* const& __cordl_internal_get_m_VariableLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*& __cordl_internal_get_m_VariableLookup() ;

constexpr bool const& __cordl_internal_get_m_WaitingForVariablesEndUpdate() const;

constexpr bool& __cordl_internal_get_m_WaitingForVariablesEndUpdate() ;

constexpr void __cordl_internal_set_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

constexpr void __cordl_internal_set__Arguments_k__BackingField(::System::Collections::Generic::IList_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value) ;

constexpr void __cordl_internal_set_m_AutomaticLoadingCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  value) ;

constexpr void __cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>  value) ;

constexpr void __cordl_internal_set_m_CompletedSourceValue(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  value) ;

constexpr void __cordl_internal_set_m_CurrentStringChangedValue(::StringW  value) ;

constexpr void __cordl_internal_set_m_LocalVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value) ;

constexpr void __cordl_internal_set_m_OnVariableChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

constexpr void __cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

constexpr void __cordl_internal_set_m_UsedVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  value) ;

constexpr void __cordl_internal_set_m_UxmlLocalVariables(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  value) ;

constexpr void __cordl_internal_set_m_VariableLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  value) ;

constexpr void __cordl_internal_set_m_WaitingForVariablesEndUpdate(bool  value) ;

/// @brief Method .ctor, addr 0xb010c78, size 0x278, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb010ef0, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

/// @brief Method add_StringChanged, addr 0xb010654, size 0x178, virtual false, abstract: false, final false
inline void add_StringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ValueChanged, addr 0xb010420, size 0xb0, virtual true, abstract: false, final true
inline void add_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Arguments, addr 0xb01060c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::System::Object*>* get_Arguments() ;

/// @brief Method get_Count, addr 0xb011a30, size 0x50, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentLoadingOperationHandle, addr 0xb01061c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> get_CurrentLoadingOperationHandle() ;

/// @brief Method get_ForceSynchronous, addr 0xb010580, size 0x6c, virtual true, abstract: false, final false
inline bool get_ForceSynchronous() ;

/// @brief Method get_HasChangeHandler, addr 0xb010c34, size 0x44, virtual false, abstract: false, final false
inline bool get_HasChangeHandler() ;

/// @brief Method get_IsReadOnly, addr 0xb011c20, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0xb011c28, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* get_Item(::StringW  name) ;

/// @brief Method get_Keys, addr 0xb011a80, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys() ;

/// @brief Method get_LocalVariablesUXML, addr 0xb013890, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>* get_LocalVariablesUXML() ;

/// @brief Method get_Values, addr 0xb011ad0, size 0x150, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>"
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* i___System__Collections__Generic__IDictionary_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableGroup() noexcept;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged"
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged* i___UnityEngine__Localization__SmartFormat__PersistentVariables__IVariableValueChanged() noexcept;

/// @brief Method remove_StringChanged, addr 0xb010860, size 0x94, virtual false, abstract: false, final false
inline void remove_StringChanged(::UnityEngine::Localization::LocalizedString_ChangeHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ValueChanged, addr 0xb0104d0, size 0xb0, virtual true, abstract: false, final true
inline void remove_ValueChanged(::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Arguments, addr 0xb010614, size 0x8, virtual false, abstract: false, final false
inline void set_Arguments(::System::Collections::Generic::IList_1<::System::Object*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentLoadingOperationHandle, addr 0xb010630, size 0x24, virtual false, abstract: false, final false
inline void set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value) ;

/// @brief Method set_Item, addr 0xb011c8c, size 0x4, virtual true, abstract: false, final true
inline void set_Item(::StringW  name, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*  value) ;

/// @brief Method set_LocalVariablesUXML, addr 0xb013898, size 0x19c, virtual false, abstract: false, final false
inline void set_LocalVariablesUXML(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString(LocalizedString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString(LocalizedString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25055};

/// [SerializeField]
/// @brief Field m_LocalVariables, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  ___m_LocalVariables;

/// @brief Field m_ChangeHandler, offset: 0x78, size: 0x28, def value: None
 ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedString_ChangeHandler*>  ___m_ChangeHandler;

/// @brief Field m_CurrentStringChangedValue, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___m_CurrentStringChangedValue;

/// @brief Field m_VariableLookup, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>*  ___m_VariableLookup;

/// @brief Field m_UsedVariables, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableValueChanged*>*  ___m_UsedVariables;

/// @brief Field m_OnVariableChanged, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  ___m_OnVariableChanged;

/// @brief Field m_SelectedLocaleChanged, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_SelectedLocaleChanged;

/// @brief Field m_AutomaticLoadingCompleted, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  ___m_AutomaticLoadingCompleted;

/// @brief Field m_CompletedSourceValue, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>>*  ___m_CompletedSourceValue;

/// @brief Field m_WaitingForVariablesEndUpdate, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_WaitingForVariablesEndUpdate;

/// [CompilerGenerated]
/// @brief Field ValueChanged, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  ___ValueChanged;

/// [CompilerGenerated]
/// @brief Field <Arguments>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::Object*>*  ____Arguments_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset: 0xf0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  ____CurrentLoadingOperationHandle_k__BackingField;

/// @brief Field m_UxmlLocalVariables, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable*>*  ___m_UxmlLocalVariables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_LocalVariables) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_ChangeHandler) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_CurrentStringChangedValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_VariableLookup) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_UsedVariables) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_OnVariableChanged) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_SelectedLocaleChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_AutomaticLoadingCompleted) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_CompletedSourceValue) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_WaitingForVariablesEndUpdate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___ValueChanged) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ____Arguments_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ____CurrentLoadingOperationHandle_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString, ___m_UxmlLocalVariables) == 0x108, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedString) == 0x110, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString/<System-Collections-Generic-IEnumerable<System-Collections-Generic-KeyValuePair<System-String,UnityEngine-Localization-SmartFormat-PersistentVariables-IVariable>>-GetEnumerator>d__57
class CORDL_TYPE LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Localization::LocalizedString*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb014be4, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,UnityEngine.Localization.SmartFormat.PersistentVariables.IVariable>>.get_Current, addr 0xb014e40, size 0xc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb014e4c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb014e84, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb014bc8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*> const& __cordl_internal_get___2__current() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb014df0, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb0124e4, size 0x28, virtual false, abstract: false, final false
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
constexpr LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57(LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57(LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25054};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>  _____2__current;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedString__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_UnityEngine_Localization_SmartFormat_PersistentVariables_IVariable___GetEnumerator_d__57) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString/<GetEnumerator>d__58
class CORDL_TYPE LocalizedString__GetEnumerator_d__58 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityEngine::Localization::LocalizedString*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb0148fc, size 0x234, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb014b80, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb014b88, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb014bc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb0148e0, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get___4__this() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  value) ;

/// @brief Method <>m__Finally1, addr 0xb014b30, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb012578, size 0x28, virtual false, abstract: false, final false
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
constexpr LocalizedString__GetEnumerator_d__58() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString__GetEnumerator_d__58", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString__GetEnumerator_d__58(LocalizedString__GetEnumerator_d__58 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString__GetEnumerator_d__58", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString__GetEnumerator_d__58(LocalizedString__GetEnumerator_d__58 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25053};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::Dictionary_2_Enumerator<::StringW,::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedString__GetEnumerator_d__58) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString/<>c
class CORDL_TYPE LocalizedString___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::LocalizedString___c*  __9;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  __9__43_0;

static inline ::UnityEngine::Localization::LocalizedString___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb0148c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Values>b__43_0, addr 0xb0148cc, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable* _get_Values_b__43_0(::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*  s) ;

static inline ::UnityEngine::Localization::LocalizedString___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>* getStaticF___9__43_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::LocalizedString___c*  value) ;

static inline void setStaticF___9__43_0(::System::Func_2<::UnityEngine::Localization::SmartFormat::PersistentVariables::VariableNameValuePair*,::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariable*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString___c(LocalizedString___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString___c(LocalizedString___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedString___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedReference::UxmlSerializedData, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString/UxmlSerializedData
class CORDL_TYPE LocalizedString_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedReference_UxmlSerializedData {
public:
// Declarations
/// @brief Field LocalVariablesUXML, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalVariablesUXML, put=__cordl_internal_set_LocalVariablesUXML)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*  LocalVariablesUXML;

/// @brief Field LocalVariablesUXML_UxmlAttributeFlags, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_LocalVariablesUXML_UxmlAttributeFlags, put=__cordl_internal_set_LocalVariablesUXML_UxmlAttributeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  LocalVariablesUXML_UxmlAttributeFlags;

/// @brief Method CreateInstance, addr 0xb0144dc, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method Deserialize, addr 0xb01452c, size 0x328, virtual true, abstract: false, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::Localization::LocalizedString_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb01432c, size 0x1b0, virtual false, abstract: false, final false
static inline void Register() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>* const& __cordl_internal_get_LocalVariablesUXML() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*& __cordl_internal_get_LocalVariablesUXML() ;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const& __cordl_internal_get_LocalVariablesUXML_UxmlAttributeFlags() const;

constexpr ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags& __cordl_internal_get_LocalVariablesUXML_UxmlAttributeFlags() ;

constexpr void __cordl_internal_set_LocalVariablesUXML(::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*  value) ;

constexpr void __cordl_internal_set_LocalVariablesUXML_UxmlAttributeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

/// @brief Method .ctor, addr 0xb014854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString_UxmlSerializedData(LocalizedString_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString_UxmlSerializedData(LocalizedString_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25051};

/// [UxmlObjectReference("variables")]
/// [SerializeReference]
/// @brief Field LocalVariablesUXML, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::LocalVariable_UxmlSerializedData*>*  ___LocalVariablesUXML;

/// [SerializeField]
/// [UxmlIgnore]
/// [HideInInspector]
/// @brief Field LocalVariablesUXML_UxmlAttributeFlags, offset: 0x70, size: 0x1, def value: None
 ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  ___LocalVariablesUXML_UxmlAttributeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::LocalizedString_UxmlSerializedData, ___LocalVariablesUXML) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::LocalizedString_UxmlSerializedData, ___LocalVariablesUXML_UxmlAttributeFlags) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::LocalizedString_UxmlSerializedData) == 0x78, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// Dependencies System.MulticastDelegate
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedString/ChangeHandler
class CORDL_TYPE LocalizedString_ChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb013dd0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb013df0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb013dbc, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::StringW  value) ;

static inline ::UnityEngine::Localization::LocalizedString_ChangeHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb013ab0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedString_ChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString_ChangeHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedString_ChangeHandler(LocalizedString_ChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedString_ChangeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedString_ChangeHandler(LocalizedString_ChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedString_ChangeHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Localization
