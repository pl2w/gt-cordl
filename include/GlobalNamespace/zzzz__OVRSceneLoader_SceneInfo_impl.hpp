#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneLoader_SceneInfo.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_SceneInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader_SceneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader_SceneInfo::*)(::System::Collections::Generic::List_1<::StringW>*, int64_t)>(&::GlobalNamespace::OVRSceneLoader_SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa62e708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneLoader_SceneInfo::_ctor(::System::Collections::Generic::List_1<::StringW>*  sceneList, int64_t  currentSceneEpochVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sceneList, currentSceneEpochVersion);
}
// Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "version", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo::OVRSceneLoader_SceneInfo(::System::Collections::Generic::List_1<::StringW>*  scenes, int64_t  version) noexcept  {
this->scenes = scenes;
this->version = version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo::OVRSceneLoader_SceneInfo()   {
}
