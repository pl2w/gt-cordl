#pragma once
// IWYU pragma private; include "GorillaUtil/StringTable.hpp"
#include "GorillaUtil/zzzz__StringTable_StringPair_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaUtil/zzzz__StringTable_def.hpp"
#include "GorillaUtil/zzzz__StringTable_StringPair_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GorillaUtil::StringTable.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaUtil::StringTable::*)()>(&::GorillaUtil::StringTable::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b6bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaUtil::StringTable.get_KeyList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaUtil::StringTable::*)()>(&::GorillaUtil::StringTable::get_KeyList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b6bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"get_KeyList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaUtil::StringTable.buildKeyList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaUtil::StringTable::*)()>(&::GorillaUtil::StringTable::buildKeyList)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5b6bb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"buildKeyList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaUtil::StringTable.ContainsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaUtil::StringTable::*)(::StringW)>(&::GorillaUtil::StringTable::ContainsKey)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5b6bc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaUtil::StringTable.FetchValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaUtil::StringTable::*)(::StringW)>(&::GorillaUtil::StringTable::FetchValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b6bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"FetchValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaUtil::StringTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaUtil::StringTable::*)()>(&::GorillaUtil::StringTable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::StringTable_StringPair>& GorillaUtil::StringTable::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::ArrayW<::GlobalNamespace::StringTable_StringPair> const& GorillaUtil::StringTable::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void GorillaUtil::StringTable::__cordl_internal_set_entries(::ArrayW<::GlobalNamespace::StringTable_StringPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GorillaUtil::StringTable::__cordl_internal_get_dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GorillaUtil::StringTable::__cordl_internal_get_dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
constexpr void GorillaUtil::StringTable::__cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dict = value;
}
constexpr ::StringW& GorillaUtil::StringTable::__cordl_internal_get_keyList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyList;
}
constexpr ::StringW const& GorillaUtil::StringTable::__cordl_internal_get_keyList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyList;
}
constexpr void GorillaUtil::StringTable::__cordl_internal_set_keyList(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyList = value;
}
inline int32_t GorillaUtil::StringTable::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GorillaUtil::StringTable::get_KeyList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"get_KeyList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaUtil::StringTable::buildKeyList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"buildKeyList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaUtil::StringTable::ContainsKey(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"ContainsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::StringW GorillaUtil::StringTable::FetchValue(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {"FetchValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, key);
}
inline void GorillaUtil::StringTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaUtil::StringTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaUtil::StringTable* GorillaUtil::StringTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaUtil::StringTable*>());
}
// Ctor Parameters []
constexpr ::GorillaUtil::StringTable::StringTable()   {
}
