#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DBNull_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__StringComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad9c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Collections::IEqualityComparer*)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xada1748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t, ::System::Collections::IEqualityComparer*)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xad9ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad9c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::DBNull*)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad9dc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DBNull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameObjectCollectionBase::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xad9cb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameObjectCollectionBase::GetObjectData)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0xada1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Object*)>(&::System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0xada20d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xada17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase::Reset)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xada18a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.FindEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&::System::Collections::Specialized::NameObjectCollectionBase::FindEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xada2884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"FindEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada293c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseHasKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseHasKeys)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad9d024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseHasKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::System::Object*)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseAdd)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xad9d1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseAdd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseRemove)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xad9d66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseRemove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseClear)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad9cfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xad9d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGet", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::StringW, ::System::Object*)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad9d57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseGet)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad9d930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameObjectCollectionBase::*)(int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad9da54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xada2988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xada2a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase::*)(::System::Array*, int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xada2a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xada2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada2dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.BaseGetAllKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::BaseGetAllKeys)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xad9db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGetAllKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* (::System::Collections::Specialized::NameObjectCollectionBase::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase::get_Keys)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xada2ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 15}
                ));
    return ___internal_method;
  }
};
constexpr bool& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr bool const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOnly;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__readOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readOnly = value;
}
constexpr ::System::Collections::ArrayList*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__entriesArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesArray;
}
constexpr ::System::Collections::ArrayList* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__entriesArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesArray;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__entriesArray(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entriesArray = value;
}
constexpr ::System::Collections::IEqualityComparer*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__keyComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyComparer;
}
constexpr ::System::Collections::IEqualityComparer* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__keyComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyComparer;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__keyComparer(::System::Collections::IEqualityComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyComparer = value;
}
constexpr ::System::Collections::Hashtable*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__entriesTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesTable;
}
constexpr ::System::Collections::Hashtable* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__entriesTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entriesTable;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__entriesTable(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entriesTable = value;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__nullKeyEntry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullKeyEntry;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__nullKeyEntry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullKeyEntry;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__nullKeyEntry(::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nullKeyEntry = value;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keys;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keys;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__keys(::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keys = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__serializationInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationInfo;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__serializationInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationInfo;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__serializationInfo(::System::Runtime::Serialization::SerializationInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializationInfo = value;
}
constexpr int32_t& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
constexpr ::System::Object*& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__syncRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRoot;
}
constexpr ::System::Object* const& System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_get__syncRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRoot;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase::__cordl_internal_set__syncRoot(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncRoot = value;
}
inline void System::Collections::Specialized::NameObjectCollectionBase::setStaticF_defaultComparer(::System::StringComparer*  value)  {
::cordl_internals::setStaticField<::System::StringComparer*, "defaultComparer", ::System::Collections::Specialized::NameObjectCollectionBase*>(std::forward<::System::StringComparer*>(value));
}
inline ::System::StringComparer* System::Collections::Specialized::NameObjectCollectionBase::getStaticF_defaultComparer()  {
return ::cordl_internals::getStaticField<::System::StringComparer*, "defaultComparer", ::System::Collections::Specialized::NameObjectCollectionBase*>();
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::Collections::IEqualityComparer*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, equalityComparer);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t  capacity, ::System::Collections::IEqualityComparer*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, equalityComparer);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::DBNull*  dummy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DBNull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummy);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization(::System::Object*  sender)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::Reset(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* System::Collections::Specialized::NameObjectCollectionBase::FindEntry(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"FindEntry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*>(this, ___internal_method, key);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase::BaseHasKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseHasKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseAdd(::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseAdd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseRemove(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseRemove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGet", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::BaseSet(::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseSet", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline ::StringW System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGetKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Collections::Specialized::NameObjectCollectionBase::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameObjectCollectionBase::BaseGetAllKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(),
                        {"BaseGetAllKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* System::Collections::Specialized::NameObjectCollectionBase::get_Keys()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>());
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::Collections::IEqualityComparer*  equalityComparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>(equalityComparer));
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int32_t  capacity, ::System::Collections::IEqualityComparer*  equalityComparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>(capacity, equalityComparer));
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>(capacity));
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::DBNull*  dummy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>(dummy));
}
inline ::System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase*>(info, context));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::NameObjectCollectionBase::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::NameObjectCollectionBase::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Collections::Specialized::NameObjectCollectionBase::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Collections::Specialized::NameObjectCollectionBase::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Collections::Specialized::NameObjectCollectionBase::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameObjectCollectionBase::NameObjectCollectionBase()   {
}
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)(::System::Collections::Specialized::NameObjectCollectionBase*)>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xada2e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Specialized::NameObjectCollectionBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xada3140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xada319c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection.System_Collections_ICollection_CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)(::System::Array*, int32_t)>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_CopyTo)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xada31bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection.System_Collections_ICollection_get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_get_SyncRoot)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xada34bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection.System_Collections_ICollection_get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xada3568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Specialized::NameObjectCollectionBase*& System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::__cordl_internal_get__coll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coll;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase* const& System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::__cordl_internal_get__coll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coll;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::__cordl_internal_set__coll(::System::Collections::Specialized::NameObjectCollectionBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coll = value;
}
inline void System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::_ctor(::System::Collections::Specialized::NameObjectCollectionBase*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Specialized::NameObjectCollectionBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline ::System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::System_Collections_ICollection_get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {"System.Collections.ICollection.get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::New_ctor(::System::Collections::Specialized::NameObjectCollectionBase*  coll)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>(coll));
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection*>());
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection::NameObjectCollectionBase_KeysCollection()   {
}
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::*)(::System::Collections::Specialized::NameObjectCollectionBase*)>(&::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xada29e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Specialized::NameObjectCollectionBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xada2f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xada3018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::*)()>(&::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xada30a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos;
}
constexpr int32_t const& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pos;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_set__pos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pos = value;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase*& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__coll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coll;
}
constexpr ::System::Collections::Specialized::NameObjectCollectionBase* const& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__coll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coll;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_set__coll(::System::Collections::Specialized::NameObjectCollectionBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coll = value;
}
constexpr int32_t& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr int32_t const& System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
inline void System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::_ctor(::System::Collections::Specialized::NameObjectCollectionBase*  coll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Specialized::NameObjectCollectionBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coll);
}
inline bool System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator* System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::New_ctor(::System::Collections::Specialized::NameObjectCollectionBase*  coll)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator*>(coll));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectKeysEnumerator::NameObjectCollectionBase_NameObjectKeysEnumerator()   {
}
//  Writing Method size for method: ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::*)(::StringW, ::System::Object*)>(&::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xada2944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::StringW const& System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr ::System::Object*& System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::System::Object* const& System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::__cordl_internal_set_Value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::_ctor(::StringW  name, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry* System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::New_ctor(::StringW  name, ::System::Object*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry*>(name, value));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry::NameObjectCollectionBase_NameObjectEntry()   {
}
