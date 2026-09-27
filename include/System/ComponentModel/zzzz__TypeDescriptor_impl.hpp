#pragma once
// IWYU pragma private; include "System/ComponentModel/TypeDescriptor.hpp"
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IComNativeDescriptorHandler_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__RefreshEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad855e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComNativeDescriptorHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComNativeDescriptorHandler* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComNativeDescriptorHandler)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xad855ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_ComNativeDescriptorHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.set_ComNativeDescriptorHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::IComNativeDescriptorHandler*)>(&::System::ComponentModel::TypeDescriptor::set_ComNativeDescriptorHandler)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad85748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"set_ComNativeDescriptorHandler", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComObjectType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad85690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_ComObjectType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_InterfaceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad85aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_InterfaceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_MetadataVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad85b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_MetadataVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.add_Refreshed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::RefreshEventHandler*)>(&::System::ComponentModel::TypeDescriptor::add_Refreshed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad85b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"add_Refreshed", {}, {::i2c::type_of<::System::ComponentModel::RefreshEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.remove_Refreshed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::RefreshEventHandler*)>(&::System::ComponentModel::TypeDescriptor::remove_Refreshed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad85c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"remove_Refreshed", {}, {::i2c::type_of<::System::ComponentModel::RefreshEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::AddAttributes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xad85d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Object*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::AddAttributes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xad85f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddEditorTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Hashtable*)>(&::System::ComponentModel::TypeDescriptor::AddEditorTable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad86384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddEditorTable", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xad85824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xad860e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProviderTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::AddProviderTransparent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xad87758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProviderTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::AddProviderTransparent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad8784c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xad87918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CheckDefaultProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateAssociation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::CreateAssociation)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0xad87f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateAssociation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateDesigner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::Design::IDesigner* (*)(::System::ComponentModel::IComponent*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CreateDesigner)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xad88668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateDesigner", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::CreateEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad88ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*, ::System::ComponentModel::EventDescriptor*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::CreateEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad88b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::EventDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::TypeDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xad88bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::IServiceProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::CreateProperty)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad88e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateProperty", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*, ::System::ComponentModel::PropertyDescriptor*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::CreateProperty)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xad88ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateProperty", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad89084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad89088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad8908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad89090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeConverter*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad89094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::TypeConverter*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeConverter*, ::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad89098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::TypeConverter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::EventDescriptorCollection*, ::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad8909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::EventDescriptorCollection*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::EventDescriptorCollection*, ::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad890a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::EventDescriptorCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad890a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptorCollection*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad890a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptorCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.FilterMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (*)(::System::Collections::IList*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xad890ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"FilterMembers", {}, {::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAssociation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0xad753fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAssociation", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xad79ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad6fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xad89560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad7f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetCache", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xad8ccac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xad8cd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetComponentName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad812e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetComponentName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetComponentName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xad8ce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetComponentName", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8cf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xad8cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xad8d08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ConvertFromInvariantString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::StringW)>(&::System::ComponentModel::TypeDescriptor::ConvertFromInvariantString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad8d174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"ConvertFromInvariantString", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xad8d1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8d308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xad8d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xad8d44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xad8d5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(&::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xad89490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xad89978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad89b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetExtendedDescriptor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad8d6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, bool)>(&::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xad8d71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad8d878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xad769bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xad8d9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xad83b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad8e0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad8e164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xad8dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtenderCollisionSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ComponentModel::MemberDescriptor*)>(&::System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xad8e824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetExtenderCollisionSuffix", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetFullComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetFullComponentName)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad8eb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetFullComponentName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xad8ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetNodeForBaseType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xad83c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xad8ecb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad83bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad8eefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad6e6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool)>(&::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad8f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetPropertiesImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*>, bool, bool)>(&::System::ComponentModel::TypeDescriptor::GetPropertiesImpl)> {
  constexpr static std::size_t size = 0x660;
  constexpr static std::size_t addrs = 0xad8ef68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetPropertiesImpl", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetProvider)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad85e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetProvider)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xad86044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProvider", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProviderRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8f638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProviderRecursive", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xad72fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetReflectionType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad8f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetReflectionType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad856f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Type*, bool)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xad863e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8cbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad86e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::ComponentModel::TypeDescriptionProvider*)>(&::System::ComponentModel::TypeDescriptor::NodeRemove)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xad8f744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeRemove", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::ArrayW<::System::Attribute*>, ::System::Object*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xad8e1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineAttributeFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x1840;
  constexpr static std::size_t addrs = 0xad8aca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0xad8c4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineInitialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  constexpr static std::size_t size = 0x106c;
  constexpr static std::size_t addrs = 0xad89c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineMerge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad8faf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RaiseRefresh", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad8fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RaiseRefresh", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad8fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x7ec;
  constexpr static std::size_t addrs = 0xad86f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0xad8689c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Module*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x944;
  constexpr static std::size_t addrs = 0xad8fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Reflection::Module*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Assembly*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xad905e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveAssociation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveAssociation)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xad906b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveAssociation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveAssociations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveAssociations)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xad90a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveAssociations", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RemoveProvider)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xad90b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveProvider)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad90c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProviderTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RemoveProviderTransparent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xad90cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProviderTransparent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveProviderTransparent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xad90dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ShouldHideMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*)>(&::System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad89404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"ShouldHideMember", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::System::Attribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.SortDescriptorArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*)>(&::System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad90e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"SortDescriptorArray", {}, {::i2c::type_of<::System::Collections::IList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::TypeDescriptor::Trace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad90f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTable(::System::ComponentModel::WeakHashtable*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTable()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTypeTable(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTypeTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__defaultProviders(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__defaultProviders()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__associationTable(::System::ComponentModel::WeakHashtable*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__associationTable()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__metadataVersion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_metadataVersion", ::System::ComponentModel::TypeDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__metadataVersion()  {
return ::cordl_internals::getStaticField<int32_t, "_metadataVersion", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__collisionIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_collisionIndex", ::System::ComponentModel::TypeDescriptor*>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__collisionIndex()  {
return ::cordl_internals::getStaticField<int32_t, "_collisionIndex", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::TypeDescriptor::getStaticF_TraceDescriptor()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineInitializeKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineInitializeKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineInitializeKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineMergeKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineMergeKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineMergeKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineFilterKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineFilterKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineFilterKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "_pipelineAttributeFilterKeys", ::System::ComponentModel::TypeDescriptor*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> System::ComponentModel::TypeDescriptor::getStaticF__pipelineAttributeFilterKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "_pipelineAttributeFilterKeys", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__internalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::getStaticF__internalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "_internalSyncObject", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed", ::System::ComponentModel::TypeDescriptor*>(std::forward<::System::ComponentModel::RefreshEventHandler*>(value));
}
inline ::System::ComponentModel::RefreshEventHandler* System::ComponentModel::TypeDescriptor::getStaticF_Refreshed()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed", ::System::ComponentModel::TypeDescriptor*>();
}
inline void System::ComponentModel::TypeDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::IComNativeDescriptorHandler* System::ComponentModel::TypeDescriptor::get_ComNativeDescriptorHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_ComNativeDescriptorHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComNativeDescriptorHandler*>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::set_ComNativeDescriptorHandler(::System::ComponentModel::IComNativeDescriptorHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"set_ComNativeDescriptorHandler", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_ComObjectType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_ComObjectType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_InterfaceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_InterfaceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"get_MetadataVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::add_Refreshed(::System::ComponentModel::RefreshEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"add_Refreshed", {}, {::i2c::type_of<::System::ComponentModel::RefreshEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void System::ComponentModel::TypeDescriptor::remove_Refreshed(::System::ComponentModel::RefreshEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"remove_Refreshed", {}, {::i2c::type_of<::System::ComponentModel::RefreshEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::AddAttributes(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, type, attributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::AddAttributes(::System::Object*  instance, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, instance, attributes);
}
inline void System::ComponentModel::TypeDescriptor::AddEditorTable(::System::Type*  editorBaseType, ::System::Collections::Hashtable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddEditorTable", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, editorBaseType, table);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"AddProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CheckDefaultProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::CreateAssociation(::System::Object*  primary, ::System::Object*  secondary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateAssociation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::Design::IDesigner* System::ComponentModel::TypeDescriptor::CreateDesigner(::System::ComponentModel::IComponent*  component, ::System::Type*  designerBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateDesigner", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::Design::IDesigner*>(nullptr, ___internal_method, component, designerBaseType);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::CreateEvent(::System::Type*  componentType, ::StringW  name, ::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(nullptr, ___internal_method, componentType, name, type, attributes);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::CreateEvent(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldEventDescriptor, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::EventDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(nullptr, ___internal_method, componentType, oldEventDescriptor, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::CreateInstance(::System::IServiceProvider*  provider, ::System::Type*  objectType, ::ArrayW<::System::Type*>  argTypes, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateInstance", {}, {::i2c::type_of<::System::IServiceProvider*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::CreateProperty(::System::Type*  componentType, ::StringW  name, ::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateProperty", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(nullptr, ___internal_method, componentType, name, type, attributes);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::CreateProperty(::System::Type*  componentType, ::System::ComponentModel::PropertyDescriptor*  oldPropertyDescriptor, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"CreateProperty", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(nullptr, ___internal_method, componentType, oldPropertyDescriptor, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::Type*  type, ::System::ComponentModel::AttributeCollection*  attributes, ::System::ComponentModel::AttributeCollection*  debugAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, attributes, debugAttributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::ComponentModel::AttributeCollection*  debugAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::ComponentModel::AttributeCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attributes, debugAttributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attributes, type);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection*  attributes, ::System::Object*  instance, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attributes, instance, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::TypeConverter*  converter, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::TypeConverter*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, converter, type);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::TypeConverter*  converter, ::System::Object*  instance, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::TypeConverter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, converter, instance, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::EventDescriptorCollection*  events, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::EventDescriptorCollection*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, events, type, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::EventDescriptorCollection*  events, ::System::Object*  instance, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::EventDescriptorCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, events, instance, attributes, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::PropertyDescriptorCollection*  properties, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptorCollection*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties, type, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::PropertyDescriptorCollection*  properties, ::System::Object*  instance, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"DebugValidate", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptorCollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties, instance, attributes, noCustomTypeDesc);
}
inline ::System::Collections::ArrayList* System::ComponentModel::TypeDescriptor::FilterMembers(::System::Collections::IList*  members, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"FilterMembers", {}, {::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(nullptr, ___internal_method, members, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetAssociation(::System::Type*  type, ::System::Object*  primary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAssociation", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, primary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor::GetCache(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetCache", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(nullptr, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetClassName", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, componentType);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetComponentName(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetComponentName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetComponentName(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetComponentName", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetConverter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::ConvertFromInvariantString(::System::Type*  type, ::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"ConvertFromInvariantString", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, stringValue);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDefaultProperty", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Type*  type, ::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, type, typeName);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetExtendedDescriptor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(nullptr, ___internal_method, component);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Object*  component, ::System::Type*  editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, component, editorBaseType);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Object*  component, ::System::Type*  editorBaseType, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, component, editorBaseType, noCustomTypeDesc);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Type*  type, ::System::Type*  editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEditor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type*  componentType, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, componentType, attributes);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetEvents", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor*  member)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetExtenderCollisionSuffix", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, member);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetFullComponentName(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetFullComponentName", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, component);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetNodeForBaseType(::System::Type*  searchType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetNodeForBaseType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, searchType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type*  componentType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type*  componentType, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, componentType, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object*  component, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::System::Object*  component, ::ArrayW<::System::Attribute*>  attributes, bool  noCustomTypeDesc, bool  noAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetPropertiesImpl", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProvider(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProvider(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProvider", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProviderRecursive(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetProviderRecursive", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetReflectionType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"GetReflectionType", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type*  type, bool  createDelegator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, type, createDelegator);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object*  instance, bool  createDelegator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeFor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(nullptr, ___internal_method, instance, createDelegator);
}
inline void System::ComponentModel::TypeDescriptor::NodeRemove(::System::Object*  key, ::System::ComponentModel::TypeDescriptionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"NodeRemove", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key, provider);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::ArrayW<::System::Attribute*>  filter, ::System::Object*  instance, ::System::Collections::IDictionary*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineAttributeFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::System::Object*  instance, ::System::Collections::IDictionary*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineFilter", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t  pipelineType, ::System::Collections::ICollection*  members, ::System::Collections::IDictionary*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineInitialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, members, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t  pipelineType, ::System::Collections::ICollection*  primary, ::System::Collections::ICollection*  secondary, ::System::Object*  instance, ::System::Collections::IDictionary*  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"PipelineMerge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Collections::ICollection*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RaiseRefresh", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RaiseRefresh", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Object*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Object*  component, bool  refreshReflectionProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, component, refreshReflectionProvider);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Reflection::Module*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Reflection::Module*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_module);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Reflection::Assembly*  assembly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Refresh", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assembly);
}
inline void System::ComponentModel::TypeDescriptor::RemoveAssociation(::System::Object*  primary, ::System::Object*  secondary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveAssociation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, primary, secondary);
}
inline void System::ComponentModel::TypeDescriptor::RemoveAssociations(::System::Object*  primary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveAssociations", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, primary);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProvider(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProvider", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider*  provider, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"RemoveProviderTransparent", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider, instance);
}
inline bool System::ComponentModel::TypeDescriptor::ShouldHideMember(::System::ComponentModel::MemberDescriptor*  member, ::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"ShouldHideMember", {}, {::i2c::type_of<::System::ComponentModel::MemberDescriptor*>(), ::i2c::type_of<::System::Attribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, attribute);
}
inline void System::ComponentModel::TypeDescriptor::SortDescriptorArray(::System::Collections::IList*  infos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"SortDescriptorArray", {}, {::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos);
}
inline void System::ComponentModel::TypeDescriptor::Trace(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, args);
}
inline ::System::ComponentModel::TypeDescriptor* System::ComponentModel::TypeDescriptor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor::TypeDescriptor()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::*)()>(&::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad97070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface* System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorInterface::TypeDescriptor_TypeDescriptorInterface()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::*)()>(&::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad97068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject* System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptorComObject::TypeDescriptor_TypeDescriptorComObject()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::ComponentModel::TypeDescriptionProvider*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad92ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.CreateInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xad93020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad93174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtendedTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xad931e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetExtenderProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*> (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad932e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetFullComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetFullComponentName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad93354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetReflectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad933c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetRuntimeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetRuntimeType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad93474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.GetTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xad93520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode.IsSupportedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::IsSupportedType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad936c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 12}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* const& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_set_Next(::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Provider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Provider;
}
constexpr ::System::ComponentModel::TypeDescriptionProvider* const& System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_get_Provider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Provider;
}
constexpr void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::__cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Provider = value;
}
inline void System::ComponentModel::TypeDescriptor_TypeDescriptionNode::_ctor(::System::ComponentModel::TypeDescriptionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::CreateInstance(::System::IServiceProvider*  provider, ::System::Type*  objectType, ::ArrayW<::System::Type*>  argTypes, ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetCache(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtendedTypeDescriptor(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*> System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetExtenderProviders(::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*>>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetFullComponentName(::System::Object*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, component);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetReflectionType(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType, instance);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetRuntimeType(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, objectType);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline bool System::ComponentModel::TypeDescriptor_TypeDescriptionNode::IsSupportedType(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode* System::ComponentModel::TypeDescriptor_TypeDescriptionNode::New_ctor(::System::ComponentModel::TypeDescriptionProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_TypeDescriptionNode*>(provider));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_TypeDescriptionNode::TypeDescriptor_TypeDescriptionNode()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad921c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xad92204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad92314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad9242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad92544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad9265c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad92774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xad9288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad92a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xad92b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xad92c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xad92d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xad92ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__primary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__primary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary;
}
constexpr void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primary = value;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__secondary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary;
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor* const& System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_get__secondary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary;
}
constexpr void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::__cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondary = value;
}
inline void System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::_ctor(::System::ComponentModel::ICustomTypeDescriptor*  primary, ::System::ComponentModel::ICustomTypeDescriptor*  secondary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::New_ctor(::System::ComponentModel::ICustomTypeDescriptor*  primary, ::System::ComponentModel::ICustomTypeDescriptor*  secondary)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor*>(primary, secondary));
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr  System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_MergedTypeDescriptor::TypeDescriptor_MergedTypeDescriptor()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xad92034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::*)()>(&::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad92150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::setStaticF_Instance(::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance", ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(std::forward<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(value));
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*, "Instance", ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>();
}
inline int32_t System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::Compare(::System::Object*  left, ::System::Object*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, left, right);
}
inline void System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer*>());
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr  System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::operator ::System::Collections::IComparer*() noexcept {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::i___System__Collections__IComparer() noexcept {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer::TypeDescriptor_MemberDescriptorComparer()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad91fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_FilterCacheItem.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeDescriptor_FilterCacheItem::*)(::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(&::System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad92024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get__filterService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterService;
}
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService* const& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get__filterService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterService;
}
constexpr void System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterService = value;
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get_FilteredMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilteredMembers;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_get_FilteredMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilteredMembers;
}
constexpr void System::ComponentModel::TypeDescriptor_FilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilteredMembers = value;
}
inline void System::ComponentModel::TypeDescriptor_FilterCacheItem::_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService, ::System::Collections::ICollection*  filteredMembers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filterService, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_FilterCacheItem::IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::ComponentModel::Design::ITypeDescriptorFilterService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filterService);
}
inline ::System::ComponentModel::TypeDescriptor_FilterCacheItem* System::ComponentModel::TypeDescriptor_FilterCacheItem::New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService*  filterService, ::System::Collections::ICollection*  filteredMembers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_FilterCacheItem*>(filterService, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_FilterCacheItem::TypeDescriptor_FilterCacheItem()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(::ArrayW<::System::Attribute*>, ::System::Collections::ICollection*)>(&::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad91f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad91f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                        {"IsValid", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_set__filter(::ArrayW<::System::Attribute*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilteredMembers;
}
constexpr ::System::Collections::ICollection* const& System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FilteredMembers;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FilteredMembers = value;
}
inline void System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::_ctor(::ArrayW<::System::Attribute*>  filter, ::System::Collections::ICollection*  filteredMembers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, filteredMembers);
}
inline bool System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::IsValid(::ArrayW<::System::Attribute*>  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(),
                        {"IsValid", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filter);
}
inline ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem* System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::New_ctor(::ArrayW<::System::Attribute*>  filter, ::System::Collections::ICollection*  filteredMembers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem*>(filter, filteredMembers));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_AttributeFilterCacheItem::TypeDescriptor_AttributeFilterCacheItem()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::*)(::System::ComponentModel::IComNativeDescriptorHandler*)>(&::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad9167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider.get_Handler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::IComNativeDescriptorHandler* (::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::*)()>(&::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad916ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {"get_Handler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider.set_Handler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::*)(::System::ComponentModel::IComNativeDescriptorHandler*)>(&::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad916b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {"set_Handler", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider.GetTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xad916bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::__cordl_internal_get__handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr ::System::ComponentModel::IComNativeDescriptorHandler* const& System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::__cordl_internal_get__handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr void System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::__cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handler = value;
}
inline void System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline ::System::ComponentModel::IComNativeDescriptorHandler* System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::get_Handler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {"get_Handler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComNativeDescriptorHandler*>(this, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::set_Handler(::System::ComponentModel::IComNativeDescriptorHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(),
                        {"set_Handler", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider* System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::New_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider*>(handler));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_ComNativeDescriptionProvider::TypeDescriptor_ComNativeDescriptionProvider()   {
}
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)(::System::ComponentModel::IComNativeDescriptorHandler*, ::System::Object*)>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad91804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xad91848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad918f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad9199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad919a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad91a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad91afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)(::System::Type*)>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad91ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xad91c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad91d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)()>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad91dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xad91e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad91f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_get__handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr ::System::ComponentModel::IComNativeDescriptorHandler* const& System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_get__handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr void System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handler = value;
}
constexpr ::System::Object*& System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_get__instance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr ::System::Object* const& System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_get__instance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instance;
}
constexpr void System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::__cordl_internal_set__instance(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instance = value;
}
inline void System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComNativeDescriptorHandler*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, instance);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::New_ctor(::System::ComponentModel::IComNativeDescriptorHandler*  handler, ::System::Object*  instance)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor*>(handler, instance));
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr  System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor::ComNativeDescriptionProvider_TypeDescriptor_ComNativeTypeDescriptor()   {
}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::TypeDescriptor_AttributeProvider::*)(::System::ComponentModel::TypeDescriptionProvider*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::TypeDescriptor_AttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad912e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor_AttributeProvider.GetTypeDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::TypeDescriptor_AttributeProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor_AttributeProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad91310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::TypeDescriptor_AttributeProvider::__cordl_internal_get__attrs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attrs;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::TypeDescriptor_AttributeProvider::__cordl_internal_get__attrs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attrs;
}
constexpr void System::ComponentModel::TypeDescriptor_AttributeProvider::__cordl_internal_set__attrs(::ArrayW<::System::Attribute*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attrs = value;
}
inline void System::ComponentModel::TypeDescriptor_AttributeProvider::_ctor(::System::ComponentModel::TypeDescriptionProvider*  existingProvider, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::TypeDescriptionProvider*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingProvider, attrs);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor_AttributeProvider::GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*>(this, ___internal_method, objectType, instance);
}
inline ::System::ComponentModel::TypeDescriptor_AttributeProvider* System::ComponentModel::TypeDescriptor_AttributeProvider::New_ctor(::System::ComponentModel::TypeDescriptionProvider*  existingProvider, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  attrs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::TypeDescriptor_AttributeProvider*>(existingProvider, attrs));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor_AttributeProvider::TypeDescriptor_AttributeProvider()   {
}
//  Writing Method size for method: ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::*)(::ArrayW<::System::Attribute*>, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xad913ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::*)()>(&::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xad913e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(),
                    {::i2c::class_of<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(), 16}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::__cordl_internal_get__attributeArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeArray;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::__cordl_internal_get__attributeArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeArray;
}
constexpr void System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::__cordl_internal_set__attributeArray(::ArrayW<::System::Attribute*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributeArray = value;
}
inline void System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::_ctor(::ArrayW<::System::Attribute*>  attrs, ::System::ComponentModel::ICustomTypeDescriptor*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>(), ::i2c::type_of<::System::ComponentModel::ICustomTypeDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrs, parent);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::GetAttributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor* System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::New_ctor(::ArrayW<::System::Attribute*>  attrs, ::System::ComponentModel::ICustomTypeDescriptor*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor*>(attrs, parent));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor::AttributeProvider_TypeDescriptor_AttributeTypeDescriptor()   {
}
