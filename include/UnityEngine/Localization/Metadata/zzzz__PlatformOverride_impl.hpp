#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/PlatformOverride.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__EntryOverrideType_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_impl.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PlatformOverride_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__EntryOverrideType_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IEntryOverride_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__PlatformOverride_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.AddPlatformTableOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::UnityEngine::RuntimePlatform, ::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformTableOverride)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb0501e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformTableOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.AddPlatformEntryOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::UnityEngine::RuntimePlatform, ::UnityEngine::Localization::Tables::TableEntryReference)>(&::UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformEntryOverride)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb0503cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformEntryOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.AddPlatformOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::UnityEngine::RuntimePlatform, ::UnityEngine::Localization::Tables::TableReference, ::UnityEngine::Localization::Tables::TableEntryReference, ::UnityEngine::Localization::Metadata::EntryOverrideType)>(&::UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformOverride)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb05021c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Metadata::EntryOverrideType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.RemovePlatformOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::UnityEngine::RuntimePlatform)>(&::UnityEngine::Localization::Metadata::PlatformOverride::RemovePlatformOverride)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb050410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"RemovePlatformOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::EntryOverrideType (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::by_ref<::UnityEngine::Localization::Tables::TableReference>, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>)>(&::UnityEngine::Localization::Metadata::PlatformOverride::GetOverride)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb0504dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"GetOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableReference>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::EntryOverrideType (::UnityEngine::Localization::Metadata::PlatformOverride::*)(::by_ref<::UnityEngine::Localization::Tables::TableReference>, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>, ::UnityEngine::RuntimePlatform)>(&::UnityEngine::Localization::Metadata::PlatformOverride::GetOverride)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb050564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"GetOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableReference>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>>(), ::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)()>(&::UnityEngine::Localization::Metadata::PlatformOverride::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb05067c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)()>(&::UnityEngine::Localization::Metadata::PlatformOverride::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb050680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride::*)()>(&::UnityEngine::Localization::Metadata::PlatformOverride::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb050778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*& UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_get_m_PlatformOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlatformOverrides;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>* const& UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_get_m_PlatformOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlatformOverrides;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_set_m_PlatformOverrides(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlatformOverrides = value;
}
constexpr ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*& UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_get_m_PlayerPlatformOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPlatformOverride;
}
constexpr ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData* const& UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_get_m_PlayerPlatformOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPlatformOverride;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride::__cordl_internal_set_m_PlayerPlatformOverride(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayerPlatformOverride = value;
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformTableOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableReference  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformTableOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, table);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformEntryOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableEntryReference  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformEntryOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, entry);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::AddPlatformOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableReference  table, ::UnityEngine::Localization::Tables::TableEntryReference  entry, ::UnityEngine::Localization::Metadata::EntryOverrideType  entryOverrideType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"AddPlatformOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>(), ::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Metadata::EntryOverrideType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, table, entry, entryOverrideType);
}
inline bool UnityEngine::Localization::Metadata::PlatformOverride::RemovePlatformOverride(::UnityEngine::RuntimePlatform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"RemovePlatformOverride", {}, {::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, platform);
}
inline ::UnityEngine::Localization::Metadata::EntryOverrideType UnityEngine::Localization::Metadata::PlatformOverride::GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"GetOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableReference>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::EntryOverrideType>(this, ___internal_method, tableReference, tableEntryReference);
}
inline ::UnityEngine::Localization::Metadata::EntryOverrideType UnityEngine::Localization::Metadata::PlatformOverride::GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference, ::UnityEngine::RuntimePlatform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"GetOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableReference>>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>>(), ::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::EntryOverrideType>(this, ___internal_method, tableReference, tableEntryReference, platform);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::PlatformOverride* UnityEngine::Localization::Metadata::PlatformOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::PlatformOverride*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IEntryOverride"
constexpr  UnityEngine::Localization::Metadata::PlatformOverride::operator ::UnityEngine::Localization::Metadata::IEntryOverride*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IEntryOverride*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IEntryOverride"
constexpr ::UnityEngine::Localization::Metadata::IEntryOverride* UnityEngine::Localization::Metadata::PlatformOverride::i___UnityEngine__Localization__Metadata__IEntryOverride() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IEntryOverride*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::PlatformOverride::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::PlatformOverride::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Metadata::PlatformOverride::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Metadata::PlatformOverride::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::PlatformOverride::PlatformOverride()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::*)()>(&::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::ToString)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb050800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::*)()>(&::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb050408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RuntimePlatform& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::UnityEngine::RuntimePlatform const& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_set_platform(::UnityEngine::RuntimePlatform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_entryOverrideType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryOverrideType;
}
constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType const& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_entryOverrideType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryOverrideType;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_set_entryOverrideType(::UnityEngine::Localization::Metadata::EntryOverrideType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryOverrideType = value;
}
constexpr ::UnityEngine::Localization::Tables::TableReference& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_tableReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableReference;
}
constexpr ::UnityEngine::Localization::Tables::TableReference const& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_tableReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableReference;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_set_tableReference(::UnityEngine::Localization::Tables::TableReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableReference = value;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryReference& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_tableEntryReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableEntryReference;
}
constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_get_tableEntryReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableEntryReference;
}
constexpr void UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::__cordl_internal_set_tableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableEntryReference = value;
}
inline ::StringW UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData* UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData::PlatformOverride_PlatformOverrideData()   {
}
