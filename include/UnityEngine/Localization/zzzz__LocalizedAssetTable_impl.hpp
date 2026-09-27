#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedAssetTable.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTable_2_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAssetTable_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedAssetTable.get_Database
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>* (::UnityEngine::Localization::LocalizedAssetTable::*)()>(&::UnityEngine::Localization::LocalizedAssetTable::get_Database)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb00f3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedAssetTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedAssetTable::*)()>(&::UnityEngine::Localization::LocalizedAssetTable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb00f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::LocalizedAssetTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::LocalizedAssetTable::*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::LocalizedAssetTable::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb00f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>* UnityEngine::Localization::LocalizedAssetTable::get_Database()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedAssetTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::LocalizedAssetTable::_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::LocalizedAssetTable*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableReference);
}
inline ::UnityEngine::Localization::LocalizedAssetTable* UnityEngine::Localization::LocalizedAssetTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAssetTable*>());
}
inline ::UnityEngine::Localization::LocalizedAssetTable* UnityEngine::Localization::LocalizedAssetTable::New_ctor(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::LocalizedAssetTable*>(tableReference));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::LocalizedAssetTable::LocalizedAssetTable()   {
}
