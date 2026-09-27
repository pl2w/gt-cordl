#pragma once
// IWYU pragma private; include "System/Net/Configuration/BypassElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Net/Configuration/zzzz__BypassElementCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Net/Configuration/zzzz__BypassElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)()>(&::System::Net::Configuration::BypassElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::BypassElement* (::System::Net::Configuration::BypassElementCollection::*)(int32_t)>(&::System::Net::Configuration::BypassElementCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(int32_t, ::System::Net::Configuration::BypassElement*)>(&::System::Net::Configuration::BypassElementCollection::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::BypassElement* (::System::Net::Configuration::BypassElementCollection::*)(::StringW)>(&::System::Net::Configuration::BypassElementCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(::StringW, ::System::Net::Configuration::BypassElement*)>(&::System::Net::Configuration::BypassElementCollection::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.get_ThrowOnDuplicate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::BypassElementCollection::*)()>(&::System::Net::Configuration::BypassElementCollection::get_ThrowOnDuplicate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                    {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&::System::Net::Configuration::BypassElementCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)()>(&::System::Net::Configuration::BypassElementCollection::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf80c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.CreateNewElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElement* (::System::Net::Configuration::BypassElementCollection::*)()>(&::System::Net::Configuration::BypassElementCollection::CreateNewElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf80f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                    {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.GetElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Configuration::BypassElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Net::Configuration::BypassElementCollection::GetElementKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                    {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&::System::Net::Configuration::BypassElementCollection::IndexOf)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&::System::Net::Configuration::BypassElementCollection::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf81a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(::StringW)>(&::System::Net::Configuration::BypassElementCollection::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf81d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElementCollection.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElementCollection::*)(int32_t)>(&::System::Net::Configuration::BypassElementCollection::RemoveAt)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf8210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::BypassElementCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::BypassElement* System::Net::Configuration::BypassElementCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::BypassElement*>(this, ___internal_method, index);
}
inline void System::Net::Configuration::BypassElementCollection::set_Item(int32_t  index, ::System::Net::Configuration::BypassElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline ::System::Net::Configuration::BypassElement* System::Net::Configuration::BypassElementCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::BypassElement*>(this, ___internal_method, name);
}
inline void System::Net::Configuration::BypassElementCollection::set_Item(::StringW  name, ::System::Net::Configuration::BypassElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline bool System::Net::Configuration::BypassElementCollection::get_ThrowOnDuplicate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::BypassElementCollection::Add(::System::Net::Configuration::BypassElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Net::Configuration::BypassElementCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElement* System::Net::Configuration::BypassElementCollection::CreateNewElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElement*>(this, ___internal_method);
}
inline ::System::Object* System::Net::Configuration::BypassElementCollection::GetElementKey(::System::Configuration::ConfigurationElement*  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, element);
}
inline int32_t System::Net::Configuration::BypassElementCollection::IndexOf(::System::Net::Configuration::BypassElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, element);
}
inline void System::Net::Configuration::BypassElementCollection::Remove(::System::Net::Configuration::BypassElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Net::Configuration::BypassElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Net::Configuration::BypassElementCollection::Remove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Net::Configuration::BypassElementCollection::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElementCollection*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline ::System::Net::Configuration::BypassElementCollection* System::Net::Configuration::BypassElementCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::BypassElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::BypassElementCollection::BypassElementCollection()   {
}
