#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ReflectionAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionAttributeProvider_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(::System::Object*)>(&::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3cc1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeProvider;
}
constexpr void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_set__attributeProvider(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeProvider = value;
}
inline void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor(::System::Object*  attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeProvider);
}
inline ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::New_ctor(::System::Object*  attributeProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(attributeProvider));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr  Newtonsoft::Json::Serialization::ReflectionAttributeProvider::operator ::Newtonsoft::Json::Serialization::IAttributeProvider*() noexcept {
return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr ::Newtonsoft::Json::Serialization::IAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::i___Newtonsoft__Json__Serialization__IAttributeProvider() noexcept {
return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::ReflectionAttributeProvider()   {
}
