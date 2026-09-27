#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectEventDescriptor.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectEventDescriptor_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xad67518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::System::Reflection::EventInfo*)>(&::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xad676b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::EventInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::System::ComponentModel::EventDescriptor*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad67838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::EventDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.get_ComponentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad67914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.get_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::get_EventType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad6791c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.get_IsMulticast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::get_IsMulticast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad67db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.AddEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::ReflectEventDescriptor::AddEventHandler)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0xad67e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad68584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillEventInfoAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::EventInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xad685ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillEventInfoAttribute", {}, {::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0xad67934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillMethods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillSingleMethodAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::MethodInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xad68900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillSingleMethodAttribute", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.RemoveEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::ReflectEventDescriptor::RemoveEventHandler)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0xad68c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 21}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::System::Type*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentClass;
}
constexpr ::System::Type* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__componentClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____componentClass;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__componentClass(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____componentClass = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__addMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__addMethod(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removeMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__removeMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____removeMethod;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__removeMethod(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____removeMethod = value;
}
constexpr ::System::Reflection::EventInfo*& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realEvent;
}
constexpr ::System::Reflection::EventInfo* const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__realEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____realEvent;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__realEvent(::System::Reflection::EventInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____realEvent = value;
}
constexpr bool& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filledMethods;
}
constexpr bool const& System::ComponentModel::ReflectEventDescriptor::__cordl_internal_get__filledMethods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filledMethods;
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__cordl_internal_set__filledMethods(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filledMethods = value;
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, name, type, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::EventInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentClass, eventInfo);
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldReflectEventDescriptor, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::EventDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentType, oldReflectEventDescriptor, attributes);
}
inline ::System::Type* System::ComponentModel::ReflectEventDescriptor::get_ComponentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::ReflectEventDescriptor::get_EventType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::ReflectEventDescriptor::get_IsMulticast()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::ReflectEventDescriptor::AddEventHandler(::System::Object*  component, ::System::Delegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillAttributes(::System::Collections::IList*  attributes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(::System::Reflection::EventInfo*  realEventInfo, ::System::Collections::IList*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillEventInfoAttribute", {}, {::i2c::type_of<::System::Reflection::EventInfo*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realEventInfo, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillMethods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillMethods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(::System::Reflection::MethodInfo*  realMethodInfo, ::System::Collections::IList*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(),
                        {"FillSingleMethodAttribute", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, realMethodInfo, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::RemoveEventHandler(::System::Object*  component, ::System::Delegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::ReflectEventDescriptor*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectEventDescriptor*>(componentClass, name, type, attributes));
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectEventDescriptor*>(componentClass, eventInfo));
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldReflectEventDescriptor, ::ArrayW<::System::Attribute*>  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ReflectEventDescriptor*>(componentType, oldReflectEventDescriptor, attributes));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ReflectEventDescriptor::ReflectEventDescriptor()   {
}
