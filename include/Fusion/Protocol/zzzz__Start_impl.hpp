#pragma once
// IWYU pragma private; include "Fusion/Protocol/Start.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__StartRequests_impl.hpp"
#include "Fusion/Protocol/zzzz__Start_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::Start._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Start::*)()>(&::Fusion::Protocol::Start::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6025928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Start*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Start.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Start::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Start::SerializeProtected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6025934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Start*>(),
                    {::i2c::class_of<::Fusion::Protocol::Start*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Start.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Start::*)()>(&::Fusion::Protocol::Start::ToString)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6025988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Start*>(),
                    {::i2c::class_of<::Fusion::Protocol::Start*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::Start::__cordl_internal_get_RemoteServerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteServerID;
}
constexpr int32_t const& Fusion::Protocol::Start::__cordl_internal_get_RemoteServerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteServerID;
}
constexpr void Fusion::Protocol::Start::__cordl_internal_set_RemoteServerID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoteServerID = value;
}
constexpr ::Fusion::Protocol::StartRequests& Fusion::Protocol::Start::__cordl_internal_get_StartRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartRequests;
}
constexpr ::Fusion::Protocol::StartRequests const& Fusion::Protocol::Start::__cordl_internal_get_StartRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartRequests;
}
constexpr void Fusion::Protocol::Start::__cordl_internal_set_StartRequests(::Fusion::Protocol::StartRequests  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartRequests = value;
}
inline void Fusion::Protocol::Start::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Start*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::Start::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Start*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::Start::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Start*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Start* Fusion::Protocol::Start::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Start*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::Start::Start()   {
}
