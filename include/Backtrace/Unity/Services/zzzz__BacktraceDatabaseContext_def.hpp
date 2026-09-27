#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceDatabaseContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseContext)
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseContext;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseSettings;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseContext___c;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseContext___c__DisplayClass20_0;
}
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
namespace Backtrace::Unity::Types {
struct RetryOrder;
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Backtrace::Unity::Services {
class BacktraceDatabaseContext;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseContext___c;
}
namespace Backtrace::Unity::Services {
class BacktraceDatabaseContext___c__DisplayClass20_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseContext*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseContext___c*);
MARK_REF_T(::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseContext*, "Backtrace.Unity.Services", "BacktraceDatabaseContext");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseContext___c*, "Backtrace.Unity.Services", "BacktraceDatabaseContext/<>c");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*, "Backtrace.Unity.Services", "BacktraceDatabaseContext/<>c__DisplayClass20_0");
// Dependencies Backtrace.Unity.Types.DeduplicationStrategy, Backtrace.Unity.Types.RetryOrder, System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseContext
class CORDL_TYPE BacktraceDatabaseContext : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Services::BacktraceDatabaseContext___c;

using __c__DisplayClass20_0 = ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0;

 __declspec(property(get=get_BatchRetry, put=set_BatchRetry)) ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  BatchRetry;

 __declspec(property(get=get_DeduplicationStrategy, put=set_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

 __declspec(property(get=get_RetryOrder, put=set_RetryOrder)) ::Backtrace::Unity::Types::RetryOrder  RetryOrder;

/// @brief Field TotalRecords, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_TotalRecords, put=__cordl_internal_set_TotalRecords)) int32_t  TotalRecords;

/// @brief Field TotalSize, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalSize, put=__cordl_internal_set_TotalSize)) int64_t  TotalSize;

/// @brief Field <BatchRetry>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BatchRetry_k__BackingField, put=__cordl_internal_set__BatchRetry_k__BackingField)) ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  _BatchRetry_k__BackingField;

/// @brief Field <DeduplicationStrategy>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DeduplicationStrategy_k__BackingField, put=__cordl_internal_set__DeduplicationStrategy_k__BackingField)) ::Backtrace::Unity::Types::DeduplicationStrategy  _DeduplicationStrategy_k__BackingField;

/// @brief Field <RetryOrder>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RetryOrder_k__BackingField, put=__cordl_internal_set__RetryOrder_k__BackingField)) ::Backtrace::Unity::Types::RetryOrder  _RetryOrder_k__BackingField;

/// @brief Field _retryNumber, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__retryNumber, put=__cordl_internal_set__retryNumber)) int32_t  _retryNumber;

/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext"
constexpr operator  ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x5f084bc, size 0x190, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  backtraceRecord) ;

/// @brief Method AddDuplicate, addr 0x5f09e00, size 0x38, virtual true, abstract: false, final true
inline void AddDuplicate(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Any, addr 0x5f08814, size 0x10, virtual true, abstract: false, final true
inline bool Any() ;

/// @brief Method Any, addr 0x5f0864c, size 0x1c0, virtual true, abstract: false, final true
inline bool Any(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Clear, addr 0x5f09300, size 0x2e0, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Count, addr 0x5f09040, size 0x218, virtual true, abstract: false, final true
inline int32_t Count() ;

/// @brief Method Delete, addr 0x5f08824, size 0x3d0, virtual true, abstract: false, final true
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Dispose, addr 0x5f09258, size 0xa8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FirstOrDefault, addr 0x5f09c10, size 0x14, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* FirstOrDefault() ;

/// @brief Method FirstOrDefault, addr 0x5f09c24, size 0x128, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* FirstOrDefault(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  predicate) ;

/// @brief Method Get, addr 0x5f08f44, size 0xfc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Get() ;

/// @brief Method GetFirstRecord, addr 0x5f095f0, size 0x350, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* GetFirstRecord() ;

/// @brief Method GetHash, addr 0x5f08010, size 0xd8, virtual true, abstract: false, final true
inline ::StringW GetHash(::Backtrace::Unity::Model::BacktraceData*  backtraceData) ;

/// @brief Method GetLastRecord, addr 0x5f09940, size 0x2d0, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* GetLastRecord() ;

/// @brief Method GetRecordByHash, addr 0x5f08210, size 0x2ac, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* GetRecordByHash(::StringW  hash) ;

/// @brief Method GetRecordsToDelete, addr 0x5f09d58, size 0xa8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* GetRecordsToDelete() ;

/// @brief Method GetSize, addr 0x5f09d4c, size 0x8, virtual true, abstract: false, final true
inline int64_t GetSize() ;

/// @brief Method GetTotalNumberOfRecords, addr 0x5f09d54, size 0x4, virtual true, abstract: false, final true
inline int32_t GetTotalNumberOfRecords() ;

/// @brief Method IncrementBatchRetry, addr 0x5f08bf4, size 0x18, virtual true, abstract: false, final true
inline void IncrementBatchRetry() ;

/// @brief Method IncrementBatches, addr 0x5f08d50, size 0x1f4, virtual false, abstract: false, final false
inline void IncrementBatches() ;

/// @brief Method LastOrDefault, addr 0x5f095e0, size 0x10, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* LastOrDefault() ;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseContext* New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

/// @brief Method RemoveMaxRetries, addr 0x5f08c0c, size 0x144, virtual false, abstract: false, final false
inline void RemoveMaxRetries() ;

/// @brief Method SetupBatch, addr 0x5f07e30, size 0x1e0, virtual false, abstract: false, final false
inline void SetupBatch() ;

constexpr int32_t const& __cordl_internal_get_TotalRecords() const;

constexpr int32_t& __cordl_internal_get_TotalRecords() ;

constexpr int64_t const& __cordl_internal_get_TotalSize() const;

constexpr int64_t& __cordl_internal_get_TotalSize() ;

constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* const& __cordl_internal_get__BatchRetry_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*& __cordl_internal_get__BatchRetry_k__BackingField() ;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& __cordl_internal_get__DeduplicationStrategy_k__BackingField() const;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& __cordl_internal_get__DeduplicationStrategy_k__BackingField() ;

constexpr ::Backtrace::Unity::Types::RetryOrder const& __cordl_internal_get__RetryOrder_k__BackingField() const;

constexpr ::Backtrace::Unity::Types::RetryOrder& __cordl_internal_get__RetryOrder_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__retryNumber() const;

constexpr int32_t& __cordl_internal_get__retryNumber() ;

constexpr void __cordl_internal_set_TotalRecords(int32_t  value) ;

constexpr void __cordl_internal_set_TotalSize(int64_t  value) ;

constexpr void __cordl_internal_set__BatchRetry_k__BackingField(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value) ;

constexpr void __cordl_internal_set__DeduplicationStrategy_k__BackingField(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

constexpr void __cordl_internal_set__RetryOrder_k__BackingField(::Backtrace::Unity::Types::RetryOrder  value) ;

constexpr void __cordl_internal_set__retryNumber(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f03568, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings) ;

/// [CompilerGenerated]
/// @brief Method get_BatchRetry, addr 0x5f07e00, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* get_BatchRetry() ;

/// [CompilerGenerated]
/// @brief Method get_DeduplicationStrategy, addr 0x5f07e20, size 0x8, virtual true, abstract: false, final true
inline ::Backtrace::Unity::Types::DeduplicationStrategy get_DeduplicationStrategy() ;

/// [CompilerGenerated]
/// @brief Method get_RetryOrder, addr 0x5f07e10, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Types::RetryOrder get_RetryOrder() ;

/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* i___Backtrace__Unity__Interfaces__IBacktraceDatabaseContext() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_BatchRetry, addr 0x5f07e08, size 0x8, virtual false, abstract: false, final false
inline void set_BatchRetry(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DeduplicationStrategy, addr 0x5f07e28, size 0x8, virtual true, abstract: false, final true
inline void set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

/// [CompilerGenerated]
/// @brief Method set_RetryOrder, addr 0x5f07e18, size 0x8, virtual false, abstract: false, final false
inline void set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseContext(BacktraceDatabaseContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseContext(BacktraceDatabaseContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27575};

/// [CompilerGenerated]
/// @brief Field <BatchRetry>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  ____BatchRetry_k__BackingField;

/// @brief Field TotalSize, offset: 0x18, size: 0x8, def value: None
 int64_t  ___TotalSize;

/// @brief Field TotalRecords, offset: 0x20, size: 0x4, def value: None
 int32_t  ___TotalRecords;

/// @brief Field _retryNumber, offset: 0x24, size: 0x4, def value: None
 int32_t  ____retryNumber;

/// [CompilerGenerated]
/// @brief Field <RetryOrder>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Backtrace::Unity::Types::RetryOrder  ____RetryOrder_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DeduplicationStrategy>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 ::Backtrace::Unity::Types::DeduplicationStrategy  ____DeduplicationStrategy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ____BatchRetry_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ___TotalSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ___TotalRecords) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ____retryNumber) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ____RetryOrder_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext, ____DeduplicationStrategy_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseContext) == 0x30, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseContext/<>c__DisplayClass20_0
class CORDL_TYPE BacktraceDatabaseContext___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field record, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_record, put=__cordl_internal_set_record)) ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <Any>b__1, addr 0x5f09fcc, size 0x2c, virtual false, abstract: false, final false
inline bool _Any_b__1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& __cordl_internal_get_record() const;

constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& __cordl_internal_get_record() ;

constexpr void __cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value) ;

/// @brief Method .ctor, addr 0x5f0880c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseContext___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseContext___c__DisplayClass20_0(BacktraceDatabaseContext___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseContext___c__DisplayClass20_0(BacktraceDatabaseContext___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27574};

/// @brief Field record, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  ___record;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0, ___record) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Services {
// Is value type: false
// CS Name: Backtrace.Unity.Services.BacktraceDatabaseContext/<>c
class CORDL_TYPE BacktraceDatabaseContext___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*  __9;

/// @brief Field <>9__20_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__20_0, put=setStaticF___9__20_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  __9__20_0;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  __9__26_0;

/// @brief Field <>9__32_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__32_0, put=setStaticF___9__32_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  __9__32_0;

/// @brief Field <>9__33_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_0, put=setStaticF___9__33_0)) ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  __9__33_0;

/// @brief Field <>9__33_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_1, put=setStaticF___9__33_1)) ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  __9__33_1;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  __9__34_0;

/// @brief Field <>9__34_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_1, put=setStaticF___9__34_1)) ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  __9__34_1;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c* New_ctor() ;

/// @brief Method <Any>b__20_0, addr 0x5f09ea8, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* _Any_b__20_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n) ;

/// @brief Method <FirstOrDefault>b__32_0, addr 0x5f09f20, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* _FirstOrDefault_b__32_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n) ;

/// @brief Method <GetFirstRecord>b__33_0, addr 0x5f09f5c, size 0x1c, virtual false, abstract: false, final false
inline bool _GetFirstRecord_b__33_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method <GetFirstRecord>b__33_1, addr 0x5f09f78, size 0x1c, virtual false, abstract: false, final false
inline bool _GetFirstRecord_b__33_1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method <GetLastRecord>b__34_0, addr 0x5f09f94, size 0x1c, virtual false, abstract: false, final false
inline bool _GetLastRecord_b__34_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method <GetLastRecord>b__34_1, addr 0x5f09fb0, size 0x1c, virtual false, abstract: false, final false
inline bool _GetLastRecord_b__34_1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method <Get>b__26_0, addr 0x5f09ee4, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* _Get_b__26_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n) ;

/// @brief Method .ctor, addr 0x5f09ea0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* getStaticF___9__20_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* getStaticF___9__26_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* getStaticF___9__32_0() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* getStaticF___9__33_0() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* getStaticF___9__33_1() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* getStaticF___9__34_0() ;

static inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* getStaticF___9__34_1() ;

static inline void setStaticF___9(::Backtrace::Unity::Services::BacktraceDatabaseContext___c*  value) ;

static inline void setStaticF___9__20_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value) ;

static inline void setStaticF___9__26_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value) ;

static inline void setStaticF___9__32_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value) ;

static inline void setStaticF___9__33_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value) ;

static inline void setStaticF___9__33_1(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value) ;

static inline void setStaticF___9__34_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value) ;

static inline void setStaticF___9__34_1(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseContext___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseContext___c(BacktraceDatabaseContext___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseContext___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseContext___c(BacktraceDatabaseContext___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27573};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Services::BacktraceDatabaseContext___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Services
