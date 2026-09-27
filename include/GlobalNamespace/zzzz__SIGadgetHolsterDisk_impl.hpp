#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolsterDisk.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolsterDisk_State_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadget_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolsterDisk_def.hpp"
#include "GlobalNamespace/zzzz__I_SIDisruptable_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetGrenade_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolsterDisk_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::Awake)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58dffe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e0098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.CreateGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::CreateGadget)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58e009c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"CreateGadget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.RegisterGadget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)(::GlobalNamespace::SIGadget*)>(&::GlobalNamespace::SIGadgetHolsterDisk::RegisterGadget)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58de5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"RegisterGadget", {}, {::i2c::type_of<::GlobalNamespace::SIGadget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::OnDisable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58e02a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)(float_t)>(&::GlobalNamespace::SIGadgetHolsterDisk::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58e03c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                    {::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)(::GlobalNamespace::SIGadgetHolsterDisk_State)>(&::GlobalNamespace::SIGadgetHolsterDisk::SetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58e004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetHolsterDisk_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.DiskSnappedToHolster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::DiskSnappedToHolster)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58e0490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"DiskSnappedToHolster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.DiskRemovedFromHolster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::DiskRemovedFromHolster)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58e04d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"DiskRemovedFromHolster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.GadgetRespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::GadgetRespawn)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58e01a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"GadgetRespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk.Disrupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)(float_t)>(&::GlobalNamespace::SIGadgetHolsterDisk::Disrupt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58e051c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetHolsterDisk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetHolsterDisk::*)()>(&::GlobalNamespace::SIGadgetHolsterDisk::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58e053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadget>& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_referenceGadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceGadget;
}
constexpr ::UnityW<::GlobalNamespace::SIGadget> const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_referenceGadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceGadget;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_referenceGadget(::UnityW<::GlobalNamespace::SIGadget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceGadget = value;
}
constexpr float_t& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr float_t const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTime;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_cooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTime = value;
}
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_state(::GlobalNamespace::SIGadgetHolsterDisk_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cooldownTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimer;
}
constexpr float_t const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cooldownTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimer;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_cooldownTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTimer = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetGrenade>& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_grenadeGadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grenadeGadget;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetGrenade> const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_grenadeGadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grenadeGadget;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_grenadeGadget(::UnityW<::GlobalNamespace::SIGadgetGrenade>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grenadeGadget = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_gadgetRB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetRB;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_gadgetRB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gadgetRB;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_gadgetRB(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gadgetRB = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadget>& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cachedGadget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGadget;
}
constexpr ::UnityW<::GlobalNamespace::SIGadget> const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_cachedGadget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedGadget;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_cachedGadget(::UnityW<::GlobalNamespace::SIGadget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedGadget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_get_referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceTransform;
}
constexpr void GlobalNamespace::SIGadgetHolsterDisk::__cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceTransform = value;
}
inline void GlobalNamespace::SIGadgetHolsterDisk::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::CreateGadget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"CreateGadget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::RegisterGadget(::GlobalNamespace::SIGadget*  gadget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"RegisterGadget", {}, {::i2c::type_of<::GlobalNamespace::SIGadget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gadget);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::OnUpdateAuthority(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::SetState(::GlobalNamespace::SIGadgetHolsterDisk_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::SIGadgetHolsterDisk_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::DiskSnappedToHolster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"DiskSnappedToHolster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::DiskRemovedFromHolster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"DiskRemovedFromHolster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::GadgetRespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"GadgetRespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::Disrupt(float_t  disruptTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {"Disrupt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disruptTime);
}
inline void GlobalNamespace::SIGadgetHolsterDisk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetHolsterDisk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetHolsterDisk* GlobalNamespace::SIGadgetHolsterDisk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetHolsterDisk*>());
}
/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr  GlobalNamespace::SIGadgetHolsterDisk::operator ::GlobalNamespace::I_SIDisruptable*() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* GlobalNamespace::SIGadgetHolsterDisk::i___GlobalNamespace__I_SIDisruptable() noexcept {
return static_cast<::GlobalNamespace::I_SIDisruptable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetHolsterDisk::SIGadgetHolsterDisk()   {
}
