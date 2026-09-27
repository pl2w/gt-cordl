#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedStringTable.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTable_2_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedStringTable_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedStringTable.get_Database
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>* (::UnityEngine::Localization::LocalizedStringTable::*)()>(&::UnityEngine::Localization::LocalizedStringTable::get_Database)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb014ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedStringTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedStringTable::*)()>(&::UnityEngine::Localization::LocalizedStringTable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb014ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedStringTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedStringTable::*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::LocalizedStringTable::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb014f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>* UnityEngine::Localization::LocalizedStringTable::get_Database()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedStringTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedStringTable::_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedStringTable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableReference);
}
inline ::UnityEngine::Localization::LocalizedStringTable* UnityEngine::Localization::LocalizedStringTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedStringTable*>());
}
inline ::UnityEngine::Localization::LocalizedStringTable* UnityEngine::Localization::LocalizedStringTable::New_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedStringTable*>(tableReference));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedStringTable::LocalizedStringTable()   {
}
