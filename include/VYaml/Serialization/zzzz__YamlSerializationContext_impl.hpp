#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializationContext_def.hpp"
#include "System/Buffers/zzzz__ArrayBufferWriter_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "VYaml/Emitter/zzzz__Utf8YamlEmitter_def.hpp"
#include "VYaml/Emitter/zzzz__YamlEmitOptions_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__YamlSerializerOptions_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlSerializationContext::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_Options", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.get_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::IYamlFormatterResolver* (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::get_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_Resolver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.set_Resolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&::VYaml::Serialization::YamlSerializationContext::set_Resolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.get_EmitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Emitter::YamlEmitOptions* (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::get_EmitOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_EmitOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.set_EmitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Emitter::YamlEmitOptions*)>(&::VYaml::Serialization::YamlSerializationContext::set_EmitOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_EmitOptions", {}, {::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Serialization::YamlSerializerOptions*)>(&::VYaml::Serialization::YamlSerializationContext::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb955268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.GetArrayBufferWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Buffers::ArrayBufferWriter_1<uint8_t>* (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::GetArrayBufferWriter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb9553ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"GetArrayBufferWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb955434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::Dispose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb95548c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::YamlSerializationContext.GetBuffer64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::VYaml::Serialization::YamlSerializationContext::*)()>(&::VYaml::Serialization::YamlSerializationContext::GetBuffer64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb955578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"GetBuffer64", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::VYaml::Serialization::YamlSerializerOptions*& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::VYaml::Serialization::YamlSerializerOptions* const& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializationContext::__cordl_internal_set__Options_k__BackingField(::VYaml::Serialization::YamlSerializerOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
constexpr ::VYaml::Serialization::IYamlFormatterResolver*& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__Resolver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr ::VYaml::Serialization::IYamlFormatterResolver* const& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__Resolver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Resolver_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializationContext::__cordl_internal_set__Resolver_k__BackingField(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Resolver_k__BackingField = value;
}
constexpr ::VYaml::Emitter::YamlEmitOptions*& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__EmitOptions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitOptions_k__BackingField;
}
constexpr ::VYaml::Emitter::YamlEmitOptions* const& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get__EmitOptions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EmitOptions_k__BackingField;
}
constexpr void VYaml::Serialization::YamlSerializationContext::__cordl_internal_set__EmitOptions_k__BackingField(::VYaml::Emitter::YamlEmitOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EmitOptions_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get_primitiveValueBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primitiveValueBuffer;
}
constexpr ::ArrayW<uint8_t> const& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get_primitiveValueBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primitiveValueBuffer;
}
constexpr void VYaml::Serialization::YamlSerializationContext::__cordl_internal_set_primitiveValueBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primitiveValueBuffer = value;
}
constexpr ::System::Buffers::ArrayBufferWriter_1<uint8_t>*& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get_arrayBufferWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayBufferWriter;
}
constexpr ::System::Buffers::ArrayBufferWriter_1<uint8_t>* const& VYaml::Serialization::YamlSerializationContext::__cordl_internal_get_arrayBufferWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayBufferWriter;
}
constexpr void VYaml::Serialization::YamlSerializationContext::__cordl_internal_set_arrayBufferWriter(::System::Buffers::ArrayBufferWriter_1<uint8_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrayBufferWriter = value;
}
inline ::VYaml::Serialization::YamlSerializerOptions* VYaml::Serialization::YamlSerializationContext::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::YamlSerializerOptions*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializationContext::set_Options(::VYaml::Serialization::YamlSerializerOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_Options", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::YamlSerializationContext::get_Resolver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_Resolver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatterResolver*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializationContext::set_Resolver(::VYaml::Serialization::IYamlFormatterResolver*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_Resolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::VYaml::Emitter::YamlEmitOptions* VYaml::Serialization::YamlSerializationContext::get_EmitOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"get_EmitOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Emitter::YamlEmitOptions*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializationContext::set_EmitOptions(::VYaml::Emitter::YamlEmitOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"set_EmitOptions", {}, {::i2c::type_of<::VYaml::Emitter::YamlEmitOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VYaml::Serialization::YamlSerializationContext::_ctor(::VYaml::Serialization::YamlSerializerOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {".ctor", {}, {::i2c::type_of<::VYaml::Serialization::YamlSerializerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options);
}
template<typename T>
inline void VYaml::Serialization::YamlSerializationContext::Serialize(::by_ref<::VYaml::Emitter::Utf8YamlEmitter>  emitter, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                    {"Serialize", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::VYaml::Emitter::Utf8YamlEmitter>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emitter, value);
}
inline ::System::Buffers::ArrayBufferWriter_1<uint8_t>* VYaml::Serialization::YamlSerializationContext::GetArrayBufferWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"GetArrayBufferWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::ArrayBufferWriter_1<uint8_t>*>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializationContext::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VYaml::Serialization::YamlSerializationContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> VYaml::Serialization::YamlSerializationContext::GetBuffer64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlSerializationContext*>(),
                        {"GetBuffer64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::VYaml::Serialization::YamlSerializationContext* VYaml::Serialization::YamlSerializationContext::New_ctor(::VYaml::Serialization::YamlSerializerOptions*  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::YamlSerializationContext*>(options));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VYaml::Serialization::YamlSerializationContext::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VYaml::Serialization::YamlSerializationContext::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlSerializationContext::YamlSerializationContext()   {
}
