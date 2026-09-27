#pragma once
// IWYU pragma private; include "BuildSafe/SceneBakeTask.hpp"
#include "BuildSafe/zzzz__SceneBakeMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BuildSafe/zzzz__SceneBakeTask_def.hpp"
#include "BuildSafe/zzzz__SceneBakeMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.get_bakeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BuildSafe::SceneBakeMode (::BuildSafe::SceneBakeTask::*)()>(&::BuildSafe::SceneBakeTask::get_bakeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"get_bakeMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.set_bakeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)(::BuildSafe::SceneBakeMode)>(&::BuildSafe::SceneBakeTask::set_bakeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"set_bakeMode", {}, {::i2c::type_of<::BuildSafe::SceneBakeMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.get_callbackOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BuildSafe::SceneBakeTask::*)()>(&::BuildSafe::SceneBakeTask::get_callbackOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                    {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.set_callbackOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)(int32_t)>(&::BuildSafe::SceneBakeTask::set_callbackOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                    {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.get_runIfInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BuildSafe::SceneBakeTask::*)()>(&::BuildSafe::SceneBakeTask::get_runIfInactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"get_runIfInactive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.set_runIfInactive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)(bool)>(&::BuildSafe::SceneBakeTask::set_runIfInactive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"set_runIfInactive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.OnSceneBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)(::UnityEngine::SceneManagement::Scene, ::BuildSafe::SceneBakeMode)>(&::BuildSafe::SceneBakeTask::OnSceneBake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                    {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask.ForceRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)()>(&::BuildSafe::SceneBakeTask::ForceRun)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c4f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"ForceRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BuildSafe::SceneBakeTask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BuildSafe::SceneBakeTask::*)()>(&::BuildSafe::SceneBakeTask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c4f3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::BuildSafe::SceneBakeMode& BuildSafe::SceneBakeTask::__cordl_internal_get_m_bakeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bakeMode;
}
constexpr ::BuildSafe::SceneBakeMode const& BuildSafe::SceneBakeTask::__cordl_internal_get_m_bakeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bakeMode;
}
constexpr void BuildSafe::SceneBakeTask::__cordl_internal_set_m_bakeMode(::BuildSafe::SceneBakeMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bakeMode = value;
}
constexpr int32_t& BuildSafe::SceneBakeTask::__cordl_internal_get_m_callbackOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_callbackOrder;
}
constexpr int32_t const& BuildSafe::SceneBakeTask::__cordl_internal_get_m_callbackOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_callbackOrder;
}
constexpr void BuildSafe::SceneBakeTask::__cordl_internal_set_m_callbackOrder(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_callbackOrder = value;
}
constexpr bool& BuildSafe::SceneBakeTask::__cordl_internal_get_m_runIfInactive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_runIfInactive;
}
constexpr bool const& BuildSafe::SceneBakeTask::__cordl_internal_get_m_runIfInactive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_runIfInactive;
}
constexpr void BuildSafe::SceneBakeTask::__cordl_internal_set_m_runIfInactive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_runIfInactive = value;
}
inline ::BuildSafe::SceneBakeMode BuildSafe::SceneBakeTask::get_bakeMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"get_bakeMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BuildSafe::SceneBakeMode>(this, ___internal_method);
}
inline void BuildSafe::SceneBakeTask::set_bakeMode(::BuildSafe::SceneBakeMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"set_bakeMode", {}, {::i2c::type_of<::BuildSafe::SceneBakeMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t BuildSafe::SceneBakeTask::get_callbackOrder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BuildSafe::SceneBakeTask::set_callbackOrder(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool BuildSafe::SceneBakeTask::get_runIfInactive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"get_runIfInactive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void BuildSafe::SceneBakeTask::set_runIfInactive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"set_runIfInactive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BuildSafe::SceneBakeTask::OnSceneBake(::UnityEngine::SceneManagement::Scene  scene, ::BuildSafe::SceneBakeMode  mode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BuildSafe::SceneBakeTask*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scene, mode);
}
inline void BuildSafe::SceneBakeTask::ForceRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {"ForceRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BuildSafe::SceneBakeTask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::SceneBakeTask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BuildSafe::SceneBakeTask* BuildSafe::SceneBakeTask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BuildSafe::SceneBakeTask*>());
}
// Ctor Parameters []
constexpr ::BuildSafe::SceneBakeTask::SceneBakeTask()   {
}
