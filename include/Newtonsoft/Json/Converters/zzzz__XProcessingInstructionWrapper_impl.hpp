#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XProcessingInstructionWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XProcessingInstructionWrapper_def.hpp"
#include "System/Xml/Linq/zzzz__XProcessingInstruction_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper.get_ProcessingInstruction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XProcessingInstruction* (::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_ProcessingInstruction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa3f50b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                        {"get_ProcessingInstruction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)(::System::Xml::Linq::XProcessingInstruction*)>(&::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa3f45e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Linq::XProcessingInstruction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3f5128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::*)()>(&::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3f5144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(), 18}
                ));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XProcessingInstruction* Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_ProcessingInstruction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                        {"get_ProcessingInstruction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XProcessingInstruction*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XProcessingInstructionWrapper::_ctor(::System::Xml::Linq::XProcessingInstruction*  processingInstruction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Linq::XProcessingInstruction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processingInstruction);
}
inline ::StringW Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XProcessingInstructionWrapper::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [NullableContext(1)]
inline ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper* Newtonsoft::Json::Converters::XProcessingInstructionWrapper::New_ctor(::System::Xml::Linq::XProcessingInstruction*  processingInstruction)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XProcessingInstructionWrapper*>(processingInstruction));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XProcessingInstructionWrapper::XProcessingInstructionWrapper()   {
}
