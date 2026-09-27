#pragma once
// IWYU pragma private; include "System/ComponentModel/EventDescriptor.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad56264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::System::ComponentModel::MemberDescriptor*)>(&::System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5626c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::System::ComponentModel::MemberDescriptor*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad56274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor.get_ComponentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::EventDescriptor::*)()>(&::System::ComponentModel::EventDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor.get_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::EventDescriptor::*)()>(&::System::ComponentModel::EventDescriptor::get_EventType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor.get_IsMulticast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::EventDescriptor::*)()>(&::System::ComponentModel::EventDescriptor::get_IsMulticast)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor.AddEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::EventDescriptor::AddEventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::EventDescriptor.RemoveEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::EventDescriptor::*)(::System::Object*, ::System::Delegate*)>(&::System::ComponentModel::EventDescriptor::RemoveEventHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 21}
                ));
    return ___internal_method;
  }
};
inline void System::ComponentModel::EventDescriptor::_ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::ComponentModel::EventDescriptor::_ctor(::System::ComponentModel::MemberDescriptor*  descr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descr);
}
inline void System::ComponentModel::EventDescriptor::_ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::EventDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descr, attrs);
}
inline ::System::Type* System::ComponentModel::EventDescriptor::get_ComponentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::EventDescriptor::get_EventType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::ComponentModel::EventDescriptor::get_IsMulticast()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::EventDescriptor::AddEventHandler(::System::Object*  component, ::System::Delegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline void System::ComponentModel::EventDescriptor::RemoveEventHandler(::System::Object*  component, ::System::Delegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::EventDescriptor*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptor::New_ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventDescriptor*>(name, attrs));
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor*  descr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventDescriptor*>(descr));
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::EventDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::EventDescriptor*>(descr, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::EventDescriptor::EventDescriptor()   {
}
