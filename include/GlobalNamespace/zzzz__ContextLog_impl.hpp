#pragma once
// IWYU pragma private; include "GlobalNamespace/ContextLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ContextLog_def.hpp"
template<typename T0,typename T1>
inline void GlobalNamespace::ContextLog::Log(T0  ctx, T1  arg1)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ContextLog*>(),
                    {"Log", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<T0>(), ::i2c::type_of<T1>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx, arg1);
}
template<typename T0,typename T1>
inline void GlobalNamespace::ContextLog::LogCall(T0  ctx, T1  arg1, /* [CallerMemberName] */ ::StringW  call)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ContextLog*>(),
                    {"LogCall", {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}, {::i2c::type_of<T0>(), ::i2c::type_of<T1>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx, arg1, call);
}
template<typename T>
inline ::StringW GlobalNamespace::ContextLog::GetPrefix(::by_ref<T>  ctx)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ContextLog*>(),
                    {"GetPrefix", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ctx);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContextLog::ContextLog()   {
}
