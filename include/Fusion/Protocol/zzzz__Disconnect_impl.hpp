#pragma once
// IWYU pragma private; include "Fusion/Protocol/Disconnect.hpp"
#include "Fusion/Protocol/zzzz__DisconnectReason_impl.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__Disconnect_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::Disconnect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Disconnect::*)()>(&::Fusion::Protocol::Disconnect::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60234d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Disconnect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Disconnect.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Disconnect::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Disconnect::SerializeProtected)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60234e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Disconnect*>(),
                    {::i2c::class_of<::Fusion::Protocol::Disconnect*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Disconnect.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Disconnect::*)()>(&::Fusion::Protocol::Disconnect::ToString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x60235a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Disconnect*>(),
                    {::i2c::class_of<::Fusion::Protocol::Disconnect*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::DisconnectReason& Fusion::Protocol::Disconnect::__cordl_internal_get_DisconnectReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectReason;
}
constexpr ::Fusion::Protocol::DisconnectReason const& Fusion::Protocol::Disconnect::__cordl_internal_get_DisconnectReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisconnectReason;
}
constexpr void Fusion::Protocol::Disconnect::__cordl_internal_set_DisconnectReason(::Fusion::Protocol::DisconnectReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisconnectReason = value;
}
inline void Fusion::Protocol::Disconnect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Disconnect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::Disconnect::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Disconnect*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::Disconnect::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Disconnect*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Disconnect* Fusion::Protocol::Disconnect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Disconnect*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::Disconnect::Disconnect()   {
}
