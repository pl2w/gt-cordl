#pragma once
// IWYU pragma private; include "System/ComponentModel/InitializationEventAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__InitializationEventAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::InitializationEventAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::InitializationEventAttribute::*)(::StringW)>(&::System::ComponentModel::InitializationEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad47a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InitializationEventAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::InitializationEventAttribute.get_EventName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::InitializationEventAttribute::*)()>(&::System::ComponentModel::InitializationEventAttribute::get_EventName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad47ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InitializationEventAttribute*>(),
                        {"get_EventName", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::InitializationEventAttribute::__cordl_internal_get__EventName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::InitializationEventAttribute::__cordl_internal_get__EventName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventName_k__BackingField;
}
constexpr void System::ComponentModel::InitializationEventAttribute::__cordl_internal_set__EventName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventName_k__BackingField = value;
}
inline void System::ComponentModel::InitializationEventAttribute::_ctor(::StringW  eventName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InitializationEventAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline ::StringW System::ComponentModel::InitializationEventAttribute::get_EventName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::InitializationEventAttribute*>(),
                        {"get_EventName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::InitializationEventAttribute* System::ComponentModel::InitializationEventAttribute::New_ctor(::StringW  eventName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::InitializationEventAttribute*>(eventName));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InitializationEventAttribute::InitializationEventAttribute()   {
}
