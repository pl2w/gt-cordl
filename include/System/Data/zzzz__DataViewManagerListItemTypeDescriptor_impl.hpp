#pragma once
// IWYU pragma private; include "System/Data/DataViewManagerListItemTypeDescriptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewManagerListItemTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataView_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Data::DataViewManager*)>(&::System::Data::DataViewManagerListItemTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa934fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.GetDataView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataView* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Data::DataTable*)>(&::System::Data::DataViewManagerListItemTypeDescriptor::GetDataView)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa92f3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"GetDataView", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa935ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::TypeConverter* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptor* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::Type*)>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa935f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa935f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::EventDescriptorCollection* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa935fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataViewManagerListItemTypeDescriptor::*)()>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa936028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::ArrayW<::System::Attribute*>)>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa9360c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewManagerListItemTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewManagerListItemTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(&::System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa936264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__dataViewManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr void System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataViewManager = value;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection*& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__propsCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propsCollection;
}
constexpr ::System::ComponentModel::PropertyDescriptorCollection* const& System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_get__propsCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propsCollection;
}
constexpr void System::Data::DataViewManagerListItemTypeDescriptor::__cordl_internal_set__propsCollection(::System::ComponentModel::PropertyDescriptorCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propsCollection = value;
}
inline void System::Data::DataViewManagerListItemTypeDescriptor::_ctor(::System::Data::DataViewManager*  dataViewManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataViewManager);
}
inline ::System::Data::DataView* System::Data::DataViewManagerListItemTypeDescriptor::GetDataView(::System::Data::DataTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"GetDataView", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataView*>(this, ___internal_method, table);
}
inline ::System::ComponentModel::AttributeCollection* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetAttributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(this, ___internal_method);
}
inline ::StringW System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetClassName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetComponentName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetConverter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type*  editorBaseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEditor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetEvents", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetProperties", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*>(this, ___internal_method, attributes);
}
inline ::System::Object* System::Data::DataViewManagerListItemTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor*  pd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewManagerListItemTypeDescriptor*>(),
                        {"System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", {}, {::i2c::type_of<::System::ComponentModel::PropertyDescriptor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, pd);
}
inline ::System::Data::DataViewManagerListItemTypeDescriptor* System::Data::DataViewManagerListItemTypeDescriptor::New_ctor(::System::Data::DataViewManager*  dataViewManager)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewManagerListItemTypeDescriptor*>(dataViewManager));
}
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr  System::Data::DataViewManagerListItemTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::Data::DataViewManagerListItemTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataViewManagerListItemTypeDescriptor::DataViewManagerListItemTypeDescriptor()   {
}
