#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigJobManager.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformInput_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformJob_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_def.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformInput_def.hpp"
#include "GlobalNamespace/zzzz__VRRigJobManager_VRRigTransformJob_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRigJobManager> (*)()>(&::GlobalNamespace::VRRigJobManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a10cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)()>(&::GlobalNamespace::VRRigJobManager::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a10d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)()>(&::GlobalNamespace::VRRigJobManager::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a10dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.RegisterVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::VRRigJobManager::RegisterVRRig)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5a10e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"RegisterVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.DeregisterVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::VRRigJobManager::DeregisterVRRig)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a10f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"DeregisterVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.CopyInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)()>(&::GlobalNamespace::VRRigJobManager::CopyInput)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5a11034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"CopyInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)()>(&::GlobalNamespace::VRRigJobManager::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a11164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigJobManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigJobManager::*)()>(&::GlobalNamespace::VRRigJobManager::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a11244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::VRRigJobManager::__cordl_internal_get_rigList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_rigList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigList;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_rigList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigList = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>& GlobalNamespace::VRRigJobManager::__cordl_internal_get_cachedInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedInput;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput> const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_cachedInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedInput;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_cachedInput(::Unity::Collections::NativeArray_1<::GlobalNamespace::VRRigJobManager_VRRigTransformInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedInput = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::VRRigJobManager::__cordl_internal_get_tAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tAA;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_tAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tAA;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_tAA(::UnityEngine::Jobs::TransformAccessArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tAA = value;
}
constexpr int32_t& GlobalNamespace::VRRigJobManager::__cordl_internal_get_actualListSz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr int32_t const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_actualListSz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_actualListSz(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualListSz = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::VRRigJobManager::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob& GlobalNamespace::VRRigJobManager::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::GlobalNamespace::VRRigJobManager_VRRigTransformJob const& GlobalNamespace::VRRigJobManager::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void GlobalNamespace::VRRigJobManager::__cordl_internal_set_job(::GlobalNamespace::VRRigJobManager_VRRigTransformJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
inline void GlobalNamespace::VRRigJobManager::setStaticF__instance(::UnityW<::GlobalNamespace::VRRigJobManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::VRRigJobManager>, "_instance", ::GlobalNamespace::VRRigJobManager*>(std::forward<::UnityW<::GlobalNamespace::VRRigJobManager>>(value));
}
inline ::UnityW<::GlobalNamespace::VRRigJobManager> GlobalNamespace::VRRigJobManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::VRRigJobManager>, "_instance", ::GlobalNamespace::VRRigJobManager*>();
}
inline ::UnityW<::GlobalNamespace::VRRigJobManager> GlobalNamespace::VRRigJobManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRigJobManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VRRigJobManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigJobManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigJobManager::RegisterVRRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"RegisterVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::VRRigJobManager::DeregisterVRRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"DeregisterVRRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::VRRigJobManager::CopyInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"CopyInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigJobManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigJobManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigJobManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigJobManager* GlobalNamespace::VRRigJobManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigJobManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigJobManager::VRRigJobManager()   {
}
