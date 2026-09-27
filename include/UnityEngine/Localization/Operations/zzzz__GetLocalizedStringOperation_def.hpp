#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/GetLocalizedStringOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetLocalizedStringOperation)
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Operations {
class GetLocalizedStringOperation___c;
}
namespace UnityEngine::Localization::Settings {
class LocalizedStringDatabase;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
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
class Locale;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
class GetLocalizedStringOperation;
}
namespace UnityEngine::Localization::Operations {
class GetLocalizedStringOperation___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Operations::GetLocalizedStringOperation*);
MARK_REF_T(::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::GetLocalizedStringOperation*, "UnityEngine.Localization.Operations", "GetLocalizedStringOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*, "UnityEngine.Localization.Operations", "GetLocalizedStringOperation/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.Localization.Settings.LocalizedDatabase`2::TableEntryResult<TTable, TEntry>, UnityEngine.Localization.Tables.TableEntryReference, UnityEngine.Localization.Tables.TableReference, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.GetLocalizedStringOperation
class CORDL_TYPE GetLocalizedStringOperation : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::StringW> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*  Pool;

/// @brief Field m_Arguments, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Arguments, put=__cordl_internal_set_m_Arguments)) ::System::Collections::Generic::IList_1<::System::Object*>*  m_Arguments;

/// @brief Field m_AutoRelease, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoRelease, put=__cordl_internal_set_m_AutoRelease)) bool  m_AutoRelease;

/// @brief Field m_Database, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  m_Database;

/// @brief Field m_LocalVariables, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalVariables, put=__cordl_internal_set_m_LocalVariables)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  m_LocalVariables;

/// @brief Field m_SelectedLocale, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocale, put=__cordl_internal_set_m_SelectedLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_SelectedLocale;

/// @brief Field m_TableEntryOperation, offset 0xd8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TableEntryOperation, put=__cordl_internal_set_m_TableEntryOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  m_TableEntryOperation;

/// @brief Field m_TableEntryReference, offset 0x110, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TableEntryReference, put=__cordl_internal_set_m_TableEntryReference)) ::UnityEngine::Localization::Tables::TableEntryReference  m_TableEntryReference;

/// @brief Field m_TableReference, offset 0xf0, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_TableReference, put=__cordl_internal_set_m_TableReference)) ::UnityEngine::Localization::Tables::TableReference  m_TableReference;

/// @brief Method CompleteAndRelease, addr 0xb04c76c, size 0x164, virtual false, abstract: false, final false
inline void CompleteAndRelease(::StringW  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Destroy, addr 0xb04c8d0, size 0xa8, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0xb04c438, size 0x334, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0xb04c2e0, size 0x158, virtual false, abstract: false, final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  tableEntryOperation, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  database, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables, bool  autoRelease) ;

static inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation* New_ctor() ;

/// @brief Method ToString, addr 0xb04c978, size 0x1ec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>* const& __cordl_internal_get_m_Arguments() const;

constexpr ::System::Collections::Generic::IList_1<::System::Object*>*& __cordl_internal_get_m_Arguments() ;

constexpr bool const& __cordl_internal_get_m_AutoRelease() const;

constexpr bool& __cordl_internal_get_m_AutoRelease() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase*& __cordl_internal_get_m_Database() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup* const& __cordl_internal_get_m_LocalVariables() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*& __cordl_internal_get_m_LocalVariables() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_SelectedLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_SelectedLocale() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>> const& __cordl_internal_get_m_TableEntryOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>& __cordl_internal_get_m_TableEntryOperation() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& __cordl_internal_get_m_TableEntryReference() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference& __cordl_internal_get_m_TableEntryReference() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_TableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_TableReference() ;

constexpr void __cordl_internal_set_m_Arguments(::System::Collections::Generic::IList_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_m_AutoRelease(bool  value) ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value) ;

constexpr void __cordl_internal_set_m_LocalVariables(::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  value) ;

constexpr void __cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_TableEntryOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  value) ;

constexpr void __cordl_internal_set_m_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

constexpr void __cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method .ctor, addr 0xb04cb64, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetLocalizedStringOperation*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLocalizedStringOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLocalizedStringOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLocalizedStringOperation(GetLocalizedStringOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLocalizedStringOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLocalizedStringOperation(GetLocalizedStringOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25290};

/// @brief Field m_Database, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  ___m_Database;

/// @brief Field m_TableEntryOperation, offset: 0xd8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>>  ___m_TableEntryOperation;

/// @brief Field m_TableReference, offset: 0xf0, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_TableReference;

/// @brief Field m_TableEntryReference, offset: 0x110, size: 0x18, def value: None
 ::UnityEngine::Localization::Tables::TableEntryReference  ___m_TableEntryReference;

/// @brief Field m_SelectedLocale, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_SelectedLocale;

/// @brief Field m_Arguments, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::System::Object*>*  ___m_Arguments;

/// @brief Field m_LocalVariables, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  ___m_LocalVariables;

/// @brief Field m_AutoRelease, offset: 0x140, size: 0x1, def value: None
 bool  ___m_AutoRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_Database) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_TableEntryOperation) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_TableReference) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_TableEntryReference) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_SelectedLocale) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_Arguments) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_LocalVariables) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation, ___m_AutoRelease) == 0x140, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation) == 0x148, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.GetLocalizedStringOperation/<>c
class CORDL_TYPE GetLocalizedStringOperation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*  __9;

static inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c* New_ctor() ;

/// @brief Method <.cctor>b__15_0, addr 0xb04cd58, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation* __cctor_b__15_0() ;

/// @brief Method .ctor, addr 0xb04cd50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLocalizedStringOperation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLocalizedStringOperation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLocalizedStringOperation___c(GetLocalizedStringOperation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLocalizedStringOperation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLocalizedStringOperation___c(GetLocalizedStringOperation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Operations::GetLocalizedStringOperation___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
