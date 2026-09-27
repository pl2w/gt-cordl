#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509ExtensionCollection.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)()>(&::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa0f3a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509ExtensionCollection::Add)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa0f3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Add", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::ArrayW<::Mono::Security::X509::X509Extension*>)>(&::Mono::Security::X509::X509ExtensionCollection::AddRange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa0f3c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::Mono::Security::X509::X509Extension*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::X509::X509ExtensionCollection*)>(&::Mono::Security::X509::X509ExtensionCollection::AddRange)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa0f3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"AddRange", {}, {::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509ExtensionCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa0f3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&::Mono::Security::X509::X509ExtensionCollection::Contains)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa0f3ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::ArrayW<::Mono::Security::X509::X509Extension*>, int32_t)>(&::Mono::Security::X509::X509ExtensionCollection::CopyTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0f414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Mono::Security::X509::X509Extension*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa0f3ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&::Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa0f4014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Insert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(int32_t, ::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509ExtensionCollection::Insert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0f41bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509ExtensionCollection::Remove)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0f422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&::Mono::Security::X509::X509ExtensionCollection::Remove)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa0f429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Mono::Security::X509::X509ExtensionCollection::*)()>(&::Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa0f4328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Extension* (::Mono::Security::X509::X509ExtensionCollection::*)(int32_t)>(&::Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa0f3e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Extension* (::Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&::Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa0f2f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509ExtensionCollection.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509ExtensionCollection::*)()>(&::Mono::Security::X509::X509ExtensionCollection::GetBytes)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa0f1548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::X509::X509ExtensionCollection::__cordl_internal_get_readOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readOnly;
}
constexpr bool const& Mono::Security::X509::X509ExtensionCollection::__cordl_internal_get_readOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readOnly;
}
constexpr void Mono::Security::X509::X509ExtensionCollection::__cordl_internal_set_readOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readOnly = value;
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509ExtensionCollection::_ctor(::Mono::Security::ASN1*  asn1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asn1);
}
inline int32_t Mono::Security::X509::X509ExtensionCollection::Add(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Add", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::X509ExtensionCollection::AddRange(::ArrayW<::Mono::Security::X509::X509Extension*>  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"AddRange", {}, {::i2c::type_of<::ArrayW<::Mono::Security::X509::X509Extension*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::X509ExtensionCollection::AddRange(::Mono::Security::X509::X509ExtensionCollection*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"AddRange", {}, {::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline bool Mono::Security::X509::X509ExtensionCollection::Contains(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, extension);
}
inline bool Mono::Security::X509::X509ExtensionCollection::Contains(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, oid);
}
inline void Mono::Security::X509::X509ExtensionCollection::CopyTo(::ArrayW<::Mono::Security::X509::X509Extension*>  extensions, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::Mono::Security::X509::X509Extension*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extensions, index);
}
inline int32_t Mono::Security::X509::X509ExtensionCollection::IndexOf(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, extension);
}
inline int32_t Mono::Security::X509::X509ExtensionCollection::IndexOf(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oid);
}
inline void Mono::Security::X509::X509ExtensionCollection::Insert(int32_t  index, ::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Insert", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, extension);
}
inline void Mono::Security::X509::X509ExtensionCollection::Remove(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::X509ExtensionCollection::Remove(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid);
}
inline ::System::Collections::IEnumerator* Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509ExtensionCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Extension*>(this, ___internal_method, index);
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509ExtensionCollection::get_Item(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Extension*>(this, ___internal_method, oid);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509ExtensionCollection::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509ExtensionCollection*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509ExtensionCollection*>());
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509ExtensionCollection::New_ctor(::Mono::Security::ASN1*  asn1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509ExtensionCollection*>(asn1));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Mono::Security::X509::X509ExtensionCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Mono::Security::X509::X509ExtensionCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509ExtensionCollection::X509ExtensionCollection()   {
}
