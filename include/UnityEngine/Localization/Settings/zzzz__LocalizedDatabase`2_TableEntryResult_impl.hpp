#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedDatabase`2_TableEntryResult.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
template<typename TTable,typename TEntry>
inline TEntry GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>(),
                        {"get_Entry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEntry>(*this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline TTable GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>::get_Table()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>(),
                        {"get_Table", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TTable>(*this, ___internal_method);
}
template<typename TTable,typename TEntry>
inline void GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>::_ctor(TEntry  entry, TTable  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>>(),
                        {".ctor", {}, {::i2c::type_of<TEntry>(), ::i2c::type_of<TTable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entry, table);
}
// Ctor Parameters [CppParam { name: "_Entry_k__BackingField", ty: "TEntry", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Table_k__BackingField", ty: "TTable", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TTable,typename TEntry>
constexpr ::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>::LocalizedDatabase_2_TableEntryResult(TEntry  _Entry_k__BackingField, TTable  _Table_k__BackingField) noexcept  {
this->_Entry_k__BackingField = _Entry_k__BackingField;
this->_Table_k__BackingField = _Table_k__BackingField;
}
// Ctor Parameters []
template<typename TTable,typename TEntry>
constexpr ::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>::LocalizedDatabase_2_TableEntryResult()   {
}
