#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HideIfNoComponentAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Unity/Cinemachine/zzzz__HideIfNoComponentAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::HideIfNoComponentAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::HideIfNoComponentAttribute::*)(::System::Type*)>(&::Unity::Cinemachine::HideIfNoComponentAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeb35e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HideIfNoComponentAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Cinemachine::HideIfNoComponentAttribute::__cordl_internal_get_ComponentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComponentType;
}
constexpr ::System::Type* const& Unity::Cinemachine::HideIfNoComponentAttribute::__cordl_internal_get_ComponentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ComponentType;
}
constexpr void Unity::Cinemachine::HideIfNoComponentAttribute::__cordl_internal_set_ComponentType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ComponentType = value;
}
inline void Unity::Cinemachine::HideIfNoComponentAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::HideIfNoComponentAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::Unity::Cinemachine::HideIfNoComponentAttribute* Unity::Cinemachine::HideIfNoComponentAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::HideIfNoComponentAttribute*>(type));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::HideIfNoComponentAttribute::HideIfNoComponentAttribute()   {
}
