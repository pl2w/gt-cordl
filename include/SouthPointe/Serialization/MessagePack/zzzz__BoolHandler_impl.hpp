#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/BoolHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__BoolHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::BoolHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::BoolHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::BoolHandler::Read)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d0c69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::BoolHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::BoolHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::BoolHandler::Write)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d0c76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::BoolHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::BoolHandler::*)()>(&::SouthPointe::Serialization::MessagePack::BoolHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0ba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* SouthPointe::Serialization::MessagePack::BoolHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline void SouthPointe::Serialization::MessagePack::BoolHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void SouthPointe::Serialization::MessagePack::BoolHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::BoolHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::BoolHandler* SouthPointe::Serialization::MessagePack::BoolHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::BoolHandler*>());
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::BoolHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::BoolHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::BoolHandler::BoolHandler()   {
}
