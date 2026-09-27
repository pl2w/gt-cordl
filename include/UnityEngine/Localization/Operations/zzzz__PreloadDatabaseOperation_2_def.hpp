#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadDatabaseOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PreloadDatabaseOperation_2)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadDatabaseOperation_2___c;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadDatabaseOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadDatabaseOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2, "UnityEngine.Localization.Operations", "PreloadDatabaseOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c, "UnityEngine.Localization.Operations", "PreloadDatabaseOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.PreloadDatabaseOperation`2<TTable,TEntry>
class CORDL_TYPE PreloadDatabaseOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable, TEntry>;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*  Pool;

 __declspec(property(get=get_Progress)) float_t  Progress;

/// @brief Field m_CompleteGenericGroup, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CompleteGenericGroup, put=__cordl_internal_set_m_CompleteGenericGroup)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  m_CompleteGenericGroup;

/// @brief Field m_CompleteOperation, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CompleteOperation, put=__cordl_internal_set_m_CompleteOperation)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_CompleteOperation;

/// @brief Field m_Database, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Method CompleteGenericGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteGenericGroup(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  operationHandle) ;

/// @brief Method CompleteOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  operationHandle) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method GetAllFallbackLocales, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void GetAllFallbackLocales(::UnityEngine::Localization::Locale*  current, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database) ;

static inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>* New_ctor() ;

/// @brief Method PreloadLocale, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle PreloadLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method PreloadLocales, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PreloadLocales(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& __cordl_internal_get_m_CompleteGenericGroup() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& __cordl_internal_get_m_CompleteGenericGroup() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_CompleteOperation() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_CompleteOperation() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr void __cordl_internal_set_m_CompleteGenericGroup(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value) ;

constexpr void __cordl_internal_set_m_CompleteOperation(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

/// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_DebugName() ;

/// @brief Method get_Progress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Progress() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadDatabaseOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadDatabaseOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadDatabaseOperation_2(PreloadDatabaseOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadDatabaseOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadDatabaseOperation_2(PreloadDatabaseOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25307};

/// @brief Field m_CompleteOperation, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_CompleteOperation;

/// @brief Field m_CompleteGenericGroup, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  ___m_CompleteGenericGroup;

/// @brief Field m_Database, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.PreloadDatabaseOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE PreloadDatabaseOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2<TTable,TEntry>* __cctor_b__17_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::PreloadDatabaseOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadDatabaseOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadDatabaseOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadDatabaseOperation_2___c(PreloadDatabaseOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadDatabaseOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadDatabaseOperation_2___c(PreloadDatabaseOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
