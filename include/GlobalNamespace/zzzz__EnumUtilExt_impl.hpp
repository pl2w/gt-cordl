#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumUtilExt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnumUtilExt_def.hpp"
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::StringW GlobalNamespace::EnumUtilExt::GetName(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtilExt*>(),
                    {"GetName", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int32_t GlobalNamespace::EnumUtilExt::GetIndex(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtilExt*>(),
                    {"GetIndex", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int64_t GlobalNamespace::EnumUtilExt::GetLongValue(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtilExt*>(),
                    {"GetLongValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtilExt::GetNextValue(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtilExt*>(),
                    {"GetNextValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnumUtilExt::EnumUtilExt()   {
}
