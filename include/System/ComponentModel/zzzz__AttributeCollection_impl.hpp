#pragma once
// IWYU pragma private; include "System/ComponentModel/AttributeCollection.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_AttributeEntry_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_AttributeEntry_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::AttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xad48f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.FromExisting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::ComponentModel::AttributeCollection*, ::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::AttributeCollection::FromExisting)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xad49064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"FromExisting", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Attribute*> (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad49484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                    {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xad493f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(int32_t)>(&::System::ComponentModel::AttributeCollection::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad4948c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                    {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&::System::ComponentModel::AttributeCollection::get_Item)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xad494cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                    {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::System::Attribute*)>(&::System::ComponentModel::AttributeCollection::Contains)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad49f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::AttributeCollection::Contains)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xad49f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetDefaultAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (::System::ComponentModel::AttributeCollection::*)(::System::Type*)>(&::System::ComponentModel::AttributeCollection::GetDefaultAttribute)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0xad499bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"GetDefaultAttribute", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xad4a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::System::Attribute*)>(&::System::ComponentModel::AttributeCollection::Matches)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad4a034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Matches", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)(::ArrayW<::System::Attribute*>)>(&::System::ComponentModel::AttributeCollection::Matches)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xad4a0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Matches", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad4a168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_ICollection_get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xad4a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::ComponentModel::AttributeCollection::*)()>(&::System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad4a194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AttributeCollection::*)(::System::Array*, int32_t)>(&::System::ComponentModel::AttributeCollection::CopyTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad49418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*>& System::ComponentModel::AttributeCollection::__cordl_internal_get__attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr ::ArrayW<::System::Attribute*> const& System::ComponentModel::AttributeCollection::__cordl_internal_get__attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr void System::ComponentModel::AttributeCollection::__cordl_internal_set__attributes(::ArrayW<::System::Attribute*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attributes = value;
}
constexpr ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>& System::ComponentModel::AttributeCollection::__cordl_internal_get__foundAttributeTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundAttributeTypes;
}
constexpr ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry> const& System::ComponentModel::AttributeCollection::__cordl_internal_get__foundAttributeTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____foundAttributeTypes;
}
constexpr void System::ComponentModel::AttributeCollection::__cordl_internal_set__foundAttributeTypes(::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____foundAttributeTypes = value;
}
constexpr int32_t& System::ComponentModel::AttributeCollection::__cordl_internal_get__index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr int32_t const& System::ComponentModel::AttributeCollection::__cordl_internal_get__index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index;
}
constexpr void System::ComponentModel::AttributeCollection::__cordl_internal_set__index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index = value;
}
inline void System::ComponentModel::AttributeCollection::setStaticF_Empty(::System::ComponentModel::AttributeCollection*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::AttributeCollection*, "Empty", ::System::ComponentModel::AttributeCollection*>(std::forward<::System::ComponentModel::AttributeCollection*>(value));
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::AttributeCollection*, "Empty", ::System::ComponentModel::AttributeCollection*>();
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_defaultAttributes(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_defaultAttributes", ::System::ComponentModel::AttributeCollection*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::AttributeCollection::getStaticF_s_defaultAttributes()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_defaultAttributes", ::System::ComponentModel::AttributeCollection*>();
}
inline void System::ComponentModel::AttributeCollection::setStaticF_s_internalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_internalSyncObject", ::System::ComponentModel::AttributeCollection*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::AttributeCollection::getStaticF_s_internalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_internalSyncObject", ::System::ComponentModel::AttributeCollection*>();
}
inline void System::ComponentModel::AttributeCollection::_ctor(/* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline void System::ComponentModel::AttributeCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::FromExisting(::System::ComponentModel::AttributeCollection*  existing, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  newAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"FromExisting", {}, {::i2c::type_of<::System::ComponentModel::AttributeCollection*>(), ::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*>(nullptr, ___internal_method, existing, newAttributes);
}
inline ::ArrayW<::System::Attribute*> System::ComponentModel::AttributeCollection::get_Attributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Attribute*>>(this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::get_Item(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(this, ___internal_method, index);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::get_Item(::System::Type*  attributeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AttributeCollection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(this, ___internal_method, attributeType);
}
inline bool System::ComponentModel::AttributeCollection::Contains(::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attribute);
}
inline bool System::ComponentModel::AttributeCollection::Contains(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributes);
}
inline ::System::Attribute* System::ComponentModel::AttributeCollection::GetDefaultAttribute(::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"GetDefaultAttribute", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(this, ___internal_method, attributeType);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::ComponentModel::AttributeCollection::Matches(::System::Attribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Matches", {}, {::i2c::type_of<::System::Attribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attribute);
}
inline bool System::ComponentModel::AttributeCollection::Matches(::ArrayW<::System::Attribute*>  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"Matches", {}, {::i2c::type_of<::ArrayW<::System::Attribute*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributes);
}
inline bool System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t System::ComponentModel::AttributeCollection::System_Collections_ICollection_get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.ICollection.get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::ComponentModel::AttributeCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::ComponentModel::AttributeCollection::CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AttributeCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::New_ctor(/* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeCollection*>(attributes));
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::AttributeCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AttributeCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::ComponentModel::AttributeCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::ComponentModel::AttributeCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::ComponentModel::AttributeCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::ComponentModel::AttributeCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AttributeCollection::AttributeCollection()   {
}
