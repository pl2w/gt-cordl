#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample_DummyModData.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample_DummyModData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample_DummyModData::*)(::StringW, ::StringW, ::UnityEngine::Texture2D*, ::StringW)>(&::GlobalNamespace::ModioUnityExample_DummyModData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f98464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample_DummyModData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUnityExample_DummyModData::_ctor(::StringW  name, ::StringW  summary, ::UnityEngine::Texture2D*  logo, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample_DummyModData>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, summary, logo, path);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "logo", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioUnityExample_DummyModData::ModioUnityExample_DummyModData(::StringW  name, ::StringW  summary, ::UnityW<::UnityEngine::Texture2D>  logo, ::StringW  path) noexcept  {
this->name = name;
this->summary = summary;
this->logo = logo;
this->path = path;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample_DummyModData::ModioUnityExample_DummyModData()   {
}
