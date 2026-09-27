#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperPool_1.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__WrappedType_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
constexpr ::System::Type*& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_tType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tType;
}
template<typename T>
constexpr ::System::Type* const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_tType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tType;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_tType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tType = value;
}
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_wType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wType;
}
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::WrappedType const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_wType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wType;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_wType(::ExitGames::Client::Photon::StructWrapping::WrappedType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wType = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>* const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
template<typename T>
constexpr bool& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_isStaticPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStaticPool;
}
template<typename T>
constexpr bool const& ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_get_isStaticPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStaticPool;
}
template<typename T>
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::__cordl_internal_set_isStaticPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStaticPool = value;
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::_ctor(bool  isStaticPool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isStaticPool);
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Acquire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(),
                        {"Acquire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Acquire(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(),
                        {"Acquire", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(this, ___internal_method, value);
}
template<typename T>
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::Release(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::New_ctor(bool  isStaticPool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(isStaticPool));
}
// Ctor Parameters []
template<typename T>
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>::StructWrapperPool_1()   {
}
