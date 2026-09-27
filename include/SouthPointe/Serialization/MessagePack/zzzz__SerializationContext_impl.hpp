#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/SerializationContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ArrayOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__DateTimeOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__EnumOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__JsonOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapOptions_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__TypeHandlers_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::SerializationContext.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::SouthPointe::Serialization::MessagePack::SerializationContext* (*)()>(&::SouthPointe::Serialization::MessagePack::SerializationContext::get_Default)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d08dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::SerializationContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::SerializationContext::*)()>(&::SouthPointe::Serialization::MessagePack::SerializationContext::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9d0ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::SouthPointe::Serialization::MessagePack::DateTimeOptions*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_DateTimeOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateTimeOptions;
}
constexpr ::SouthPointe::Serialization::MessagePack::DateTimeOptions* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_DateTimeOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateTimeOptions;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_DateTimeOptions(::SouthPointe::Serialization::MessagePack::DateTimeOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DateTimeOptions = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::EnumOptions*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_EnumOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumOptions;
}
constexpr ::SouthPointe::Serialization::MessagePack::EnumOptions* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_EnumOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnumOptions;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_EnumOptions(::SouthPointe::Serialization::MessagePack::EnumOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnumOptions = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::ArrayOptions*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_ArrayOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArrayOptions;
}
constexpr ::SouthPointe::Serialization::MessagePack::ArrayOptions* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_ArrayOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ArrayOptions;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_ArrayOptions(::SouthPointe::Serialization::MessagePack::ArrayOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ArrayOptions = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::MapOptions*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_MapOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapOptions;
}
constexpr ::SouthPointe::Serialization::MessagePack::MapOptions* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_MapOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MapOptions;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_MapOptions(::SouthPointe::Serialization::MessagePack::MapOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MapOptions = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::JsonOptions*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_JsonOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JsonOptions;
}
constexpr ::SouthPointe::Serialization::MessagePack::JsonOptions* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_JsonOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JsonOptions;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_JsonOptions(::SouthPointe::Serialization::MessagePack::JsonOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JsonOptions = value;
}
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers*& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_TypeHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeHandlers;
}
constexpr ::SouthPointe::Serialization::MessagePack::TypeHandlers* const& SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_get_TypeHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypeHandlers;
}
constexpr void SouthPointe::Serialization::MessagePack::SerializationContext::__cordl_internal_set_TypeHandlers(::SouthPointe::Serialization::MessagePack::TypeHandlers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TypeHandlers = value;
}
inline void SouthPointe::Serialization::MessagePack::SerializationContext::setStaticF_defaultContext(::SouthPointe::Serialization::MessagePack::SerializationContext*  value)  {
::cordl_internals::setStaticField<::SouthPointe::Serialization::MessagePack::SerializationContext*, "defaultContext", ::SouthPointe::Serialization::MessagePack::SerializationContext*>(std::forward<::SouthPointe::Serialization::MessagePack::SerializationContext*>(value));
}
inline ::SouthPointe::Serialization::MessagePack::SerializationContext* SouthPointe::Serialization::MessagePack::SerializationContext::getStaticF_defaultContext()  {
return ::cordl_internals::getStaticField<::SouthPointe::Serialization::MessagePack::SerializationContext*, "defaultContext", ::SouthPointe::Serialization::MessagePack::SerializationContext*>();
}
inline ::SouthPointe::Serialization::MessagePack::SerializationContext* SouthPointe::Serialization::MessagePack::SerializationContext::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::SouthPointe::Serialization::MessagePack::SerializationContext*>(nullptr, ___internal_method);
}
inline void SouthPointe::Serialization::MessagePack::SerializationContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::SouthPointe::Serialization::MessagePack::SerializationContext* SouthPointe::Serialization::MessagePack::SerializationContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::SerializationContext*>());
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::SerializationContext::SerializationContext()   {
}
