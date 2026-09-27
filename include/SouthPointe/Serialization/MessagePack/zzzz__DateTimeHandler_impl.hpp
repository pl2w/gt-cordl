#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DateTimeHandler.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IExtTypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeHandler.get_ExtType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::SouthPointe::Serialization::MessagePack::DateTimeHandler::*)()>(&::SouthPointe::Serialization::MessagePack::DateTimeHandler::get_ExtType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"get_ExtType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DateTimeHandler::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::DateTimeHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d0bb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::DateTimeHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::DateTimeHandler::Read)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x9d0da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeHandler.ReadExt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::DateTimeHandler::*)(uint32_t, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::DateTimeHandler::ReadExt)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9d0de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"ReadExt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DateTimeHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DateTimeHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::DateTimeHandler::Write)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9d0e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_stringHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_stringHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_set_stringHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringHandler = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_doubleHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_get_doubleHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::DateTimeHandler::__cordl_internal_set_doubleHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doubleHandler = value;
}
inline void SouthPointe::Serialization::MessagePack::DateTimeHandler::setStaticF_epoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "epoch", ::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime SouthPointe::Serialization::MessagePack::DateTimeHandler::getStaticF_epoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "epoch", ::SouthPointe::Serialization::MessagePack::DateTimeHandler*>();
}
inline int8_t SouthPointe::Serialization::MessagePack::DateTimeHandler::get_ExtType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"get_ExtType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::DateTimeHandler::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::DateTimeHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::DateTimeHandler::ReadExt(uint32_t  length, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"ReadExt", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, length, reader);
}
inline void SouthPointe::Serialization::MessagePack::DateTimeHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::SouthPointe::Serialization::MessagePack::DateTimeHandler* SouthPointe::Serialization::MessagePack::DateTimeHandler::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::DateTimeHandler*>(context));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::IExtTypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::DateTimeHandler::operator ::SouthPointe::Serialization::MessagePack::IExtTypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::IExtTypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::IExtTypeHandler* SouthPointe::Serialization::MessagePack::DateTimeHandler::i___SouthPointe__Serialization__MessagePack__IExtTypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::DateTimeHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::DateTimeHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DateTimeHandler::DateTimeHandler()   {
}
