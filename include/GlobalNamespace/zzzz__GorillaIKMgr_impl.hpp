#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaIKMgr.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKJob_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKTransformJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKConstantInput_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKInput_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKJob_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKOutput_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_IKTransformJob_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIKMgr_def.hpp"
#include "GlobalNamespace/zzzz__GorillaIK_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaIKMgr> (*)()>(&::GlobalNamespace::GorillaIKMgr::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59157dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::Awake)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5915824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::OnDestroy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5915a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.RegisterIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)(::GlobalNamespace::GorillaIK*)>(&::GlobalNamespace::GorillaIKMgr::RegisterIK)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5913c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"RegisterIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.DeregisterIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)(::GlobalNamespace::GorillaIK*)>(&::GlobalNamespace::GorillaIKMgr::DeregisterIK)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5913d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"DeregisterIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.SetConstantData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)(::GlobalNamespace::GorillaIK*, int32_t)>(&::GlobalNamespace::GorillaIKMgr::SetConstantData)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"SetConstantData", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.CopyInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::CopyInput)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5915c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"CopyInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.CopyOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::CopyOutput)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x5915ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"CopyOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::LateUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5916510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr.AddPlayerIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaIK*)>(&::GlobalNamespace::GorillaIKMgr::AddPlayerIK)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5916624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"AddPlayerIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr::*)()>(&::GlobalNamespace::GorillaIKMgr::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5916674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_ikList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ikList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>* const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_ikList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ikList;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_ikList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaIK>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ikList = value;
}
constexpr int32_t& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_actualListSz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr int32_t const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_actualListSz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actualListSz;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_actualListSz(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actualListSz = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobXformHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobXformHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobXformHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobXformHandle;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_jobXformHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobXformHandle = value;
}
constexpr bool& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_firstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstFrame;
}
constexpr bool const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_firstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstFrame;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_firstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstFrame = value;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_tAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tAA;
}
constexpr ::UnityEngine::Jobs::TransformAccessArray const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_tAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tAA;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_tAA(::UnityEngine::Jobs::TransformAccessArray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tAA = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_transformList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_transformList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transformList;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_transformList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transformList = value;
}
constexpr bool& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_updatedSinceLastRun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedSinceLastRun;
}
constexpr bool const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_updatedSinceLastRun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatedSinceLastRun;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_updatedSinceLastRun(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatedSinceLastRun = value;
}
constexpr float_t& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_lerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr float_t const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_lerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_lerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpValue = value;
}
constexpr ::GlobalNamespace::GorillaIKMgr_IKJob& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::GlobalNamespace::GorillaIKMgr_IKJob const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_job(::GlobalNamespace::GorillaIKMgr_IKJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobXform;
}
constexpr ::GlobalNamespace::GorillaIKMgr_IKTransformJob const& GlobalNamespace::GorillaIKMgr::__cordl_internal_get_jobXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobXform;
}
constexpr void GlobalNamespace::GorillaIKMgr::__cordl_internal_set_jobXform(::GlobalNamespace::GorillaIKMgr_IKTransformJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobXform = value;
}
inline void GlobalNamespace::GorillaIKMgr::setStaticF__instance(::UnityW<::GlobalNamespace::GorillaIKMgr>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaIKMgr>, "_instance", ::GlobalNamespace::GorillaIKMgr*>(std::forward<::UnityW<::GlobalNamespace::GorillaIKMgr>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaIKMgr> GlobalNamespace::GorillaIKMgr::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaIKMgr>, "_instance", ::GlobalNamespace::GorillaIKMgr*>();
}
inline void GlobalNamespace::GorillaIKMgr::setStaticF_playerIK(::UnityW<::GlobalNamespace::GorillaIK>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaIK>, "playerIK", ::GlobalNamespace::GorillaIKMgr*>(std::forward<::UnityW<::GlobalNamespace::GorillaIK>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaIK> GlobalNamespace::GorillaIKMgr::getStaticF_playerIK()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaIK>, "playerIK", ::GlobalNamespace::GorillaIKMgr*>();
}
inline ::UnityW<::GlobalNamespace::GorillaIKMgr> GlobalNamespace::GorillaIKMgr::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaIKMgr>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::RegisterIK(::GlobalNamespace::GorillaIK*  ik)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"RegisterIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ik);
}
inline void GlobalNamespace::GorillaIKMgr::DeregisterIK(::GlobalNamespace::GorillaIK*  ik)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"DeregisterIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ik);
}
inline void GlobalNamespace::GorillaIKMgr::SetConstantData(::GlobalNamespace::GorillaIK*  ik, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"SetConstantData", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ik, index);
}
inline void GlobalNamespace::GorillaIKMgr::CopyInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"CopyInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::CopyOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"CopyOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaIKMgr::AddPlayerIK(::GlobalNamespace::GorillaIK*  _playerIK)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {"AddPlayerIK", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _playerIK);
}
inline void GlobalNamespace::GorillaIKMgr::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaIKMgr* GlobalNamespace::GorillaIKMgr::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIKMgr*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr::GorillaIKMgr()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::*)()>(&::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0._DeregisterIK_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::*)(::GlobalNamespace::GorillaIK*)>(&::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::_DeregisterIK_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5917c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*>(),
                        {"<DeregisterIK>b__0", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaIK>& GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::__cordl_internal_get_ik()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ik;
}
constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::__cordl_internal_get_ik() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ik;
}
constexpr void GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::__cordl_internal_set_ik(::UnityW<::GlobalNamespace::GorillaIK>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ik = value;
}
inline void GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::_DeregisterIK_b__0(::GlobalNamespace::GorillaIK*  curr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*>(),
                        {"<DeregisterIK>b__0", {}, {::i2c::type_of<::GlobalNamespace::GorillaIK*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, curr);
}
inline ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0* GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaIKMgr___c__DisplayClass25_0::GorillaIKMgr___c__DisplayClass25_0()   {
}
