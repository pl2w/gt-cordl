#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceDatabaseContext.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_impl.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceDatabaseContext_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceDatabaseContext_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseRecord_def.hpp"
#include "Backtrace/Unity/Model/Database/zzzz__BacktraceDatabaseSettings_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceDatabaseContext_def.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.get_BatchRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::get_BatchRetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_BatchRetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.set_BatchRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::set_BatchRetry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_BatchRetry", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.get_RetryOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::RetryOrder (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::get_RetryOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_RetryOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.set_RetryOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Types::RetryOrder)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::set_RetryOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_RetryOrder", {}, {::i2c::type_of<::Backtrace::Unity::Types::RetryOrder>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.get_DeduplicationStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Types::DeduplicationStrategy (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::get_DeduplicationStrategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.set_DeduplicationStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Types::DeduplicationStrategy)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::set_DeduplicationStrategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_DeduplicationStrategy", {}, {::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f03568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.SetupBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::SetupBatch)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5f07e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"SetupBatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetHash)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f08010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetHash", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetRecordByHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::StringW)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetRecordByHash)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5f08210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetRecordByHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Add)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5f084bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Any)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5f0864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Any", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Any)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f08814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Any", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Delete)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5f08824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.IncrementBatchRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::IncrementBatchRetry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f08bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"IncrementBatchRetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.IncrementBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::IncrementBatches)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5f08d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"IncrementBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.RemoveMaxRetries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::RemoveMaxRetries)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f08c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"RemoveMaxRetries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Get)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f08f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Get", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Count)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5f09040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f09258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::Clear)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5f09300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.LastOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::LastOrDefault)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f095e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"LastOrDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.FirstOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::FirstOrDefault)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f09c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"FirstOrDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.FirstOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::FirstOrDefault)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f09c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"FirstOrDefault", {}, {::i2c::type_of<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetFirstRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetFirstRecord)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5f095f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetFirstRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetLastRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetLastRecord)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5f09940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetLastRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetTotalNumberOfRecords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetTotalNumberOfRecords)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f09d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetTotalNumberOfRecords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.GetRecordsToDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::GetRecordsToDelete)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f09d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetRecordsToDelete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext.AddDuplicate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext::AddDuplicate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f09e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"AddDuplicate", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__BatchRetry_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BatchRetry_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__BatchRetry_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BatchRetry_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set__BatchRetry_k__BackingField(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BatchRetry_k__BackingField = value;
}
constexpr int64_t& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get_TotalSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalSize;
}
constexpr int64_t const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get_TotalSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalSize;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set_TotalSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalSize = value;
}
constexpr int32_t& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get_TotalRecords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalRecords;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get_TotalRecords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalRecords;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set_TotalRecords(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalRecords = value;
}
constexpr int32_t& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__retryNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryNumber;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__retryNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryNumber;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set__retryNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryNumber = value;
}
constexpr ::Backtrace::Unity::Types::RetryOrder& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__RetryOrder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RetryOrder_k__BackingField;
}
constexpr ::Backtrace::Unity::Types::RetryOrder const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__RetryOrder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RetryOrder_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set__RetryOrder_k__BackingField(::Backtrace::Unity::Types::RetryOrder  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RetryOrder_k__BackingField = value;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__DeduplicationStrategy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeduplicationStrategy_k__BackingField;
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy const& Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_get__DeduplicationStrategy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeduplicationStrategy_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext::__cordl_internal_set__DeduplicationStrategy_k__BackingField(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeduplicationStrategy_k__BackingField = value;
}
inline ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* Backtrace::Unity::Services::BacktraceDatabaseContext::get_BatchRetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_BatchRetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::set_BatchRetry(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_BatchRetry", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Types::RetryOrder Backtrace::Unity::Services::BacktraceDatabaseContext::get_RetryOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_RetryOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::RetryOrder>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::set_RetryOrder(::Backtrace::Unity::Types::RetryOrder  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_RetryOrder", {}, {::i2c::type_of<::Backtrace::Unity::Types::RetryOrder>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Types::DeduplicationStrategy Backtrace::Unity::Services::BacktraceDatabaseContext::get_DeduplicationStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"get_DeduplicationStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Types::DeduplicationStrategy>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::set_DeduplicationStrategy(::Backtrace::Unity::Types::DeduplicationStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"set_DeduplicationStrategy", {}, {::i2c::type_of<::Backtrace::Unity::Types::DeduplicationStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::SetupBatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"SetupBatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Services::BacktraceDatabaseContext::GetHash(::Backtrace::Unity::Model::BacktraceData*  backtraceData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetHash", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, backtraceData);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::GetRecordByHash(::StringW  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetRecordByHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, hash);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::Add(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  backtraceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Add", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, backtraceRecord);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext::Any(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Any", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, record);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext::Any()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Any", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::Delete(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Delete", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::IncrementBatchRetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"IncrementBatchRetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::IncrementBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"IncrementBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::RemoveMaxRetries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"RemoveMaxRetries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Services::BacktraceDatabaseContext::Get()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Get", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::Services::BacktraceDatabaseContext::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::LastOrDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"LastOrDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::FirstOrDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"FirstOrDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::FirstOrDefault(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"FirstOrDefault", {}, {::i2c::type_of<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method, predicate);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::GetFirstRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetFirstRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* Backtrace::Unity::Services::BacktraceDatabaseContext::GetLastRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetLastRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>(this, ___internal_method);
}
inline int64_t Backtrace::Unity::Services::BacktraceDatabaseContext::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Backtrace::Unity::Services::BacktraceDatabaseContext::GetTotalNumberOfRecords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetTotalNumberOfRecords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Services::BacktraceDatabaseContext::GetRecordsToDelete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"GetRecordsToDelete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext::AddDuplicate(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(),
                        {"AddDuplicate", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseContext* Backtrace::Unity::Services::BacktraceDatabaseContext::New_ctor(::Backtrace::Unity::Model::Database::BacktraceDatabaseSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseContext*>(settings));
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext"
constexpr  Backtrace::Unity::Services::BacktraceDatabaseContext::operator ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext* Backtrace::Unity::Services::BacktraceDatabaseContext::i___Backtrace__Unity__Interfaces__IBacktraceDatabaseContext() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceDatabaseContext*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::Services::BacktraceDatabaseContext::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::Services::BacktraceDatabaseContext::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseContext::BacktraceDatabaseContext()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f0880c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0._Any_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::_Any_b__1)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f09fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*>(),
                        {"<Any>b__1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::__cordl_internal_get_record()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* const& Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::__cordl_internal_get_record() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___record;
}
constexpr void Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::__cordl_internal_set_record(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___record = value;
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::_Any_b__1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*>(),
                        {"<Any>b__1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0* Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseContext___c__DisplayClass20_0::BacktraceDatabaseContext___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)()>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f09ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._Any_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_Any_b__20_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f09ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<Any>b__20_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._Get_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_Get_b__26_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f09ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<Get>b__26_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._FirstOrDefault_b__32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_FirstOrDefault_b__32_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f09f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<FirstOrDefault>b__32_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._GetFirstRecord_b__33_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetFirstRecord_b__33_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f09f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetFirstRecord>b__33_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._GetFirstRecord_b__33_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetFirstRecord_b__33_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f09f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetFirstRecord>b__33_1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._GetLastRecord_b__34_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetLastRecord_b__34_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f09f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetLastRecord>b__34_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceDatabaseContext___c._GetLastRecord_b__34_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceDatabaseContext___c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&::Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetLastRecord_b__34_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f09fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetLastRecord>b__34_1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9(::Backtrace::Unity::Services::BacktraceDatabaseContext___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*, "<>9", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(value));
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*, "<>9", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__20_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__20_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__20_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__26_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__26_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__26_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__32_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__32_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__32_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>,::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>*, "<>9__32_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__33_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__33_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__33_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__33_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__33_1(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__33_1", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__33_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__33_1", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__34_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__34_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__34_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__34_0", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::setStaticF___9__34_1(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__34_1", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(std::forward<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*>(value));
}
inline ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::getStaticF___9__34_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*,bool>*, "<>9__34_1", ::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>();
}
inline void Backtrace::Unity::Services::BacktraceDatabaseContext___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::_Any_b__20_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<Any>b__20_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method, n);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::_Get_b__26_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<Get>b__26_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method, n);
}
inline ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>* Backtrace::Unity::Services::BacktraceDatabaseContext___c::_FirstOrDefault_b__32_0(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<FirstOrDefault>b__32_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::List_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>*>(this, ___internal_method, n);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetFirstRecord_b__33_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetFirstRecord>b__33_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetFirstRecord_b__33_1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetFirstRecord>b__33_1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetLastRecord_b__34_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetLastRecord>b__34_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline bool Backtrace::Unity::Services::BacktraceDatabaseContext___c::_GetLastRecord_b__34_1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>(),
                        {"<GetLastRecord>b__34_1", {}, {::i2c::type_of<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Services::BacktraceDatabaseContext___c* Backtrace::Unity::Services::BacktraceDatabaseContext___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceDatabaseContext___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceDatabaseContext___c::BacktraceDatabaseContext___c()   {
}
