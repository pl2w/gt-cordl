#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/BacktraceBreadcrumbs.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbType_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbsEventHandler_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceLogManager_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.get_BreadcrumbsLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::get_BreadcrumbsLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"get_BreadcrumbsLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.set_BreadcrumbsLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::set_BreadcrumbsLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"set_BreadcrumbsLevel", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.get_UnityLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::get_UnityLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"get_UnityLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.set_UnityLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::set_UnityLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"set_UnityLogLevel", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f1cc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.UnregisterEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::UnregisterEvents)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f1cd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"UnregisterEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.ClearBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ClearBreadcrumbs)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f1d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ClearBreadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.EnableBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::EnableBreadcrumbs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"EnableBreadcrumbs", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.EnableBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::EnableBreadcrumbs)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f1d11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"EnableBreadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.FromBacktrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::FromBacktrace)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f1d530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"FromBacktrace", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.FromMonoBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::FromMonoBehavior)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f1d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"FromMonoBehavior", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.GetBreadcrumbLogPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::GetBreadcrumbLogPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f1d6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"GetBreadcrumbLogPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Info)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Info)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Warning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Warning)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Debug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Debug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::System::Exception*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f1d81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::System::Exception*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f1d868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::UnityEngine::LogType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1d79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::UnityEngine::LogType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f1d8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.AddBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::AddBreadcrumbs)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f1d5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"AddBreadcrumbs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.ShouldLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ShouldLog)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f1d57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.ShouldLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ShouldLog)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f1d8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.ConvertLogTypeToLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel (*)(::UnityEngine::LogType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ConvertLogTypeToLogLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f1d6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ConvertLogTypeToLogLevel", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.BreadcrumbId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::BreadcrumbId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f1d8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f1d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.CanStoreBreadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType)>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::CanStoreBreadcrumbs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"CanStoreBreadcrumbs", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs.Archive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Archive)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f1da5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Archive", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__BreadcrumbsLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbsLevel_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__BreadcrumbsLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BreadcrumbsLevel_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_set__BreadcrumbsLevel_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BreadcrumbsLevel_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__UnityLogLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnityLogLevel_k__BackingField;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__UnityLogLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnityLogLevel_k__BackingField;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_set__UnityLogLevel_k__BackingField(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnityLogLevel_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get_LogManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogManager;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager* const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get_LogManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogManager;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_set_LogManager(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogManager = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get_EventHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventHandler;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler* const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get_EventHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventHandler;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_set_EventHandler(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbsEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventHandler = value;
}
constexpr bool& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr bool const& Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_get__enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::__cordl_internal_set__enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled = value;
}
inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::get_BreadcrumbsLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"get_BreadcrumbsLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::set_BreadcrumbsLevel(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"set_BreadcrumbsLevel", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::get_UnityLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"get_UnityLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::set_UnityLogLevel(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"set_UnityLogLevel", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::_ctor(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  logManager, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logManager, level, unityLogLevel);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::UnregisterEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"UnregisterEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ClearBreadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ClearBreadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::EnableBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"EnableBreadcrumbs", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, unityLogLevel);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::EnableBreadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"EnableBreadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::FromBacktrace(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"FromBacktrace", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, report);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::FromMonoBehavior(::StringW  message, ::UnityEngine::LogType  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"FromMonoBehavior", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, type, attributes);
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::GetBreadcrumbLogPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"GetBreadcrumbLogPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Info(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Info(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Warning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Warning(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Debug(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Debug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception(::System::Exception*  exception, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Exception(::StringW  message, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Exception", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log(::StringW  message, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, type);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log(::StringW  message, ::UnityEngine::LogType  logType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, logType, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Log(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::UnityEngine::LogType  logType, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, level, logType, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::AddBreadcrumbs(::StringW  message, ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"AddBreadcrumbs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, level, type, attributes);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ShouldLog(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, type);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ShouldLog(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ShouldLog", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level, type);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::ConvertLogTypeToLogLevel(::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"ConvertLogTypeToLogLevel", {}, {::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(nullptr, ___internal_method, type);
}
inline double_t Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::BreadcrumbId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"BreadcrumbId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::CanStoreBreadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  logLevel, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  backtraceBreadcrumbsLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"CanStoreBreadcrumbs", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(), ::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, logLevel, backtraceBreadcrumbsLevel);
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::Archive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(),
                        {"Archive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::New_ctor(::Backtrace::Unity::Model::Breadcrumbs::IBacktraceLogManager*  logManager, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbType  level, ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  unityLogLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*>(logManager, level, unityLogLevel));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs"
constexpr  Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::operator ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::i___Backtrace__Unity__Model__Breadcrumbs__IBacktraceBreadcrumbs() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs::BacktraceBreadcrumbs()   {
}
