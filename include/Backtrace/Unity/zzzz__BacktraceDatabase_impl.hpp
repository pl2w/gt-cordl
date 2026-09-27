#pragma once
// IWYU pragma private; include "Backtrace/Unity/BacktraceDatabase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Backtrace/Unity/zzzz__BacktraceDatabase_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabaseContext_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabaseFileContext_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabase_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "Backtrace/Unity/Services/zzzz__ReportLimitWatcher_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__MiniDumpType_def.hpp"
#include "Backtrace/Unity/zzzz__BacktraceClient_def.hpp"
#include "Backtrace/Unity/zzzz__BacktraceDatabase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_Breadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_Breadcrumbs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f02b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Breadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_DatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_DatabasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f02c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DatabasePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_DatabasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::StringW)>(&::Backtrace::Unity::BacktraceDatabase::set_DatabasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f02c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DatabasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f02c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_ScreenshotQuality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(int32_t)>(&::Backtrace::Unity::BacktraceDatabase::set_ScreenshotQuality)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f02d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f02db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_ScreenshotMaxHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(int32_t)>(&::Backtrace::Unity::BacktraceDatabase::set_ScreenshotMaxHeight)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f02e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceDatabase> (*)()>(&::Backtrace::Unity::BacktraceDatabase::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f02f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_DeduplicationStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::DeduplicationStrategy (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_DeduplicationStrategy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f02f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_DeduplicationStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Types::DeduplicationStrategy)>(&::Backtrace::Unity::BacktraceDatabase::set_DeduplicationStrategy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5f0302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DeduplicationStrategy", {}, {::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_DatabaseSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_DatabaseSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0313c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DatabaseSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_DatabaseSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*)>(&::Backtrace::Unity::BacktraceDatabase::set_DatabaseSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DatabaseSettings", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_BacktraceApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceApi* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_BacktraceApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_BacktraceApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_BacktraceApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&::Backtrace::Unity::BacktraceDatabase::set_BacktraceApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_BacktraceApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_BacktraceDatabaseContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_BacktraceDatabaseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_BacktraceDatabaseContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*)>(&::Backtrace::Unity::BacktraceDatabase::set_BacktraceDatabaseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_BacktraceDatabaseFileContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_BacktraceDatabaseFileContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0316c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_BacktraceDatabaseFileContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_BacktraceDatabaseFileContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*)>(&::Backtrace::Unity::BacktraceDatabase::set_BacktraceDatabaseFileContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_BacktraceDatabaseFileContext", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.get_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::get_Enable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Enable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.set_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(bool)>(&::Backtrace::Unity::BacktraceDatabase::set_Enable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_Enable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Reload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Reload)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5f0318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Reload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f03860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f03868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5f0386c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Start)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5f03d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.SetApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&::Backtrace::Unity::BacktraceDatabase::SetApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f04020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SetApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f04028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.GetSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::GetSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f04030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Clear)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f04038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceData*, bool)>(&::Backtrace::Unity::BacktraceDatabase::Add)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x5f041a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::Backtrace::Unity::Types::MiniDumpType)>(&::Backtrace::Unity::BacktraceDatabase::Add)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f04b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Backtrace::Unity::Types::MiniDumpType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Get)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f04b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::BacktraceDatabase::Delete)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f04c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Flush)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f04df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Send)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5f05274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.FlushRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::BacktraceDatabase::FlushRecord)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5f04f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"FlushRecord", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::BacktraceDatabase::SendData)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5f03a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SendData", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::Count)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f053d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.RemoveOrphaned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::RemoveOrphaned)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f05490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.SetupMultisceneSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::SetupMultisceneSupport)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f055c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.InitializeDatabasePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::InitializeDatabasePaths)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f0567c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.LoadReports
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::StringW, ::StringW)>(&::Backtrace::Unity::BacktraceDatabase::LoadReports)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5f05840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                    {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.ValidateDatabaseSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::ValidateDatabaseSize)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f04910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ValidateDatabaseSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.ReachedDiskSpaceLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::ReachedDiskSpaceLimit)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f05d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ReachedDiskSpaceLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.ReachedMaximumNumberOfRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::ReachedMaximumNumberOfRecords)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f05c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ReachedMaximumNumberOfRecords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.ValidConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::ValidConsistency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f05df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ValidConsistency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.GetDatabaseSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::GetDatabaseSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f05e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetDatabaseSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.SetReportWatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)(::Backtrace::Unity::Services::ReportLimitWatcher*)>(&::Backtrace::Unity::BacktraceDatabase::SetReportWatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f05f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SetReportWatcher", {}, {::i2c::type_of<::Backtrace::Unity::Services::ReportLimitWatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.IncrementBatchRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::IncrementBatchRetry)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x5f05f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"IncrementBatchRetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.GetBreadcrumbsPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::GetBreadcrumbsPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f063a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetBreadcrumbsPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase.EnableBreadcrumbsSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::EnableBreadcrumbsSupport)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f03ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"EnableBreadcrumbsSupport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase::*)()>(&::Backtrace::Unity::BacktraceDatabase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f063d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__timerBackgroundWork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerBackgroundWork;
}
constexpr bool const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__timerBackgroundWork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timerBackgroundWork;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__timerBackgroundWork(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timerBackgroundWork = value;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get_Configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Configuration;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get_Configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Configuration;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set_Configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Configuration = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__breadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__breadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbs = value;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__client(::UnityW<::Backtrace::Unity::BacktraceClient>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
constexpr ::StringW& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__DatabasePath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabasePath_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__DatabasePath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabasePath_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__DatabasePath_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DatabasePath_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__DatabaseSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabaseSettings_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__DatabaseSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DatabaseSettings_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__DatabaseSettings_k__BackingField(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DatabaseSettings_k__BackingField = value;
}
constexpr float_t& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__lastConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConnection;
}
constexpr float_t const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__lastConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastConnection;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__lastConnection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastConnection = value;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceApi_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceApi_k__BackingField;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceApi_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceApi_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__BacktraceApi_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BacktraceApi_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceDatabaseContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceDatabaseContext_k__BackingField;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceDatabaseContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceDatabaseContext_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__BacktraceDatabaseContext_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BacktraceDatabaseContext_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceDatabaseFileContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceDatabaseFileContext_k__BackingField;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__BacktraceDatabaseFileContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BacktraceDatabaseFileContext_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__BacktraceDatabaseFileContext_k__BackingField(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BacktraceDatabaseFileContext_k__BackingField = value;
}
constexpr bool& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__Enable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enable_k__BackingField;
}
constexpr bool const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__Enable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enable_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__Enable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enable_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Services::ReportLimitWatcher*& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__reportLimitWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportLimitWatcher;
}
constexpr ::Backtrace::Unity::Services::ReportLimitWatcher* const& Backtrace::Unity::BacktraceDatabase::__cordl_internal_get__reportLimitWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportLimitWatcher;
}
constexpr void Backtrace::Unity::BacktraceDatabase::__cordl_internal_set__reportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportLimitWatcher = value;
}
inline void Backtrace::Unity::BacktraceDatabase::setStaticF_LastFrameTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "LastFrameTime", ::Backtrace::Unity::BacktraceDatabase*>(std::forward<float_t>(value));
}
inline float_t Backtrace::Unity::BacktraceDatabase::getStaticF_LastFrameTime()  {
return ::cordl_internals::getStaticField<float_t, "LastFrameTime", ::Backtrace::Unity::BacktraceDatabase*>();
}
inline void Backtrace::Unity::BacktraceDatabase::setStaticF__instance(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value)  {
::cordl_internals::setStaticField<::UnityW<::Backtrace::Unity::BacktraceDatabase>, "_instance", ::Backtrace::Unity::BacktraceDatabase*>(std::forward<::UnityW<::Backtrace::Unity::BacktraceDatabase>>(value));
}
inline ::UnityW<::Backtrace::Unity::BacktraceDatabase> Backtrace::Unity::BacktraceDatabase::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Backtrace::Unity::BacktraceDatabase>, "_instance", ::Backtrace::Unity::BacktraceDatabase*>();
}
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* Backtrace::Unity::BacktraceDatabase::get_Breadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Breadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::BacktraceDatabase::get_DatabasePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DatabasePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_DatabasePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DatabasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::BacktraceDatabase::get_ScreenshotQuality()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_ScreenshotQuality", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_ScreenshotQuality(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_ScreenshotQuality", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Backtrace::Unity::BacktraceDatabase::get_ScreenshotMaxHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_ScreenshotMaxHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_ScreenshotMaxHeight(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_ScreenshotMaxHeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Backtrace::Unity::BacktraceDatabase> Backtrace::Unity::BacktraceDatabase::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceDatabase>>(nullptr, ___internal_method);
}
inline ::Backtrace::Unity::Types::DeduplicationStrategy Backtrace::Unity::BacktraceDatabase::get_DeduplicationStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::DeduplicationStrategy>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DeduplicationStrategy", {}, {::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* Backtrace::Unity::BacktraceDatabase::get_DatabaseSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_DatabaseSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_DatabaseSettings(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_DatabaseSettings", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceApi* Backtrace::Unity::BacktraceDatabase::get_BacktraceApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_BacktraceApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceApi*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_BacktraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_BacktraceApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* Backtrace::Unity::BacktraceDatabase::get_BacktraceDatabaseContext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_BacktraceDatabaseContext(::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext* Backtrace::Unity::BacktraceDatabase::get_BacktraceDatabaseFileContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_BacktraceDatabaseFileContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_BacktraceDatabaseFileContext(::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_BacktraceDatabaseFileContext", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceDatabaseFileContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Backtrace::Unity::BacktraceDatabase::get_Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"get_Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::set_Enable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"set_Enable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::BacktraceDatabase::Reload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Reload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::SetApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SetApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backtraceApi);
}
inline bool Backtrace::Unity::BacktraceDatabase::Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings* Backtrace::Unity::BacktraceDatabase::GetSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::BacktraceDatabase::Add(::Backtrace::Unity::Model::BacktraceData*  data, bool  lock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, data, lock);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::BacktraceDatabase::Add(::Backtrace::Unity::Model::BacktraceReport*  backtraceReport, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::Backtrace::Unity::Types::MiniDumpType  miniDumpType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::Backtrace::Unity::Types::MiniDumpType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, backtraceReport, attributes, miniDumpType);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::BacktraceDatabase::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void Backtrace::Unity::BacktraceDatabase::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::FlushRecord(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"FlushRecord", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void Backtrace::Unity::BacktraceDatabase::SendData(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SendData", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline int32_t Backtrace::Unity::BacktraceDatabase::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::RemoveOrphaned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::SetupMultisceneSupport()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceDatabase::InitializeDatabasePaths()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::LoadReports(::StringW  breadcrumbPath, ::StringW  breadcrumbArchive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, breadcrumbPath, breadcrumbArchive);
}
inline bool Backtrace::Unity::BacktraceDatabase::ValidateDatabaseSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ValidateDatabaseSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceDatabase::ReachedDiskSpaceLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ReachedDiskSpaceLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceDatabase::ReachedMaximumNumberOfRecords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ReachedMaximumNumberOfRecords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceDatabase::ValidConsistency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"ValidConsistency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::BacktraceDatabase::GetDatabaseSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetDatabaseSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::SetReportWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  reportLimitWatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"SetReportWatcher", {}, {::i2c::type_of<::Backtrace::Unity::Services::ReportLimitWatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportLimitWatcher);
}
inline void Backtrace::Unity::BacktraceDatabase::IncrementBatchRetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"IncrementBatchRetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::BacktraceDatabase::GetBreadcrumbsPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"GetBreadcrumbsPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceDatabase::EnableBreadcrumbsSupport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {"EnableBreadcrumbsSupport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::BacktraceDatabase* Backtrace::Unity::BacktraceDatabase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceDatabase*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabase"
constexpr  Backtrace::Unity::BacktraceDatabase::operator ::Backtrace::Unity::Interfaces::IBacktraceDatabase*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabase"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase* Backtrace::Unity::BacktraceDatabase::i___Backtrace__Unity__Interfaces__IBacktraceDatabase() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabase*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceDatabase::BacktraceDatabase()   {
}
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::*)()>(&::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f053d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0._SendData_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::*)(::Backtrace::Unity::Model::BacktraceResult*)>(&::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::_SendData_b__0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f064b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*>(),
                        {"<SendData>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_get_record()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_get_record() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr void Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___record = value;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase>& Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase> const& Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::__cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::_SendData_b__0(::Backtrace::Unity::Model::BacktraceResult*  sendResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*>(),
                        {"<SendData>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendResult);
}
inline ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0* Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass60_0::BacktraceDatabase___c__DisplayClass60_0()   {
}
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::*)()>(&::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f053c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0._FlushRecord_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::*)(::Backtrace::Unity::Model::BacktraceResult*)>(&::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::_FlushRecord_b__0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f063d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*>(),
                        {"<FlushRecord>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_get_record()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_get_record() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr void Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___record = value;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase>& Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceDatabase> const& Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::__cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceDatabase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::_FlushRecord_b__0(::Backtrace::Unity::Model::BacktraceResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*>(),
                        {"<FlushRecord>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0* Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceDatabase___c__DisplayClass59_0::BacktraceDatabase___c__DisplayClass59_0()   {
}
