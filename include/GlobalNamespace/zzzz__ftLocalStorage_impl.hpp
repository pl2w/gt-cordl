#pragma once
// IWYU pragma private; include "GlobalNamespace/ftLocalStorage.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ftLocalStorage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ftLocalStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ftLocalStorage::*)()>(&::GlobalNamespace::ftLocalStorage::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f2b5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLocalStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::ftLocalStorage::__cordl_internal_get_modifiedAssetPathList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedAssetPathList;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::ftLocalStorage::__cordl_internal_get_modifiedAssetPathList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedAssetPathList;
}
constexpr void GlobalNamespace::ftLocalStorage::__cordl_internal_set_modifiedAssetPathList(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiedAssetPathList = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::ftLocalStorage::__cordl_internal_get_modifiedAssetPaddingHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedAssetPaddingHash;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::ftLocalStorage::__cordl_internal_get_modifiedAssetPaddingHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiedAssetPaddingHash;
}
constexpr void GlobalNamespace::ftLocalStorage::__cordl_internal_set_modifiedAssetPaddingHash(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiedAssetPaddingHash = value;
}
inline void GlobalNamespace::ftLocalStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ftLocalStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ftLocalStorage* GlobalNamespace::ftLocalStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ftLocalStorage*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ftLocalStorage::ftLocalStorage()   {
}
