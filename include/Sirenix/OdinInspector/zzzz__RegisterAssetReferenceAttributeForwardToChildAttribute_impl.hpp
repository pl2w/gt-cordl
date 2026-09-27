#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/RegisterAssetReferenceAttributeForwardToChildAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Sirenix/OdinInspector/zzzz__RegisterAssetReferenceAttributeForwardToChildAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::*)(::System::Type*)>(&::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa84e978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::__cordl_internal_get_AttributeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeType;
}
constexpr ::System::Type* const& Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::__cordl_internal_get_AttributeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeType;
}
constexpr void Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::__cordl_internal_set_AttributeType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttributeType = value;
}
inline void Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::_ctor(::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeType);
}
inline ::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute* Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::New_ctor(::System::Type*  attributeType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute*>(attributeType));
}
// Ctor Parameters []
constexpr ::Sirenix::OdinInspector::RegisterAssetReferenceAttributeForwardToChildAttribute::RegisterAssetReferenceAttributeForwardToChildAttribute()   {
}
