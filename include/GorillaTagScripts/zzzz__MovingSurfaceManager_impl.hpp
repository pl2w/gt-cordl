#pragma once
// IWYU pragma private; include "GorillaTagScripts/MovingSurfaceManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__MovingSurfaceManager_def.hpp"
#include "GorillaTagScripts/zzzz__MovingSurface_def.hpp"
#include "GorillaTagScripts/zzzz__SurfaceMover_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)()>(&::GorillaTagScripts::MovingSurfaceManager::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b81938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.RegisterMovingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)(::GorillaTagScripts::MovingSurface*)>(&::GorillaTagScripts::MovingSurfaceManager::RegisterMovingSurface)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b81798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"RegisterMovingSurface", {}, {::i2c::type_of<::GorillaTagScripts::MovingSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.UnregisterMovingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)(::GorillaTagScripts::MovingSurface*)>(&::GorillaTagScripts::MovingSurfaceManager::UnregisterMovingSurface)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b818ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"UnregisterMovingSurface", {}, {::i2c::type_of<::GorillaTagScripts::MovingSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.RegisterSurfaceMover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)(::GorillaTagScripts::SurfaceMover*)>(&::GorillaTagScripts::MovingSurfaceManager::RegisterSurfaceMover)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b81ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"RegisterSurfaceMover", {}, {::i2c::type_of<::GorillaTagScripts::SurfaceMover*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.UnregisterSurfaceMover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)(::GorillaTagScripts::SurfaceMover*)>(&::GorillaTagScripts::MovingSurfaceManager::UnregisterSurfaceMover)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b81eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"UnregisterSurfaceMover", {}, {::i2c::type_of<::GorillaTagScripts::SurfaceMover*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.TryGetMovingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::MovingSurfaceManager::*)(int32_t, ::by_ref<::GorillaTagScripts::MovingSurface*>)>(&::GorillaTagScripts::MovingSurfaceManager::TryGetMovingSurface)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b81f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"TryGetMovingSurface", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::MovingSurface*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)()>(&::GorillaTagScripts::MovingSurfaceManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b81fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::MovingSurfaceManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::MovingSurfaceManager::*)()>(&::GorillaTagScripts::MovingSurfaceManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b82178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*& GorillaTagScripts::MovingSurfaceManager::__cordl_internal_get_surfaceMovers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMovers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>* const& GorillaTagScripts::MovingSurfaceManager::__cordl_internal_get_surfaceMovers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceMovers;
}
constexpr void GorillaTagScripts::MovingSurfaceManager::__cordl_internal_set_surfaceMovers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::SurfaceMover>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceMovers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*& GorillaTagScripts::MovingSurfaceManager::__cordl_internal_get_movingSurfaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSurfaces;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>* const& GorillaTagScripts::MovingSurfaceManager::__cordl_internal_get_movingSurfaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSurfaces;
}
constexpr void GorillaTagScripts::MovingSurfaceManager::__cordl_internal_set_movingSurfaces(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::MovingSurface>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingSurfaces = value;
}
inline void GorillaTagScripts::MovingSurfaceManager::setStaticF_instance(::UnityW<::GorillaTagScripts::MovingSurfaceManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::MovingSurfaceManager>, "instance", ::GorillaTagScripts::MovingSurfaceManager*>(std::forward<::UnityW<::GorillaTagScripts::MovingSurfaceManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::MovingSurfaceManager> GorillaTagScripts::MovingSurfaceManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::MovingSurfaceManager>, "instance", ::GorillaTagScripts::MovingSurfaceManager*>();
}
inline void GorillaTagScripts::MovingSurfaceManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::MovingSurfaceManager::RegisterMovingSurface(::GorillaTagScripts::MovingSurface*  ms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"RegisterMovingSurface", {}, {::i2c::type_of<::GorillaTagScripts::MovingSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ms);
}
inline void GorillaTagScripts::MovingSurfaceManager::UnregisterMovingSurface(::GorillaTagScripts::MovingSurface*  ms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"UnregisterMovingSurface", {}, {::i2c::type_of<::GorillaTagScripts::MovingSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ms);
}
inline void GorillaTagScripts::MovingSurfaceManager::RegisterSurfaceMover(::GorillaTagScripts::SurfaceMover*  sm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"RegisterSurfaceMover", {}, {::i2c::type_of<::GorillaTagScripts::SurfaceMover*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sm);
}
inline void GorillaTagScripts::MovingSurfaceManager::UnregisterSurfaceMover(::GorillaTagScripts::SurfaceMover*  sm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"UnregisterSurfaceMover", {}, {::i2c::type_of<::GorillaTagScripts::SurfaceMover*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sm);
}
inline bool GorillaTagScripts::MovingSurfaceManager::TryGetMovingSurface(int32_t  id, ::by_ref<::GorillaTagScripts::MovingSurface*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"TryGetMovingSurface", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GorillaTagScripts::MovingSurface*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, result);
}
inline void GorillaTagScripts::MovingSurfaceManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::MovingSurfaceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::MovingSurfaceManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::MovingSurfaceManager* GorillaTagScripts::MovingSurfaceManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::MovingSurfaceManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::MovingSurfaceManager::MovingSurfaceManager()   {
}
