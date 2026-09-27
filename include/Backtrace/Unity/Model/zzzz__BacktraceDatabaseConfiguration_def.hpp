#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceDatabaseConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Model/zzzz__BacktraceClientConfiguration_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceDatabaseConfiguration)
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceDatabaseConfiguration;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*, "Backtrace.Unity.Model", "BacktraceDatabaseConfiguration");
// Dependencies Backtrace.Unity.Model.BacktraceClientConfiguration, Backtrace.Unity.Types.DeduplicationStrategy, Backtrace.Unity.Types.RetryOrder
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceDatabaseConfiguration
class CORDL_TYPE BacktraceDatabaseConfiguration : public ::Backtrace::Unity::Model::BacktraceClientConfiguration {
public:
// Declarations
/// @brief Field AutoSendMode, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoSendMode, put=__cordl_internal_set_AutoSendMode)) bool  AutoSendMode;

/// @brief Field CreateDatabase, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_CreateDatabase, put=__cordl_internal_set_CreateDatabase)) bool  CreateDatabase;

/// @brief Field DatabasePath, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DatabasePath, put=__cordl_internal_set_DatabasePath)) ::StringW  DatabasePath;

/// @brief Field DeduplicationStrategy, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_DeduplicationStrategy, put=__cordl_internal_set_DeduplicationStrategy)) ::Backtrace::Unity::Types::DeduplicationStrategy  DeduplicationStrategy;

/// @brief Field Enabled, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

/// @brief Field GenerateScreenshotOnException, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_GenerateScreenshotOnException, put=__cordl_internal_set_GenerateScreenshotOnException)) bool  GenerateScreenshotOnException;

/// @brief Field MaxDatabaseSize, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxDatabaseSize, put=__cordl_internal_set_MaxDatabaseSize)) int64_t  MaxDatabaseSize;

/// @brief Field MaxRecordCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxRecordCount, put=__cordl_internal_set_MaxRecordCount)) int32_t  MaxRecordCount;

/// @brief Field RetryInterval, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryInterval, put=__cordl_internal_set_RetryInterval)) int32_t  RetryInterval;

/// @brief Field RetryLimit, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryLimit, put=__cordl_internal_set_RetryLimit)) int32_t  RetryLimit;

/// @brief Field RetryOrder, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_RetryOrder, put=__cordl_internal_set_RetryOrder)) ::Backtrace::Unity::Types::RetryOrder  RetryOrder;

static inline ::Backtrace::Unity::Model::BacktraceDatabaseConfiguration* New_ctor() ;

/// @brief Method ValidDatabasePath, addr 0x5f10ef8, size 0xfc, virtual false, abstract: false, final false
inline bool ValidDatabasePath() ;

constexpr bool const& __cordl_internal_get_AutoSendMode() const;

constexpr bool& __cordl_internal_get_AutoSendMode() ;

constexpr bool const& __cordl_internal_get_CreateDatabase() const;

constexpr bool& __cordl_internal_get_CreateDatabase() ;

constexpr ::StringW const& __cordl_internal_get_DatabasePath() const;

constexpr ::StringW& __cordl_internal_get_DatabasePath() ;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& __cordl_internal_get_DeduplicationStrategy() const;

constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& __cordl_internal_get_DeduplicationStrategy() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr bool const& __cordl_internal_get_GenerateScreenshotOnException() const;

constexpr bool& __cordl_internal_get_GenerateScreenshotOnException() ;

constexpr int64_t const& __cordl_internal_get_MaxDatabaseSize() const;

constexpr int64_t& __cordl_internal_get_MaxDatabaseSize() ;

constexpr int32_t const& __cordl_internal_get_MaxRecordCount() const;

constexpr int32_t& __cordl_internal_get_MaxRecordCount() ;

constexpr int32_t const& __cordl_internal_get_RetryInterval() const;

constexpr int32_t& __cordl_internal_get_RetryInterval() ;

constexpr int32_t const& __cordl_internal_get_RetryLimit() const;

constexpr int32_t& __cordl_internal_get_RetryLimit() ;

constexpr ::Backtrace::Unity::Types::RetryOrder const& __cordl_internal_get_RetryOrder() const;

constexpr ::Backtrace::Unity::Types::RetryOrder& __cordl_internal_get_RetryOrder() ;

constexpr void __cordl_internal_set_AutoSendMode(bool  value) ;

constexpr void __cordl_internal_set_CreateDatabase(bool  value) ;

constexpr void __cordl_internal_set_DatabasePath(::StringW  value) ;

constexpr void __cordl_internal_set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

constexpr void __cordl_internal_set_GenerateScreenshotOnException(bool  value) ;

constexpr void __cordl_internal_set_MaxDatabaseSize(int64_t  value) ;

constexpr void __cordl_internal_set_MaxRecordCount(int32_t  value) ;

constexpr void __cordl_internal_set_RetryInterval(int32_t  value) ;

constexpr void __cordl_internal_set_RetryLimit(int32_t  value) ;

constexpr void __cordl_internal_set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value) ;

/// @brief Method .ctor, addr 0x5f10ff4, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDatabaseConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDatabaseConfiguration(BacktraceDatabaseConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDatabaseConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDatabaseConfiguration(BacktraceDatabaseConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27593};

/// @brief Field Enabled, offset: 0x34, size: 0x1, def value: None
 bool  ___Enabled;

/// @brief Field DatabasePath, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___DatabasePath;

/// @brief Field AutoSendMode, offset: 0x40, size: 0x1, def value: None
 bool  ___AutoSendMode;

/// @brief Field CreateDatabase, offset: 0x41, size: 0x1, def value: None
 bool  ___CreateDatabase;

/// @brief Field GenerateScreenshotOnException, offset: 0x42, size: 0x1, def value: None
 bool  ___GenerateScreenshotOnException;

/// @brief Field DeduplicationStrategy, offset: 0x44, size: 0x4, def value: None
 ::Backtrace::Unity::Types::DeduplicationStrategy  ___DeduplicationStrategy;

/// @brief Field MaxRecordCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___MaxRecordCount;

/// @brief Field MaxDatabaseSize, offset: 0x50, size: 0x8, def value: None
 int64_t  ___MaxDatabaseSize;

/// @brief Field RetryInterval, offset: 0x58, size: 0x4, def value: None
 int32_t  ___RetryInterval;

/// @brief Field RetryLimit, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___RetryLimit;

/// @brief Field RetryOrder, offset: 0x60, size: 0x4, def value: None
 ::Backtrace::Unity::Types::RetryOrder  ___RetryOrder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___Enabled) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___DatabasePath) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___AutoSendMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___CreateDatabase) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___GenerateScreenshotOnException) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___DeduplicationStrategy) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___MaxRecordCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___MaxDatabaseSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___RetryInterval) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___RetryLimit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration, ___RetryOrder) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceDatabaseConfiguration) == 0x68, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
