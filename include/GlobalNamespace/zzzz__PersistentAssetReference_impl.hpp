#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistentAssetReference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentAssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PersistentAssetReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PersistentAssetReference::*)()>(&::GlobalNamespace::PersistentAssetReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistentAssetReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& GlobalNamespace::PersistentAssetReference::__cordl_internal_get_m_assets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_assets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& GlobalNamespace::PersistentAssetReference::__cordl_internal_get_m_assets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_assets;
}
constexpr void GlobalNamespace::PersistentAssetReference::__cordl_internal_set_m_assets(::ArrayW<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_assets = value;
}
inline void GlobalNamespace::PersistentAssetReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PersistentAssetReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PersistentAssetReference* GlobalNamespace::PersistentAssetReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PersistentAssetReference*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PersistentAssetReference::PersistentAssetReference()   {
}
