#pragma once
// IWYU pragma private; include "Backtrace/Unity/BacktraceClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Backtrace/Unity/zzzz__BacktraceClient_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceClient_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabase_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceMetrics_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IBacktraceBreadcrumbs_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__AttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceConfiguration_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceLogManager_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "Backtrace/Unity/Runtime/Native/zzzz__INativeClient_def.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceMetrics_def.hpp"
#include "Backtrace/Unity/Services/zzzz__ReportLimitWatcher_def.hpp"
#include "Backtrace/Unity/Types/zzzz__ReportFilterType_def.hpp"
#include "Backtrace/Unity/zzzz__BacktraceClient_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Breadcrumbs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_Breadcrumbs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Breadcrumbs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(bool)>(&::Backtrace::Unity::BacktraceClient::set_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_AttributeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::JsonData::AttributeProvider* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_AttributeProvider)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5efc1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_AttributeProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_AttributeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::JsonData::AttributeProvider*)>(&::Backtrace::Unity::BacktraceClient::set_AttributeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efc250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_AttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.UseProguard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::UseProguard)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5efc258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"UseProguard", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Metrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceMetrics* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_Metrics)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5efc2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Metrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Random
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Random* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_Random)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5efc9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Random", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::get_Item)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5efca64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::StringW)>(&::Backtrace::Unity::BacktraceClient::set_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5efca88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.AddAttachment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::AddAttachment)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5efcb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"AddAttachment", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.GetAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::GetAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efcbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetAttachments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::BacktraceClient::SetAttributes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5efcbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.GetAttributesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::GetAttributesCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5efcd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetAttributesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)()>(&::Backtrace::Unity::BacktraceClient::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5efcd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::System::Exception*>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_OnServerError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5efcd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnServerError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Action_1<::System::Exception*>*)>(&::Backtrace::Unity::BacktraceClient::set_OnServerError)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5efce2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnServerError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_RequestHandler)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5efcf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_RequestHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::BacktraceClient::set_RequestHandler)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5efd02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_RequestHandler", {}, {::i2c::type_of<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_OnServerResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5efd0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnServerResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::BacktraceClient::set_OnServerResponse)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5efd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnServerResponse", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_OnClientReportLimitReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*)>(&::Backtrace::Unity::BacktraceClient::set_OnClientReportLimitReached)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5efd264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnClientReportLimitReached", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_OnClientReportLimitReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_OnClientReportLimitReached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnClientReportLimitReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_NativeClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Runtime::Native::INativeClient* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_NativeClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efd2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_NativeClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_EnablePerformanceStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_EnablePerformanceStatistics)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5efd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_EnablePerformanceStatistics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_GameObjectDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_GameObjectDepth)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5efd2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_GameObjectDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_BacktraceApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Interfaces::IBacktraceApi* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_BacktraceApi)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efd2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_BacktraceApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_BacktraceApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Interfaces::IBacktraceApi*)>(&::Backtrace::Unity::BacktraceClient::set_BacktraceApi)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5efd2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_BacktraceApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.get_ReportLimitWatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Services::ReportLimitWatcher* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::get_ReportLimitWatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efd3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_ReportLimitWatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.set_ReportLimitWatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Services::ReportLimitWatcher*)>(&::Backtrace::Unity::BacktraceClient::set_ReportLimitWatcher)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5efd3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_ReportLimitWatcher", {}, {::i2c::type_of<::Backtrace::Unity::Services::ReportLimitWatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)(::Backtrace::Unity::Model::BacktraceConfiguration*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW)>(&::Backtrace::Unity::BacktraceClient::Initialize)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5efd48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW)>(&::Backtrace::Unity::BacktraceClient::Initialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5efde74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::ArrayW<::StringW>, ::StringW)>(&::Backtrace::Unity::BacktraceClient::Initialize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5efde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW)>(&::Backtrace::Unity::BacktraceClient::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5efdf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Backtrace::Unity::BacktraceClient> (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::ArrayW<::StringW>, ::StringW)>(&::Backtrace::Unity::BacktraceClient::Initialize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5efdfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efe040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::Refresh)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x5efd7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.EnableBreadcrumbsSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::EnableBreadcrumbsSupport)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5efea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableBreadcrumbsSupport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efeab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(bool)>(&::Backtrace::Unity::BacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5efe5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5efeab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.EnableMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::StringW, uint32_t, ::StringW)>(&::Backtrace::Unity::BacktraceClient::EnableMetrics)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5efebc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.StartupMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::StartupMetrics)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5efecf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"StartupMetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::OnApplicationQuit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5efedb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5efee5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::LateUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5efeebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::OnDestroy)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5eff360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SetClientReportLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(uint32_t)>(&::Backtrace::Unity::BacktraceClient::SetClientReportLimit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5eff59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetClientReportLimit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::BacktraceClient::Send)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5eff694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::System::Exception*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::BacktraceClient::Send)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5effa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::BacktraceClient::Send)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5efff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::BacktraceClient::SendReport)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5eff298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SendReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.CollectDataAndSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::BacktraceClient::CollectDataAndSend)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f00138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"CollectDataAndSend", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SetupBacktraceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceData* (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::BacktraceClient::SetupBacktraceData)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f001fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetupBacktraceData", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.OnAnrDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::OnAnrDetected)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f008d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnAnrDetected", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.HandleUnhandledExceptionsFromAndroidBackgroundThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient::HandleUnhandledExceptionsFromAndroidBackgroundThread)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5f00da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnhandledExceptionsFromAndroidBackgroundThread", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.CaptureUnityMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::CaptureUnityMessages)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5efe050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"CaptureUnityMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(bool)>(&::Backtrace::Unity::BacktraceClient::OnApplicationPause)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5f011f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.HandleUnityBackgroundException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::BacktraceClient::HandleUnityBackgroundException)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f013d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnityBackgroundException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.HandleLowMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::HandleLowMemory)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f0161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleLowMemory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.HandleUnityMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::BacktraceClient::HandleUnityMessage)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5f01430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnityMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SamplingShouldSkip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::SamplingShouldSkip)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f01934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SamplingShouldSkip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.SendUnhandledExceptionReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*, bool)>(&::Backtrace::Unity::BacktraceClient::SendUnhandledExceptionReport)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f00d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SendUnhandledExceptionReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.ShouldSendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::System::Exception*, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, bool)>(&::Backtrace::Unity::BacktraceClient::ShouldSendReport)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5effaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.ShouldSendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::BacktraceClient::ShouldSendReport)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5eff760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.ShouldSendReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::BacktraceClient::ShouldSendReport)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5efff88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.HandleInnerException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::BacktraceClient::HandleInnerException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f01bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleInnerException", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.ValidClientConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::ValidClientConfiguration)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5efcef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ValidClientConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.ShouldSkipReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient::*)(::Backtrace::Unity::Types::ReportFilterType, ::System::Exception*, ::StringW)>(&::Backtrace::Unity::BacktraceClient::ShouldSkipReport)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f019e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSkipReport", {}, {::i2c::type_of<::Backtrace::Unity::Types::ReportFilterType>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient.GetNativeAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::GetNativeAttachments)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5efe6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetNativeAttachments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient::*)()>(&::Backtrace::Unity::BacktraceClient::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f01d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>& Backtrace::Unity::BacktraceClient::__cordl_internal_get_Configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Configuration;
}
constexpr ::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration> const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_Configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Configuration;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_Configuration(::UnityW<::Backtrace::Unity::Model::BacktraceConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Configuration = value;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__breadcrumbs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__breadcrumbs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____breadcrumbs;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__breadcrumbs(::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____breadcrumbs = value;
}
constexpr bool& Backtrace::Unity::BacktraceClient::__cordl_internal_get__Enabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr bool const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__Enabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Enabled_k__BackingField;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__Enabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Enabled_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeProvider = value;
}
constexpr bool& Backtrace::Unity::BacktraceClient::__cordl_internal_get__useProguard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useProguard;
}
constexpr bool const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__useProguard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useProguard;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__useProguard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useProguard = value;
}
constexpr ::Backtrace::Unity::Services::BacktraceMetrics*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__metrics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metrics;
}
constexpr ::Backtrace::Unity::Services::BacktraceMetrics* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__metrics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metrics;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__metrics(::Backtrace::Unity::Services::BacktraceMetrics*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metrics = value;
}
constexpr ::System::Random*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr ::System::Random* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____random;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____random = value;
}
constexpr ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get_BackgroundExceptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundExceptions;
}
constexpr ::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_BackgroundExceptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BackgroundExceptions;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_BackgroundExceptions(::System::Collections::Generic::Stack_1<::Backtrace::Unity::Model::BacktraceReport*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BackgroundExceptions = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__clientReportAttachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientReportAttachments;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__clientReportAttachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientReportAttachments;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__clientReportAttachments(::System::Collections::Generic::HashSet_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientReportAttachments = value;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase*& Backtrace::Unity::BacktraceClient::__cordl_internal_get_Database()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Database;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabase* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_Database() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Database;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_Database(::Backtrace::Unity::Interfaces::IBacktraceDatabase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Database = value;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__backtraceApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceApi;
}
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__backtraceApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceApi;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__backtraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backtraceApi = value;
}
constexpr ::Backtrace::Unity::Services::ReportLimitWatcher*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__reportLimitWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportLimitWatcher;
}
constexpr ::Backtrace::Unity::Services::ReportLimitWatcher* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__reportLimitWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportLimitWatcher;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__reportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportLimitWatcher = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceLogManager*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__backtraceLogManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceLogManager;
}
constexpr ::Backtrace::Unity::Model::BacktraceLogManager* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__backtraceLogManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backtraceLogManager;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__backtraceLogManager(::Backtrace::Unity::Model::BacktraceLogManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backtraceLogManager = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__onClientReportLimitReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClientReportLimitReached;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__onClientReportLimitReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onClientReportLimitReached;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__onClientReportLimitReached(::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onClientReportLimitReached = value;
}
constexpr ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get_BeforeSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeforeSend;
}
constexpr ::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_BeforeSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BeforeSend;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_BeforeSend(::System::Func_2<::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BeforeSend = value;
}
constexpr ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get_SkipReport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipReport;
}
constexpr ::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_SkipReport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipReport;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_SkipReport(::System::Func_4<::Backtrace::Unity::Types::ReportFilterType,::System::Exception*,::StringW,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipReport = value;
}
constexpr ::System::Action_1<::System::Exception*>*& Backtrace::Unity::BacktraceClient::__cordl_internal_get_OnUnhandledApplicationException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnhandledApplicationException;
}
constexpr ::System::Action_1<::System::Exception*>* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get_OnUnhandledApplicationException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnhandledApplicationException;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set_OnUnhandledApplicationException(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUnhandledApplicationException = value;
}
constexpr ::Backtrace::Unity::Runtime::Native::INativeClient*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__nativeClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeClient;
}
constexpr ::Backtrace::Unity::Runtime::Native::INativeClient* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__nativeClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeClient;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__nativeClient(::Backtrace::Unity::Runtime::Native::INativeClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeClient = value;
}
constexpr ::System::Threading::Thread*& Backtrace::Unity::BacktraceClient::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::System::Threading::Thread* const& Backtrace::Unity::BacktraceClient::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void Backtrace::Unity::BacktraceClient::__cordl_internal_set__current(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
inline void Backtrace::Unity::BacktraceClient::setStaticF__instance(::UnityW<::Backtrace::Unity::BacktraceClient>  value)  {
::cordl_internals::setStaticField<::UnityW<::Backtrace::Unity::BacktraceClient>, "_instance", ::Backtrace::Unity::BacktraceClient*>(std::forward<::UnityW<::Backtrace::Unity::BacktraceClient>>(value));
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Backtrace::Unity::BacktraceClient>, "_instance", ::Backtrace::Unity::BacktraceClient*>();
}
inline ::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs* Backtrace::Unity::BacktraceClient::get_Breadcrumbs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Breadcrumbs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::IBacktraceBreadcrumbs*>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_Enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_Enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* Backtrace::Unity::BacktraceClient::get_AttributeProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_AttributeProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_AttributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_AttributeProvider", {}, {::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::BacktraceClient::UseProguard(::StringW  symbolicationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"UseProguard", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, symbolicationId);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceMetrics* Backtrace::Unity::BacktraceClient::get_Metrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Metrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceMetrics*>(this, ___internal_method);
}
inline ::System::Random* Backtrace::Unity::BacktraceClient::get_Random()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Random", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Random*>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::BacktraceClient::get_Item(::StringW  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline void Backtrace::Unity::BacktraceClient::set_Item(::StringW  index, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Backtrace::Unity::BacktraceClient::AddAttachment(::StringW  pathToAttachment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"AddAttachment", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathToAttachment);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Backtrace::Unity::BacktraceClient::GetAttachments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetAttachments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::SetAttributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline int32_t Backtrace::Unity::BacktraceClient::GetAttributesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetAttributesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method);
}
inline ::System::Action_1<::System::Exception*>* Backtrace::Unity::BacktraceClient::get_OnServerError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnServerError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::System::Exception*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_OnServerError(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnServerError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::BacktraceClient::get_RequestHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_RequestHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_RequestHandler", {}, {::i2c::type_of<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::BacktraceClient::get_OnServerResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnServerResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnServerResponse", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::BacktraceClient::set_OnClientReportLimitReached(::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_OnClientReportLimitReached", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>* Backtrace::Unity::BacktraceClient::get_OnClientReportLimitReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_OnClientReportLimitReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Backtrace::Unity::Model::BacktraceReport*>*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Runtime::Native::INativeClient* Backtrace::Unity::BacktraceClient::get_NativeClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_NativeClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Runtime::Native::INativeClient*>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::get_EnablePerformanceStatistics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_EnablePerformanceStatistics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::BacktraceClient::get_GameObjectDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_GameObjectDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Backtrace::Unity::Interfaces::IBacktraceApi* Backtrace::Unity::BacktraceClient::get_BacktraceApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_BacktraceApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Interfaces::IBacktraceApi*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_BacktraceApi(::Backtrace::Unity::Interfaces::IBacktraceApi*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_BacktraceApi", {}, {::i2c::type_of<::Backtrace::Unity::Interfaces::IBacktraceApi*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Services::ReportLimitWatcher* Backtrace::Unity::BacktraceClient::get_ReportLimitWatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"get_ReportLimitWatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Services::ReportLimitWatcher*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::set_ReportLimitWatcher(::Backtrace::Unity::Services::ReportLimitWatcher*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"set_ReportLimitWatcher", {}, {::i2c::type_of<::Backtrace::Unity::Services::ReportLimitWatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::Initialize(::Backtrace::Unity::Model::BacktraceConfiguration*  configuration, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceConfiguration*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method, configuration, attributes, gameObjectName);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::Initialize(::StringW  url, ::StringW  databasePath, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method, url, databasePath, attributes, gameObjectName);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::Initialize(::StringW  url, ::StringW  databasePath, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::ArrayW<::StringW>  attachments, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method, url, databasePath, attributes, attachments, gameObjectName);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::Initialize(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method, url, attributes, gameObjectName);
}
inline ::UnityW<::Backtrace::Unity::BacktraceClient> Backtrace::Unity::BacktraceClient::Initialize(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::ArrayW<::StringW>  attachments, ::StringW  gameObjectName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Backtrace::Unity::BacktraceClient>>(nullptr, ___internal_method, url, attributes, attachments, gameObjectName);
}
inline void Backtrace::Unity::BacktraceClient::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::EnableBreadcrumbsSupport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableBreadcrumbsSupport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::EnableMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::EnableMetrics(bool  enableIfConfigurationIsDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, enableIfConfigurationIsDisabled);
}
inline bool Backtrace::Unity::BacktraceClient::EnableMetrics(::StringW  uniqueAttributeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uniqueAttributeName);
}
inline bool Backtrace::Unity::BacktraceClient::EnableMetrics(::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl, uint32_t  timeIntervalInSec, ::StringW  uniqueAttributeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"EnableMetrics", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uniqueEventsSubmissionUrl, summedEventsSubmissionUrl, timeIntervalInSec, uniqueAttributeName);
}
inline void Backtrace::Unity::BacktraceClient::StartupMetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"StartupMetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::SetClientReportLimit(uint32_t  reportPerMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetClientReportLimit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reportPerMin);
}
inline void Backtrace::Unity::BacktraceClient::Send(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, attachmentPaths, attributes);
}
inline void Backtrace::Unity::BacktraceClient::Send(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, attachmentPaths, attributes);
}
inline void Backtrace::Unity::BacktraceClient::Send(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"Send", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, sendCallback);
}
inline void Backtrace::Unity::BacktraceClient::SendReport(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SendReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, sendCallback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::BacktraceClient::CollectDataAndSend(::Backtrace::Unity::Model::BacktraceReport*  report, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  sendCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"CollectDataAndSend", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, report, sendCallback);
}
inline ::Backtrace::Unity::Model::BacktraceData* Backtrace::Unity::BacktraceClient::SetupBacktraceData(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SetupBacktraceData", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceData*>(this, ___internal_method, report);
}
inline void Backtrace::Unity::BacktraceClient::OnAnrDetected(::StringW  stackTrace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnAnrDetected", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stackTrace);
}
inline void Backtrace::Unity::BacktraceClient::HandleUnhandledExceptionsFromAndroidBackgroundThread(::StringW  backgroundExceptionMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnhandledExceptionsFromAndroidBackgroundThread", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backgroundExceptionMessage);
}
inline void Backtrace::Unity::BacktraceClient::CaptureUnityMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"CaptureUnityMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::OnApplicationPause(bool  pause)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline void Backtrace::Unity::BacktraceClient::HandleUnityBackgroundException(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnityBackgroundException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stackTrace, type);
}
inline void Backtrace::Unity::BacktraceClient::HandleLowMemory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleLowMemory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::HandleUnityMessage(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleUnityMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stackTrace, type);
}
inline bool Backtrace::Unity::BacktraceClient::SamplingShouldSkip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SamplingShouldSkip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::SendUnhandledExceptionReport(::Backtrace::Unity::Model::BacktraceReport*  report, bool  invokeSkipApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"SendUnhandledExceptionReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report, invokeSkipApi);
}
inline bool Backtrace::Unity::BacktraceClient::ShouldSendReport(::System::Exception*  exception, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, bool  invokeSkipApi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception, attachmentPaths, attributes, invokeSkipApi);
}
inline bool Backtrace::Unity::BacktraceClient::ShouldSendReport(::StringW  message, ::System::Collections::Generic::List_1<::StringW>*  attachmentPaths, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, attachmentPaths, attributes);
}
inline bool Backtrace::Unity::BacktraceClient::ShouldSendReport(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSendReport", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, report);
}
inline void Backtrace::Unity::BacktraceClient::HandleInnerException(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"HandleInnerException", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, report);
}
inline bool Backtrace::Unity::BacktraceClient::ValidClientConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ValidClientConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient::ShouldSkipReport(::Backtrace::Unity::Types::ReportFilterType  type, ::System::Exception*  exception, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"ShouldSkipReport", {}, {::i2c::type_of<::Backtrace::Unity::Types::ReportFilterType>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, exception, message);
}
inline ::System::Collections::Generic::IList_1<::StringW>* Backtrace::Unity::BacktraceClient::GetNativeAttachments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {"GetNativeAttachments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::StringW>*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::BacktraceClient* Backtrace::Unity::BacktraceClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceClient*>());
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceClient"
constexpr  Backtrace::Unity::BacktraceClient::operator ::Backtrace::Unity::Interfaces::IBacktraceClient*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceClient"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceClient* Backtrace::Unity::BacktraceClient::i___Backtrace__Unity__Interfaces__IBacktraceClient() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceClient*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceClient::BacktraceClient()   {
}
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)(int32_t)>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f001d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)()>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f01f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)()>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x5f01f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)()>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f02afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)()>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f02b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::*)()>(&::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f02b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceClient>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get_report()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get_report() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set_report(::Backtrace::Unity::Model::BacktraceReport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___report = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get_sendCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendCallback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get_sendCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendCallback;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set_sendCallback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendCallback = value;
}
constexpr ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set___8__1(::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__queryAttributes_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryAttributes_5__2;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__queryAttributes_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryAttributes_5__2;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set__queryAttributes_5__2(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queryAttributes_5__2 = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__stopWatch_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__3;
}
constexpr ::System::Diagnostics::Stopwatch* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__stopWatch_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__3;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set__stopWatch_5__3(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopWatch_5__3 = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceData*& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__data_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_5__4;
}
constexpr ::Backtrace::Unity::Model::BacktraceData* const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__data_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_5__4;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set__data_5__4(::Backtrace::Unity::Model::BacktraceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data_5__4 = value;
}
constexpr ::StringW& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__json_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____json_5__5;
}
constexpr ::StringW const& Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_get__json_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____json_5__5;
}
constexpr void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::__cordl_internal_set__json_5__5(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____json_5__5 = value;
}
inline void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceClient__CollectDataAndSend_d__89::BacktraceClient__CollectDataAndSend_d__89()   {
}
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::*)()>(&::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0._CollectDataAndSend_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::*)(::Backtrace::Unity::Model::BacktraceResult*)>(&::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::_CollectDataAndSend_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f01e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*>(),
                        {"<CollectDataAndSend>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_record()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_record() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___record = value;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient>& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Backtrace::Unity::BacktraceClient> const& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_set___4__this(::UnityW<::Backtrace::Unity::BacktraceClient>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport*& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_report()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr ::Backtrace::Unity::Model::BacktraceReport* const& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_report() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___report;
}
constexpr void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_set_report(::Backtrace::Unity::Model::BacktraceReport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___report = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_sendCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendCallback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_get_sendCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendCallback;
}
constexpr void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::__cordl_internal_set_sendCallback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendCallback = value;
}
inline void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::_CollectDataAndSend_b__0(::Backtrace::Unity::Model::BacktraceResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*>(),
                        {"<CollectDataAndSend>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0* Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceClient___c__DisplayClass89_0::BacktraceClient___c__DisplayClass89_0()   {
}
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::BacktraceClient___c::*)()>(&::Backtrace::Unity::BacktraceClient___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f01e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::BacktraceClient___c._GetNativeAttachments_b__107_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::BacktraceClient___c::*)(::StringW)>(&::Backtrace::Unity::BacktraceClient___c::_GetNativeAttachments_b__107_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f01e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c*>(),
                        {"<GetNativeAttachments>b__107_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::BacktraceClient___c::setStaticF___9(::Backtrace::Unity::BacktraceClient___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::BacktraceClient___c*, "<>9", ::Backtrace::Unity::BacktraceClient___c*>(std::forward<::Backtrace::Unity::BacktraceClient___c*>(value));
}
inline ::Backtrace::Unity::BacktraceClient___c* Backtrace::Unity::BacktraceClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::BacktraceClient___c*, "<>9", ::Backtrace::Unity::BacktraceClient___c*>();
}
inline void Backtrace::Unity::BacktraceClient___c::setStaticF___9__107_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__107_0", ::Backtrace::Unity::BacktraceClient___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* Backtrace::Unity::BacktraceClient___c::getStaticF___9__107_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__107_0", ::Backtrace::Unity::BacktraceClient___c*>();
}
inline void Backtrace::Unity::BacktraceClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::BacktraceClient___c::_GetNativeAttachments_b__107_0(::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::BacktraceClient___c*>(),
                        {"<GetNativeAttachments>b__107_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::BacktraceClient___c* Backtrace::Unity::BacktraceClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::BacktraceClient___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::BacktraceClient___c::BacktraceClient___c()   {
}
