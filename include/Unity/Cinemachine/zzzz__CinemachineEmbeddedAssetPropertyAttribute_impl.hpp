#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineEmbeddedAssetPropertyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineEmbeddedAssetPropertyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::*)(bool)>(&::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaeb36fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::__cordl_internal_get_WarnIfNull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnIfNull;
}
constexpr bool const& Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::__cordl_internal_get_WarnIfNull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnIfNull;
}
constexpr void Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::__cordl_internal_set_WarnIfNull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WarnIfNull = value;
}
inline void Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::_ctor(bool  warnIfNull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, warnIfNull);
}
inline ::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute* Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::New_ctor(bool  warnIfNull)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute*>(warnIfNull));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineEmbeddedAssetPropertyAttribute::CinemachineEmbeddedAssetPropertyAttribute()   {
}
