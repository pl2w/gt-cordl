#pragma once
// IWYU pragma private; include "SouthPointe/Serialization/MessagePack/MapDefinition.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__MapDefinition_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__ITypeHandler_def.hpp"
#include "SouthPointe/Serialization/MessagePack/zzzz__SerializationContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MapDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::SouthPointe::Serialization::MessagePack::MapDefinition::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*, ::System::Type*)>(&::SouthPointe::Serialization::MessagePack::MapDefinition::_ctor)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x9d0965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MapDefinition.IsSerializable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::SouthPointe::Serialization::MessagePack::MapDefinition::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*, ::System::Type*)>(&::SouthPointe::Serialization::MessagePack::MapDefinition::IsSerializable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d09ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"IsSerializable", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MapDefinition.AttributesExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::SouthPointe::Serialization::MessagePack::MapDefinition::*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::SouthPointe::Serialization::MessagePack::MapDefinition::AttributesExist)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d09f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"AttributesExist", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::SouthPointe::Serialization::MessagePack::MapDefinition.IsFieldSerializable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::SouthPointe::Serialization::MessagePack::MapDefinition::*)(::SouthPointe::Serialization::MessagePack::SerializationContext*, ::System::Reflection::FieldInfo*)>(&::SouthPointe::Serialization::MessagePack::MapDefinition::IsFieldSerializable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d09d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"IsFieldSerializable", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::System::Type* const& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_set_Type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_FieldInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldInfos;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>* const& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_FieldInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldInfos;
}
constexpr void SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_set_FieldInfos(::System::Collections::Generic::Dictionary_2<::StringW,::System::Reflection::FieldInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FieldInfos = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_FieldHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldHandlers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>* const& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_FieldHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FieldHandlers;
}
constexpr void SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_set_FieldHandlers(::System::Collections::Generic::Dictionary_2<::StringW,::SouthPointe::Serialization::MessagePack::ITypeHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FieldHandlers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_Callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>* const& SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_get_Callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Callbacks;
}
constexpr void SouthPointe::Serialization::MessagePack::MapDefinition::__cordl_internal_set_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::System::Reflection::MethodInfo*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Callbacks = value;
}
inline void SouthPointe::Serialization::MessagePack::MapDefinition::setStaticF_serializableUnityTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "serializableUnityTypes", ::SouthPointe::Serialization::MessagePack::MapDefinition*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> SouthPointe::Serialization::MessagePack::MapDefinition::getStaticF_serializableUnityTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "serializableUnityTypes", ::SouthPointe::Serialization::MessagePack::MapDefinition*>();
}
inline void SouthPointe::Serialization::MessagePack::MapDefinition::setStaticF_callbackTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "callbackTypes", ::SouthPointe::Serialization::MessagePack::MapDefinition*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> SouthPointe::Serialization::MessagePack::MapDefinition::getStaticF_callbackTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "callbackTypes", ::SouthPointe::Serialization::MessagePack::MapDefinition*>();
}
inline void SouthPointe::Serialization::MessagePack::MapDefinition::_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {".ctor", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, type);
}
inline bool SouthPointe::Serialization::MessagePack::MapDefinition::IsSerializable(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"IsSerializable", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, type);
}
inline bool SouthPointe::Serialization::MessagePack::MapDefinition::AttributesExist(::System::Reflection::MemberInfo*  info, ::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"AttributesExist", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info, attributeType);
}
inline bool SouthPointe::Serialization::MessagePack::MapDefinition::IsFieldSerializable(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Reflection::FieldInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::SouthPointe::Serialization::MessagePack::MapDefinition*>(),
                        {"IsFieldSerializable", {}, {::i2c::type_of<::SouthPointe::Serialization::MessagePack::SerializationContext*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, info);
}
inline ::SouthPointe::Serialization::MessagePack::MapDefinition* SouthPointe::Serialization::MessagePack::MapDefinition::New_ctor(::SouthPointe::Serialization::MessagePack::SerializationContext*  context, ::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::SouthPointe::Serialization::MessagePack::MapDefinition*>(context, type));
}
// Ctor Parameters []
constexpr ::SouthPointe::Serialization::MessagePack::MapDefinition::MapDefinition()   {
}
