#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSLoadingZone.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSLoadingZone_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__LoadZoneSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bd7d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.SetupLoadingZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)(::GT_CustomMapSupportRuntime::LoadZoneSettings*, ::by_ref<::ArrayW<::StringW>>)>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::SetupLoadingZone)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bd7dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"SetupLoadingZone", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::LoadZoneSettings*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.GetSceneIndexes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)(::System::Collections::Generic::List_1<::StringW>*, ::by_ref<::ArrayW<::StringW>>)>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::GetSceneIndexes)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5bd7ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"GetSceneIndexes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.CleanSceneUnloadArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*, ::by_ref<::ArrayW<::StringW>>)>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::CleanSceneUnloadArray)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5bd8024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"CleanSceneUnloadArray", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5bd81ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone.GetSceneNameFromFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)(::StringW)>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::GetSceneNameFromFilePath)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bd8138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"GetSceneNameFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd83e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_scenesToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToLoad;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_scenesToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToLoad;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_set_scenesToLoad(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesToLoad = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_scenesToUnload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_scenesToUnload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenesToUnload;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_set_scenesToUnload(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenesToUnload = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_useDynamicLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDynamicLighting;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_useDynamicLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useDynamicLighting;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_set_useDynamicLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useDynamicLighting = value;
}
constexpr ::UnityEngine::Color& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_dynamicLightingAmbientColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicLightingAmbientColor;
}
constexpr ::UnityEngine::Color const& GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_get_dynamicLightingAmbientColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicLightingAmbientColor;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::__cordl_internal_set_dynamicLightingAmbientColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicLightingAmbientColor = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::SetupLoadingZone(::GT_CustomMapSupportRuntime::LoadZoneSettings*  settings, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"SetupLoadingZone", {}, {::i2c::type_of<::GT_CustomMapSupportRuntime::LoadZoneSettings*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, assetBundleSceneFilePaths);
}
inline ::ArrayW<int32_t> GorillaTagScripts::CustomMapSupport::CMSLoadingZone::GetSceneIndexes(::System::Collections::Generic::List_1<::StringW>*  sceneNames, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"GetSceneIndexes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, sceneNames, assetBundleSceneFilePaths);
}
inline ::ArrayW<int32_t> GorillaTagScripts::CustomMapSupport::CMSLoadingZone::CleanSceneUnloadArray(::System::Collections::Generic::List_1<::StringW>*  unload, ::System::Collections::Generic::List_1<::StringW>*  load, /* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  assetBundleSceneFilePaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"CleanSceneUnloadArray", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, unload, load, assetBundleSceneFilePaths);
}
inline void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::StringW GorillaTagScripts::CustomMapSupport::CMSLoadingZone::GetSceneNameFromFilePath(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {"GetSceneNameFromFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, filePath);
}
inline void GorillaTagScripts::CustomMapSupport::CMSLoadingZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone* GorillaTagScripts::CustomMapSupport::CMSLoadingZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSLoadingZone*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSLoadingZone::CMSLoadingZone()   {
}
