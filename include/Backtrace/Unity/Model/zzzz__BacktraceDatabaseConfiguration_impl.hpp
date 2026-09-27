#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceDatabaseConfiguration.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceClientConfiguration_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceDatabaseConfiguration_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceDatabaseConfiguration.ValidDatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceDatabaseConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceDatabaseConfiguration::ValidDatabasePath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f10ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*>(),
                        {"ValidDatabasePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceDatabaseConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceDatabaseConfiguration::*)()>(&::Backtrace::Unity::Model::BacktraceDatabaseConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f10ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_Enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_Enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Enabled;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_Enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Enabled = value;
}
constexpr ::StringW& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_DatabasePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DatabasePath;
}
constexpr ::StringW const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_DatabasePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DatabasePath;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_DatabasePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DatabasePath = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_AutoSendMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSendMode;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_AutoSendMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoSendMode;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_AutoSendMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoSendMode = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_CreateDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateDatabase;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_CreateDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateDatabase;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_CreateDatabase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateDatabase = value;
}
constexpr bool& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_GenerateScreenshotOnException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateScreenshotOnException;
}
constexpr bool const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_GenerateScreenshotOnException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GenerateScreenshotOnException;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_GenerateScreenshotOnException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GenerateScreenshotOnException = value;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_DeduplicationStrategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeduplicationStrategy;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_DeduplicationStrategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeduplicationStrategy;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeduplicationStrategy = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_MaxRecordCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRecordCount;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_MaxRecordCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxRecordCount;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_MaxRecordCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxRecordCount = value;
}
constexpr int64_t& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_MaxDatabaseSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatabaseSize;
}
constexpr int64_t const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_MaxDatabaseSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatabaseSize;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_MaxDatabaseSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDatabaseSize = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryInterval;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryInterval;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_RetryInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryInterval = value;
}
constexpr int32_t& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryLimit;
}
constexpr int32_t const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryLimit;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_RetryLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryLimit = value;
}
constexpr ::Backtrace::Unity::Types::RetryOrder& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryOrder;
}
constexpr ::Backtrace::Unity::Types::RetryOrder const& Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_get_RetryOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetryOrder;
}
constexpr void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::__cordl_internal_set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetryOrder = value;
}
inline bool Backtrace::Unity::Model::BacktraceDatabaseConfiguration::ValidDatabasePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*>(),
                        {"ValidDatabasePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::BacktraceDatabaseConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceDatabaseConfiguration* Backtrace::Unity::Model::BacktraceDatabaseConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceDatabaseConfiguration*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceDatabaseConfiguration::BacktraceDatabaseConfiguration()   {
}
