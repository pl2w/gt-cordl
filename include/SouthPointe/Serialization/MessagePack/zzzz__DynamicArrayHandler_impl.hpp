#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicArrayHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DynamicArrayHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*, ::System::Type*)>(&::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d0c1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::Read)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9d0ea10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::Write)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x9d0ebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::System::Type*& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_elementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementType;
}
constexpr ::System::Type* const& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_elementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementType;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_set_elementType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementType = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_elementTypeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementTypeHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_get_elementTypeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementTypeHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicArrayHandler::__cordl_internal_set_elementTypeHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementTypeHandler = value;
}
inline void SouthPointe::Serialization::MessagePack::DynamicArrayHandler::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, type);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::DynamicArrayHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline void SouthPointe::Serialization::MessagePack::DynamicArrayHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler* SouthPointe::Serialization::MessagePack::DynamicArrayHandler::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::DynamicArrayHandler*>(context, type));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::DynamicArrayHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::DynamicArrayHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DynamicArrayHandler::DynamicArrayHandler()   {
}
