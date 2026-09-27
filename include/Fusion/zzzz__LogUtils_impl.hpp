#pragma once
// IWYU pragma private; include "Fusion/LogUtils.hpp"
#include "Fusion/zzzz__ILogDumpable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__LogUtils_def.hpp"
#include "Fusion/zzzz__LogUtils_DumpDeferredClass_def.hpp"
#include "Fusion/zzzz__LogUtils_DumpDeferredPtr_1_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::ILogDumpable*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T> Fusion::LogUtils::GetDump(T*  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::LogUtils*>(),
                    {"GetDump", {::i2c::class_of<T>()}, {::i2c::type_of<T*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>>(nullptr, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::ILogDumpable*> && ::cordl_internals::reference_type_constraint<T>)
inline ::GlobalNamespace::LogUtils_DumpDeferredClass Fusion::LogUtils::GetDump(T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::LogUtils*>(),
                    {"GetDump", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LogUtils_DumpDeferredClass>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Fusion::LogUtils::LogUtils()   {
}
