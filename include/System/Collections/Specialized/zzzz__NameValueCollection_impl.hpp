#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NameValueCollection.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_impl.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DBNull_def.hpp"
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xad9c83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xad9c8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(int32_t, ::System::Collections::IEqualityComparer*)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad9ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xad9caac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.InvalidateCachedArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad9cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"InvalidateCachedArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetAsOneString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::ArrayList*)>(&::System::Collections::Specialized::NameValueCollection::GetAsOneString)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xad9cb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"GetAsOneString", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetAsStringArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::ArrayList*)>(&::System::Collections::Specialized::NameValueCollection::GetAsStringArray)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xad9cd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"GetAsStringArray", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::System::Collections::Specialized::NameValueCollection*)>(&::System::Collections::Specialized::NameValueCollection::Add)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xad9cdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xad9cf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.HasKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::HasKeys)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad9d010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"HasKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.InternalHasKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::InternalHasKeys)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad9d020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&::System::Collections::Specialized::NameValueCollection::Add)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xad9d05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&::System::Collections::Specialized::NameValueCollection::Get)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad9d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&::System::Collections::Specialized::NameValueCollection::GetValues)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xad9d3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&::System::Collections::Specialized::NameValueCollection::Set)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xad9d478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&::System::Collections::Specialized::NameValueCollection::Remove)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad9d62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(::StringW)>(&::System::Collections::Specialized::NameValueCollection::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad9d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::StringW, ::StringW)>(&::System::Collections::Specialized::NameValueCollection::set_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad9d89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::Get)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad9d8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::GetValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xad9d9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::GetKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad9da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Collections::Specialized::NameValueCollection::*)(int32_t)>(&::System::Collections::Specialized::NameValueCollection::get_Item)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xad9daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection.get_AllKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Collections::Specialized::NameValueCollection::*)()>(&::System::Collections::Specialized::NameValueCollection::get_AllKeys)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xad9db00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                    {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::Specialized::NameValueCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Collections::Specialized::NameValueCollection::*)(::System::DBNull*)>(&::System::Collections::Specialized::NameValueCollection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad9dc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DBNull*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__all()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____all;
}
constexpr ::ArrayW<::StringW> const& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__all() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____all;
}
constexpr void System::Collections::Specialized::NameValueCollection::__cordl_internal_set__all(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____all = value;
}
constexpr ::ArrayW<::StringW>& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__allKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allKeys;
}
constexpr ::ArrayW<::StringW> const& System::Collections::Specialized::NameValueCollection::__cordl_internal_get__allKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allKeys;
}
constexpr void System::Collections::Specialized::NameValueCollection::__cordl_internal_set__allKeys(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allKeys = value;
}
inline void System::Collections::Specialized::NameValueCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(int32_t  capacity, ::System::Collections::IEqualityComparer*  equalityComparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, equalityComparer);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Collections::Specialized::NameValueCollection::InvalidateCachedArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"InvalidateCachedArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::GetAsOneString(::System::Collections::ArrayList*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"GetAsOneString", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetAsStringArray(::System::Collections::ArrayList*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"GetAsStringArray", {}, {::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, list);
}
inline void System::Collections::Specialized::NameValueCollection::Add(::System::Collections::Specialized::NameValueCollection*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void System::Collections::Specialized::NameValueCollection::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameValueCollection::HasKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"HasKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Collections::Specialized::NameValueCollection::InternalHasKeys()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameValueCollection::Add(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::Get(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetValues(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameValueCollection::Set(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void System::Collections::Specialized::NameValueCollection::Remove(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline void System::Collections::Specialized::NameValueCollection::set_Item(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::Get(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::GetValues(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, index);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::GetKey(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::StringW System::Collections::Specialized::NameValueCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<::StringW> System::Collections::Specialized::NameValueCollection::get_AllKeys()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Collections::Specialized::NameValueCollection::_ctor(::System::DBNull*  dummy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Collections::Specialized::NameValueCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::DBNull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dummy);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>());
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(capacity));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(int32_t  capacity, ::System::Collections::IEqualityComparer*  equalityComparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(capacity, equalityComparer));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(info, context));
}
inline ::System::Collections::Specialized::NameValueCollection* System::Collections::Specialized::NameValueCollection::New_ctor(::System::DBNull*  dummy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Specialized::NameValueCollection*>(dummy));
}
// Ctor Parameters []
constexpr ::System::Collections::Specialized::NameValueCollection::NameValueCollection()   {
}
