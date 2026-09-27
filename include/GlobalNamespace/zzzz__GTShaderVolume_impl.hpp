#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderVolume.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTShaderVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTShaderVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTShaderVolume::*)()>(&::GlobalNamespace::GTShaderVolume::OnEnable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x56bd1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTShaderVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTShaderVolume::*)()>(&::GlobalNamespace::GTShaderVolume::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56bd314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTShaderVolume.SyncVolumeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GTShaderVolume::SyncVolumeData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x56bd394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"SyncVolumeData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTShaderVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTShaderVolume::*)()>(&::GlobalNamespace::GTShaderVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56bd65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTShaderVolume::setStaticF_ShaderData(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "ShaderData", ::GlobalNamespace::GTShaderVolume*>(std::forward<::ArrayW<::UnityEngine::Matrix4x4>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4> GlobalNamespace::GTShaderVolume::getStaticF_ShaderData()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4>, "ShaderData", ::GlobalNamespace::GTShaderVolume*>();
}
inline void GlobalNamespace::GTShaderVolume::setStaticF_gVolumes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*, "gVolumes", ::GlobalNamespace::GTShaderVolume*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>* GlobalNamespace::GTShaderVolume::getStaticF_gVolumes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GTShaderVolume>>*, "gVolumes", ::GlobalNamespace::GTShaderVolume*>();
}
inline void GlobalNamespace::GTShaderVolume::setStaticF__GT_ShaderVolumes(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GT_ShaderVolumes", ::GlobalNamespace::GTShaderVolume*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTShaderVolume::getStaticF__GT_ShaderVolumes()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GT_ShaderVolumes", ::GlobalNamespace::GTShaderVolume*>();
}
inline void GlobalNamespace::GTShaderVolume::setStaticF__GT_ShaderVolumesActive(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GT_ShaderVolumesActive", ::GlobalNamespace::GTShaderVolume*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::GTShaderVolume::getStaticF__GT_ShaderVolumesActive()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GT_ShaderVolumesActive", ::GlobalNamespace::GTShaderVolume*>();
}
inline void GlobalNamespace::GTShaderVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTShaderVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTShaderVolume::SyncVolumeData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {"SyncVolumeData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GTShaderVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTShaderVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTShaderVolume* GlobalNamespace::GTShaderVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTShaderVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderVolume::GTShaderVolume()   {
}
