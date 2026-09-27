#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/UriHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__UriHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::UriHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::UriHandler::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::UriHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d0bc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::UriHandler.GetStringHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler* (::SouthPointe::Serialization::MessagePack::UriHandler::*)()>(&::SouthPointe::Serialization::MessagePack::UriHandler::GetStringHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d133e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"GetStringHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::UriHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::UriHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::UriHandler::Read)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9d13468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::UriHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::UriHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::UriHandler::Write)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9d135a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_get_stringHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_get_stringHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::UriHandler::__cordl_internal_set_stringHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringHandler = value;
}
inline void SouthPointe::Serialization::MessagePack::UriHandler::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::UriHandler::GetStringHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"GetStringHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(this, ___internal_method);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::UriHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline void SouthPointe::Serialization::MessagePack::UriHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::UriHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::SouthPointe::Serialization::MessagePack::UriHandler* SouthPointe::Serialization::MessagePack::UriHandler::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::UriHandler*>(context));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::UriHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::UriHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::UriHandler::UriHandler()   {
}
