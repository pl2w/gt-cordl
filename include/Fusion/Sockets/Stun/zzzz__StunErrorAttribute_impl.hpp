#pragma once
// IWYU pragma private; include "Fusion/Sockets/Stun/StunErrorAttribute.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__StunErrorAttribute_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunErrorAttribute.get_Code
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::Stun::StunErrorAttribute::*)()>(&::Fusion::Sockets::Stun::StunErrorAttribute::get_Code)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6038e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunErrorAttribute*>(),
                        {"get_Code", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::Stun::StunErrorAttribute.get_ReasonText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::Stun::StunErrorAttribute::*)()>(&::Fusion::Sockets::Stun::StunErrorAttribute::get_ReasonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6038e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunErrorAttribute*>(),
                        {"get_ReasonText", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_get__Code_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Code_k__BackingField;
}
constexpr int32_t const& Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_get__Code_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Code_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_set__Code_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Code_k__BackingField = value;
}
constexpr ::StringW& Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_get__ReasonText_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReasonText_k__BackingField;
}
constexpr ::StringW const& Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_get__ReasonText_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReasonText_k__BackingField;
}
constexpr void Fusion::Sockets::Stun::StunErrorAttribute::__cordl_internal_set__ReasonText_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReasonText_k__BackingField = value;
}
inline int32_t Fusion::Sockets::Stun::StunErrorAttribute::get_Code()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunErrorAttribute*>(),
                        {"get_Code", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Fusion::Sockets::Stun::StunErrorAttribute::get_ReasonText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::Stun::StunErrorAttribute*>(),
                        {"get_ReasonText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::Stun::StunErrorAttribute::StunErrorAttribute()   {
}
