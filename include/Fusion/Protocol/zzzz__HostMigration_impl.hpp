#pragma once
// IWYU pragma private; include "Fusion/Protocol/HostMigration.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_impl.hpp"
#include "Fusion/Protocol/zzzz__HostMigration_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::HostMigration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::HostMigration::*)()>(&::Fusion::Protocol::HostMigration::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6023b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::HostMigration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::HostMigration.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::HostMigration::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::HostMigration::SerializeProtected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6023b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::HostMigration*>(),
                    {::i2c::class_of<::Fusion::Protocol::HostMigration*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::HostMigration.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::HostMigration::*)()>(&::Fusion::Protocol::HostMigration::ToString)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6023b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::HostMigration*>(),
                    {::i2c::class_of<::Fusion::Protocol::HostMigration*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::PeerMode& Fusion::Protocol::HostMigration::__cordl_internal_get_PeerMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr ::Fusion::Protocol::PeerMode const& Fusion::Protocol::HostMigration::__cordl_internal_get_PeerMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr void Fusion::Protocol::HostMigration::__cordl_internal_set_PeerMode(::Fusion::Protocol::PeerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeerMode = value;
}
inline void Fusion::Protocol::HostMigration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::HostMigration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::HostMigration::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::HostMigration*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::HostMigration::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::HostMigration*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::HostMigration* Fusion::Protocol::HostMigration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::HostMigration*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::HostMigration::HostMigration()   {
}
