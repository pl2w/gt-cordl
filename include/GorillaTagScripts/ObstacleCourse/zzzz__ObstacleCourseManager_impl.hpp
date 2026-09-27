#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleCourseManager.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseData_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseManager_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourseData_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleCourse_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager> (*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c17ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c17b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c17b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(bool)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c17b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c17b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c17bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c17d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Tick)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c17e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c17f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c18058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c180c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c18128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5c18358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c18724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c188ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c18a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)(bool)>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c18ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c18b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get_allObstaclesCourses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObstaclesCourses;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>* const& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get_allObstaclesCourses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allObstaclesCourses;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_set_allObstaclesCourses(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourse>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allObstaclesCourses = value;
}
constexpr bool& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData const& GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::__cordl_internal_set__Data(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>, "<Instance>k__BackingField", ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(std::forward<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager> GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>, "<Instance>k__BackingField", ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>();
}
inline ::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager> GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Instance(::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseData GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::set_Data(::GorillaTagScripts::ObstacleCourse::ObstacleCourseData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager* GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleCourseManager::ObstacleCourseManager()   {
}
