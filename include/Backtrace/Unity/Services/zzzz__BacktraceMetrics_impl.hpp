#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceMetrics.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceMetrics_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceMetrics_def.hpp"
#include "Backtrace/Unity/Model/Attributes/zzzz__IScopeAttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/JsonData/zzzz__AttributeProvider_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__SummedEvent_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__SummedEventsSubmissionQueue_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__UniqueEvent_def.hpp"
#include "Backtrace/Unity/Model/Metrics/zzzz__UniqueEventsSubmissionQueue_def.hpp"
#include "Backtrace/Unity/Model/zzzz__IBacktraceHttpClient_def.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_StartupUniqueAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_StartupUniqueAttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_StartupUniqueAttributeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_StartupUniqueAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_StartupUniqueAttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_StartupUniqueAttributeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_MaximumUniqueEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_MaximumUniqueEvents)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f0b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_MaximumUniqueEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_MaximumUniqueEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(uint32_t)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_MaximumUniqueEvents)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f0b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_MaximumUniqueEvents", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_MaximumSummedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_MaximumSummedEvents)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f0b864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_MaximumSummedEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_MaximumSummedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(uint32_t)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_MaximumSummedEvents)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f0b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_MaximumSummedEvents", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_UniqueEventsSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_UniqueEventsSubmissionUrl)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f0b8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_UniqueEventsSubmissionUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_UniqueEventsSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_UniqueEventsSubmissionUrl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f0b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_UniqueEventsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_SummedEventsSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_SummedEventsSubmissionUrl)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f0b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_SummedEventsSubmissionUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_SummedEventsSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_SummedEventsSubmissionUrl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f0b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_SummedEventsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.set_IgnoreSslValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(bool)>(&::Backtrace::Unity::Services::BacktraceMetrics::set_IgnoreSslValidation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5efc8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_IgnoreSslValidation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_UniqueEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>* (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_UniqueEvents)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_UniqueEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.get_SummedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>* (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::get_SummedEvents)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f0ba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_SummedEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::Backtrace::Unity::Model::JsonData::AttributeProvider*, int64_t, ::StringW, ::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5efc734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.OverrideHttpClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::Backtrace::Unity::Model::IBacktraceHttpClient*)>(&::Backtrace::Unity::Services::BacktraceMetrics::OverrideHttpClient)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f0ba58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"OverrideHttpClient", {}, {::i2c::type_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.SendStartupEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::SendStartupEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5efed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"SendStartupEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(float_t)>(&::Backtrace::Unity::Services::BacktraceMetrics::Tick)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5efeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::Send)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f0bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.AddUniqueEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::AddUniqueEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0bb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddUniqueEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.AddUniqueEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Services::BacktraceMetrics::AddUniqueEvent)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5f0bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddUniqueEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceMetrics::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics::Count)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f0be88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.AddSummedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::AddSummedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0bf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddSummedEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.AddSummedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceMetrics::*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Services::BacktraceMetrics::AddSummedEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f0bf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddSummedEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.SendPendingSubmissionJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(float_t)>(&::Backtrace::Unity::Services::BacktraceMetrics::SendPendingSubmissionJobs)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f0ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"SendPendingSubmissionJobs", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.GetDefaultUniqueEventsUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::GetDefaultUniqueEventsUrl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5efc684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultUniqueEventsUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.GetDefaultSummedEventsUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::GetDefaultSummedEventsUrl)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5efc6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultSummedEventsUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.GetDefaultSubmissionUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::Backtrace::Unity::Services::BacktraceMetrics::GetDefaultSubmissionUrl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f0bffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultSubmissionUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics::*)(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*)>(&::Backtrace::Unity::Services::BacktraceMetrics::GetAttributes)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f0c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get_SessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr ::System::Guid const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get_SessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionId;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set_SessionId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionId = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__StartupUniqueAttributeName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartupUniqueAttributeName_k__BackingField;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__StartupUniqueAttributeName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartupUniqueAttributeName_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__StartupUniqueAttributeName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartupUniqueAttributeName_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__uniqueEventsSubmissionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueEventsSubmissionQueue;
}
constexpr ::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue* const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__uniqueEventsSubmissionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueEventsSubmissionQueue;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__uniqueEventsSubmissionQueue(::Backtrace::Unity::Model::Metrics::UniqueEventsSubmissionQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueEventsSubmissionQueue = value;
}
constexpr ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__summedEventsSubmissionQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summedEventsSubmissionQueue;
}
constexpr ::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue* const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__summedEventsSubmissionQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____summedEventsSubmissionQueue;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__summedEventsSubmissionQueue(::Backtrace::Unity::Model::Metrics::SummedEventsSubmissionQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____summedEventsSubmissionQueue = value;
}
constexpr int64_t& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__timeIntervalInSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeIntervalInSec;
}
constexpr int64_t const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__timeIntervalInSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeIntervalInSec;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__timeIntervalInSec(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeIntervalInSec = value;
}
constexpr float_t& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider*& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::Backtrace::Unity::Model::JsonData::AttributeProvider* const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__attributeProvider(::Backtrace::Unity::Model::JsonData::AttributeProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeProvider = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____object;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__object(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____object = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__sessionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_get__sessionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionId;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics::__cordl_internal_set__sessionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sessionId = value;
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::get_StartupUniqueAttributeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_StartupUniqueAttributeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_StartupUniqueAttributeName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_StartupUniqueAttributeName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Backtrace::Unity::Services::BacktraceMetrics::get_MaximumUniqueEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_MaximumUniqueEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_MaximumUniqueEvents(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_MaximumUniqueEvents", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Backtrace::Unity::Services::BacktraceMetrics::get_MaximumSummedEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_MaximumSummedEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_MaximumSummedEvents(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_MaximumSummedEvents", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::get_UniqueEventsSubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_UniqueEventsSubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_UniqueEventsSubmissionUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_UniqueEventsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::get_SummedEventsSubmissionUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_SummedEventsSubmissionUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_SummedEventsSubmissionUrl(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_SummedEventsSubmissionUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::set_IgnoreSslValidation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"set_IgnoreSslValidation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>* Backtrace::Unity::Services::BacktraceMetrics::get_UniqueEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_UniqueEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::UniqueEvent*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>* Backtrace::Unity::Services::BacktraceMetrics::get_SummedEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"get_SummedEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<::Backtrace::Unity::Model::Metrics::SummedEvent*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::_ctor(::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider, int64_t  timeIntervalInSec, ::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::JsonData::AttributeProvider*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeProvider, timeIntervalInSec, uniqueEventsSubmissionUrl, summedEventsSubmissionUrl);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::OverrideHttpClient(::Backtrace::Unity::Model::IBacktraceHttpClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"OverrideHttpClient", {}, {::i2c::type_of<::Backtrace::Unity::Model::IBacktraceHttpClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::SendStartupEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"SendStartupEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::Tick(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceMetrics::AddUniqueEvent(::StringW  attributeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddUniqueEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeName);
}
inline bool Backtrace::Unity::Services::BacktraceMetrics::AddUniqueEvent(::StringW  attributeName, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddUniqueEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeName, attributes);
}
inline int32_t Backtrace::Unity::Services::BacktraceMetrics::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceMetrics::AddSummedEvent(::StringW  metricsGroupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddSummedEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metricsGroupName);
}
inline bool Backtrace::Unity::Services::BacktraceMetrics::AddSummedEvent(::StringW  metricsGroupName, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"AddSummedEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, metricsGroupName, attributes);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::SendPendingSubmissionJobs(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"SendPendingSubmissionJobs", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::GetDefaultUniqueEventsUrl(::StringW  universeName, ::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultUniqueEventsUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, universeName, token);
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::GetDefaultSummedEventsUrl(::StringW  universeName, ::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultSummedEventsUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, universeName, token);
}
inline ::StringW Backtrace::Unity::Services::BacktraceMetrics::GetDefaultSubmissionUrl(::StringW  serviceName, ::StringW  universeName, ::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetDefaultSubmissionUrl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, serviceName, universeName, token);
}
inline void Backtrace::Unity::Services::BacktraceMetrics::GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::Backtrace::Unity::Services::BacktraceMetrics* Backtrace::Unity::Services::BacktraceMetrics::New_ctor(::Backtrace::Unity::Model::JsonData::AttributeProvider*  attributeProvider, int64_t  timeIntervalInSec, ::StringW  uniqueEventsSubmissionUrl, ::StringW  summedEventsSubmissionUrl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceMetrics*>(attributeProvider, timeIntervalInSec, uniqueEventsSubmissionUrl, summedEventsSubmissionUrl));
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceMetrics"
constexpr  Backtrace::Unity::Services::BacktraceMetrics::operator ::Backtrace::Unity::Interfaces::IBacktraceMetrics*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceMetrics*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceMetrics"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceMetrics* Backtrace::Unity::Services::BacktraceMetrics::i___Backtrace__Unity__Interfaces__IBacktraceMetrics() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceMetrics*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr  Backtrace::Unity::Services::BacktraceMetrics::operator ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* Backtrace::Unity::Services::BacktraceMetrics::i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept {
return static_cast<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceMetrics::BacktraceMetrics()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::*)()>(&::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0be80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0._AddUniqueEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::*)(::Backtrace::Unity::Model::Metrics::UniqueEvent*)>(&::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::_AddUniqueEvent_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f0c23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*>(),
                        {"<AddUniqueEvent>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::__cordl_internal_get_attributeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeName;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::__cordl_internal_get_attributeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributeName;
}
constexpr void Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::__cordl_internal_set_attributeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributeName = value;
}
inline void Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::_AddUniqueEvent_b__0(::Backtrace::Unity::Model::Metrics::UniqueEvent*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*>(),
                        {"<AddUniqueEvent>b__0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Metrics::UniqueEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0* Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceMetrics___c__DisplayClass44_0::BacktraceMetrics___c__DisplayClass44_0()   {
}
