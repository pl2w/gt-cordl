#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/Vector3IntHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Vector3IntHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Vector3IntHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::Vector3IntHandler::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::Vector3IntHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d0bd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Vector3IntHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::Vector3IntHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::Vector3IntHandler::Read)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9d14294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::Vector3IntHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::Vector3IntHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::Vector3IntHandler::Write)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d1459c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_get_intHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_get_intHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::Vector3IntHandler::__cordl_internal_set_intHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intHandler = value;
}
inline void SouthPointe::Serialization::MessagePack::Vector3IntHandler::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::Vector3IntHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline void SouthPointe::Serialization::MessagePack::Vector3IntHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::SouthPointe::Serialization::MessagePack::Vector3IntHandler* SouthPointe::Serialization::MessagePack::Vector3IntHandler::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::Vector3IntHandler*>(context));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::Vector3IntHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::Vector3IntHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::Vector3IntHandler::Vector3IntHandler()   {
}
