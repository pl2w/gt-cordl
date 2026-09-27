#pragma once
// IWYU pragma private; include "GlobalNamespace/JSonHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__JSonHelper_def.hpp"
#include "GlobalNamespace/zzzz__JSonHelper_def.hpp"
template<typename T>
inline ::ArrayW<T> GlobalNamespace::JSonHelper::FromJson(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JSonHelper*>(),
                    {"FromJson", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, json);
}
template<typename T>
inline ::StringW GlobalNamespace::JSonHelper::ToJson(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JSonHelper*>(),
                    {"ToJson", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, array);
}
template<typename T>
inline ::StringW GlobalNamespace::JSonHelper::ToJson(::ArrayW<T>  array, bool  prettyPrint)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::JSonHelper*>(),
                    {"ToJson", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, array, prettyPrint);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JSonHelper::JSonHelper()   {
}
template<typename T>
constexpr ::ArrayW<T>& GlobalNamespace::JSonHelper_Wrapper_1<T>::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr ::ArrayW<T> const& GlobalNamespace::JSonHelper_Wrapper_1<T>::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
template<typename T>
constexpr void GlobalNamespace::JSonHelper_Wrapper_1<T>::__cordl_internal_set_Items(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Items = value;
}
template<typename T>
inline void GlobalNamespace::JSonHelper_Wrapper_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JSonHelper_Wrapper_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::JSonHelper_Wrapper_1<T>* GlobalNamespace::JSonHelper_Wrapper_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::JSonHelper_Wrapper_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::JSonHelper_Wrapper_1<T>::JSonHelper_Wrapper_1()   {
}
