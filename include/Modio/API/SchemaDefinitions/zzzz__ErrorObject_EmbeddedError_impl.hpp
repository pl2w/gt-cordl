#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ErrorObject_EmbeddedError.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ErrorObject_EmbeddedError_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ErrorObject_EmbeddedError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ErrorObject_EmbeddedError::*)(int64_t, int64_t, ::StringW, ::Newtonsoft::Json::Linq::JObject*)>(&::GlobalNamespace::ErrorObject_EmbeddedError::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fec85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorObject_EmbeddedError>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ErrorObject_EmbeddedError::_ctor(int64_t  code, int64_t  errorRef, ::StringW  message, ::Newtonsoft::Json::Linq::JObject*  errors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ErrorObject_EmbeddedError>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, code, errorRef, message, errors);
}
// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ErrorRef", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Errors", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ErrorObject_EmbeddedError::ErrorObject_EmbeddedError(int64_t  Code, int64_t  ErrorRef, ::StringW  Message, ::Newtonsoft::Json::Linq::JObject*  Errors) noexcept  {
this->Code = Code;
this->ErrorRef = ErrorRef;
this->Message = Message;
this->Errors = Errors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ErrorObject_EmbeddedError::ErrorObject_EmbeddedError()   {
}
