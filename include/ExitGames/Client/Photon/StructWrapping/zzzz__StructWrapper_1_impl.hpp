#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapper_1.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__Pooling_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get__ReturnPool_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReturnPool_k__BackingField;
}
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* const& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get__ReturnPool_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReturnPool_k__BackingField;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set__ReturnPool_k__BackingField(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReturnPool_k__BackingField = value;
}
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_pooling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pooling;
}
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::Pooling const& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_pooling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pooling;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set_pooling(::ExitGames::Client::Photon::StructWrapping::Pooling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pooling = value;
}
template<typename T>
constexpr T& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::setStaticF_staticPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value)  {
::cordl_internals::setStaticField<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, "staticPool", ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(std::forward<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(value));
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::getStaticF_staticPool()  {
return ::cordl_internals::getStaticField<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, "staticPool", ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>();
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::get_ReturnPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(),
                        {"get_ReturnPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::set_ReturnPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(),
                        {"set_ReturnPool", {}, {::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::Pooling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasing);
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing, ::System::Type*  tType, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::Pooling>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::WrappedType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releasing, tType, wType);
}
template<typename T>
inline T ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Unwrap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(),
                        {"Unwrap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline ::StringW ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::ToString(bool  writeTypeInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, writeTypeInfo);
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(releasing));
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling  releasing, ::System::Type*  tType, ::ExitGames::Client::Photon::StructWrapping::WrappedType  wType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(releasing, tType, wType));
}
// Ctor Parameters []
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>::StructWrapper_1()   {
}
