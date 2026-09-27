#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyDescriptor.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::StringW, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::PropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad62958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::ComponentModel::MemberDescriptor*)>(&::System::ComponentModel::PropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad62960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::ComponentModel::MemberDescriptor*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::PropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad57a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_ComponentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_ComponentType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_Converter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_Converter)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xad62968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_IsLocalizable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_IsLocalizable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xad62fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_SerializationVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::DesignerSerializationVisibility (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_SerializationVisibility)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad6309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"get_SerializationVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_PropertyType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.AddValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::EventHandler*)>(&::System::ComponentModel::PropertyDescriptor::AddValueChanged)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad63168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.CanResetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::CanResetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::Equals)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xad632cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Type*)>(&::System::ComponentModel::PropertyDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xad62dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.FillAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Collections::IList*)>(&::System::ComponentModel::PropertyDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad634b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetChildProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad63508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetChildProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::PropertyDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad63520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetChildProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xad63538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetChildProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::PropertyDescriptor::GetChildProperties)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad6354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Type*)>(&::System::ComponentModel::PropertyDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xad63604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xad63a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetInvocationTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::GetInvocationTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xad63a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetTypeFromName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::PropertyDescriptor::*)(::StringW)>(&::System::ComponentModel::PropertyDescriptor::GetTypeFromName)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xad62bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetTypeFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.OnValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::EventArgs*)>(&::System::ComponentModel::PropertyDescriptor::OnValueChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad63b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.RemoveValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::EventHandler*)>(&::System::ComponentModel::PropertyDescriptor::RemoveValueChanged)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xad63bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.GetValueChangedHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::EventHandler* (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::GetValueChangedHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad63d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetValueChangedHandler", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.ResetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::ResetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.ShouldSerializeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)(::System::Object*)>(&::System::ComponentModel::PropertyDescriptor::ShouldSerializeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::PropertyDescriptor.get_SupportsChangeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::PropertyDescriptor::*)()>(&::System::ComponentModel::PropertyDescriptor::get_SupportsChangeEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad63de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 32}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeConverter*& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__converter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converter;
}
constexpr ::System::ComponentModel::TypeConverter* const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__converter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converter;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__converter(::System::ComponentModel::TypeConverter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____converter = value;
}
constexpr ::System::Collections::Hashtable*& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__valueChangedHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueChangedHandlers;
}
constexpr ::System::Collections::Hashtable* const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__valueChangedHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueChangedHandlers;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__valueChangedHandlers(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueChangedHandlers = value;
}
constexpr ::ArrayW<::System::Object*>& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editors;
}
constexpr ::ArrayW<::System::Object*> const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editors;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editors(::ArrayW<::System::Object*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____editors = value;
}
constexpr ::ArrayW<::System::Type*>& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorTypes;
}
constexpr ::ArrayW<::System::Type*> const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorTypes;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editorTypes(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____editorTypes = value;
}
constexpr int32_t& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorCount;
}
constexpr int32_t const& System::ComponentModel::PropertyDescriptor::__cordl_internal_get__editorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____editorCount;
}
constexpr void System::ComponentModel::PropertyDescriptor::__cordl_internal_set__editorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____editorCount = value;
}
inline void System::ComponentModel::PropertyDescriptor::_ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, attrs);
}
inline void System::ComponentModel::PropertyDescriptor::_ctor(::System::ComponentModel::MemberDescriptor*  descr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descr);
}
inline void System::ComponentModel::PropertyDescriptor::_ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descr, attrs);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::get_ComponentType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::PropertyDescriptor::get_Converter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline bool System::ComponentModel::PropertyDescriptor::get_IsLocalizable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::ComponentModel::PropertyDescriptor::get_IsReadOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::DesignerSerializationVisibility System::ComponentModel::PropertyDescriptor::get_SerializationVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"get_SerializationVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::DesignerSerializationVisibility>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::get_PropertyType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::ComponentModel::PropertyDescriptor::AddValueChanged(::System::Object*  component, ::System::EventHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, handler);
}
inline bool System::ComponentModel::PropertyDescriptor::CanResetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline bool System::ComponentModel::PropertyDescriptor::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::CreateInstance(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
inline void System::ComponentModel::PropertyDescriptor::FillAttributes(::System::Collections::IList*  attributeList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeList);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::PropertyDescriptor::GetChildProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::PropertyDescriptor::GetChildProperties(::ArrayW<::System::Attribute*>  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, filter);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::PropertyDescriptor::GetChildProperties(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetChildProperties", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::PropertyDescriptor::GetChildProperties(::System::Object*  instance, ::ArrayW<::System::Attribute*>  filter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, instance, filter);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::GetEditor(::System::Type*  editorBaseType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline int32_t System::ComponentModel::PropertyDescriptor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::GetInvocationTarget(::System::Type*  type, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, instance);
}
inline ::System::Type* System::ComponentModel::PropertyDescriptor::GetTypeFromName(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetTypeFromName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
inline ::System::Object* System::ComponentModel::PropertyDescriptor::GetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, component);
}
inline void System::ComponentModel::PropertyDescriptor::OnValueChanged(::System::Object*  component, ::System::EventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, e);
}
inline void System::ComponentModel::PropertyDescriptor::RemoveValueChanged(::System::Object*  component, ::System::EventHandler*  handler)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, handler);
}
inline ::System::EventHandler* System::ComponentModel::PropertyDescriptor::GetValueChangedHandler(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(),
                        {"GetValueChangedHandler", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::EventHandler*>(this, ___internal_method, component);
}
inline void System::ComponentModel::PropertyDescriptor::ResetValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void System::ComponentModel::PropertyDescriptor::SetValue(::System::Object*  component, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component, value);
}
inline bool System::ComponentModel::PropertyDescriptor::ShouldSerializeValue(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline bool System::ComponentModel::PropertyDescriptor::get_SupportsChangeEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::PropertyDescriptor*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::PropertyDescriptor::New_ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyDescriptor*>(name, attrs));
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::PropertyDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor*  descr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyDescriptor*>(descr));
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::PropertyDescriptor::New_ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::PropertyDescriptor*>(descr, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::PropertyDescriptor::PropertyDescriptor()   {
}
