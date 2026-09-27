#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ErrorEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ErrorEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ErrorEventArgs::*)(::System::Object*, ::Newtonsoft::Json::Serialization::ErrorContext*)>(&::Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3b18b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorContext*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__CurrentObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObject_k__BackingField;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__CurrentObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObject_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_set__CurrentObject_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentObject_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__ErrorContext_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorContext_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ErrorContext* const& Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_get__ErrorContext_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorContext_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::ErrorEventArgs::__cordl_internal_set__ErrorContext_k__BackingField(::Newtonsoft::Json::Serialization::ErrorContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorContext_k__BackingField = value;
}
inline void Newtonsoft::Json::Serialization::ErrorEventArgs::_ctor(/* [Nullable(2)] */ ::System::Object*  currentObject, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentObject, errorContext);
}
inline ::Newtonsoft::Json::Serialization::ErrorEventArgs* Newtonsoft::Json::Serialization::ErrorEventArgs::New_ctor(/* [Nullable(2)] */ ::System::Object*  currentObject, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ErrorEventArgs*>(currentObject, errorContext));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ErrorEventArgs::ErrorEventArgs()   {
}
