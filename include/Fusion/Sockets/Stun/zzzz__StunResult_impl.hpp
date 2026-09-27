#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunResult.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_impl.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunResult_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.get_PublicEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::Stun::StunResult::*)()>(&::Fusion::Sockets::Stun::StunResult::get_PublicEndPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x603a1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"get_PublicEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.set_PublicEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunResult::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::Stun::StunResult::set_PublicEndPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x603a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"set_PublicEndPoint", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.get_PrivateEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::Stun::StunResult::*)()>(&::Fusion::Sockets::Stun::StunResult::get_PrivateEndPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x603a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"get_PrivateEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.set_PrivateEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunResult::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::Stun::StunResult::set_PrivateEndPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x603a214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"set_PrivateEndPoint", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::Stun::StunResult::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::Stun::StunResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x603a228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.BuildStunResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::Stun::StunResult* (*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::Stun::StunResult::BuildStunResult)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6038c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"BuildStunResult", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunResult.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::Stun::StunResult::*)()>(&::Fusion::Sockets::Stun::StunResult::ToString)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x603a284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                    {::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::Stun::NATType& Fusion::Sockets::Stun::StunResult::__cordl_internal_get_NatType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NatType;
}
constexpr ::Fusion::Sockets::Stun::NATType const& Fusion::Sockets::Stun::StunResult::__cordl_internal_get_NatType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NatType;
}
constexpr void Fusion::Sockets::Stun::StunResult::__cordl_internal_set_NatType(::Fusion::Sockets::Stun::NATType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NatType = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunResult::__cordl_internal_get__PublicEndPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublicEndPoint_k__BackingField;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunResult::__cordl_internal_get__PublicEndPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublicEndPoint_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunResult::__cordl_internal_set__PublicEndPoint_k__BackingField(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PublicEndPoint_k__BackingField = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::Stun::StunResult::__cordl_internal_get__PrivateEndPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrivateEndPoint_k__BackingField;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::Stun::StunResult::__cordl_internal_get__PrivateEndPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PrivateEndPoint_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunResult::__cordl_internal_set__PrivateEndPoint_k__BackingField(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PrivateEndPoint_k__BackingField = value;
}
inline void Fusion::Sockets::Stun::StunResult::setStaticF_Invalid(::Fusion::Sockets::Stun::StunResult*  value)  {
::cordl_internals::setStaticField<::Fusion::Sockets::Stun::StunResult*, "Invalid", ::Fusion::Sockets::Stun::StunResult*>(std::forward<::Fusion::Sockets::Stun::StunResult*>(value));
}
inline ::Fusion::Sockets::Stun::StunResult* Fusion::Sockets::Stun::StunResult::getStaticF_Invalid()  {
return ::cordl_internals::getStaticField<::Fusion::Sockets::Stun::StunResult*, "Invalid", ::Fusion::Sockets::Stun::StunResult*>();
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::Stun::StunResult::get_PublicEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"get_PublicEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunResult::set_PublicEndPoint(::Fusion::Sockets::NetAddress  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"set_PublicEndPoint", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::Stun::StunResult::get_PrivateEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"get_PrivateEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline void Fusion::Sockets::Stun::StunResult::set_PrivateEndPoint(::Fusion::Sockets::NetAddress  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"set_PrivateEndPoint", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Sockets::Stun::StunResult::_ctor(::Fusion::Sockets::NetAddress  publicEndPoint, ::Fusion::Sockets::NetAddress  privateEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, publicEndPoint, privateEndPoint);
}
inline ::Fusion::Sockets::Stun::StunResult* Fusion::Sockets::Stun::StunResult::BuildStunResult(::Fusion::Sockets::NetAddress  publicEndPoint1, ::Fusion::Sockets::NetAddress  publicEndPoint2, ::Fusion::Sockets::NetAddress  privateEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(),
                        {"BuildStunResult", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::Stun::StunResult*>(nullptr, ___internal_method, publicEndPoint1, publicEndPoint2, privateEndPoint);
}
inline ::StringW Fusion::Sockets::Stun::StunResult::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::Stun::StunResult*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Sockets::Stun::StunResult* Fusion::Sockets::Stun::StunResult::New_ctor(::Fusion::Sockets::NetAddress  publicEndPoint, ::Fusion::Sockets::NetAddress  privateEndPoint)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::Stun::StunResult*>(publicEndPoint, privateEndPoint));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunResult::StunResult()   {
}
