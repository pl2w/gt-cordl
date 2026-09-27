#pragma once
// IWYU pragma private; include "Oculus/Interaction/InterfaceAttribute.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Oculus/Interaction/zzzz__InterfaceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InterfaceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InterfaceAttribute::*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::Oculus::Interaction::InterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa48e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InterfaceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InterfaceAttribute::*)(::StringW)>(&::Oculus::Interaction::InterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa48e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& Oculus::Interaction::InterfaceAttribute::__cordl_internal_get_Types()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Types;
}
constexpr ::ArrayW<::System::Type*> const& Oculus::Interaction::InterfaceAttribute::__cordl_internal_get_Types() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Types;
}
constexpr void Oculus::Interaction::InterfaceAttribute::__cordl_internal_set_Types(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Types = value;
}
constexpr ::StringW& Oculus::Interaction::InterfaceAttribute::__cordl_internal_get_TypeFromFieldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeFromFieldName;
}
constexpr ::StringW const& Oculus::Interaction::InterfaceAttribute::__cordl_internal_get_TypeFromFieldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeFromFieldName;
}
constexpr void Oculus::Interaction::InterfaceAttribute::__cordl_internal_set_TypeFromFieldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TypeFromFieldName = value;
}
inline void Oculus::Interaction::InterfaceAttribute::_ctor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, types);
}
inline void Oculus::Interaction::InterfaceAttribute::_ctor(::StringW  typeFromFieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeFromFieldName);
}
inline ::Oculus::Interaction::InterfaceAttribute* Oculus::Interaction::InterfaceAttribute::New_ctor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InterfaceAttribute*>(type, types));
}
inline ::Oculus::Interaction::InterfaceAttribute* Oculus::Interaction::InterfaceAttribute::New_ctor(::StringW  typeFromFieldName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InterfaceAttribute*>(typeFromFieldName));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InterfaceAttribute::InterfaceAttribute()   {
}
