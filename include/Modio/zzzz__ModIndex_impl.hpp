#pragma once
// IWYU pragma private; include "Modio/ModIndex.hpp"
#include "Modio/Mods/zzzz__ModFileState_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex__CreateIndexFromScan_d__7_def.hpp"
#include "Modio/zzzz__ModIndex__RefreshIndexModObjects_d__16_def.hpp"
#include "Modio/zzzz__ModIndex__UpdateIndexForMod_d__9_def.hpp"
#include "Modio/zzzz__ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::ModIndex.get_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::ModIndex::*)()>(&::Modio::ModIndex::get_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa004e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"get_IsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.set_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex::*)(bool)>(&::Modio::ModIndex::set_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa004e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex::*)()>(&::Modio::ModIndex::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa004e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.CreateIndexFromScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* (*)()>(&::Modio::ModIndex::CreateIndexFromScan)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa004ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"CreateIndexFromScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.UpdateIndexWithMissingEntriesFromScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Modio::ModIndex::*)()>(&::Modio::ModIndex::UpdateIndexWithMissingEntriesFromScan)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa0050dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"UpdateIndexWithMissingEntriesFromScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.UpdateIndexForMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int64_t>>* (::Modio::ModIndex::*)(::Modio::Mods::Mod*)>(&::Modio::ModIndex::UpdateIndexForMod)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa0051e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"UpdateIndexForMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.GetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModIndex_IndexEntry* (::Modio::ModIndex::*)(::Modio::Mods::Mod*)>(&::Modio::ModIndex::GetEntry)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa005308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"GetEntry", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.TryGetEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::ModIndex::*)(::Modio::Mods::ModId, ::by_ref<::Modio::ModIndex_IndexEntry*>)>(&::Modio::ModIndex::TryGetEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa00550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"TryGetEntry", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::by_ref<::Modio::ModIndex_IndexEntry*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.RemoveEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex::*)(::Modio::Mods::Mod*)>(&::Modio::ModIndex::RemoveEntry)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa005574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"RemoveEntry", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex::*)()>(&::Modio::ModIndex::Shutdown)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa00562c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.OnModObjectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex::*)(::Modio::Mods::Mod*, ::Modio::Mods::ModChangeType)>(&::Modio::ModIndex::OnModObjectUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa0056d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"OnModObjectUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModIndex.RefreshIndexModObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::ModIndex::*)(bool)>(&::Modio::ModIndex::RefreshIndexModObjects)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa0057a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"RefreshIndexModObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*& Modio::ModIndex::__cordl_internal_get_Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>* const& Modio::ModIndex::__cordl_internal_get_Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Index;
}
constexpr void Modio::ModIndex::__cordl_internal_set_Index(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Index = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*& Modio::ModIndex::__cordl_internal_get_ModObjectCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModObjectCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>* const& Modio::ModIndex::__cordl_internal_get_ModObjectCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModObjectCache;
}
constexpr void Modio::ModIndex::__cordl_internal_set_ModObjectCache(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModObjectCache = value;
}
constexpr bool& Modio::ModIndex::__cordl_internal_get__IsDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr bool const& Modio::ModIndex::__cordl_internal_get__IsDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDirty_k__BackingField;
}
constexpr void Modio::ModIndex::__cordl_internal_set__IsDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDirty_k__BackingField = value;
}
inline bool Modio::ModIndex::get_IsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"get_IsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::ModIndex::set_IsDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::ModIndex::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* Modio::ModIndex::CreateIndexFromScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"CreateIndexFromScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Modio::ModIndex::UpdateIndexWithMissingEntriesFromScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"UpdateIndexWithMissingEntriesFromScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int64_t>>* Modio::ModIndex::UpdateIndexForMod(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"UpdateIndexForMod", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int64_t>>*>(this, ___internal_method, mod);
}
inline ::Modio::ModIndex_IndexEntry* Modio::ModIndex::GetEntry(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"GetEntry", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModIndex_IndexEntry*>(this, ___internal_method, mod);
}
inline bool Modio::ModIndex::TryGetEntry(::Modio::Mods::ModId  modId, ::by_ref<::Modio::ModIndex_IndexEntry*>  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"TryGetEntry", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::by_ref<::Modio::ModIndex_IndexEntry*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modId, entry);
}
inline void Modio::ModIndex::RemoveEntry(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"RemoveEntry", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::ModIndex::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::ModIndex::OnModObjectUpdate(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"OnModObjectUpdate", {}, {::i2c::type_of<::Modio::Mods::Mod*>(), ::i2c::type_of<::Modio::Mods::ModChangeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod, changeType);
}
inline ::System::Threading::Tasks::Task* Modio::ModIndex::RefreshIndexModObjects(bool  installedOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex*>(),
                        {"RefreshIndexModObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, installedOnly);
}
inline ::Modio::ModIndex* Modio::ModIndex::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModIndex*>());
}
// Ctor Parameters []
constexpr ::Modio::ModIndex::ModIndex()   {
}
//  Writing Method size for method: ::Modio::ModIndex_IndexEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModIndex_IndexEntry::*)()>(&::Modio::ModIndex_IndexEntry::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa005448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex_IndexEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::ModIndex_IndexEntry::__cordl_internal_get_DownloadedModfileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadedModfileId;
}
constexpr int64_t const& Modio::ModIndex_IndexEntry::__cordl_internal_get_DownloadedModfileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadedModfileId;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_DownloadedModfileId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadedModfileId = value;
}
constexpr int64_t& Modio::ModIndex_IndexEntry::__cordl_internal_get_InstalledModfileId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstalledModfileId;
}
constexpr int64_t const& Modio::ModIndex_IndexEntry::__cordl_internal_get_InstalledModfileId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstalledModfileId;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_InstalledModfileId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstalledModfileId = value;
}
constexpr int64_t& Modio::ModIndex_IndexEntry::__cordl_internal_get_InstallationSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstallationSize;
}
constexpr int64_t const& Modio::ModIndex_IndexEntry::__cordl_internal_get_InstallationSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstallationSize;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_InstallationSize(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstallationSize = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::ModIndex_IndexEntry::__cordl_internal_get_Subscribers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscribers;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::ModIndex_IndexEntry::__cordl_internal_get_Subscribers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscribers;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_Subscribers(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Subscribers = value;
}
constexpr ::System::DateTime& Modio::ModIndex_IndexEntry::__cordl_internal_get_ExpiresAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpiresAfter;
}
constexpr ::System::DateTime const& Modio::ModIndex_IndexEntry::__cordl_internal_get_ExpiresAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpiresAfter;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_ExpiresAfter(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpiresAfter = value;
}
constexpr ::Modio::Mods::ModFileState& Modio::ModIndex_IndexEntry::__cordl_internal_get_FileState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileState;
}
constexpr ::Modio::Mods::ModFileState const& Modio::ModIndex_IndexEntry::__cordl_internal_get_FileState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileState;
}
constexpr void Modio::ModIndex_IndexEntry::__cordl_internal_set_FileState(::Modio::Mods::ModFileState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileState = value;
}
inline void Modio::ModIndex_IndexEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModIndex_IndexEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::ModIndex_IndexEntry* Modio::ModIndex_IndexEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModIndex_IndexEntry*>());
}
// Ctor Parameters []
constexpr ::Modio::ModIndex_IndexEntry::ModIndex_IndexEntry()   {
}
