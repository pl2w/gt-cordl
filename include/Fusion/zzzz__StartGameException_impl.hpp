#pragma once
// IWYU pragma private; include "Fusion/StartGameException.hpp"
#include "Fusion/zzzz__ShutdownReason_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Fusion/zzzz__StartGameException_def.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
//  Writing Method size for method: ::Fusion::StartGameException.get_ShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ShutdownReason (::Fusion::StartGameException::*)()>(&::Fusion::StartGameException::get_ShutdownReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdca5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {"get_ShutdownReason", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameException.set_ShutdownReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameException::*)(::Fusion::ShutdownReason)>(&::Fusion::StartGameException::set_ShutdownReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fdca64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {"set_ShutdownReason", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::StartGameException::*)(::Fusion::ShutdownReason, ::StringW)>(&::Fusion::StartGameException::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5fd447c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::StartGameException.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::StartGameException::*)()>(&::Fusion::StartGameException::ToString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5fdca6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::StartGameException*>(),
                    {::i2c::class_of<::Fusion::StartGameException*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::ShutdownReason& Fusion::StartGameException::__cordl_internal_get__ShutdownReason_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShutdownReason_k__BackingField;
}
constexpr ::Fusion::ShutdownReason const& Fusion::StartGameException::__cordl_internal_get__ShutdownReason_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShutdownReason_k__BackingField;
}
constexpr void Fusion::StartGameException::__cordl_internal_set__ShutdownReason_k__BackingField(::Fusion::ShutdownReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShutdownReason_k__BackingField = value;
}
inline ::Fusion::ShutdownReason Fusion::StartGameException::get_ShutdownReason()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {"get_ShutdownReason", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ShutdownReason>(this, ___internal_method);
}
inline void Fusion::StartGameException::set_ShutdownReason(::Fusion::ShutdownReason  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {"set_ShutdownReason", {}, {::i2c::type_of<::Fusion::ShutdownReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::StartGameException::_ctor(::Fusion::ShutdownReason  shutdownReason, ::StringW  customMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::StartGameException*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ShutdownReason>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shutdownReason, customMsg);
}
inline ::StringW Fusion::StartGameException::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::StartGameException*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::StartGameException* Fusion::StartGameException::New_ctor(::Fusion::ShutdownReason  shutdownReason, ::StringW  customMsg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::StartGameException*>(shutdownReason, customMsg));
}
// Ctor Parameters []
constexpr ::Fusion::StartGameException::StartGameException()   {
}
