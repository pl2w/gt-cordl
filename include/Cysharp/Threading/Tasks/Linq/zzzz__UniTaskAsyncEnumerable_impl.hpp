#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/UniTaskAsyncEnumerable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__UniTaskAsyncEnumerable_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__IAsyncWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__UniTaskAsyncEnumerable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IConnectableUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskOrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_10_def.hpp"
#include "System/zzzz__Func_11_def.hpp"
#include "System/zzzz__Func_12_def.hpp"
#include "System/zzzz__Func_13_def.hpp"
#include "System/zzzz__Func_14_def.hpp"
#include "System/zzzz__Func_15_def.hpp"
#include "System/zzzz__Func_16_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__Func_6_def.hpp"
#include "System/zzzz__Func_7_def.hpp"
#include "System/zzzz__Func_8_def.hpp"
#include "System/zzzz__Func_9_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae035a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae03748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae038e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae03a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae03be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae03db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae03f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae040d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae04274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.AverageAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae04404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae045f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int64_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae04748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae048e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae04a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae04bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae04da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae04f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae050d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae05278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MinAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae05408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae055f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int64_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae0574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae058e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae05a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae05bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae05dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae05f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae060dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae0627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.MaxAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae0640c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.Range
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* (*)(int32_t, int32_t)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Range)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae065fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Range", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae06748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int64_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae0689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae06a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<double_t> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae06ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae06d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae06f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae070b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae07240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae073dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.SumAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> (*)(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae0756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.EveryUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::EveryUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae07754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"EveryUpdate", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.Timer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, bool)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Timer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae077b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Timer", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.Timer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::System::TimeSpan, ::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, bool)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Timer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae0782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Timer", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.Interval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, bool)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Interval)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae078e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Interval", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.TimerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(int32_t, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TimerFrame)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xae07990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"TimerFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.TimerFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(int32_t, int32_t, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TimerFrame)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae07a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"TimerFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable.IntervalFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(int32_t, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::IntervalFrame)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xae07b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"IntervalFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,TSource>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,TSource,TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,TAccumulate>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Func_2<TAccumulate,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,TAccumulate>*>(), ::i2c::type_of<::System::Func_2<TAccumulate,TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_2<TAccumulate,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Func_2<TAccumulate,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AllAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AllAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AllAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AllAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AllAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AllAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AnyAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AnyAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AnyAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AnyAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AnyAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AnyAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AnyAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AnyAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Append(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TSource  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Append", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, element);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Prepend(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TSource  element)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Prepend", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, element);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AsUniTaskAsyncEnumerable(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AsUniTaskAsyncEnumerable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int32_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int64_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,float_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,double_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Decimal>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"AverageAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::AverageAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"AverageAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Buffer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Buffer", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>*>(nullptr, ___internal_method, source, count);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Buffer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count, int32_t  skip)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Buffer", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Collections::Generic::IList_1<TSource>*>*>(nullptr, ___internal_method, source, count, skip);
}
template<typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Cast(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Cast", {::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source);
}
template<typename T1,typename T2,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::System::Func_3<T1,T2,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::System::Func_3<T1,T2,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, resultSelector);
}
template<typename T1,typename T2,typename T3,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::System::Func_4<T1,T2,T3,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::System::Func_4<T1,T2,T3,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::System::Func_5<T1,T2,T3,T4,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::System::Func_5<T1,T2,T3,T4,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::System::Func_6<T1,T2,T3,T4,T5,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::System::Func_6<T1,T2,T3,T4,T5,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::System::Func_7<T1,T2,T3,T4,T5,T6,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::System::Func_7<T1,T2,T3,T4,T5,T6,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::System::Func_8<T1,T2,T3,T4,T5,T6,T7,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::System::Func_8<T1,T2,T3,T4,T5,T6,T7,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::System::Func_9<T1,T2,T3,T4,T5,T6,T7,T8,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::System::Func_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::System::Func_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::System::Func_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::System::Func_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::System::Func_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*>(), ::i2c::type_of<::System::Func_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, source11, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::System::Func_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*>(), ::i2c::type_of<::System::Func_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, source11, source12, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::System::Func_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*>(), ::i2c::type_of<::System::Func_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, source11, source12, source13, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::System::Func_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*>(), ::i2c::type_of<::System::Func_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, source11, source12, source13, source14, resultSelector);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CombineLatest(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*  source1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*  source2, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*  source3, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*  source4, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*  source5, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*  source6, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*  source7, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*  source8, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*  source9, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*  source10, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*  source11, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*  source12, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*  source13, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*  source14, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*  source15, ::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CombineLatest", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T12>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T13>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T14>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T15>*>(), ::i2c::type_of<::System::Func_16<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source1, source2, source3, source4, source5, source6, source7, source8, source9, source10, source11, source12, source13, source14, source15, resultSelector);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Concat(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Concat", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ContainsAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TSource  value, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ContainsAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, value, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ContainsAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TSource  value, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ContainsAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, source, value, comparer, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CountAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CountAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CountAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CountAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CountAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CountAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::CountAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"CountAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Create(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(nullptr, ___internal_method, create);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DefaultIfEmpty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DefaultIfEmpty", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DefaultIfEmpty(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TSource  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DefaultIfEmpty", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TSource>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, defaultValue);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Distinct(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Distinct", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Distinct(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Distinct", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Distinct(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Distinct", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Distinct(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Distinct", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChanged(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChanged", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChanged(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChanged", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChanged(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChanged", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChanged(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChanged", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChangedAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChangedAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChangedAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChangedAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChangedAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChangedAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::DistinctUntilChangedAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"DistinctUntilChangedAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Do(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Do", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, onNext);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Do(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Do", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, onNext, onError);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Do(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Do", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, onNext, onCompleted);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Do(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Do", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, onNext, onError, onCompleted);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Do(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::IObserver_1<TSource>*  observer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Do", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::IObserver_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, observer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ElementAtAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  index, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ElementAtAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, index, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ElementAtOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  index, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ElementAtOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, index, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Empty()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Empty", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(nullptr, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Except(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Except", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Except(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Except", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstOrDefaultAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstOrDefaultAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::FirstOrDefaultAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"FirstOrDefaultAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_2<TSource,int32_t>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source, ::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Func_3<T,int32_t,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ForEachAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,TResult>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector, comparer);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,TResult>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector, comparer);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TSource>*>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TSource>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, resultSelector, comparer);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_4<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, keySelector, elementSelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoin(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoin", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,TKey>*>(), ::i2c::type_of<::System::Func_2<TInner,TKey>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoin(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoin", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,TKey>*>(), ::i2c::type_of<::System::Func_2<TInner,TKey>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,TResult>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoinAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoinAwait", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoinAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoinAwait", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoinAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_4<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoinAwaitWithCancellation", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::GroupJoinAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_4<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"GroupJoinAwaitWithCancellation", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Intersect(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Intersect", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Intersect(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Intersect", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Join(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Join", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,TKey>*>(), ::i2c::type_of<::System::Func_2<TInner,TKey>*>(), ::i2c::type_of<::System::Func_3<TOuter,TInner,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Join(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,TKey>*  outerKeySelector, ::System::Func_2<TInner,TKey>*  innerKeySelector, ::System::Func_3<TOuter,TInner,TResult>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Join", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,TKey>*>(), ::i2c::type_of<::System::Func_2<TInner,TKey>*>(), ::i2c::type_of<::System::Func_3<TOuter,TInner,TResult>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::JoinAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,TInner,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"JoinAwait", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,TInner,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::JoinAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,TInner,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"JoinAwait", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,TInner,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::JoinAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_4<TOuter,TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"JoinAwaitWithCancellation", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TOuter,TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::JoinAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_4<TOuter,TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"JoinAwaitWithCancellation", {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_4<TOuter,TInner,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TOuter>(), ::i2c::class_of<TInner>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastOrDefaultAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastOrDefaultAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LastOrDefaultAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LastOrDefaultAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LongCountAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LongCountAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LongCountAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LongCountAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LongCountAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LongCountAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::LongCountAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"LongCountAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int32_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int64_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,float_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,double_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Decimal>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MinAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MinAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MinAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int32_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int64_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,float_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,double_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Decimal>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"MaxAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::MaxAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"MaxAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Never()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Never", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(nullptr, ___internal_method);
}
template<typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OfType(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OfType", {::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Object*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderBy(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescending(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescending", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescending(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescending", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescendingAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescendingAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescendingAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescendingAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescendingAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescendingAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::OrderByDescendingAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"OrderByDescendingAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenBy(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenBy(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByAwait(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByAwait(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescending(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescending", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescending(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescending", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescendingAwait(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescendingAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescendingAwait(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescendingAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescendingAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescendingAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ThenByDescendingAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ThenByDescendingAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Pairwise(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Pairwise", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TSource,TSource>>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Publish(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Publish", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Queue(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Queue", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Range(int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Range", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(nullptr, ___internal_method, start, count);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Repeat(TElement  element, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Repeat", {::i2c::class_of<TElement>()}, {::i2c::type_of<TElement>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(nullptr, ___internal_method, element, count);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Return(TValue  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Return", {::i2c::class_of<TValue>()}, {::i2c::type_of<TValue>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*>(nullptr, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Reverse(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Reverse", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Select(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Select", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Select(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,TResult>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Select", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectMany(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectMany", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectMany(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectMany", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectMany(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  collectionSelector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectMany", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectMany(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*  collectionSelector, ::System::Func_3<TSource,TCollection,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectMany", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  collectionSelector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  collectionSelector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwait", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, selector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  collectionSelector, ::System::Func_4<TSource,TCollection,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_4<TSource,TCollection,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SelectManyAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  collectionSelector, ::System::Func_4<TSource,TCollection,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SelectManyAwaitWithCancellation", {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_4<TSource,TCollection,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TCollection>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, source, collectionSelector, resultSelector);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SequenceEqualAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SequenceEqualAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, first, second, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SequenceEqualAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SequenceEqualAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, first, second, comparer, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleOrDefaultAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleOrDefaultAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleOrDefaultAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleOrDefaultAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SingleOrDefaultAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SingleOrDefaultAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Skip(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Skip", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, count);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipLast(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipLast", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, count);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipUntil(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipUntil", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, other);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipUntil(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipUntil", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, other);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipUntilCanceled(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipUntilCanceled", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhile(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhile", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhile(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhile", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhileAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhileAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhileAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhileAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhileAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhileAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SkipWhileAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SkipWhileAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, action);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, action);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, action);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onError);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onError);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onError, cancellationToken);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onError, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onError);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onError, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onError);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onError, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onCompleted);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onCompleted);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onCompleted, cancellationToken);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*  onNext, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTaskVoid>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onCompleted);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action*  onCompleted)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, onNext, onCompleted);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SubscribeAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  onNext, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SubscribeAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, onNext, onCompleted, cancellationToken);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::IObserver_1<TSource>*  observer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::IObserver_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method, source, observer);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Subscribe(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::IObserver_1<TSource>*  observer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Subscribe", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::IObserver_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, observer, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int32_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,int64_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,int64_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<int64_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int64_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,float_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,double_t>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,double_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<double_t> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<double_t>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Decimal>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Decimal>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Decimal>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int32_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int32_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int32_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<int64_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<int64_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<int64_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<float_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<float_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<float_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<double_t>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<double_t>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<double_t>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"SumAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Nullable_1<::System::Decimal>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::SumAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"SumAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Nullable_1<::System::Decimal>>>(nullptr, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Take(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Take", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, count);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeLast(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeLast", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, count);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeUntil(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeUntil", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, other);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeUntil(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeUntil", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, other);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeUntilCanceled(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeUntilCanceled", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhile(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhile", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhile(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhile", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhileAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhileAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhileAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhileAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhileAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhileAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TakeWhileAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"TakeWhileAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Throw(::System::Exception*  exception)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Throw", {::i2c::class_of<TValue>()}, {::i2c::type_of<::System::Exception*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*>(nullptr, ___internal_method, exception);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<TSource>> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToArrayAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToArrayAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<TSource>>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::HashSet_1<TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToHashSetAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToHashSetAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::HashSet_1<TSource>*>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::HashSet_1<TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToHashSetAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToHashSetAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::HashSet_1<TSource>*>>(nullptr, ___internal_method, source, comparer, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToListAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToListAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<TSource>*>>(nullptr, ___internal_method, source, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource>
inline ::System::IObservable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToObservable(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToObservable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToUniTaskAsyncEnumerable(::System::Collections::Generic::IEnumerable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToUniTaskAsyncEnumerable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToUniTaskAsyncEnumerable(::System::Threading::Tasks::Task_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToUniTaskAsyncEnumerable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::Threading::Tasks::Task_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToUniTaskAsyncEnumerable(::Cysharp::Threading::Tasks::UniTask_1<TSource>  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToUniTaskAsyncEnumerable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<TSource>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ToUniTaskAsyncEnumerable(::System::IObservable_1<TSource>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ToUniTaskAsyncEnumerable", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::IObservable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Union(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Union", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Union(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  second, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Union", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, first, second, comparer);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::EveryUpdate(::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"EveryUpdate", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, updateTiming);
}
template<typename TTarget,typename TProperty>
requires(::cordl_internals::reference_type_constraint<TTarget>)
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::EveryValueChanged(TTarget  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"EveryValueChanged", {::i2c::class_of<TTarget>(), ::i2c::class_of<TProperty>()}, {::i2c::type_of<TTarget>(), ::i2c::type_of<::System::Func_2<TTarget,TProperty>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TProperty>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TTarget>(), ::i2c::class_of<TProperty>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>*>(nullptr, ___internal_method, target, propertySelector, monitorTiming, equalityComparer);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Timer(::System::TimeSpan  dueTime, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Timer", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, dueTime, updateTiming, ignoreTimeScale);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Timer(::System::TimeSpan  dueTime, ::System::TimeSpan  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Timer", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, dueTime, period, updateTiming, ignoreTimeScale);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Interval(::System::TimeSpan  period, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming, bool  ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"Interval", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, period, updateTiming, ignoreTimeScale);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TimerFrame(int32_t  dueTimeFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"TimerFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, dueTimeFrameCount, updateTiming);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::TimerFrame(int32_t  dueTimeFrameCount, int32_t  periodFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"TimerFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, dueTimeFrameCount, periodFrameCount, updateTiming);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::IntervalFrame(int32_t  intervalFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  updateTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                        {"IntervalFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, intervalFrameCount, updateTiming);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Where(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Where", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Where(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,bool>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Where", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,bool>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::WhereAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"WhereAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::WhereAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"WhereAwait", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::WhereAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"WhereAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::WhereAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"WhereAwaitWithCancellation", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(nullptr, ___internal_method, source, predicate);
}
template<typename TFirst,typename TSecond>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TFirst,TSecond>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Zip(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Zip", {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::ValueTuple_2<TFirst,TSecond>>*>(nullptr, ___internal_method, first, second);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::Zip(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_3<TFirst,TSecond,TResult>*  resultSelector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"Zip", {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>(), ::i2c::type_of<::System::Func_3<TFirst,TSecond,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, first, second, resultSelector);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ZipAwait(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_3<TFirst,TSecond,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ZipAwait", {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>(), ::i2c::type_of<::System::Func_3<TFirst,TSecond,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, first, second, selector);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::ZipAwaitWithCancellation(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable*>(),
                    {"ZipAwaitWithCancellation", {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>(), ::i2c::type_of<::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFirst>(), ::i2c::class_of<TSecond>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(nullptr, ___internal_method, first, second, selector);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable::UniTaskAsyncEnumerable()   {
}
template<typename TFirst,typename TSecond>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>(value));
}
template<typename TFirst,typename TSecond>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>();
}
template<typename TFirst,typename TSecond>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::setStaticF___9__467_0(::System::Func_3<TFirst,TSecond,::System::ValueTuple_2<TFirst,TSecond>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TFirst,TSecond,::System::ValueTuple_2<TFirst,TSecond>>*, "<>9__467_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>(std::forward<::System::Func_3<TFirst,TSecond,::System::ValueTuple_2<TFirst,TSecond>>*>(value));
}
template<typename TFirst,typename TSecond>
inline ::System::Func_3<TFirst,TSecond,::System::ValueTuple_2<TFirst,TSecond>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::getStaticF___9__467_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TFirst,TSecond,::System::ValueTuple_2<TFirst,TSecond>>*, "<>9__467_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>();
}
template<typename TFirst,typename TSecond>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TFirst,typename TSecond>
inline ::System::ValueTuple_2<TFirst,TSecond> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::_Zip_b__467_0(TFirst  x, TSecond  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>(),
                        {"<Zip>b__467_0", {}, {::i2c::type_of<TFirst>(), ::i2c::type_of<TSecond>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<TFirst,TSecond>>(this, ___internal_method, x, y);
}
template<typename TFirst,typename TSecond>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>*>());
}
// Ctor Parameters []
template<typename TFirst,typename TSecond>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__467_2<TFirst,TSecond>::UniTaskAsyncEnumerable___c__467_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::setStaticF___9__314_0(::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__314_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>(std::forward<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::getStaticF___9__314_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__314_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::_SelectManyAwaitWithCancellation_b__314_0(TSource  x, TResult  y, ::System::Threading::CancellationToken  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>(),
                        {"<SelectManyAwaitWithCancellation>b__314_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(this, ___internal_method, x, y, c);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__314_2<TSource,TResult>::UniTaskAsyncEnumerable___c__314_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::setStaticF___9__313_0(::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__313_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>(std::forward<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::getStaticF___9__313_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<TSource,TResult,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__313_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::_SelectManyAwaitWithCancellation_b__313_0(TSource  x, TResult  y, ::System::Threading::CancellationToken  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>(),
                        {"<SelectManyAwaitWithCancellation>b__313_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(this, ___internal_method, x, y, c);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__313_2<TSource,TResult>::UniTaskAsyncEnumerable___c__313_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::setStaticF___9__310_0(::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__310_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>(std::forward<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::getStaticF___9__310_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__310_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::_SelectManyAwait_b__310_0(TSource  x, TResult  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>(),
                        {"<SelectManyAwait>b__310_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(this, ___internal_method, x, y);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__310_2<TSource,TResult>::UniTaskAsyncEnumerable___c__310_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::setStaticF___9__309_0(::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__309_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>(std::forward<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::getStaticF___9__309_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,TResult,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*, "<>9__309_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::_SelectManyAwait_b__309_0(TSource  x, TResult  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>(),
                        {"<SelectManyAwait>b__309_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(this, ___internal_method, x, y);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__309_2<TSource,TResult>::UniTaskAsyncEnumerable___c__309_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::setStaticF___9__306_0(::System::Func_3<TSource,TResult,TResult>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,TResult,TResult>*, "<>9__306_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>(std::forward<::System::Func_3<TSource,TResult,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_3<TSource,TResult,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::getStaticF___9__306_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,TResult,TResult>*, "<>9__306_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::_SelectMany_b__306_0(TSource  x, TResult  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>(),
                        {"<SelectMany>b__306_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, x, y);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__306_2<TSource,TResult>::UniTaskAsyncEnumerable___c__306_2()   {
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::setStaticF___9__305_0(::System::Func_3<TSource,TResult,TResult>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,TResult,TResult>*, "<>9__305_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>(std::forward<::System::Func_3<TSource,TResult,TResult>*>(value));
}
template<typename TSource,typename TResult>
inline ::System::Func_3<TSource,TResult,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::getStaticF___9__305_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,TResult,TResult>*, "<>9__305_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>();
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::_SelectMany_b__305_0(TSource  x, TResult  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>(),
                        {"<SelectMany>b__305_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, x, y);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__305_2<TSource,TResult>::UniTaskAsyncEnumerable___c__305_2()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::setStaticF___9__150_0(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__150_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>(std::forward<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::getStaticF___9__150_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__150_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::_GroupByAwaitWithCancellation_b__150_0(TSource  x, ::System::Threading::CancellationToken  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>(),
                        {"<GroupByAwaitWithCancellation>b__150_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x, _);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__150_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__150_3()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::setStaticF___9__148_0(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__148_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>(std::forward<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::getStaticF___9__148_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__148_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::_GroupByAwaitWithCancellation_b__148_0(TSource  x, ::System::Threading::CancellationToken  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>(),
                        {"<GroupByAwaitWithCancellation>b__148_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x, _);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__148_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__148_3()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::setStaticF___9__145_0(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__145_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>(std::forward<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::getStaticF___9__145_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__145_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::_GroupByAwaitWithCancellation_b__145_0(TSource  x, ::System::Threading::CancellationToken  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>(),
                        {"<GroupByAwaitWithCancellation>b__145_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x, _);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__145_2<TSource,TKey>::UniTaskAsyncEnumerable___c__145_2()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::setStaticF___9__144_0(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__144_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>(std::forward<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::getStaticF___9__144_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__144_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::_GroupByAwaitWithCancellation_b__144_0(TSource  x, ::System::Threading::CancellationToken  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>(),
                        {"<GroupByAwaitWithCancellation>b__144_0", {}, {::i2c::type_of<TSource>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x, _);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__144_2<TSource,TKey>::UniTaskAsyncEnumerable___c__144_2()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::setStaticF___9__142_0(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__142_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>(std::forward<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::getStaticF___9__142_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__142_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::_GroupByAwait_b__142_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>(),
                        {"<GroupByAwait>b__142_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__142_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__142_3()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::setStaticF___9__140_0(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__140_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>(std::forward<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::getStaticF___9__140_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__140_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::_GroupByAwait_b__140_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>(),
                        {"<GroupByAwait>b__140_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__140_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__140_3()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::setStaticF___9__137_0(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__137_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>(std::forward<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::getStaticF___9__137_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__137_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::_GroupByAwait_b__137_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>(),
                        {"<GroupByAwait>b__137_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__137_2<TSource,TKey>::UniTaskAsyncEnumerable___c__137_2()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::setStaticF___9__136_0(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__136_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>(std::forward<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::getStaticF___9__136_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*, "<>9__136_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::_GroupByAwait_b__136_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>(),
                        {"<GroupByAwait>b__136_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(this, ___internal_method, x);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__136_2<TSource,TKey>::UniTaskAsyncEnumerable___c__136_2()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::setStaticF___9__133_0(::System::Func_2<TSource,TSource>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,TSource>*, "<>9__133_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>(std::forward<::System::Func_2<TSource,TSource>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_2<TSource,TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::getStaticF___9__133_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,TSource>*, "<>9__133_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline TSource Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::_GroupBy_b__133_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>(),
                        {"<GroupBy>b__133_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method, x);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__133_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__133_3()   {
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::setStaticF___9__132_0(::System::Func_2<TSource,TSource>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,TSource>*, "<>9__132_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>(std::forward<::System::Func_2<TSource,TSource>*>(value));
}
template<typename TSource,typename TKey,typename TResult>
inline ::System::Func_2<TSource,TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::getStaticF___9__132_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,TSource>*, "<>9__132_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>();
}
template<typename TSource,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TResult>
inline TSource Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::_GroupBy_b__132_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>(),
                        {"<GroupBy>b__132_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method, x);
}
template<typename TSource,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__132_3<TSource,TKey,TResult>::UniTaskAsyncEnumerable___c__132_3()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::setStaticF___9__129_0(::System::Func_2<TSource,TSource>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,TSource>*, "<>9__129_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>(std::forward<::System::Func_2<TSource,TSource>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_2<TSource,TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::getStaticF___9__129_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,TSource>*, "<>9__129_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline TSource Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::_GroupBy_b__129_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>(),
                        {"<GroupBy>b__129_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method, x);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__129_2<TSource,TKey>::UniTaskAsyncEnumerable___c__129_2()   {
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::setStaticF___9(::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>(std::forward<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>(value));
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*, "<>9", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::setStaticF___9__128_0(::System::Func_2<TSource,TSource>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<TSource,TSource>*, "<>9__128_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>(std::forward<::System::Func_2<TSource,TSource>*>(value));
}
template<typename TSource,typename TKey>
inline ::System::Func_2<TSource,TSource>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::getStaticF___9__128_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<TSource,TSource>*, "<>9__128_0", ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>();
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline TSource Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::_GroupBy_b__128_0(TSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>(),
                        {"<GroupBy>b__128_0", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method, x);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>*>());
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::UniTaskAsyncEnumerable___c__128_2<TSource,TKey>::UniTaskAsyncEnumerable___c__128_2()   {
}
