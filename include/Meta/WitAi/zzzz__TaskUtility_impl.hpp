#pragma once
// IWYU pragma private; include "Meta/WitAi/TaskUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__TaskUtility_def.hpp"
#include "Meta/WitAi/zzzz__TaskUtility__WaitForTimeout_d__3_def.hpp"
#include "Meta/WitAi/zzzz__TaskUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TaskUtility.FromAsyncResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::System::IAsyncResult*)>(&::Meta::WitAi::TaskUtility::FromAsyncResult)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9e3d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"FromAsyncResult", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskUtility.StubForTaskFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::Meta::WitAi::TaskUtility::StubForTaskFactory)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e3da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"StubForTaskFactory", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskUtility.FromAsyncOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::UnityEngine::AsyncOperation*)>(&::Meta::WitAi::TaskUtility::FromAsyncOp)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9e3da94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"FromAsyncOp", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskUtility.WaitForTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(int32_t, ::System::Func_1<::System::DateTime>*, ::System::Threading::Tasks::Task*)>(&::Meta::WitAi::TaskUtility::WaitForTimeout)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e3dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"WaitForTimeout", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<::System::DateTime>*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* Meta::WitAi::TaskUtility::FromAsyncResult(::System::IAsyncResult*  asyncResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"FromAsyncResult", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, asyncResult);
}
inline void Meta::WitAi::TaskUtility::StubForTaskFactory(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"StubForTaskFactory", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TaskUtility::FromAsyncOp(::UnityEngine::AsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"FromAsyncOp", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, asyncOperation);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::TaskUtility::WaitForTimeout(int32_t  timeoutMs, ::System::Func_1<::System::DateTime>*  getLastUpdate, ::System::Threading::Tasks::Task*  completionTask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility*>(),
                        {"WaitForTimeout", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<::System::DateTime>*>(), ::i2c::type_of<::System::Threading::Tasks::Task*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, timeoutMs, getLastUpdate, completionTask);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TaskUtility::TaskUtility()   {
}
//  Writing Method size for method: ::Meta::WitAi::TaskUtility___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskUtility___c__DisplayClass2_0::*)()>(&::Meta::WitAi::TaskUtility___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3dc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TaskUtility___c__DisplayClass2_0._FromAsyncOp_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TaskUtility___c__DisplayClass2_0::*)(::UnityEngine::AsyncOperation*)>(&::Meta::WitAi::TaskUtility___c__DisplayClass2_0::_FromAsyncOp_b__0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e3dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility___c__DisplayClass2_0*>(),
                        {"<FromAsyncOp>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::TaskUtility___c__DisplayClass2_0::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::TaskUtility___c__DisplayClass2_0::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
constexpr void Meta::WitAi::TaskUtility___c__DisplayClass2_0::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completion = value;
}
inline void Meta::WitAi::TaskUtility___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::TaskUtility___c__DisplayClass2_0::_FromAsyncOp_b__0(::UnityEngine::AsyncOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TaskUtility___c__DisplayClass2_0*>(),
                        {"<FromAsyncOp>b__0", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::Meta::WitAi::TaskUtility___c__DisplayClass2_0* Meta::WitAi::TaskUtility___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TaskUtility___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TaskUtility___c__DisplayClass2_0::TaskUtility___c__DisplayClass2_0()   {
}
