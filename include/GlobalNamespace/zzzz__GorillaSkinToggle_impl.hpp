#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinToggle.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinToggle_ColoringRule_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinToggle_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkinToggle_ColoringRule_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.get_applied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::get_applied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56522c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"get_applied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56522cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)(bool)>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56522d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56522dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56522e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_OnSpawn)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56522ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.GorillaTag_ISpawnable_OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5652498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.OnPlayerColorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaSkinToggle::OnPlayerColorChanged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x565249c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnPlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::OnEnable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5652630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::OnDisable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5652760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::Apply)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56526f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"Apply", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.ApplyToMannequin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)(::UnityEngine::GameObject*, bool)>(&::GlobalNamespace::GorillaSkinToggle::ApplyToMannequin)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x56529c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"ApplyToMannequin", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::Remove)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5652844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"Remove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaSkinToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSkinToggle::*)()>(&::GlobalNamespace::GorillaSkinToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5652af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__skin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__skin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skin;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__skin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skin = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__activeSkin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeSkin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__activeSkin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeSkin;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__activeSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeSkin = value;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get_coloringRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coloringRules;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule> const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get_coloringRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coloringRules;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set_coloringRules(::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coloringRules = value;
}
constexpr bool& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__applied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applied;
}
constexpr bool const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__applied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applied;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__applied(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applied = value;
}
constexpr bool& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::GorillaSkinToggle::__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::GorillaSkinToggle::__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField = value;
}
inline bool GlobalNamespace::GorillaSkinToggle::get_applied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"get_applied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GorillaSkinToggle::GorillaTag_ISpawnable_OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"GorillaTag.ISpawnable.OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::OnPlayerColorChanged(::UnityEngine::Color  playerColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnPlayerColorChanged", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerColor);
}
inline void GlobalNamespace::GorillaSkinToggle::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::Apply()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"Apply", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::ApplyToMannequin(::UnityEngine::GameObject*  mannequin, bool  swapMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"ApplyToMannequin", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mannequin, swapMesh);
}
inline void GlobalNamespace::GorillaSkinToggle::Remove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {"Remove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaSkinToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSkinToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSkinToggle* GlobalNamespace::GorillaSkinToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSkinToggle*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::GorillaSkinToggle::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::GorillaSkinToggle::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSkinToggle::GorillaSkinToggle()   {
}
