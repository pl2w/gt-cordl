#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPlatformDeployerPlatform.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPlatformDeployerPlatform_def.hpp"
#include "GlobalNamespace/zzzz__ISIGameDeployable_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployerPlatform.ApplyUpgrades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployerPlatform::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetPlatformDeployerPlatform::ApplyUpgrades)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x58e2658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"ApplyUpgrades", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployerPlatform.CheckHeadOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployerPlatform::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployerPlatform::CheckHeadOverlap)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x58e27cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"CheckHeadOverlap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployerPlatform.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployerPlatform::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployerPlatform::LateUpdate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58e2a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployerPlatform.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployerPlatform::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployerPlatform::OnDisable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58e2b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPlatformDeployerPlatform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPlatformDeployerPlatform::*)()>(&::GlobalNamespace::SIGadgetPlatformDeployerPlatform::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58e2b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_extendedDurationFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedDurationFrame;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_extendedDurationFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedDurationFrame;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_extendedDurationFrame(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedDurationFrame = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_defaultDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_defaultDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultDuration;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_defaultDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultDuration = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_extendedDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_extendedDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendedDuration;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_extendedDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendedDuration = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_activeCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_activeCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCollider;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_activeCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCollider = value;
}
constexpr bool& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_isOverlappingHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOverlappingHead;
}
constexpr bool const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_isOverlappingHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOverlappingHead;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_isOverlappingHead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOverlappingHead = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_timeToDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr float_t const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_timeToDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_timeToDie(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToDie = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkBounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkBounds;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_checkBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkBounds = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkOffset;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_checkOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_checkRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkRot;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_checkRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkRot = value;
}
constexpr ::System::Action*& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_OnDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisabled;
}
constexpr ::System::Action* const& GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_get_OnDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDisabled;
}
constexpr void GlobalNamespace::SIGadgetPlatformDeployerPlatform::__cordl_internal_set_OnDisabled(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDisabled = value;
}
inline void GlobalNamespace::SIGadgetPlatformDeployerPlatform::ApplyUpgrades(::GlobalNamespace::SIUpgradeSet  upgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"ApplyUpgrades", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgrades);
}
inline void GlobalNamespace::SIGadgetPlatformDeployerPlatform::CheckHeadOverlap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"CheckHeadOverlap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployerPlatform::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployerPlatform::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPlatformDeployerPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetPlatformDeployerPlatform* GlobalNamespace::SIGadgetPlatformDeployerPlatform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetPlatformDeployerPlatform*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISIGameDeployable"
constexpr  GlobalNamespace::SIGadgetPlatformDeployerPlatform::operator ::GlobalNamespace::ISIGameDeployable*() noexcept {
return static_cast<::GlobalNamespace::ISIGameDeployable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISIGameDeployable"
constexpr ::GlobalNamespace::ISIGameDeployable* GlobalNamespace::SIGadgetPlatformDeployerPlatform::i___GlobalNamespace__ISIGameDeployable() noexcept {
return static_cast<::GlobalNamespace::ISIGameDeployable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetPlatformDeployerPlatform::SIGadgetPlatformDeployerPlatform()   {
}
