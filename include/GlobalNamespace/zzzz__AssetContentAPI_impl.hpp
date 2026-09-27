#pragma once
// IWYU pragma private; include "GlobalNamespace/AssetContentAPI.hpp"
#include "UnityEngine/zzzz__LazyLoadReference_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AssetContentAPI_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AssetContentAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AssetContentAPI::*)()>(&::GlobalNamespace::AssetContentAPI::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b20820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetContentAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::AssetContentAPI::__cordl_internal_get_bundleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleName;
}
constexpr ::StringW const& GlobalNamespace::AssetContentAPI::__cordl_internal_get_bundleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleName;
}
constexpr void GlobalNamespace::AssetContentAPI::__cordl_internal_set_bundleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleName = value;
}
constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>& GlobalNamespace::AssetContentAPI::__cordl_internal_get_bundleFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleFile;
}
constexpr ::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>> const& GlobalNamespace::AssetContentAPI::__cordl_internal_get_bundleFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bundleFile;
}
constexpr void GlobalNamespace::AssetContentAPI::__cordl_internal_set_bundleFile(::UnityEngine::LazyLoadReference_1<::UnityW<::UnityEngine::TextAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bundleFile = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& GlobalNamespace::AssetContentAPI::__cordl_internal_get_assets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& GlobalNamespace::AssetContentAPI::__cordl_internal_get_assets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assets;
}
constexpr void GlobalNamespace::AssetContentAPI::__cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assets = value;
}
inline void GlobalNamespace::AssetContentAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AssetContentAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AssetContentAPI* GlobalNamespace::AssetContentAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AssetContentAPI*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AssetContentAPI::AssetContentAPI()   {
}
