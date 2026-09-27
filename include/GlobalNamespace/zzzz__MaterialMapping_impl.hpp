#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialMapping.hpp"
#include "GlobalNamespace/zzzz__ShaderGroup_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialMapping_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialMapping.CleanUpData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialMapping::*)()>(&::GlobalNamespace::MaterialMapping::CleanUpData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3fc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialMapping*>(),
                        {"CleanUpData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialMapping::*)()>(&::GlobalNamespace::MaterialMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ShaderGroup>& GlobalNamespace::MaterialMapping::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::ArrayW<::GlobalNamespace::ShaderGroup> const& GlobalNamespace::MaterialMapping::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void GlobalNamespace::MaterialMapping::__cordl_internal_set_map(::ArrayW<::GlobalNamespace::ShaderGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MaterialMapping::__cordl_internal_get_mirrorMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MaterialMapping::__cordl_internal_get_mirrorMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorMat;
}
constexpr void GlobalNamespace::MaterialMapping::__cordl_internal_set_mirrorMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mirrorMat = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::MaterialMapping::__cordl_internal_get_mirrorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::MaterialMapping::__cordl_internal_get_mirrorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrorTexture;
}
constexpr void GlobalNamespace::MaterialMapping::__cordl_internal_set_mirrorTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mirrorTexture = value;
}
inline void GlobalNamespace::MaterialMapping::setStaticF_path(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "path", ::GlobalNamespace::MaterialMapping*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MaterialMapping::getStaticF_path()  {
return ::cordl_internals::getStaticField<::StringW, "path", ::GlobalNamespace::MaterialMapping*>();
}
inline void GlobalNamespace::MaterialMapping::setStaticF_materialDirectory(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "materialDirectory", ::GlobalNamespace::MaterialMapping*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MaterialMapping::getStaticF_materialDirectory()  {
return ::cordl_internals::getStaticField<::StringW, "materialDirectory", ::GlobalNamespace::MaterialMapping*>();
}
inline void GlobalNamespace::MaterialMapping::setStaticF_instance(::UnityW<::GlobalNamespace::MaterialMapping>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MaterialMapping>, "instance", ::GlobalNamespace::MaterialMapping*>(std::forward<::UnityW<::GlobalNamespace::MaterialMapping>>(value));
}
inline ::UnityW<::GlobalNamespace::MaterialMapping> GlobalNamespace::MaterialMapping::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MaterialMapping>, "instance", ::GlobalNamespace::MaterialMapping*>();
}
inline void GlobalNamespace::MaterialMapping::CleanUpData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialMapping*>(),
                        {"CleanUpData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MaterialMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialMapping* GlobalNamespace::MaterialMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialMapping*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialMapping::MaterialMapping()   {
}
