#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/CustomTrackedObjectAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/zzzz__CustomTrackedObjectAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute.get_ObjectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::*)()>(&::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb05154c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {"get_ObjectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute.get_SupportsInheritedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::*)()>(&::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::get_SupportsInheritedTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb051554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {"get_SupportsInheritedTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::*)(::System::Type*, bool)>(&::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb05155c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_get__ObjectType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectType_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_get__ObjectType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObjectType_k__BackingField;
}
constexpr void UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_set__ObjectType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObjectType_k__BackingField = value;
}
constexpr bool& UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_get__SupportsInheritedTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SupportsInheritedTypes_k__BackingField;
}
constexpr bool const& UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_get__SupportsInheritedTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SupportsInheritedTypes_k__BackingField;
}
constexpr void UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::__cordl_internal_set__SupportsInheritedTypes_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SupportsInheritedTypes_k__BackingField = value;
}
inline ::System::Type* UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {"get_ObjectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::get_SupportsInheritedTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {"get_SupportsInheritedTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::_ctor(::System::Type*  type, bool  supportsInheritedTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, supportsInheritedTypes);
}
inline ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute* UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::New_ctor(::System::Type*  type, bool  supportsInheritedTypes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute*>(type, supportsInheritedTypes));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::CustomTrackedObjectAttribute::CustomTrackedObjectAttribute()   {
}
