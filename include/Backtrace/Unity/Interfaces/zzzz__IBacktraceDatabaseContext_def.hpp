#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceDatabaseContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceDatabaseContext)
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseRecord;
}
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabaseContext;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*, "Backtrace.Unity.Interfaces", "IBacktraceDatabaseContext");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceDatabaseContext
class CORDL_TYPE IBacktraceDatabaseContext {
public:
// Declarations
 __declspec(property(get=get_DeduplicationStrategy, put=set_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  backtraceDatabaseRecord) ;

/// @brief Method AddDuplicate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddDuplicate(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method Any, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Any() ;

/// @brief Method Any, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Any(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

/// @brief Method Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Count() ;

/// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method FirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* FirstOrDefault() ;

/// @brief Method FirstOrDefault, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* FirstOrDefault(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  predicate) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Get() ;

/// @brief Method GetHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW GetHash(::Backtrace::Unity::Model::BacktraceData*  backtraceData) ;

/// @brief Method GetRecordByHash, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* GetRecordByHash(::StringW  hash) ;

/// @brief Method GetRecordsToDelete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* GetRecordsToDelete() ;

/// @brief Method GetSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t GetSize() ;

/// [Obsolete("Please use Count method instead")]
/// @brief Method GetTotalNumberOfRecords, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t GetTotalNumberOfRecords() ;

/// @brief Method IncrementBatchRetry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void IncrementBatchRetry() ;

/// @brief Method LastOrDefault, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* LastOrDefault() ;

/// @brief Method get_DeduplicationStrategy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Types::DeduplicationStrategy get_DeduplicationStrategy() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_DeduplicationStrategy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceDatabaseContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceDatabaseContext(IBacktraceDatabaseContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27660};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
