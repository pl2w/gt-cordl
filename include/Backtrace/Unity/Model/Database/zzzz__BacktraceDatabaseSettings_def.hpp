#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseSettings)
namespace Backtrace::Unity::Model {
class BacktraceConfiguration;
}
namespace Backtrace::Unity::Types {
struct DeduplicationStrategy;
}
namespace Backtrace::Unity::Types {
struct MiniDumpType;
}
namespace Backtrace::Unity::Types {
struct RetryOrder;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Database {
class BacktraceDatabaseSettings;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*, "Backtrace.Unity.Model.Database", "BacktraceDatabaseSettings");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Database {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Database.BacktraceDatabaseSettings
class CORDL_TYPE BacktraceDatabaseSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AddUnityLogToReport)) bool  AddUnityLogToReport;

 __declspec(property(get=get_AutoSendMode)) bool  AutoSendMode;

 __declspec(property(get=get_DatabasePath, put=set_DatabasePath)) ::StringW  DatabasePath;

 __declspec(property(get=get_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

 __declspec(property(get=get_GenerateScreenshotOnException)) bool  GenerateScreenshotOnException;

 __declspec(property(get=get_MaxDatabaseSize)) int64_t  MaxDatabaseSize;

 __declspec(property(get=get_MaxRecordCount)) uint32_t  MaxRecordCount;

 __declspec(property(get=get_MinidumpType)) ::Backtrace::Unity::Types::MiniDumpType  MinidumpType;

 __declspec(property(get=get_RetryInterval)) uint32_t  RetryInterval;

 __declspec(property(get=get_RetryLimit)) uint32_t  RetryLimit;

 __declspec(property(get=get_RetryOrder)) ::Backtrace::Unity::Types::RetryOrder  RetryOrder;

/// @brief Field <DatabasePath>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DatabasePath_k__BackingField, put=__cordl_internal_set__DatabasePath_k__BackingField)) ::StringW  _DatabasePath_k__BackingField;

/// @brief Field _configuration, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__configuration, put=__cordl_internal_set__configuration)) ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  _configuration;

/// @brief Field _retryInterval, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__retryInterval, put=__cordl_internal_set__retryInterval)) uint32_t  _retryInterval;

static inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* New_ctor(::StringW  databasePath, ::Backtrace::Unity::Model::BacktraceConfiguration*  configuration) ;

constexpr ::StringW const& __cordl_internal_get__DatabasePath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DatabasePath_k__BackingField() ;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& __cordl_internal_get__configuration() const;

constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& __cordl_internal_get__configuration() ;

constexpr uint32_t const& __cordl_internal_get__retryInterval() const;

constexpr uint32_t& __cordl_internal_get__retryInterval() ;

constexpr void __cordl_internal_set__DatabasePath_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value) ;

constexpr void __cordl_internal_set__retryInterval(uint32_t  value) ;

/// @brief Method .ctor, addr 0x5f1c9f4, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::StringW  databasePath, ::Backtrace::Unity::Model::BacktraceConfiguration*  configuration) ;

/// @brief Method get_AddUnityLogToReport, addr 0x5f1c38c, size 0x8, virtual false, abstract: false, final false
inline bool get_AddUnityLogToReport() ;

/// @brief Method get_AutoSendMode, addr 0x5f1cb70, size 0x18, virtual false, abstract: false, final false
inline bool get_AutoSendMode() ;

/// [CompilerGenerated]
/// @brief Method get_DatabasePath, addr 0x5f1cad4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DatabasePath() ;

/// @brief Method get_DeduplicationStrategy, addr 0x5f1cbf8, size 0x18, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Types::DeduplicationStrategy get_DeduplicationStrategy() ;

/// @brief Method get_GenerateScreenshotOnException, addr 0x5f1c374, size 0x18, virtual false, abstract: false, final false
inline bool get_GenerateScreenshotOnException() ;

/// @brief Method get_MaxDatabaseSize, addr 0x5f1cb4c, size 0x24, virtual false, abstract: false, final false
inline int64_t get_MaxDatabaseSize() ;

/// @brief Method get_MaxRecordCount, addr 0x5f1cae4, size 0x68, virtual false, abstract: false, final false
inline uint32_t get_MaxRecordCount() ;

/// @brief Method get_MinidumpType, addr 0x5f1c0cc, size 0x8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Types::MiniDumpType get_MinidumpType() ;

/// @brief Method get_RetryInterval, addr 0x5f1cb88, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_RetryInterval() ;

/// @brief Method get_RetryLimit, addr 0x5f1cb90, size 0x68, virtual false, abstract: false, final false
inline uint32_t get_RetryLimit() ;

/// @brief Method get_RetryOrder, addr 0x5f1cc10, size 0x18, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Types::RetryOrder get_RetryOrder() ;

/// [CompilerGenerated]
/// @brief Method set_DatabasePath, addr 0x5f1cadc, size 0x8, virtual false, abstract: false, final false
inline void set_DatabasePath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseSettings(BacktraceDatabaseSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseSettings(BacktraceDatabaseSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27634};

/// @brief Field _configuration, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  ____configuration;

/// @brief Field _retryInterval, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____retryInterval;

/// [CompilerGenerated]
/// @brief Field <DatabasePath>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____DatabasePath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings, ____configuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings, ____retryInterval) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings, ____DatabasePath_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Database
