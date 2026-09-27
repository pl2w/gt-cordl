#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionSnapPointManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPointManager_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionSnapPoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPointManager::*)()>(&::GlobalNamespace::SuperInfectionSnapPointManager::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5842958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPointManager::*)()>(&::GlobalNamespace::SuperInfectionSnapPointManager::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5842a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPointManager::*)()>(&::GlobalNamespace::SuperInfectionSnapPointManager::Clear)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5842c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.FindSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> (::GlobalNamespace::SuperInfectionSnapPointManager::*)(::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::SuperInfectionSnapPointManager::FindSnapPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x583aa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"FindSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.FindSnapPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> (*)(::GlobalNamespace::GamePlayer*, ::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::SuperInfectionSnapPointManager::FindSnapPoint)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5842d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"FindSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager.DropAllSnappedAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPointManager::*)()>(&::GlobalNamespace::SuperInfectionSnapPointManager::DropAllSnappedAuthority)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x583978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"DropAllSnappedAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionSnapPointManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionSnapPointManager::*)()>(&::GlobalNamespace::SuperInfectionSnapPointManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5842df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_get_SnapPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnapPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_get_SnapPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SnapPoints;
}
constexpr void GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_set_SnapPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SnapPoints = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*& GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_get_snapPointDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>* const& GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_get_snapPointDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapPointDict;
}
constexpr void GlobalNamespace::SuperInfectionSnapPointManager::__cordl_internal_set_snapPointDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SnapJointType,::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapPointDict = value;
}
inline void GlobalNamespace::SuperInfectionSnapPointManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPointManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPointManager::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> GlobalNamespace::SuperInfectionSnapPointManager::FindSnapPoint(::GlobalNamespace::SnapJointType  jointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"FindSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>(this, ___internal_method, jointType);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionSnapPoint> GlobalNamespace::SuperInfectionSnapPointManager::FindSnapPoint(::GlobalNamespace::GamePlayer*  player, ::GlobalNamespace::SnapJointType  jointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"FindSnapPoint", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>(), ::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionSnapPoint>>(nullptr, ___internal_method, player, jointType);
}
inline void GlobalNamespace::SuperInfectionSnapPointManager::DropAllSnappedAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {"DropAllSnappedAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionSnapPointManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionSnapPointManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionSnapPointManager* GlobalNamespace::SuperInfectionSnapPointManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionSnapPointManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionSnapPointManager::SuperInfectionSnapPointManager()   {
}
