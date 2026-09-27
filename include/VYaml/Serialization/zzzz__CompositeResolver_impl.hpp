#pragma once
// IWYU pragma private; include "VYaml/Serialization/CompositeResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__CompositeResolver_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::CompositeResolver* (*)(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*, ::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*)>(&::VYaml::Serialization::CompositeResolver::Create)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb957bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::CompositeResolver* (*)(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*)>(&::VYaml::Serialization::CompositeResolver::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb957de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VYaml::Serialization::CompositeResolver* (*)(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*)>(&::VYaml::Serialization::CompositeResolver::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb957e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::CompositeResolver::*)(::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*, ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*)>(&::VYaml::Serialization::CompositeResolver::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb957c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver.AddFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::CompositeResolver::*)(::VYaml::Serialization::IYamlFormatter*)>(&::VYaml::Serialization::CompositeResolver::AddFormatter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb957f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"AddFormatter", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::CompositeResolver.AddResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::CompositeResolver::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&::VYaml::Serialization::CompositeResolver::AddResolver)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb958050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"AddResolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*& VYaml::Serialization::CompositeResolver::__cordl_internal_get_formattersCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formattersCache;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>* const& VYaml::Serialization::CompositeResolver::__cordl_internal_get_formattersCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formattersCache;
}
constexpr void VYaml::Serialization::CompositeResolver::__cordl_internal_set_formattersCache(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formattersCache = value;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*& VYaml::Serialization::CompositeResolver::__cordl_internal_get_formatters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatters;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>* const& VYaml::Serialization::CompositeResolver::__cordl_internal_get_formatters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formatters;
}
constexpr void VYaml::Serialization::CompositeResolver::__cordl_internal_set_formatters(::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formatters = value;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*& VYaml::Serialization::CompositeResolver::__cordl_internal_get_resolvers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolvers;
}
constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>* const& VYaml::Serialization::CompositeResolver::__cordl_internal_get_resolvers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolvers;
}
constexpr void VYaml::Serialization::CompositeResolver::__cordl_internal_set_resolvers(::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolvers = value;
}
constexpr ::System::Object*& VYaml::Serialization::CompositeResolver::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr ::System::Object* const& VYaml::Serialization::CompositeResolver::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr void VYaml::Serialization::CompositeResolver::__cordl_internal_set_gate(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
inline ::VYaml::Serialization::CompositeResolver* VYaml::Serialization::CompositeResolver::Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, ::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::CompositeResolver*>(nullptr, ___internal_method, formatters, resolvers);
}
inline ::VYaml::Serialization::CompositeResolver* VYaml::Serialization::CompositeResolver::Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*  formatters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::CompositeResolver*>(nullptr, ___internal_method, formatters);
}
inline ::VYaml::Serialization::CompositeResolver* VYaml::Serialization::CompositeResolver::Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"Create", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::CompositeResolver*>(nullptr, ___internal_method, resolvers);
}
inline void VYaml::Serialization::CompositeResolver::_ctor(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatters, resolvers);
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::CompositeResolver::GetFormatter()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                    {"GetFormatter", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(this, ___internal_method);
}
inline void VYaml::Serialization::CompositeResolver::AddFormatter(::VYaml::Serialization::IYamlFormatter*  formatter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"AddFormatter", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatter);
}
inline void VYaml::Serialization::CompositeResolver::AddResolver(::VYaml::Serialization::IYamlFormatterResolver*  resolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::CompositeResolver*>(),
                        {"AddResolver", {}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolver);
}
inline ::VYaml::Serialization::CompositeResolver* VYaml::Serialization::CompositeResolver::New_ctor(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::CompositeResolver*>(formatters, resolvers));
}
/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr  VYaml::Serialization::CompositeResolver::operator ::VYaml::Serialization::IYamlFormatterResolver*() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* VYaml::Serialization::CompositeResolver::i___VYaml__Serialization__IYamlFormatterResolver() noexcept {
return static_cast<::VYaml::Serialization::IYamlFormatterResolver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::CompositeResolver::CompositeResolver()   {
}
