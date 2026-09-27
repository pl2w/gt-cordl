#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceDatabase.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabase_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Services/zzzz__ReportLimitWatcher_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.get_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.set_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(int32_t)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.get_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.set_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(int32_t)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.get_Breadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::get_Breadcrumbs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Flush)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.SetApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::SetApi)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.ValidConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::ValidConsistency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::Backtrace::Unity::Types::MiniDumpType)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.GetSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::GetSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.GetDatabaseSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::GetDatabaseSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.SetReportWatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Services::ReportLimitWatcher*)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::SetReportWatcher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Reload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Reload)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceData*, bool)>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::Enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Interfaces::IBacktraceDatabase.EnableBreadcrumbsSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Interfaces::IBacktraceDatabase::*)()>(&::Backtrace::Unity::Interfaces::IBacktraceDatabase::EnableBreadcrumbsSupport)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 18}
                ));
    return ___internal_method;
  }
};
inline int32_t Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotQuality()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotQuality(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::Interfaces::IBacktraceDatabase::get_ScreenshotMaxHeight()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::set_ScreenshotMaxHeight(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* Backtrace::Unity::Interfaces::IBacktraceDatabase::get_Breadcrumbs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::SetApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceApi);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabase::ValidConsistency()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Interfaces::IBacktraceDatabase::Add(::Backtrace::Unity::Model::BacktraceReport*  backtraceReport, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::Backtrace::Unity::Types::MiniDumpType  miniDumpType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, backtraceReport, attributes, miniDumpType);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Interfaces::IBacktraceDatabase::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* Backtrace::Unity::Interfaces::IBacktraceDatabase::GetSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::Interfaces::IBacktraceDatabase::GetDatabaseSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::SetReportWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  reportLimitWatcher)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportLimitWatcher);
}
inline void Backtrace::Unity::Interfaces::IBacktraceDatabase::Reload()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Interfaces::IBacktraceDatabase::Add(::Backtrace::Unity::Model::BacktraceData*  data, bool  lock)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, data, lock);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabase::Enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Interfaces::IBacktraceDatabase::EnableBreadcrumbsSupport()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
