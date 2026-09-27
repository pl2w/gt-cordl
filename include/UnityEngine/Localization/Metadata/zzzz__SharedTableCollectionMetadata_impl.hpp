#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SharedTableCollectionMetadata.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableCollectionMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableCollectionMetadata_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.get_EntriesLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>* (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::get_EntriesLookup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"get_EntriesLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.set_EntriesLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::set_EntriesLookup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"set_EntriesLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::get_IsEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb050a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)(int64_t)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb050a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)(int64_t, ::StringW)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::Contains)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb050ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.AddEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)(int64_t, ::StringW)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::AddEntry)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb050b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"AddEntry", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.RemoveEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)(int64_t, ::StringW)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::RemoveEntry)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb050c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"RemoveEntry", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb04f698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb04f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb04fbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_get_m_Entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>* const& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_get_m_Entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Entries = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_get__EntriesLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntriesLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>* const& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_get__EntriesLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EntriesLookup_k__BackingField;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::__cordl_internal_set__EntriesLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EntriesLookup_k__BackingField = value;
}
inline ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::get_EntriesLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"get_EntriesLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::set_EntriesLookup(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"set_EntriesLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::Contains(int64_t  keyId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId);
}
inline bool UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::Contains(int64_t  keyId, ::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"Contains", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyId, code);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::AddEntry(int64_t  keyId, ::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"AddEntry", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId, code);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::RemoveEntry(int64_t  keyId, ::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {"RemoveEntry", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyId, code);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::OnBeforeSerialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::OnAfterDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata::SharedTableCollectionMetadata()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item.get_KeyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"get_KeyId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item.set_KeyId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::*)(int64_t)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::set_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"set_KeyId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item.get_Tables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::get_Tables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"get_Tables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item.set_Tables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::set_Tables)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"set_Tables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::*)()>(&::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb050d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_get_m_KeyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyId;
}
constexpr int64_t const& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_get_m_KeyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyId;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_set_m_KeyId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_get_m_TableCodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCodes;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_get_m_TableCodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TableCodes;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::__cordl_internal_set_m_TableCodes(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TableCodes = value;
}
inline int64_t UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::get_KeyId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"get_KeyId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::set_KeyId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"set_KeyId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::get_Tables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"get_Tables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::set_Tables(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {"set_Tables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item* UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item::SharedTableCollectionMetadata_Item()   {
}
