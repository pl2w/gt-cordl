#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneModelLoader.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneModelLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneModelLoader__OnLoadSceneModelFailedPermissionNotGranted_d__10_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneModelLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.get_SceneManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRSceneManager> (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::get_SceneManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"get_SceneManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.set_SceneManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)(::GlobalNamespace::OVRSceneManager*)>(&::GlobalNamespace::OVRSceneModelLoader::set_SceneManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"set_SceneManager", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::Start)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa637258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.AttemptToLoadSceneModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::AttemptToLoadSceneModel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa6375b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"AttemptToLoadSceneModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnStart)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa637648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.RequestScenePermissionAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)()>(&::GlobalNamespace::OVRSceneModelLoader::RequestScenePermissionAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa637740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"RequestScenePermissionAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnLoadSceneModelFailedPermissionNotGranted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnLoadSceneModelFailedPermissionNotGranted)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6378d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.LoadSceneModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::LoadSceneModel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa63764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"LoadSceneModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnSceneModelLoadedSuccessfully
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnSceneModelLoadedSuccessfully)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa637974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnNoSceneModelToLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnNoSceneModelToLoad)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa637a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnNewSceneModelAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnNewSceneModelAvailable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa637b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnSceneCaptureReturnedWithoutError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnSceneCaptureReturnedWithoutError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa637ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader.OnUnexpectedErrorWithSceneCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::OnUnexpectedErrorWithSceneCapture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa637c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader::*)()>(&::GlobalNamespace::OVRSceneModelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader._RequestScenePermissionAsync_g__RequestPermissionOnAndroid_9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)()>(&::GlobalNamespace::OVRSceneModelLoader::_RequestScenePermissionAsync_g__RequestPermissionOnAndroid_9_0)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa637744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& GlobalNamespace::OVRSceneModelLoader::__cordl_internal_get__SceneManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SceneManager_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& GlobalNamespace::OVRSceneModelLoader::__cordl_internal_get__SceneManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SceneManager_k__BackingField;
}
constexpr void GlobalNamespace::OVRSceneModelLoader::__cordl_internal_set__SceneManager_k__BackingField(::UnityW<::GlobalNamespace::OVRSceneManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SceneManager_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSceneModelLoader::__cordl_internal_get__sceneCaptureRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequested;
}
constexpr bool const& GlobalNamespace::OVRSceneModelLoader::__cordl_internal_get__sceneCaptureRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneCaptureRequested;
}
constexpr void GlobalNamespace::OVRSceneModelLoader::__cordl_internal_set__sceneCaptureRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneCaptureRequested = value;
}
inline ::UnityW<::GlobalNamespace::OVRSceneManager> GlobalNamespace::OVRSceneModelLoader::get_SceneManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"get_SceneManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRSceneManager>>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::set_SceneManager(::GlobalNamespace::OVRSceneManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"set_SceneManager", {}, {::i2c::type_of<::GlobalNamespace::OVRSceneManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSceneModelLoader::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneModelLoader::AttemptToLoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"AttemptToLoadSceneModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneModelLoader::RequestScenePermissionAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"RequestScenePermissionAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnLoadSceneModelFailedPermissionNotGranted()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::LoadSceneModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"LoadSceneModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnSceneModelLoadedSuccessfully()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnNoSceneModelToLoad()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnNewSceneModelAvailable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnSceneCaptureReturnedWithoutError()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::OnUnexpectedErrorWithSceneCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRSceneModelLoader::_RequestScenePermissionAsync_g__RequestPermissionOnAndroid_9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader*>(),
                        {"<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneModelLoader* GlobalNamespace::OVRSceneModelLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneModelLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneModelLoader::OVRSceneModelLoader()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)(int32_t)>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa637620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)()>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa637d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)()>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa637d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)()>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)()>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa637e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::*)()>(&::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneModelLoader>& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneModelLoader> const& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneModelLoader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get__timeSinceReminder_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceReminder_5__2;
}
constexpr float_t const& GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_get__timeSinceReminder_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceReminder_5__2;
}
constexpr void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::__cordl_internal_set__timeSinceReminder_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceReminder_5__2 = value;
}
inline void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7::OVRSceneModelLoader__AttemptToLoadSceneModel_d__7()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::*)()>(&::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa637ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0._RequestScenePermissionAsync_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::*)(::StringW)>(&::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_RequestScenePermissionAsync_b__1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa637ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {"<RequestScenePermissionAsync>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0._RequestScenePermissionAsync_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::*)(::StringW)>(&::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_RequestScenePermissionAsync_b__2)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa637d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {"<RequestScenePermissionAsync>b__2", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::__cordl_internal_get_taskId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskId;
}
constexpr ::System::Guid const& GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::__cordl_internal_get_taskId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taskId;
}
constexpr void GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::__cordl_internal_set_taskId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taskId = value;
}
inline void GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_RequestScenePermissionAsync_b__1(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {"<RequestScenePermissionAsync>b__1", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::_RequestScenePermissionAsync_b__2(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>(),
                        {"<RequestScenePermissionAsync>b__2", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0* GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneModelLoader___c__DisplayClass9_0::OVRSceneModelLoader___c__DisplayClass9_0()   {
}
