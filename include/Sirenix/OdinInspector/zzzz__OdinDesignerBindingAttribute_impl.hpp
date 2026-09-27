#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/OdinDesignerBindingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Sirenix/OdinInspector/zzzz__OdinDesignerBindingAttribute_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::OdinDesignerBindingAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::OdinDesignerBindingAttribute::*)(::ArrayW<::StringW>)>(&::Sirenix::OdinInspector::OdinDesignerBindingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa84e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::OdinDesignerBindingAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& Sirenix::OdinInspector::OdinDesignerBindingAttribute::__cordl_internal_get_MemberNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberNames;
}
constexpr ::ArrayW<::StringW> const& Sirenix::OdinInspector::OdinDesignerBindingAttribute::__cordl_internal_get_MemberNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MemberNames;
}
constexpr void Sirenix::OdinInspector::OdinDesignerBindingAttribute::__cordl_internal_set_MemberNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MemberNames = value;
}
inline void Sirenix::OdinInspector::OdinDesignerBindingAttribute::_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  memberNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::OdinDesignerBindingAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNames);
}
inline ::Sirenix::OdinInspector::OdinDesignerBindingAttribute* Sirenix::OdinInspector::OdinDesignerBindingAttribute::New_ctor(/* [ParamArray] */ ::ArrayW<::StringW>  memberNames)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::OdinDesignerBindingAttribute*>(memberNames));
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::OdinDesignerBindingAttribute::OdinDesignerBindingAttribute()   {
}
