#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/HashSetConverter_1.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_impl.hpp"
#include "Meta/WitAi/Json/zzzz__HashSetConverter_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline bool Meta::WitAi::Json::HashSetConverter_1<T>::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::HashSetConverter_1<T>::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Meta::WitAi::Json::HashSetConverter_1<T>::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template<typename T>
inline ::System::Object* Meta::WitAi::Json::HashSetConverter_1<T>::ReadJson(::Meta::WitAi::Json::WitResponseNode*  serializer, ::System::Type*  objectType, ::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serializer, objectType, existingValue);
}
template<typename T>
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::HashSetConverter_1<T>::WriteJson(::System::Object*  existingValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(this, ___internal_method, existingValue);
}
template<typename T>
inline void Meta::WitAi::Json::HashSetConverter_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::HashSetConverter_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::WitAi::Json::HashSetConverter_1<T>* Meta::WitAi::Json::HashSetConverter_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::HashSetConverter_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::WitAi::Json::HashSetConverter_1<T>::HashSetConverter_1()   {
}
