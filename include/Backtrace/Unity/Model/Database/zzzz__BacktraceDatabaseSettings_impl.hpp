#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Database/BacktraceDatabaseSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)(::StringW, ::Backtrace::Unity::Model::BacktraceConfiguration*)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f1c9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_DatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_DatabasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_DatabasePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.set_DatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)(::StringW)>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::set_DatabasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"set_DatabasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_MaxRecordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MaxRecordCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MaxRecordCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_MaxDatabaseSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MaxDatabaseSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f1cb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MaxDatabaseSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_AutoSendMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_AutoSendMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_AutoSendMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_RetryInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_RetryLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryLimit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_DeduplicationStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::DeduplicationStrategy (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_DeduplicationStrategy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1cbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_GenerateScreenshotOnException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_GenerateScreenshotOnException)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1c374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_GenerateScreenshotOnException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_AddUnityLogToReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_AddUnityLogToReport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_AddUnityLogToReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_RetryOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::RetryOrder (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryOrder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f1cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings.get_MinidumpType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::MiniDumpType (::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::*)()>(&::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MinidumpType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MinidumpType", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____configuration;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_set__configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____configuration = value;
}
constexpr uint32_t& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__retryInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryInterval;
}
constexpr uint32_t const& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__retryInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryInterval;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_set__retryInterval(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryInterval = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__DatabasePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabasePath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_get__DatabasePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabasePath_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::__cordl_internal_set__DatabasePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DatabasePath_k__BackingField = value;
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::_ctor(::StringW  databasePath, ::Backtrace::Unity::Model::BacktraceConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, databasePath, configuration);
}
inline ::StringW Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_DatabasePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_DatabasePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::set_DatabasePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"set_DatabasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MaxRecordCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MaxRecordCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MaxDatabaseSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MaxDatabaseSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_AutoSendMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_AutoSendMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::Backtrace::Unity::Types::DeduplicationStrategy Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_DeduplicationStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::DeduplicationStrategy>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_GenerateScreenshotOnException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_GenerateScreenshotOnException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_AddUnityLogToReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_AddUnityLogToReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Backtrace::Unity::Types::RetryOrder Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_RetryOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_RetryOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::RetryOrder>(this, ___internal_method);
}
inline ::Backtrace::Unity::Types::MiniDumpType Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::get_MinidumpType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(),
                        {"get_MinidumpType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::MiniDumpType>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::New_ctor(::StringW  databasePath, ::Backtrace::Unity::Model::BacktraceConfiguration*  configuration)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(databasePath, configuration));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings::BacktraceDatabaseSettings()   {
}
