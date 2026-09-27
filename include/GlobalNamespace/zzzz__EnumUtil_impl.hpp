#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnumUtil_def.hpp"
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::ArrayW<::StringW> GlobalNamespace::EnumUtil::GetNames()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetNames", {::i2c::class_of<TEnum>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::ArrayW<TEnum> GlobalNamespace::EnumUtil::GetValues()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetValues", {::i2c::class_of<TEnum>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TEnum>>(nullptr, ___internal_method);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::ArrayW<int64_t> GlobalNamespace::EnumUtil::GetLongValues()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetLongValues", {::i2c::class_of<TEnum>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int64_t>>(nullptr, ___internal_method);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::StringW GlobalNamespace::EnumUtil::EnumToName(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"EnumToName", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::NameToEnum(::StringW  n)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"NameToEnum", {::i2c::class_of<TEnum>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, n);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int32_t GlobalNamespace::EnumUtil::EnumToIndex(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"EnumToIndex", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::IndexToEnum(int32_t  i)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"IndexToEnum", {::i2c::class_of<TEnum>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, i);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int64_t GlobalNamespace::EnumUtil::EnumToLong(TEnum  e)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"EnumToLong", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, e);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::LongToEnum(int64_t  l)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"LongToEnum", {::i2c::class_of<TEnum>()}, {::i2c::type_of<int64_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, l);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::GetValue(int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, index);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int32_t GlobalNamespace::EnumUtil::GetIndex(TEnum  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetIndex", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::StringW GlobalNamespace::EnumUtil::GetName(TEnum  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetName", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::GetValue(::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, name);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline int64_t GlobalNamespace::EnumUtil::GetLongValue(TEnum  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetLongValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline TEnum GlobalNamespace::EnumUtil::GetValue(int64_t  longValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"GetValue", {::i2c::class_of<TEnum>()}, {::i2c::type_of<int64_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, longValue);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::ArrayW<TEnum> GlobalNamespace::EnumUtil::SplitBitmask(TEnum  bitmask)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"SplitBitmask", {::i2c::class_of<TEnum>()}, {::i2c::type_of<TEnum>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TEnum>>(nullptr, ___internal_method, bitmask);
}
template<typename TEnum>
requires(::cordl_internals::value_type_constraint<TEnum> && ::cordl_internals::default_constructor_constraint<TEnum>)
inline ::ArrayW<TEnum> GlobalNamespace::EnumUtil::SplitBitmask(int64_t  bitmaskLong)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::EnumUtil*>(),
                    {"SplitBitmask", {::i2c::class_of<TEnum>()}, {::i2c::type_of<int64_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TEnum>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TEnum>>(nullptr, ___internal_method, bitmaskLong);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnumUtil::EnumUtil()   {
}
