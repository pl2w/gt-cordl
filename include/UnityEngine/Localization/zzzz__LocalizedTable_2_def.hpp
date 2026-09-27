#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedTable_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedTable_2)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
template<typename TTable,typename TEntry>
class LocalizedTable_2_ChangeHandler;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization {
template<typename TTable,typename TEntry>
class LocalizedTable_2;
}
namespace UnityEngine::Localization {
template<typename TTable,typename TEntry>
class LocalizedTable_2_ChangeHandler;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedTable_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedTable_2, "UnityEngine.Localization", "LocalizedTable`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler, "UnityEngine.Localization", "LocalizedTable`2/ChangeHandler");
// Dependencies System.Object, UnityEngine.Localization.CallbackArray`1<TDelegate>, UnityEngine.Localization.Tables.TableReference, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTable`2<TTable,TEntry>
class CORDL_TYPE LocalizedTable_2 : public ::System::Object {
public:
// Declarations
using ChangeHandler = ::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable, TEntry>;

/// @brief [Obsolete("CurrentLoadingOperation is deprecated, use CurrentLoadingOperationHandle instead.")]
 __declspec(property(get=get_CurrentLoadingOperation)) ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>  CurrentLoadingOperation;

 __declspec(property(get=get_CurrentLoadingOperationHandle, put=set_CurrentLoadingOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  CurrentLoadingOperationHandle;

 __declspec(property(get=get_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  Database;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_TableReference, put=set_TableReference)) ::UnityEngine::Localization::Tables::TableReference  TableReference;

/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField, put=__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  _CurrentLoadingOperationHandle_k__BackingField;

/// @brief Field m_ChangeHandler, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_ChangeHandler, put=__cordl_internal_set_m_ChangeHandler)) ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>  m_ChangeHandler;

/// @brief Field m_SelectedLocaleChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocaleChanged, put=__cordl_internal_set_m_SelectedLocaleChanged)) ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_SelectedLocaleChanged;

/// @brief Field m_TableReference, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_TableReference, put=__cordl_internal_set_m_TableReference)) ::UnityEngine::Localization::Tables::TableReference  m_TableReference;

/// @brief Method AutomaticLoadingCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  loadOperation) ;

/// @brief Method ClearLoadingOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearLoadingOperation() ;

/// @brief Method ForceUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method GetTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TTable GetTable() ;

/// @brief Method GetTableAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> GetTableAsync() ;

/// @brief Method HandleLocaleChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandleLocaleChange(::UnityEngine::Localization::Locale*  _) ;

/// @brief Method InvokeChangeHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeChangeHandler(TTable  value) ;

static inline ::UnityEngine::Localization::LocalizedTable_2<TTable,TEntry>* New_ctor() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() ;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*> const& __cordl_internal_get_m_ChangeHandler() const;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>& __cordl_internal_get_m_ChangeHandler() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_SelectedLocaleChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_SelectedLocaleChanged() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_TableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_TableReference() ;

constexpr void __cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value) ;

constexpr void __cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>  value) ;

constexpr void __cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

constexpr void __cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_TableChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_TableChanged(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*  value) ;

/// @brief Method get_CurrentLoadingOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>> get_CurrentLoadingOperation() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentLoadingOperationHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> get_CurrentLoadingOperationHandle() ;

/// @brief Method get_Database, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* get_Database() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_TableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableReference get_TableReference() ;

/// @brief Method remove_TableChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_TableChanged(::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentLoadingOperationHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value) ;

/// @brief Method set_TableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTable_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTable_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTable_2(LocalizedTable_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTable_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTable_2(LocalizedTable_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25058};

/// [SerializeField]
/// @brief Field m_TableReference, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_TableReference;

/// @brief Field m_ChangeHandler, offset: 0x30, size: 0x28, def value: None
 ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>*>  ___m_ChangeHandler;

/// @brief Field m_SelectedLocaleChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_SelectedLocaleChanged;

/// [CompilerGenerated]
/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  ____CurrentLoadingOperationHandle_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
// Dependencies System.MulticastDelegate
namespace UnityEngine::Localization {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTable`2/ChangeHandler<TTable,TEntry>
class CORDL_TYPE LocalizedTable_2_ChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TTable  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(TTable  value) ;

static inline ::UnityEngine::Localization::LocalizedTable_2_ChangeHandler<TTable,TEntry>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTable_2_ChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTable_2_ChangeHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTable_2_ChangeHandler(LocalizedTable_2_ChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTable_2_ChangeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTable_2_ChangeHandler(LocalizedTable_2_ChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
