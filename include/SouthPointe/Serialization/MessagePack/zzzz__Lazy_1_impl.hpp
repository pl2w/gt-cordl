#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Lazy_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Object*& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_padlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padlock;
}
template<typename T>
constexpr ::System::Object* const& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_padlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___padlock;
}
template<typename T>
constexpr void SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_set_padlock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___padlock = value;
}
template<typename T>
constexpr ::System::Func_1<T>*& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_createValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createValue;
}
template<typename T>
constexpr ::System::Func_1<T>* const& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_createValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___createValue;
}
template<typename T>
constexpr void SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_set_createValue(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___createValue = value;
}
template<typename T>
constexpr bool& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_isValueCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValueCreated;
}
template<typename T>
constexpr bool const& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_isValueCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isValueCreated;
}
template<typename T>
constexpr void SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_set_isValueCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isValueCreated = value;
}
template<typename T>
constexpr T& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void SouthPointe::Serialization::MessagePack::Lazy_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline T SouthPointe::Serialization::MessagePack::Lazy_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Lazy_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void SouthPointe::Serialization::MessagePack::Lazy_1<T>::_ctor(::System::Func_1<T>*  createValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Lazy_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createValue);
}
template<typename T>
inline ::StringW SouthPointe::Serialization::MessagePack::Lazy_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::SouthPointe::Serialization::MessagePack::Lazy_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::SouthPointe::Serialization::MessagePack::Lazy_1<T>* SouthPointe::Serialization::MessagePack::Lazy_1<T>::New_ctor(::System::Func_1<T>*  createValue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::Lazy_1<T>*>(createValue));
}
// Ctor Parameters []
template<typename T>
constexpr ::SouthPointe::Serialization::MessagePack::Lazy_1<T>::Lazy_1()   {
}
