#pragma once
// IWYU pragma private; include "GorillaExtensions/JsonObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__JsonObjectExtensions_def.hpp"
#include "PlayFab/Json/zzzz__JsonObject_def.hpp"
template<typename T>
inline T GorillaExtensions::JsonObjectExtensions::GetValue(::PlayFab::Json::JsonObject*  obj, ::StringW  key)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::JsonObjectExtensions*>(),
                    {"GetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::PlayFab::Json::JsonObject*>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj, key);
}
template<typename T>
inline bool GorillaExtensions::JsonObjectExtensions::TryGetValue(::PlayFab::Json::JsonObject*  obj, ::StringW  key, /* [Nullable(2)] */ ::by_ref<T>  t)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::JsonObjectExtensions*>(),
                    {"TryGetValue", {::i2c::class_of<T>()}, {::i2c::type_of<::PlayFab::Json::JsonObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, key, t);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::JsonObjectExtensions::JsonObjectExtensions()   {
}
