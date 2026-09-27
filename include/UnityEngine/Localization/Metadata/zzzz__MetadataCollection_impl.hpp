#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadataCollection_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection.get_MetadataEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* (::UnityEngine::Localization::Metadata::MetadataCollection::*)()>(&::UnityEngine::Localization::Metadata::MetadataCollection::get_MetadataEntries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04ff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection.get_HasData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::MetadataCollection::*)()>(&::UnityEngine::Localization::Metadata::MetadataCollection::get_HasData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb04ff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"get_HasData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection.AddMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::MetadataCollection::AddMetadata)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb050004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection.RemoveMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::MetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::MetadataCollection::RemoveMetadata)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb0500b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::MetadataCollection::*)(::UnityEngine::Localization::Metadata::IMetadata*)>(&::UnityEngine::Localization::Metadata::MetadataCollection::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb050108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::MetadataCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::MetadataCollection::*)()>(&::UnityEngine::Localization::Metadata::MetadataCollection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb050160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*& UnityEngine::Localization::Metadata::MetadataCollection::__cordl_internal_get_m_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>* const& UnityEngine::Localization::Metadata::MetadataCollection::__cordl_internal_get_m_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
constexpr void UnityEngine::Localization::Metadata::MetadataCollection::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Items = value;
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* UnityEngine::Localization::Metadata::MetadataCollection::get_MetadataEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"get_MetadataEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Metadata::MetadataCollection::get_HasData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"get_HasData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline bool UnityEngine::Localization::Metadata::MetadataCollection::HasMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                    {"HasMetadata", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject UnityEngine::Localization::Metadata::MetadataCollection::GetMetadata()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                    {"GetMetadata", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline void UnityEngine::Localization::Metadata::MetadataCollection::GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                    {"GetMetadatas", {::i2c::class_of<TObject>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<TObject>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foundItems);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline ::System::Collections::Generic::IList_1<TObject>* UnityEngine::Localization::Metadata::MetadataCollection::GetMetadatas()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                    {"GetMetadatas", {::i2c::class_of<TObject>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TObject>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::MetadataCollection::AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"AddMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Metadata::MetadataCollection::RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"RemoveMetadata", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline bool UnityEngine::Localization::Metadata::MetadataCollection::Contains(::UnityEngine::Localization::Metadata::IMetadata*  md)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Localization::Metadata::IMetadata*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, md);
}
inline void UnityEngine::Localization::Metadata::MetadataCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::MetadataCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Metadata::MetadataCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::MetadataCollection*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr  UnityEngine::Localization::Metadata::MetadataCollection::operator ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* UnityEngine::Localization::Metadata::MetadataCollection::i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadataCollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection::MetadataCollection()   {
}
