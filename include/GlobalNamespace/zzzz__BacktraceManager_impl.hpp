#pragma once
// IWYU pragma private; include "GlobalNamespace/BacktraceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BacktraceManager_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "GlobalNamespace/zzzz__BacktraceManager_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager::*)()>(&::GlobalNamespace::BacktraceManager::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ae1520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                    {::i2c::class_of<::GlobalNamespace::BacktraceManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager::*)()>(&::GlobalNamespace::BacktraceManager::Start)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ae15d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager::*)()>(&::GlobalNamespace::BacktraceManager::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ae1764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager._Awake_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::BacktraceData* (::GlobalNamespace::BacktraceManager::*)(::Backtrace::Unity::Model::BacktraceData*)>(&::GlobalNamespace::BacktraceManager::_Awake_b__1_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ae1780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"<Awake>b__1_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager._Start_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager::*)(::StringW)>(&::GlobalNamespace::BacktraceManager::_Start_b__2_0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ae17f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"<Start>b__2_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::BacktraceManager::__cordl_internal_get_backtraceSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backtraceSampleRate;
}
constexpr double_t const& GlobalNamespace::BacktraceManager::__cordl_internal_get_backtraceSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backtraceSampleRate;
}
constexpr void GlobalNamespace::BacktraceManager::__cordl_internal_set_backtraceSampleRate(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backtraceSampleRate = value;
}
inline void GlobalNamespace::BacktraceManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BacktraceManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BacktraceManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BacktraceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceData* GlobalNamespace::BacktraceManager::_Awake_b__1_0(::Backtrace::Unity::Model::BacktraceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"<Awake>b__1_0", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::BacktraceData*>(this, ___internal_method, data);
}
inline void GlobalNamespace::BacktraceManager::_Start_b__2_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager*>(),
                        {"<Start>b__2_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BacktraceManager* GlobalNamespace::BacktraceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BacktraceManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BacktraceManager::BacktraceManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager___c::*)()>(&::GlobalNamespace::BacktraceManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae197c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BacktraceManager___c._Start_b__2_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BacktraceManager___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::BacktraceManager___c::_Start_b__2_1)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ae1984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager___c*>(),
                        {"<Start>b__2_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BacktraceManager___c::setStaticF___9(::GlobalNamespace::BacktraceManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BacktraceManager___c*, "<>9", ::GlobalNamespace::BacktraceManager___c*>(std::forward<::GlobalNamespace::BacktraceManager___c*>(value));
}
inline ::GlobalNamespace::BacktraceManager___c* GlobalNamespace::BacktraceManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BacktraceManager___c*, "<>9", ::GlobalNamespace::BacktraceManager___c*>();
}
inline void GlobalNamespace::BacktraceManager___c::setStaticF___9__2_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__2_1", ::GlobalNamespace::BacktraceManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::BacktraceManager___c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__2_1", ::GlobalNamespace::BacktraceManager___c*>();
}
inline void GlobalNamespace::BacktraceManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BacktraceManager___c::_Start_b__2_1(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BacktraceManager___c*>(),
                        {"<Start>b__2_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GlobalNamespace::BacktraceManager___c* GlobalNamespace::BacktraceManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BacktraceManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BacktraceManager___c::BacktraceManager___c()   {
}
