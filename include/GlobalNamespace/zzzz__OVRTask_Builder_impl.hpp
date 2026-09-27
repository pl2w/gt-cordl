#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_Builder.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_Builder_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRTask_Builder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRTask_Builder::*)(::GlobalNamespace::OVRPlugin_Result, ::System::Guid)>(&::GlobalNamespace::OVRTask_Builder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa658990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRTask_Builder.ToTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRTask_Builder::*)()>(&::GlobalNamespace::OVRTask_Builder::ToTask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa658bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                        {"ToTask", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRTask_Builder::_ctor(::GlobalNamespace::OVRPlugin_Result  synchronousResult, ::System::Guid  taskId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, synchronousResult, taskId);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRTask_Builder::ToTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                        {"ToTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(*this, ___internal_method);
}
template<typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<TStatus> GlobalNamespace::OVRTask_Builder::ToTask()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                    {"ToTask", {::i2c::class_of<TStatus>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStatus>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TStatus>>(*this, ___internal_method);
}
template<typename TResult>
inline ::GlobalNamespace::OVRTask_1<TResult> GlobalNamespace::OVRTask_Builder::ToTask(TResult  failureValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                    {"ToTask", {::i2c::class_of<TResult>()}, {::i2c::type_of<TResult>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<TResult>>(*this, ___internal_method, failureValue);
}
template<typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>> GlobalNamespace::OVRTask_Builder::ToResultTask()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                    {"ToResultTask", {::i2c::class_of<TStatus>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TStatus>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<TStatus>>>(*this, ___internal_method);
}
template<typename TValue,typename TStatus>
requires(::cordl_internals::value_type_constraint<TStatus> && ::cordl_internals::default_constructor_constraint<TStatus>)
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>> GlobalNamespace::OVRTask_Builder::ToTask()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                    {"ToTask", {::i2c::class_of<TValue>(), ::i2c::class_of<TStatus>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TStatus>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<TValue,TStatus>>>(*this, ___internal_method);
}
template<typename TResult>
requires(::cordl_internals::value_type_constraint<TResult> && ::cordl_internals::default_constructor_constraint<TResult>)
inline TResult GlobalNamespace::OVRTask_Builder::CastResult()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRTask_Builder>(),
                    {"CastResult", {::i2c::class_of<TResult>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<TResult>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_synchronousResult", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_taskId", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTask_Builder::OVRTask_Builder(::GlobalNamespace::OVRPlugin_Result  _synchronousResult, ::System::Guid  _taskId) noexcept  {
this->_synchronousResult = _synchronousResult;
this->_taskId = _taskId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTask_Builder::OVRTask_Builder()   {
}
