#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequestResponse_1.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
template<typename TValue>
inline void Meta::WitAi::Requests::VRequestResponse_1<TValue>::_ctor(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TValue>
inline void Meta::WitAi::Requests::VRequestResponse_1<TValue>::_ctor(int32_t  code, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, code, error);
}
template<typename TValue>
inline void Meta::WitAi::Requests::VRequestResponse_1<TValue>::_ctor(TValue  value, int32_t  code, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, code, error);
}
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Code", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Error", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequestResponse_1<TValue>::VRequestResponse_1(TValue  Value, int32_t  Code, ::StringW  Error) noexcept  {
this->Value = Value;
this->Code = Code;
this->Error = Error;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequestResponse_1<TValue>::VRequestResponse_1()   {
}
