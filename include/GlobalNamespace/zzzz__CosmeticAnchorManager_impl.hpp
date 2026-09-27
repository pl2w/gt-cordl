#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticAnchorManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticAnchorManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticAnchors_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchorManager::*)()>(&::GlobalNamespace::CosmeticAnchorManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57559ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CosmeticAnchorManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5755b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticAnchorManager*)>(&::GlobalNamespace::CosmeticAnchorManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5755aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.RegisterCosmeticAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticAnchors*)>(&::GlobalNamespace::CosmeticAnchorManager::RegisterCosmeticAnchor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5755c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"RegisterCosmeticAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchors*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.UnregisterCosmeticAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticAnchors*)>(&::GlobalNamespace::CosmeticAnchorManager::UnregisterCosmeticAnchor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5755e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"UnregisterCosmeticAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchors*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchorManager::*)()>(&::GlobalNamespace::CosmeticAnchorManager::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5755f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchorManager::*)()>(&::GlobalNamespace::CosmeticAnchorManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5755f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchorManager::*)()>(&::GlobalNamespace::CosmeticAnchorManager::SliceUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5755fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticAnchorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticAnchorManager::*)()>(&::GlobalNamespace::CosmeticAnchorManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5756070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CosmeticAnchorManager::setStaticF_instance(::UnityW<::GlobalNamespace::CosmeticAnchorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CosmeticAnchorManager>, "instance", ::GlobalNamespace::CosmeticAnchorManager*>(std::forward<::UnityW<::GlobalNamespace::CosmeticAnchorManager>>(value));
}
inline ::UnityW<::GlobalNamespace::CosmeticAnchorManager> GlobalNamespace::CosmeticAnchorManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CosmeticAnchorManager>, "instance", ::GlobalNamespace::CosmeticAnchorManager*>();
}
inline void GlobalNamespace::CosmeticAnchorManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::CosmeticAnchorManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CosmeticAnchorManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::CosmeticAnchorManager*>();
}
inline void GlobalNamespace::CosmeticAnchorManager::setStaticF_allAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*, "allAnchors", ::GlobalNamespace::CosmeticAnchorManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>* GlobalNamespace::CosmeticAnchorManager::getStaticF_allAnchors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticAnchors>>*, "allAnchors", ::GlobalNamespace::CosmeticAnchorManager*>();
}
inline void GlobalNamespace::CosmeticAnchorManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchorManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchorManager::SetInstance(::GlobalNamespace::CosmeticAnchorManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::CosmeticAnchorManager::RegisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors*  cA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"RegisterCosmeticAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cA);
}
inline void GlobalNamespace::CosmeticAnchorManager::UnregisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors*  cA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"UnregisterCosmeticAnchor", {}, {::i2c::type_of<::GlobalNamespace::CosmeticAnchors*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cA);
}
inline void GlobalNamespace::CosmeticAnchorManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchorManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchorManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticAnchorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticAnchorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticAnchorManager* GlobalNamespace::CosmeticAnchorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticAnchorManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::CosmeticAnchorManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::CosmeticAnchorManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticAnchorManager::CosmeticAnchorManager()   {
}
