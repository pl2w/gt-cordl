#pragma once
// IWYU pragma private; include "Fusion/Protocol/PlayerRefMapping.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__PlayerRefMapping_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::PlayerRefMapping.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::PlayerRefMapping::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::PlayerRefMapping::SerializeProtected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x602463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(),
                    {::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::PlayerRefMapping.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::PlayerRefMapping::*)()>(&::Fusion::Protocol::PlayerRefMapping::ToString)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6024688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(),
                    {::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::PlayerRefMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::PlayerRefMapping::*)()>(&::Fusion::Protocol::PlayerRefMapping::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x602499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_ActorId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActorId;
}
constexpr int32_t const& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_ActorId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActorId;
}
constexpr void Fusion::Protocol::PlayerRefMapping::__cordl_internal_set_ActorId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActorId = value;
}
constexpr int32_t& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_PlayerRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRef;
}
constexpr int32_t const& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_PlayerRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRef;
}
constexpr void Fusion::Protocol::PlayerRefMapping::__cordl_internal_set_PlayerRef(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerRef = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_UniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::PlayerRefMapping::__cordl_internal_get_UniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr void Fusion::Protocol::PlayerRefMapping::__cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueId = value;
}
inline void Fusion::Protocol::PlayerRefMapping::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::PlayerRefMapping::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Protocol::PlayerRefMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::PlayerRefMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Protocol::PlayerRefMapping* Fusion::Protocol::PlayerRefMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::PlayerRefMapping*>());
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::PlayerRefMapping::PlayerRefMapping()   {
}
