#pragma once
// IWYU pragma private; include "System/Data/DataViewSettingCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataViewSettingCollection_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewManager_def.hpp"
#include "System/Data/zzzz__DataViewSettingCollection_def.hpp"
#include "System/Data/zzzz__DataViewSetting_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataViewSettingCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Data::DataViewManager*)>(&::System::Data::DataViewSettingCollection::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa935004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewSetting* (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataViewSettingCollection::get_Item)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa936314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                    {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*, ::System::Data::DataViewSetting*)>(&::System::Data::DataViewSettingCollection::set_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa93641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                    {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.CopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Array*, int32_t)>(&::System::Data::DataViewSettingCollection::CopyTo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa9364cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataViewSettingCollection::*)()>(&::System::Data::DataViewSettingCollection::get_Count)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa936668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                    {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Data::DataViewSettingCollection::*)()>(&::System::Data::DataViewSettingCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa93660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewSettingCollection::*)()>(&::System::Data::DataViewSettingCollection::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa9367b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.get_SyncRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewSettingCollection::*)()>(&::System::Data::DataViewSettingCollection::get_SyncRoot)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa9367bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection::*)(::System::Data::DataTable*)>(&::System::Data::DataViewSettingCollection::Remove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa9367c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewManager*& System::Data::DataViewSettingCollection::__cordl_internal_get__dataViewManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr ::System::Data::DataViewManager* const& System::Data::DataViewSettingCollection::__cordl_internal_get__dataViewManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewManager;
}
constexpr void System::Data::DataViewSettingCollection::__cordl_internal_set__dataViewManager(::System::Data::DataViewManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataViewManager = value;
}
constexpr ::System::Collections::Hashtable*& System::Data::DataViewSettingCollection::__cordl_internal_get__list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr ::System::Collections::Hashtable* const& System::Data::DataViewSettingCollection::__cordl_internal_get__list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____list;
}
constexpr void System::Data::DataViewSettingCollection::__cordl_internal_set__list(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____list = value;
}
inline void System::Data::DataViewSettingCollection::_ctor(::System::Data::DataViewManager*  dataViewManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataViewManager);
}
inline ::System::Data::DataViewSetting* System::Data::DataViewSettingCollection::get_Item(::System::Data::DataTable*  table)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewSetting*>(this, ___internal_method, table);
}
inline void System::Data::DataViewSettingCollection::set_Item(::System::Data::DataTable*  table, ::System::Data::DataViewSetting*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table, value);
}
inline void System::Data::DataViewSettingCollection::CopyTo(::System::Array*  ar, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar, index);
}
inline int32_t System::Data::DataViewSettingCollection::get_Count()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Data::DataViewSettingCollection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Data::DataViewSettingCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool System::Data::DataViewSettingCollection::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataViewSettingCollection::get_SyncRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"get_SyncRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Data::DataViewSettingCollection::Remove(::System::Data::DataTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Data::DataTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::System::Data::DataViewSettingCollection* System::Data::DataViewSettingCollection::New_ctor(::System::Data::DataViewManager*  dataViewManager)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewSettingCollection*>(dataViewManager));
}
/// @brief Convert operator to "::System::Collections::ICollection"
constexpr  System::Data::DataViewSettingCollection::operator ::System::Collections::ICollection*() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* System::Data::DataViewSettingCollection::i___System__Collections__ICollection() noexcept {
return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Data::DataViewSettingCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Data::DataViewSettingCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataViewSettingCollection::DataViewSettingCollection()   {
}
//  Writing Method size for method: ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::*)(::System::Data::DataViewManager*)>(&::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa9366a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::*)()>(&::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa9367e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::*)()>(&::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa936880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::*)()>(&::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa936924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataViewSettingCollection*& System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_get__dataViewSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewSettings;
}
constexpr ::System::Data::DataViewSettingCollection* const& System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_get__dataViewSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataViewSettings;
}
constexpr void System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_set__dataViewSettings(::System::Data::DataViewSettingCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataViewSettings = value;
}
constexpr ::System::Collections::IEnumerator*& System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_get__tableEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableEnumerator;
}
constexpr ::System::Collections::IEnumerator* const& System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_get__tableEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableEnumerator;
}
constexpr void System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::__cordl_internal_set__tableEnumerator(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tableEnumerator = value;
}
inline void System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::_ctor(::System::Data::DataViewManager*  dvm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataViewManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dvm);
}
inline bool System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator* System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::New_ctor(::System::Data::DataViewManager*  dvm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator*>(dvm));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::DataViewSettingCollection_DataViewSettingsEnumerator::DataViewSettingCollection_DataViewSettingsEnumerator()   {
}
