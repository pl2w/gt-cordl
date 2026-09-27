#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceDatabase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceDatabase)
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
namespace Backtrace::Unity::Model::Breadcrumbs {
class IBacktraceBreadcrumbs;
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
namespace Backtrace::Unity::Model {
class BacktraceReport;
}
namespace Backtrace::Unity::Services {
class ReportLimitWatcher;
}
namespace Backtrace::Unity::Types {
struct MiniDumpType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceDatabase;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceDatabase*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceDatabase*, "Backtrace.Unity.Interfaces", "IBacktraceDatabase");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceDatabase
class CORDL_TYPE IBacktraceDatabase {
public:
// Declarations
 __declspec(property(get=get_Breadcrumbs)) ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*  Breadcrumbs;

 __declspec(property(get=get_ScreenshotMaxHeight, put=set_ScreenshotMaxHeight)) int32_t  ScreenshotMaxHeight;

 __declspec(property(get=get_ScreenshotQuality, put=set_ScreenshotQuality)) int32_t  ScreenshotQuality;

/// [Obsolete("Please use Add method with Backtrace data parameter instead")]
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceReport*  backtraceReport, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::Backtrace::Unity::Types::MiniDumpType  miniDumpType) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Add(::Backtrace::Unity::Model::BacktraceData*  data, bool  lock) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Clear() ;

/// @brief Method Delete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record) ;

/// @brief Method EnableBreadcrumbsSupport, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool EnableBreadcrumbsSupport() ;

/// @brief Method Enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Enabled() ;

/// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Flush() ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Get() ;

/// @brief Method GetDatabaseSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t GetDatabaseSize() ;

/// @brief Method GetSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* GetSettings() ;

/// @brief Method Reload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reload() ;

/// @brief Method SetApi, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi) ;

/// @brief Method SetReportWatcher, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetReportWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  reportLimitWatcher) ;

/// @brief Method ValidConsistency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidConsistency() ;

/// @brief Method get_Breadcrumbs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* get_Breadcrumbs() ;

/// @brief Method get_ScreenshotMaxHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ScreenshotMaxHeight() ;

/// @brief Method get_ScreenshotQuality, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ScreenshotQuality() ;

/// @brief Method set_ScreenshotMaxHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ScreenshotMaxHeight(int32_t  value) ;

/// @brief Method set_ScreenshotQuality, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ScreenshotQuality(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceDatabase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceDatabase(IBacktraceDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27659};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
