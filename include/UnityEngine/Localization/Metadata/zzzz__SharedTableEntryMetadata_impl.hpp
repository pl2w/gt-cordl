#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SharedTableEntryMetadata.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_Entry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntry_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb050e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)(::UnityEngine::Localization::Tables::TableEntry*)>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::IsRegistered)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb050e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)(::UnityEngine::Localization::Tables::TableEntry*)>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::Register)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb050eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)(::UnityEngine::Localization::Tables::TableEntry*)>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::Unregister)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb050f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb050f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xb051148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::*)()>(&::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb05146c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int64_t>*& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_Entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_Entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Entries;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Entries = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_SharedEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedEntries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>* const& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_SharedEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SharedEntries;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_set_m_SharedEntries(::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SharedEntries = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int64_t>*& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_EntriesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntriesLookup;
}
constexpr ::System::Collections::Generic::HashSet_1<int64_t>* const& UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_get_m_EntriesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EntriesLookup;
}
constexpr void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::__cordl_internal_set_m_EntriesLookup(::System::Collections::Generic::HashSet_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EntriesLookup = value;
}
inline int32_t UnityEngine::Localization::Metadata::SharedTableEntryMetadata::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Metadata::SharedTableEntryMetadata::IsRegistered(::UnityEngine::Localization::Tables::TableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::Register(::UnityEngine::Localization::Tables::TableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"Register", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::Unregister(::UnityEngine::Localization::Tables::TableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"Unregister", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::SharedTableEntryMetadata::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata* UnityEngine::Localization::Metadata::SharedTableEntryMetadata::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::SharedTableEntryMetadata::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::SharedTableEntryMetadata::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Metadata::SharedTableEntryMetadata::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Metadata::SharedTableEntryMetadata::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata::SharedTableEntryMetadata()   {
}
