#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/TypeHandlers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__TypeHandlers_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__IExtTypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__Lazy_1_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapDefinition_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__TypeHandlers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::_ctor)> {
  constexpr static std::size_t size = 0xcc0;
  constexpr static std::size_t addrs = 0x9d0ad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::ITypeHandler* (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(::System::Type*)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9d09e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"Get", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers.GetExt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::IExtTypeHandler* (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(int8_t)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::GetExt)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d0954c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"GetExt", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers.AddIfNotExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(::System::Type*)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::AddIfNotExist)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9d0bd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"AddIfNotExist", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers.AddIfNotExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(::System::Type*, ::SouthPointe::Serialization::MessagePack::ITypeHandler*)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::AddIfNotExist)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d0c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"AddIfNotExist", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::ITypeHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers.GetLazyMapDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>* (::SouthPointe::Serialization::MessagePack::TypeHandlers::*)(::System::Type*)>(&::SouthPointe::Serialization::MessagePack::TypeHandlers::GetLazyMapDefinition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9d0c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"GetLazyMapDefinition", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext*& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext* const& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_set_context(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_handlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handlers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>* const& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_handlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handlers;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_set_handlers(::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handlers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_extHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extHandlers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>* const& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_extHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extHandlers;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_set_extHandlers(::System::Collections::Generic::Dictionary_2<int8_t,::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extHandlers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_mapDefinitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDefinitions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>* const& SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_get_mapDefinitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapDefinitions;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers::__cordl_internal_set_mapDefinitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::SouthPointe::Serialization::MessagePack::MapDefinition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapDefinitions = value;
}
inline void SouthPointe::Serialization::MessagePack::TypeHandlers::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template<typename T>
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::TypeHandlers::Get()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                    {"Get", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::ITypeHandler* SouthPointe::Serialization::MessagePack::TypeHandlers::Get(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"Get", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::ITypeHandler*>(this, ___internal_method, type);
}
inline ::SouthPointe::Serialization::MessagePack::IExtTypeHandler* SouthPointe::Serialization::MessagePack::TypeHandlers::GetExt(int8_t  extType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"GetExt", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::IExtTypeHandler*>(this, ___internal_method, extType);
}
inline void SouthPointe::Serialization::MessagePack::TypeHandlers::AddIfNotExist(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"AddIfNotExist", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void SouthPointe::Serialization::MessagePack::TypeHandlers::AddIfNotExist(::System::Type*  type, ::SouthPointe::Serialization::MessagePack::ITypeHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"AddIfNotExist", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::SouthPointe::Serialization::MessagePack::ITypeHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, handler);
}
inline ::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>* SouthPointe::Serialization::MessagePack::TypeHandlers::GetLazyMapDefinition(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(),
                        {"GetLazyMapDefinition", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::Lazy_1<::SouthPointe::Serialization::MessagePack::MapDefinition*>*>(this, ___internal_method, type);
}
inline ::SouthPointe::Serialization::MessagePack::TypeHandlers* SouthPointe::Serialization::MessagePack::TypeHandlers::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::TypeHandlers*>(context));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers::TypeHandlers()   {
}
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::*)()>(&::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d0c590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0._GetLazyMapDefinition_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::MapDefinition* (::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::*)()>(&::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::_GetLazyMapDefinition_b__0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d0c598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*>(),
                        {"<GetLazyMapDefinition>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers*& SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers* const& SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_set___4__this(::SouthPointe::Serialization::MessagePack::TypeHandlers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Type*& SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
inline void SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::MapDefinition* SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::_GetLazyMapDefinition_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*>(),
                        {"<GetLazyMapDefinition>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::MapDefinition*>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0* SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers___c__DisplayClass11_0::TypeHandlers___c__DisplayClass11_0()   {
}
