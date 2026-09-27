#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/DynamicMapHandler.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DynamicMapHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatReader_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__FormatWriter_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Format_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IMapNamingStrategy_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Lazy_1_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapDefinition_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicMapHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DynamicMapHandler::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*, ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*)>(&::SouthPointe::Serialization::MessagePack::DynamicMapHandler::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d0c4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicMapHandler.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::SouthPointe::Serialization::MessagePack::DynamicMapHandler::*)(::SouthPointe::Serialization::MessagePack::Format, ::SouthPointe::Serialization::MessagePack::FormatReader*)>(&::SouthPointe::Serialization::MessagePack::DynamicMapHandler::Read)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x9d10274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicMapHandler.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::DynamicMapHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::FormatWriter*)>(&::SouthPointe::Serialization::MessagePack::DynamicMapHandler::Write)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9d10718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::DynamicMapHandler.DetermineSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::SouthPointe::Serialization::MessagePack::DynamicMapHandler::*)(::System::Object*, ::SouthPointe::Serialization::MessagePack::MapDefinition*)>(&::SouthPointe::Serialization::MessagePack::DynamicMapHandler::DetermineSize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9d10b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"DetermineSize", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_lazyDefinition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyDefinition;
}
constexpr ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>* const& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_lazyDefinition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazyDefinition;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_set_lazyDefinition(::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazyDefinition = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler*& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_nameHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameHandler;
}
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* const& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_nameHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameHandler;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_set_nameHandler(::SouthPointe::Serialization::MessagePack::ITypeHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameHandler = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_nameConverter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameConverter;
}
constexpr ::SouthPointe::Serialization::MessagePack::IMapNamingStrategy* const& SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_get_nameConverter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameConverter;
}
constexpr void SouthPointe::Serialization::MessagePack::DynamicMapHandler::__cordl_internal_set_nameConverter(::SouthPointe::Serialization::MessagePack::IMapNamingStrategy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameConverter = value;
}
inline void SouthPointe::Serialization::MessagePack::DynamicMapHandler::setStaticF_callbackParameters(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "callbackParameters", ::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> SouthPointe::Serialization::MessagePack::DynamicMapHandler::getStaticF_callbackParameters()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "callbackParameters", ::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>();
}
inline void SouthPointe::Serialization::MessagePack::DynamicMapHandler::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  lazyDefinition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, lazyDefinition);
}
inline ::System::Object* SouthPointe::Serialization::MessagePack::DynamicMapHandler::Read(::SouthPointe::Serialization::MessagePack::Format  format, ::SouthPointe::Serialization::MessagePack::FormatReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"Read", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::Format>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, format, reader);
}
inline void SouthPointe::Serialization::MessagePack::DynamicMapHandler::Write(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::FormatWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"Write", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::FormatWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline int32_t SouthPointe::Serialization::MessagePack::DynamicMapHandler::DetermineSize(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                        {"DetermineSize", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj, definition);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::Attribute*>)
inline void SouthPointe::Serialization::MessagePack::DynamicMapHandler::InvokeCallback(::System::Object*  obj, ::SouthPointe::Serialization::MessagePack::MapDefinition*  definition)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(),
                    {"InvokeCallback", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, definition);
}
inline ::SouthPointe::Serialization::MessagePack::DynamicMapHandler* SouthPointe::Serialization::MessagePack::DynamicMapHandler::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*  lazyDefinition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::DynamicMapHandler*>(context, lazyDefinition));
}
/// @brief Convert operator to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr  SouthPointe::Serialization::MessagePack::DynamicMapHandler::operator ::SouthPointe::Serialization::MessagePack::ITypeHandler*() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::SouthPointe::Serialization::MessagePack::ITypeHandler"
constexpr ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::DynamicMapHandler::i___SouthPointe__Serialization__MessagePack__ITypeHandler() noexcept {
return static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::DynamicMapHandler::DynamicMapHandler()   {
}
