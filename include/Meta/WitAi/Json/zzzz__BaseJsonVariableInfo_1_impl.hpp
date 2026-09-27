#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/BaseJsonVariableInfo_1.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Json/zzzz__BaseJsonVariableInfo_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__IJsonVariableInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
constexpr T& Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::__cordl_internal_get__info()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____info;
}
template<typename T>
constexpr T const& Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::__cordl_internal_get__info() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____info;
}
template<typename T>
constexpr void Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::__cordl_internal_set__info(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____info = value;
}
template<typename T>
inline void Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::_ctor(T  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
template<typename T>
inline ::StringW Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::IsDefined()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 11}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TAttribute>()}
                            ));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline ::System::Collections::Generic::IEnumerable_1<TAttribute>* Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetCustomAttributes()  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 12}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TAttribute>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TAttribute>*>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<::StringW> Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetSerializeNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetShouldSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::HasGet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::IsGetPublic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetShouldDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::HasSet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::IsSetPublic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Type* Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetVariableType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::GetValue(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
template<typename T>
inline void Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::SetValue(::System::Object*  obj, ::System::Object*  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, newValue);
}
template<typename T>
inline ::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>* Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::New_ctor(T  info)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>*>(info));
}
/// @brief Convert operator to "::Meta::WitAi::Json::IJsonVariableInfo"
template<typename T>
constexpr  Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::operator ::Meta::WitAi::Json::IJsonVariableInfo*() noexcept {
return static_cast<::Meta::WitAi::Json::IJsonVariableInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Json::IJsonVariableInfo"
template<typename T>
constexpr ::Meta::WitAi::Json::IJsonVariableInfo* Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::i___Meta__WitAi__Json__IJsonVariableInfo() noexcept {
return static_cast<::Meta::WitAi::Json::IJsonVariableInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Json::BaseJsonVariableInfo_1<T>::BaseJsonVariableInfo_1()   {
}
