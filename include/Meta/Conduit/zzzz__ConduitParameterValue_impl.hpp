#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitParameterValue.hpp"
#include "Meta/Conduit/zzzz__ConduitParameterValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ConduitParameterValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitParameterValue::*)(::System::Object*)>(&::Meta::Conduit::ConduitParameterValue::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e1f134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitParameterValue>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ConduitParameterValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ConduitParameterValue::*)(::System::Object*, ::System::Type*)>(&::Meta::Conduit::ConduitParameterValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e1f178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitParameterValue>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Conduit::ConduitParameterValue::_ctor(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitParameterValue>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Meta::Conduit::ConduitParameterValue::_ctor(::System::Object*  value, ::System::Type*  dataType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ConduitParameterValue>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, dataType);
}
// Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DataType", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Conduit::ConduitParameterValue::ConduitParameterValue(::System::Object*  Value, ::System::Type*  DataType) noexcept  {
this->Value = Value;
this->DataType = DataType;
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ConduitParameterValue::ConduitParameterValue()   {
}
