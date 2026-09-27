#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperPools.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPools_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_1_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapperPool_def.hpp"
#include "ExitGames/Client/Photon/StructWrapping/zzzz__StructWrapper_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(uint8_t)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6ef0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Acquire", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Acquire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)(bool)>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6ef14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)()>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa6ef1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::*)()>(&::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa6ef3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*& ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_pools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>* const& ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_pools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::StructWrapping::StructWrapperPool*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pools = value;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>*& ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_used()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___used;
}
constexpr ::System::Collections::Generic::List_1<::System::IDisposable*>* const& ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_get_used() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___used;
}
constexpr void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::__cordl_internal_set_used(::System::Collections::Generic::List_1<::System::IDisposable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___used = value;
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::setStaticF_mappedByteWrappers(::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>, "mappedByteWrappers", ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(std::forward<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>>(value));
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*> ExitGames::Client::Photon::StructWrapping::StructWrapperPools::getStaticF_mappedByteWrappers()  {
return ::cordl_internals::getStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>, "mappedByteWrappers", ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>();
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::setStaticF_mappedBoolWrappers(::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>, "mappedBoolWrappers", ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(std::forward<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>>(value));
}
inline ::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*> ExitGames::Client::Photon::StructWrapping::StructWrapperPools::getStaticF_mappedBoolWrappers()  {
return ::cordl_internals::getStaticField<::ArrayW<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>, "mappedBoolWrappers", ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>();
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::GetPoolForType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                    {"GetPoolForType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Acquire", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<uint8_t>*>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Acquire", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<bool>*>(this, ___internal_method, value);
}
template<typename T>
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Acquire(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                    {"Acquire", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapper_1<T>*>(this, ___internal_method, value);
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::StructWrapping::StructWrapperPools::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools* ExitGames::Client::Photon::StructWrapping::StructWrapperPools::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ExitGames::Client::Photon::StructWrapping::StructWrapperPools*>());
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::StructWrapping::StructWrapperPools::StructWrapperPools()   {
}
